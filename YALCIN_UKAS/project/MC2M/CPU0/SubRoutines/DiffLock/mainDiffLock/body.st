IF (!Cmd_Bypass_Switch) THEN    
    //IF(CurrentGear=0 AND VehicleSpeed<=0 AND MC2M_TERA_AccessoryPressure >= Limit_AccessoryPressureLevelDropBox )THEN
    //1IF(CurrentGear=0 AND VehicleSpeed<=20 AND MC2M_TERA_AccessoryPressure >= Limit_AccessoryPressureLevelDropBox )THEN
    IF(VehicleSpeed<=20 AND MC2M_TERA_AccessoryPressure >= Limit_AccessoryPressureLevelDropBox )THEN
    //IF(CurrentGear=0 AND VehicleSpeed<=0)THEN
    //IF(CurrentGear=0 AND VehicleSpeed<=0 )THEN
        IF (NMSGUI_MC2M_difflock_admin_touch) THEN
            Cmd_Dropbox_4WD_Off := NMSGUI_MC2M_difflock_mid_touch;
            Cmd_RearAxleDiffLock := NMSGUI_MC2M_difflock_rear_touch;
            Cmd_FrontAxleDiffLock := NMSGUI_MC2M_difflock_front_touch;
        ELSE
            Cmd_Dropbox_4WD_Off := IOMODE_DIGIN27_DiffLock;               //IOM1_J3_18  Dropbox_4WD_Off   (I/H - 24V/4)   IOM1_J3_18    
            //Cmd_RearAxleDiffLock := IOMODE_2_DIGOUT13_RearAxleDiffLock;        //IOM2_J3_2   RearAxleDiffLock  (I/H - 24V/4)  MC2M_U25 
            Cmd_RearAxleDiffLock := DIGIN_RearAxleDiffLock;               //IOM2_J3_2   RearAxleDiffLock  (24V/4)        (I/H)  MC2M_U25 
            //Cmd_FrontAxleDiffLock := IOMODE_2_DIGIN03_FrontAxleDiffLock;       //IOM2_J2_16  FrontAxleDiffLock (I/H - 24V/4)  MC2M_U05
            Cmd_FrontAxleDiffLock := DIGIN_FrontAxleDiffLock;             //IOM2_J2_16  FrontAxleDiffLock (24V/4)         (I/H) MC2M_U05
        END_IF
    END_IF

    Stat_Dropbox_4WD_Off := Cmd_Dropbox_4WD_Off;
    //Stat_Dropbox_4WD_Off := NOT Cmd_Dropbox_4WD_Off;
    Stat_RearAxleDiffLock := Cmd_RearAxleDiffLock AND Stat_Dropbox_4WD_Off;
    Stat_FrontAxleDiffLock := Cmd_FrontAxleDiffLock AND Stat_RearAxleDiffLock;  

    IF(Stat_FrontAxleDiffLock)THEN
        IF(IOMODE_DIGIN16_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle AND DIGIN_Feedback_4WD_DiffLock)THEN
            Stat_4x4 := 3; 
            Cmd_4x4_Buzzer := 3;
        ELSE
             Cmd_4x4_Buzzer := 4;
             IF(Blink05) THEN 
                Stat_4x4 := 3;
             ELSE 
                Stat_4x4:=0;
             END_IF
        END_IF
    ELSIF(Stat_RearAxleDiffLock)THEN
        IF(DIGIN_Feedback_RearAxle AND DIGIN_Feedback_4WD_DiffLock)THEN
            Stat_4x4 := 2; 
            Cmd_4x4_Buzzer := 2;
        ELSE
             Cmd_4x4_Buzzer := 4;
             IF(Blink05) THEN 
                Stat_4x4 := 2;
             ELSE 
                Stat_4x4:=0;
             END_IF
        END_IF
    ELSIF(Stat_Dropbox_4WD_Off)THEN
        IF(DIGIN_Feedback_4WD_DiffLock)THEN
            Stat_4x4 := 1; 
            Cmd_4x4_Buzzer := 1;
        ELSE
             Cmd_4x4_Buzzer := 4;    
             IF(Blink05) THEN 
                Stat_4x4 := 1;
             ELSE 
                Stat_4x4:=0;
             END_IF
        END_IF
    ELSE 
            Stat_4x4 := 0;
            Cmd_4x4_Buzzer := 0;
    END_IF

    //DOUT_4WD_DiffLock := Cmd_RearAxleDiffLock;
    DOUT_Dropbox_4WD_Off:= Stat_Dropbox_4WD_Off;                 //S15->IOM1_J3_18  Dropbox_4WD_Off   valf4        (O/H) MC2M_S15
    DOUT_RearAxleDiffLock := Stat_RearAxleDiffLock;                  //T06->IOM2_J3_2   RearAxleDiffLock  valf5        (O/H) MC2M_T06  
    //MC2M_MUX_DIGOUT07_FrontAxleDiffLock := Stat_FrontAxleDiffLock;   //MUX_J3_05->IOM2_J2_16  FrontAxleDiffLock valf7
    DOUT_FrontAxleDiffLock := Stat_FrontAxleDiffLock;                //MUX_J3_05->IOM2_J2_16  FrontAxleDiffLock valf7  (O/H) MC2M_T07
    //Stat_DiffLock44 := DIGIN_Feedback_4WD_DiffLock AND IOMODE_2_DIGIN15_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle;
    Stat_DiffLock44 := DIGIN_Feedback_4WD_DiffLock AND IOMODE_DIGIN16_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle AND (Stat_4x4 = 3);
    //                       (I/L) MC2M_T25                    (I/L) IOM1_J3_20                   (I/L) MC2M_T28
    //Front AND rear axle locked feedbacks are forwarding TO ABS-ECU
    //EAC1_DifferentialLockStateFrontAxle1 := BOOL_TO_USINT(IOMODE_2_DIGIN15_FeedBack_FrontAxle);
    EAC1_DifferentialLockStateFrontAxle1 := BOOL_TO_USINT(IOMODE_DIGIN16_FeedBack_FrontAxle);
    //EAC1_DifferentialLockStateRearAxle1 := BOOL_TO_USINT(DIGIN_Feedback_RearAxle);
    EAC1_DifferentialLockStateRearAxle1 := BOOL_TO_USINT(DIGIN_Feedback_RearAxle);
ELSE
    //DOUT_Dropbox_4WD_Off:= TRUE;         //NOT Stat_Dropbox_4WD_Off; 
    DOUT_Dropbox_4WD_Off:= FALSE;         //NOT Stat_Dropbox_4WD_Off; BYPASS SWITCH AÇILINCA RÖLEDE TERS MANTIK VAR  
    DOUT_RearAxleDiffLock := FALSE;      //RearAxleDiffLock  valf5  (O/H) MC2M_T06  
    DOUT_FrontAxleDiffLock := FALSE;     //FrontAxleDiffLock valf7  (O/H) MC2M_T07
    IF(IOMODE_DIGIN16_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle AND DIGIN_Feedback_4WD_DiffLock)THEN
        Stat_4x4 := 3; 
        Cmd_4x4_Buzzer := 3;
    ELSIF (DIGIN_Feedback_RearAxle AND DIGIN_Feedback_4WD_DiffLock)THEN 
        Stat_4x4 := 2; 
        Cmd_4x4_Buzzer := 2;
    ELSIF(DIGIN_Feedback_4WD_DiffLock)THEN
        Stat_4x4 := 1; 
        Cmd_4x4_Buzzer := 1;
    ELSE
         Cmd_4x4_Buzzer := 4;    
         Stat_4x4:=0;
    END_IF
    Stat_DiffLock44 := DIGIN_Feedback_4WD_DiffLock AND IOMODE_DIGIN16_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle;    
END_IF

IF(IOMODE_DIGIN16_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle AND DIGIN_Feedback_4WD_DiffLock)THEN
    DifflockFeedbackState := 7;
ELSIF(IOMODE_DIGIN16_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle)THEN
    DifflockFeedbackState := 6;
ELSIF(IOMODE_DIGIN16_FeedBack_FrontAxle AND DIGIN_Feedback_4WD_DiffLock)THEN
    DifflockFeedbackState := 5;
ELSIF(DIGIN_Feedback_RearAxle AND DIGIN_Feedback_4WD_DiffLock)THEN
    DifflockFeedbackState := 4;
ELSIF(DIGIN_Feedback_4WD_DiffLock)THEN
    DifflockFeedbackState := 3;        
ELSIF(DIGIN_Feedback_RearAxle)THEN
    DifflockFeedbackState := 2;        
ELSIF(IOMODE_DIGIN16_FeedBack_FrontAxle)THEN
    DifflockFeedbackState := 1;        
ELSE
    DifflockFeedbackState := 0;        
END_IF


IF(DOUT_Dropbox_4WD_Off AND DOUT_RearAxleDiffLock AND DOUT_FrontAxleDiffLock)THEN
    DifflockDoutState := 7;
ELSIF(DOUT_Dropbox_4WD_Off AND DOUT_RearAxleDiffLock)THEN
    DifflockDoutState := 6;
ELSIF(DOUT_Dropbox_4WD_Off AND DOUT_FrontAxleDiffLock)THEN
    DifflockDoutState := 5;
ELSIF(DOUT_RearAxleDiffLock AND DOUT_FrontAxleDiffLock)THEN
    DifflockDoutState := 4;
ELSIF(DOUT_Dropbox_4WD_Off)THEN
    DifflockDoutState := 3;        
ELSIF(DOUT_RearAxleDiffLock)THEN
    DifflockDoutState := 2;        
ELSIF(DOUT_FrontAxleDiffLock)THEN
    DifflockDoutState := 1;        
ELSE
    DifflockDoutState := 0;        
END_IF




/*
//Differential Lock Off-Road Status feedback from ...
//... Differential Lock & Front Axle & Rear Axle
Stat_DiffLock44 := FALSE;
IF(Cmd_Dropbox_4WD_Off)THEN
   // Stat_DiffLock := DIGIN_Feedback_4WD_DiffLock AND DIGIN_Feedback_FrontAxle AND DIGIN_Feedback_RearAxle;
   Stat_DiffLock := DIGIN_Feedback_4WD_DiffLock AND IOMODE_2_DIGIN15_FeedBack_FrontAxle AND DIGIN_Feedback_RearAxle;
    IF(Stat_DiffLock)THEN
        Stat_DiffLock44 := TRUE;
        

        //DOUT_4WD_Difflock_Off:=Stat_DiffLock;
        
        
    ELSE
        Stat_DiffLock := Blink05;
    END_IF
ELSE
    Stat_DiffLock := FALSE;
END_IF
*/


/*
// Dropbox status TO show on the screen
IF(Stat_Dropbox_High)THEN
        Stat_Dropbox := 2; //HIGH
ELSIF(Stat_Dropbox_Low)THEN
  IF(DIGIN_Feedback_DropboxLow) THEN 
    Stat_Dropbox := 1;  //LOW
    ELSE 
     IF(Blink05) THEN 
     Stat_Dropbox := 1;
     ELSE Stat_Dropbox:=-1;
     END_IF
  END_IF
ELSIF(Stat_Dropbox_Neutral)THEN
    Stat_Dropbox := 0;  //NEUTRAL
ELSE
    Stat_Dropbox := -1; //Switch OR Dropbox Alarm
END_IF
*/



