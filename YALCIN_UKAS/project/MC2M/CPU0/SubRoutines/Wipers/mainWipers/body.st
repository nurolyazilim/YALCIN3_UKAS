// Wiper & Washer Management--------------
/*
IF(OMNIA_RIGHT_WiperSelection)THEN      // wiper selection fasılasız için
    IF(OMNIA_RIGHT_WiperHIGH)THEN       
        Stat_Wiper := 4;            //High Speed
    ELSIF(OMNIA_RIGHT_WiperLOW)THEN
        Stat_Wiper := 3;       //Low Speed
    ELSE
        Stat_Wiper := 0;    //Park
    END_IF
ELSE
    IF(OMNIA_RIGHT_WiperHIGH)THEN       // wiper selection seçilmezse fasılalı 
        Stat_Wiper := 2;    //Fast Intermittent
    ELSIF(OMNIA_RIGHT_WiperLOW)THEN
        Stat_Wiper := 1;    //Low Intermittent
    ELSE
        Stat_Wiper := 0;    //Park
    END_IF
END_IF
*/
IF (DIGIN_WiperHigh OR DIGIN_WiperLow OR DIGIN_WiperIntermittent OR DIGIN_WiperWasher) THEN
    IF (Wiper_Req_Tout < WIPER_DELAY) THEN
        Wiper_Req_Tout := Wiper_Req_Tout + 1;
    ELSE
        Cmd_WiperHigh := DIGIN_WiperHigh;                      //U09 I/H
        Cmd_WiperLow := DIGIN_WiperLow;                        //U39 I/H  
        Cmd_WiperIntermittent1 := DIGIN_WiperIntermittent;     //U10 I/H
        Cmd_WiperIntermittent2 := Cmd_WiperIntermittent1;

        Stat_Washer := DIGIN_WiperWasher;                        //U16  I/H
        DOUT_Washer := Stat_Washer;                              //S09  O/H 
    END_IF
ELSE
    Wiper_Req_Tout := 0;
    Cmd_WiperHigh := FALSE;                      //U09 I/H
    Cmd_WiperLow := FALSE;                        //U39 I/H  
    Cmd_WiperIntermittent1 := FALSE;     //U10 I/H
    Cmd_WiperIntermittent2 := FALSE;

    Stat_Washer := FALSE;                        //U16  I/H
    DOUT_Washer := Stat_Washer;                              //S09  O/H 
END_IF

IF(Cmd_WiperHigh)THEN       
    Stat_Wiper := 4;                        //High Speed
ELSIF(Cmd_WiperLow)THEN
    Stat_Wiper := 3;                        //Low Speed
ELSIF(Cmd_WiperIntermittent1)THEN
    //Stat_Wiper := 2;                      //Fast Intermittent
    Stat_Wiper := 1;                        //Low Intermittent
ELSE 
    Stat_Wiper := 0;                        //Park
END_IF

//Wiper should work in Fast mode for 3 sec after washer stop,
//then wiper should return to former mode

//WasherWiperTimer.PT := WasherDelay;
WasherWiperTimer.PT := 8000;
WasherWiperTimer.IN := Stat_Washer;
WasherWiperTimer;
//IF((WasherWiperTimer.Q OR OMNIA_RIGHT_Washer) AND (Stat_Wiper<4))THEN
//IF((WasherWiperTimer.Q OR DIGIN_WiperWasher) AND (Stat_Wiper<4))THEN
IF(WasherWiperTimer.Q OR DIGIN_WiperWasher)THEN
//    IF(WasherWiperTimer.ET<T#3s)THEN
    IF(WasherWiperTimer.ET<T#1500ms)THEN
        Stat_Wiper := 4; // Fast mode active if washer works
    ELSIF (WasherWiperTimer.ET<T#3000ms) THEN
        Stat_Wiper := 3; // Fast mode active if washer works
    ELSIF (WasherWiperTimer.ET<T#7000ms) THEN
        Stat_Wiper := 0; // Fast mode active if washer works
    ELSE
        Stat_Wiper := 3;//4; // Slow//Fast mode active if washer works
    END_IF
END_IF

// Output Configuration ------------------------------------
    ParkClose_TP.IN := (Stat_Wiper=0);
    ParkClose_TP.PT := 8000;
    ParkClose_TP;
    IF (Stat_Wiper = 1 || Stat_Wiper = 2) THEN
        Cmd_Wiper_Intermittent1_Ctr := Cmd_Wiper_Intermittent1_Ctr + 100;
    ELSE 
        Cmd_Wiper_Intermittent1_Ctr := 0;Stat_Wiper_Intermittent1 := FALSE;
    END_IF

CASE Stat_Wiper OF
    0:    
        DOUT_WiperMotor_1:= FALSE;                      //T17 O/H PWM
        DOUT_WiperMotor_2:= FALSE;                      //S08 O/H PWM
        
        //Durdurma prosedürü // yüksek öncelikli taskta çalışıyor!
        /*
        IF (DIGIN_WiperPark_1 AND !IsWiper1Stopped) THEN  //T35 I/L
            DOUT_WiperMotorLow_1 := FALSE;             //T08 O/H  
            IsWiper1Stopped := TRUE;
        ELSIF (!DIGIN_WiperPark_1 AND !IsWiper1Stopped) THEN
            DOUT_WiperMotorLow_1 := TRUE;
        END_IF
        
        IF (DIGIN_WiperPark_2 AND !IsWiper2Stopped) THEN //U23 I/L
            DOUT_WiperMotorLow_2 := FALSE;              //T10 O/H
            IsWiper2Stopped := TRUE;
        ELSIF (!DIGIN_WiperPark_2 AND !IsWiper2Stopped) THEN
            DOUT_WiperMotorLow_2 := TRUE;
        END_IF
        */
        //Wiper1StopReq := TRUE;
        //Wiper2StopReq := TRUE;
        
        DOUT_WiperMotorLow_1 := FALSE;                  //T08 O/H
        DOUT_WiperMotorLow_2 := FALSE;                  //T10 O/H
        //
        
    1   : //Fasila 3sn - Yavaş
        DOUT_WiperMotor_1:= FALSE;
        DOUT_WiperMotor_2:= FALSE;
        
        IF (Cmd_Wiper_Intermittent1_Ctr > 5000) THEN     
            Cmd_Wiper_Intermittent1_Ctr := 0;
        ELSIF(Cmd_Wiper_Intermittent1_Ctr < 1000) THEN
            Stat_Wiper_Intermittent1 := TRUE;
            DOUT_WiperMotorLow_1:= TRUE;//WiperMotorHighSpeed;
            DOUT_WiperMotorLow_2:= TRUE;
            
            IsWiper1Stopped := FALSE;
            IsWiper2Stopped := FALSE;
            //Wiper1StopReq := FALSE;
            //Wiper2StopReq := FALSE;
        ELSE
            //Durdurma prosedürü // yüksek öncelikli taskta çalışıyor!
            /*
            IF (DIGIN_WiperPark_1 AND !IsWiper1Stopped) THEN
                DOUT_WiperMotor_1:= FALSE; 
                IsWiper1Stopped := TRUE;
            ELSIF (!DIGIN_WiperPark_1 AND !IsWiper1Stopped) THEN
                DOUT_WiperMotor_1:= TRUE;//WiperMotorHighSpeed;
            END_IF;
            
            IF (DIGIN_WiperPark_2 AND !IsWiper2Stopped) THEN
                DOUT_WiperMotor_2:= FALSE;
                IsWiper2Stopped := TRUE;
            ELSIF (!DIGIN_WiperPark_2 AND !IsWiper2Stopped) THEN
                DOUT_WiperMotor_2:= TRUE;
            END_IF;
            */
            //Wiper1StopReq := TRUE;
            //Wiper2StopReq := TRUE;
            DOUT_WiperMotorLow_1 := FALSE;                  //T08 O/H
            DOUT_WiperMotorLow_2 := FALSE;                  //T10 O/H
            //
        END_IF
        
        Stat_WiperOld := Stat_Wiper;
      
    2   : //Fasila 3sn - Hızlı
        DOUT_WiperMotorLow_1 := FALSE;
        DOUT_WiperMotorLow_2 := FALSE;
        
        IF (Cmd_Wiper_Intermittent1_Ctr > 5000) THEN     
            Cmd_Wiper_Intermittent1_Ctr := 0;
        ELSIF(Cmd_Wiper_Intermittent1_Ctr < 500) THEN
            Stat_Wiper_Intermittent1 := TRUE;
            DOUT_WiperMotor_1:= TRUE;//WiperMotorHighSpeed;
            DOUT_WiperMotor_2:= TRUE;
            
            IsWiper1Stopped := FALSE;
            IsWiper2Stopped := FALSE;
            //Wiper1StopReq := FALSE;
            //Wiper2StopReq := FALSE;
        ELSE
            //Durdurma prosedürü // yüksek öncelikli taskta çalışıyor!
            /*
            IF (DIGIN_WiperPark_1 AND !IsWiper1Stopped) THEN
                DOUT_WiperMotor_1:= FALSE; 
                IsWiper1Stopped := TRUE;
            ELSIF (!DIGIN_WiperPark_1 AND !IsWiper1Stopped) THEN
                DOUT_WiperMotor_1:= TRUE;//WiperMotorHighSpeed;
            END_IF;
            
            IF (DIGIN_WiperPark_2 AND !IsWiper2Stopped) THEN
                DOUT_WiperMotor_2:= FALSE;
                IsWiper2Stopped := TRUE;
            ELSIF (!DIGIN_WiperPark_2 AND !IsWiper2Stopped) THEN
                DOUT_WiperMotor_2:= TRUE;
            END_IF;
            */
            //Wiper1StopReq := TRUE;
            //Wiper2StopReq := TRUE;
            DOUT_WiperMotor_1:= FALSE;//WiperMotorHighSpeed;
            DOUT_WiperMotor_2:= FALSE;
            //
        END_IF
        
        Stat_WiperOld := Stat_Wiper;
    3   : //Yavas
        DOUT_WiperMotor_1:= FALSE;
        DOUT_WiperMotor_2:= FALSE;    
        DOUT_WiperMotorLow_1 := TRUE;
        DOUT_WiperMotorLow_2 := TRUE;
        //PWM_WiperBrake  := 0;
        Stat_WiperOld   := Stat_Wiper;
        
        IsWiper1Stopped := FALSE;
        IsWiper2Stopped := FALSE;
        //Wiper1StopReq := FALSE;
        //Wiper2StopReq := FALSE;
    4   : //Hizli
        DOUT_WiperMotorLow_1 := FALSE;
        DOUT_WiperMotorLow_2 := FALSE;
        DOUT_WiperMotor_1:= TRUE;//WiperMotorHighSpeed;
        DOUT_WiperMotor_2:= TRUE;
        //PWM_WiperBrake  := 0;
        Stat_WiperOld   := Stat_Wiper;
        
        IsWiper1Stopped := FALSE;
        IsWiper2Stopped := FALSE;
        //Wiper1StopReq := FALSE;
        //Wiper2StopReq := FALSE;
    ELSE 
        //PWM_WiperBrake := WiperMotorHighSpeed;
        /*
        IF (DIGIN_WiperPark_1 AND !IsWiper1Stopped) THEN  //T35 I/L
            DOUT_WiperMotorLow_1 := FALSE;             //T08 O/H  
            IsWiper1Stopped := TRUE;
        END_IF
        
        IF (DIGIN_WiperPark_2 AND !IsWiper2Stopped) THEN                    //U23 I/L
            DOUT_WiperMotorLow_2 := FALSE;              //T10 O/H
            IsWiper2Stopped := TRUE;
        END_IF
        */
        //Wiper1StopReq := TRUE;
        //Wiper2StopReq := TRUE;
        DOUT_WiperMotorLow_1 := FALSE;                  //T08 O/H
        DOUT_WiperMotorLow_2 := FALSE;                  //T10 O/H
        
        Stat_WiperOld := Stat_Wiper;
END_CASE
