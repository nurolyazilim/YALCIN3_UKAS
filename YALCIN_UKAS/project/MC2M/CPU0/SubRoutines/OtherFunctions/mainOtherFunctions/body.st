(* type code here *)
Cmd_Bypass_Switch := DIGIN_Bypass_Switch; //(I/H)    MC2M_U19
//Cmd_Bypass_Switch := test_bit5;

 
//Cmd_FireFighter           := IOMODE_2_DIGIN23_DIGIN_FireFighter;// DIGIN_FireFighter I/O MODE2 J3/3  DIGIN_FireFighter  
Cmd_FireFighter           := IOMODE_DIGIN09_FireFighter;   
//Cmd_FireFighter           := test_bit;   
 
// Cmd_interiorVentilation_1 := IOMODE_2_DIGIN25_InteriorVentilation_1;
Cmd_interiorVentilation_1 := IOMODE_DIGIN17_InteriorVentilation;
//Cmd_interiorVentilation_1 := test_bit3;
//Cmd_interiorVentilation_2 := IOMODE_2_DIGIN26_InteriorVentilation_2;
Cmd_AlternatorFailure     := DIGIN_AlternatorFailure; //
////Cmd_CentralLockSystem     := IOMODE_2_DIGIN20_centralLockSystem;

Cmd_CentralLockSystem := DIGIN_CentralLockSystemEnable; //T40
//3.4Cmd_CentralLockSystemEnable    := DIGIN_CentralLockSystemEnable; //T40
//3.4Cmd_CentralLockSystemDisable    := IOMODE_DIGIN00_CentralLockSystemDisable;

Cmd_MineLock              := Stat_HydraulicDoorOpened AND Stat_HydraulicDoorClosed; //DIGIN_RearDoorMineLock;
//Cmd_MineLock              := test_bit5;
 
/***********************************************************************************/
 
Stat_FireFighter           := Cmd_FireFighter;
Stat_interiorVentilation_1 := Cmd_interiorVentilation_1;
Stat_interiorVentilation_2 := Cmd_interiorVentilation_2;

//3.4TriggerCentralLockSystemEnable.CLK := Cmd_CentralLockSystemEnable; 
//3.4TriggerCentralLockSystemEnable;
//3.4IF(TriggerCentralLockSystemEnable.Q)THEN
//3.4    Cmd_CentralLockSystem := TRUE;
//3.4END_IF
//3.4TriggerCentralLockSystemDisable.CLK := Cmd_CentralLockSystemDisable; 
//3.4TriggerCentralLockSystemDisable;
//3.4IF(TriggerCentralLockSystemDisable.Q)THEN
//3.4    Cmd_CentralLockSystem := FALSE;
//3.4END_IF


//Stat_CentralLockSystem     := Cmd_CentralLockSystem;
Stat_CentralLockSystem     := NOT Cmd_CentralLockSystem;
Stat_Redresor              := NOT Cmd_AlternatorFailure;
Stat_MineLock              := Cmd_MineLock;
Stat_InterBuzzer           := (Stat_EngineProtection OR Stat_DiffLock44 OR Stat_4x4_Buzzer OR MC2M_TERA_WaterInFuel_Stat OR
                               (AlarmState_EngineOilPressure AND (InputFiltered_Sensor1>400)))AND !Stat_BlackOut; 
//Stat_InterBuzzer           := test_bit4;
//MC2M_TERA_Icon_Status_BO_S1:= Stat_BlackOut; 
// Redresör çıkışı 
DOUT_BatteryCharge:= Stat_Redresor;   //(O/H) MC2M_S10 
MC2M_MUX_DIGOUT10_Buzzer := Stat_InterBuzzer; //BURASI GIGA BUZZERINI TETİKLEYECEK
//MC2M_MUX_DIGOUT10_Buzzer := DOUT_RearDoorControlValf_1 OR DOUT_RearDoorControlValf_2; //T15 röle2 t20 röle1 /
/*****************************CTIS&Yangın Söndürme Blackout*****************************/

//Stat_FireFighter
//MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter:=(!Stat_BlackOut_S1 AND  
//                                        !Stat_BlackOut_S2 AND
//                                        !Stat_BlackOut_S3) AND
//                (Stat_BlackOut_Tag OR Stat_BlackOut_1 OR Stat_BlackOut_2);

MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter:= Stat_BlackOut_S3; //CTIS ve shift selector ve yangın söndürme aydınlatmasını kapatır

//yangın durumunda iç fanların belli bir süre çalışması 
Fan_TON.PT:= fanActiveDelay;
Fan_TON.IN:=Stat_FireFighter;
Fan_TON;
stat_FireFighterActiveFan:=Fan_TON.Q;
 
////Fire_Obj.IN:= stat_FireFighterActiveFan;
////Fire_Obj(PT:=FireFighterActiveFanTime,Q=>stat_FireFighterActiveFan_2);
 
/*******************iç havalandırma******************************/

//iki farklı çıkış verilecek                            
//  1 :  dışarı atış fanı

//MC2M_MUX_DIGOUT03_InteriorVantilator_1 := 
//(Stat_interiorVentilation_1 OR (stat_FireFighterActiveFan AND stat_FireFighterActiveFan_2)) 
//                                          AND !Stat_interiorVentilation_2;
//DOUT_InteriorVantilator := 
//(Stat_interiorVentilation_1 OR (stat_FireFighterActiveFan AND stat_FireFighterActiveFan_2)) 
//                                          AND !Stat_interiorVentilation_2;
DOUT_InteriorVantilator := Stat_interiorVentilation_1 OR stat_FireFighterActiveFan;
      
//içeri alış fanı 
//Dışa atış fan ve yangın söndürme aktifken çalışmaz                                   
////MC2M_MUX_DIGOUT04_InteriorVantilator_2 :=  Stat_interiorVentilation_2 AND 
////                                           !Stat_interiorVentilation_1 AND
////                                           !stat_FireFighterActiveFan ;
/*******************Redresör******************************/
//motor çalışmaya başlayınca çıkışı kesecek 

IF(EEC1_EngineSpeed>=engineSpeedRPMConstant) THEN 
 stat_VehicleOn:= TRUE;
ELSE
 stat_VehicleOn:= FALSE;
END_IF

/********************************************************/
//Belirli bir sıcaklığın altında T50 devreye girecek 
//AIN_Tank_1_Temperature U04
//AIN_Tank_2_Temperature      ???
//IF((fuelTank_1_Temperature <= tankResistanceLimit) OR (fuelTank_1_Temperature <= tankResistanceLimit)) THEN 
/*
IF(fuelTank_1_Temperature <= tankResistanceLimit AND fuelTank_2_Temperature >= tankResistanceLimit2 )  THEN     
  stat_ResistanceShould:=TRUE;
ELSE 
  stat_ResistanceShould:=FALSE;
END_IF

DOUT_Tank_FuelResistance := stat_ResistanceShould;            //Webasto T50 sıcaklık rezistans çıkış         T16  
*/
/////////////////////////////////////////////////////////
/*11Tank
IF (fuelTank_1_Temperature <= FuelTempDownLimit AND Stat_T50TankTemp AND fuelTank_1_Temperature > -70) THEN 
  Cmd_T50FuelHeater:=TRUE;
END_IF
    
IF (fuelTank_1_Temperature >= FuelTempUpLimit) THEN 
  Cmd_T50FuelHeater:=FALSE;
  Stat_FuelTemp:=TRUE;
ELSE 
  Stat_FuelTemp:=FALSE;
END_IF
*/
IF (fuelTank_1_Temperature <= FuelTempDownLimit ) THEN 
  //Cmd_T50FuelHeater:=Stat_T50TankTemp;
  Cmd_T50FuelHeater:=WorkState_WebastoTankTemperature;
  Stat_FuelTemp:=FALSE;
ELSIF (fuelTank_1_Temperature < FuelTempUpLimit) THEN
  //Cmd_T50FuelHeater:=Stat_T50TankTemp AND !Stat_FuelTemp;
  Cmd_T50FuelHeater:=WorkState_WebastoTankTemperature AND !Stat_FuelTemp;
ELSIF (fuelTank_1_Temperature >= FuelTempUpLimit) THEN
  Cmd_T50FuelHeater:=FALSE;
  Stat_FuelTemp:=TRUE;
END_IF
    
//DOUT_T50Enable := Cmd_T50FuelHeater;                    //Webasto T50 sıcaklık rezistans çıkış  (O/H) MC2M_T16    
//DOUT_T50Enable := WorkState_WebastoTankTemperature;      //Webasto T50 sıcaklık rezistans çıkış  (O/H) MC2M_T16    
//1DOUT_T50Enable := TRUE;//Cmd_T50FuelHeater;            //Webasto T50 sıcaklık rezistans çıkış  (O/H) MC2M_T16    

//DOUT_FuelTankTempOKLed := FALSE; //NOT Stat_FuelTemp;  
//DOUT_T90Enable := Stat_T50TankTemp;
DOUT_T90Enable := TRUE; //WorkState_WebastoTankTemperature;

//DOUT_T90Enable := TRUE;//Stat_T50TankTemp;
/********************************************************/
//Belirli bir sıcaklığın altında T50 yakıt deposunu ısıtan resistans devreye girecek 
//AIN_WebastoTankResistanceSensor T27
/*
IF(fuelTank_2_Temperature <= tankResistanceLimit2)  THEN 
  stat_ResistanceShould2:=TRUE;
ELSE 
  stat_ResistanceShould2:=FALSE;
END_IF

DOUT_WebastoTankResistance := stat_ResistanceShould2;
*/
////////////////////////////////////////////////////
/*11Rezistans
IF (fuelTank_2_Temperature <= T50TankTempDownLimit AND fuelTank_2_Temperature > -70 ) THEN 
  Cmd_T50TankResistance:=TRUE;
END_IF
    
IF (fuelTank_2_Temperature >= T50TankTempUpLimit ) THEN 
  Cmd_T50TankResistance:=FALSE;
  Stat_T50TankTemp:=TRUE;
ELSE 
  Stat_T50TankTemp:=FALSE;
END_IF
*/
IF (fuelTank_2_Temperature <= T50TankTempDownLimit ) THEN
    Cmd_T50TankResistance:=TRUE;
    Stat_T50TankTemp:=FALSE;
ELSIF (fuelTank_2_Temperature < T50TankTempUpLimit ) THEN
    Cmd_T50TankResistance:=!Stat_T50TankTemp;
ELSIF (fuelTank_2_Temperature >= T50TankTempUpLimit ) THEN
    Cmd_T50TankResistance:=FALSE;
    Stat_T50TankTemp:=TRUE;
END_IF
    
//DOUT_WebastoTankResistance := Cmd_T50TankResistance;            //Webasto T50 sıcaklık rezistans çıkış (O/H) MC2M_S17  
//DOUT_WebastoTankResistance := TRUE;//Cmd_T50TankResistance;            //Webasto T50 sıcaklık rezistans çıkış (O/H) MC2M_S17  
WorkState_WebastoTankTemperature := (fuelTank_2_Temperature >= Limit_WebastoTankMinTemperature);
/*************************KORNA**********************************/
Cmd_Horn:= Horn_Switch_On;
IF(Cmd_Horn=0xF7 OR Cmd_Horn=0xFB) THEN 
 Stat_Horn := TRUE;
 ELSE
 Stat_Horn := FALSE;
END_IF;
//DOUT_Horn:=Stat_Horn AND (Stat_BlackOut_S3 OR Stat_BlackOut_S2 OR  Stat_BlackOut_S1);
//DOUT_Horn:=(Stat_BlackOut_S3 OR Stat_BlackOut_S2 OR  Stat_BlackOut_S1);

/********version*/
//MC2M_TERA_SWVerisons:= SWVersion;
MC2M_TERA_SWConfig0 := SWConfig0; 
MC2M_TERA_SWConfig1 := SWConfig1; 
MC2M_TERA_SWVersions0 := SWVersions0; 
MC2M_TERA_SWVersions1 := SWVersions1; 
MC2M_TERA_SWVersions2 := SWVersions2; 

//DROPBOX BUZZER SENARYOSU 
//Dropbox 4WD Off Buzzer
IF (Cmd_4x4_Buzzer = 1) THEN 
    Cmd_4x4_Buzzer_Ctr1 := Cmd_4x4_Buzzer_Ctr1 + 100;
ELSE 
    Cmd_4x4_Buzzer_Ctr1 := 0;Stat_4x4_Buzzer1 := FALSE;
END_IF

IF (Cmd_4x4_Buzzer = 1 AND Cmd_4x4_Buzzer_Ctr1 < 5000) THEN 
    Stat_4x4_Buzzer1 := TRUE;
ELSIF (Cmd_4x4_Buzzer = 1 AND Cmd_4x4_Buzzer_Ctr1 < 65000) THEN     
    Stat_4x4_Buzzer1 := FALSE;
ELSIF (Cmd_4x4_Buzzer = 1 AND Cmd_4x4_Buzzer_Ctr1 > 65000) THEN     
    Cmd_4x4_Buzzer_Ctr1 := 0;
END_IF

//Rear Difflock + Dropbox 4WD Off Buzzer
IF (Cmd_4x4_Buzzer = 2) THEN 
    Cmd_4x4_Buzzer_Ctr2 := Cmd_4x4_Buzzer_Ctr2 + 100;
ELSE 
    Cmd_4x4_Buzzer_Ctr2 := 0;Stat_4x4_Buzzer2 := FALSE;
END_IF

IF (Cmd_4x4_Buzzer = 2 AND Cmd_4x4_Buzzer_Ctr2 < 10000) THEN 
    Stat_4x4_Buzzer2 := TRUE;
ELSIF (Cmd_4x4_Buzzer = 2 AND Cmd_4x4_Buzzer_Ctr2 < 70000) THEN     
    Stat_4x4_Buzzer2 := FALSE;
ELSIF (Cmd_4x4_Buzzer = 2 AND Cmd_4x4_Buzzer_Ctr2 > 70000) THEN     
    Cmd_4x4_Buzzer_Ctr2 := 0;
END_IF

//Front Difflock + Rear Difflock + Dropbox 4WD Off Buzzer

IF (Cmd_4x4_Buzzer = 3) THEN 
    Cmd_4x4_Buzzer_Ctr3 := Cmd_4x4_Buzzer_Ctr3 + 100;
ELSE 
    Cmd_4x4_Buzzer_Ctr3 := 0;Stat_4x4_Buzzer3 := FALSE;
END_IF

IF (Cmd_4x4_Buzzer = 3 AND Cmd_4x4_Buzzer_Ctr3 < 15000) THEN 
    Stat_4x4_Buzzer3 := TRUE;
ELSIF (Cmd_4x4_Buzzer = 3 AND Cmd_4x4_Buzzer_Ctr3 < 75000) THEN     
    Stat_4x4_Buzzer3 := FALSE;
ELSIF (Cmd_4x4_Buzzer = 3 AND Cmd_4x4_Buzzer_Ctr3 > 75000) THEN     
    Cmd_4x4_Buzzer_Ctr3 := 0;
END_IF

IF (Cmd_4x4_Buzzer = 4) THEN
    Stat_4x4_Buzzer4 := TRUE;
ELSE    
    Stat_4x4_Buzzer4 := FALSE;
END_IF 

//Stat_4x4_Buzzer := Stat_4x4_Buzzer1 OR Stat_4x4_Buzzer2 OR Stat_4x4_Buzzer3 OR Stat_4x4_Buzzer4;
Stat_4x4_Buzzer := Stat_4x4_Buzzer3 OR Stat_4x4_Buzzer4;

/*
IF(MainLoop > 0)THEN
//    TotalTripMeter := TotalTripMeter + REAL_TO_UDINT(USINT_TO_REAL(MC2M_TERA_VehicleSpeed) / 36); //USINT 
//    TotalOdometer := TotalOdometer + REAL_TO_UDINT(USINT_TO_REAL(MC2M_TERA_VehicleSpeed) / 36);  //USINT 
//    TotalTripMeter := TotalTripMeter + REAL_TO_UDINT((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36); //USINT 
    TotalOdometer := TotalOdometer + REAL_TO_UDINT((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36);  //USINT 
    IF(TotalTripMeter>100.0)AND((REAL_TO_UINT(TotalTripMeter) MOD 1000)=0)THEN
        TotalTripMeter := TotalTripMeter + 65.0;
    END_IF
    IF(TotalOdometer>100.0)AND((REAL_TO_UINT(TotalOdometer) MOD 1000)=0)THEN
        TotalOdometer := TotalOdometer + 65.0;
    END_IF
END_IF
*/

IF(MainLoop > 0)THEN
        //Ekleme yapıldı. (aaslan)
        IF (GIGA_MC2M_GIGAOdometerBackup > TotalOdometer) THEN
            TotalOdometer := GIGA_MC2M_GIGAOdometerBackup;
            save_bytearray_R;
        END_IF;
        
        //TotalTripMeterX := ((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36); //iptal edildi (aaslan)
        //TotalTripMeter8 := TotalTripMeter8 + ((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36.9); //USINT 
        
        Odometer := ((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36.9); //(aaslan)
        TotalOdometer100m := TotalOdometer100m + Odometer; //((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36.9);
        
        IF TotalOdometer100m >= 100 THEN
           //TotalOdometer1km := 0.0;
           //TotalOdometer := TotalOdometer + 1000.0;
           TotalTripMeter := TotalTripMeter + TotalOdometer100m;
           TotalOdometer100m := 0.0;
        END_IF
//20160910        TotalTripMeter2 := TotalTripMeter2 + ((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36.9);//USINT 
//20160910        TotalTripMeter := REAL_TO_UDINT (TotalTripMeter2); //USINT
        MC2M_TERA_TripCounter := REAL_TO_UDINT(TotalTripMeter);
        //MC2M_TERA_TripCounter := TotalTripMeter;
        TotalOdometer1km := TotalOdometer1km + Odometer; //((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36.9); //(aaslan)
        IF TotalOdometer1km >= 1000 THEN
           //TotalOdometer1km := 0.0;
           //TotalOdometer := TotalOdometer + 1000.0;
           TotalOdometer := TotalOdometer + TotalOdometer1km;
           TotalOdometer1km := 0.0;
        END_IF
        //20160909TotalOdometer2 := TotalOdometer2 + ((USINT_TO_REAL(MC2M_TERA_VehicleSpeed)) / 36.9);  //USINT 
        //20160909TotalOdometer := REAL_TO_UDINT (TotalOdometer2); //USINT
        //20160909TotalOdometer_d := REAL_TO_UDINT(TotalOdometer);
        MC2M_TERA_TotalOdometer := REAL_TO_UDINT(TotalOdometer);
        //MC2M_TERA_TotalOdometer := TotalOdometer;  
        
END_IF

//TERA_MC2M_ResetTrip := FALSE;
IF(GIGA_MC2M_ResetTrip)THEN
    //TotalTripMeter2 := 0.0;
    TotalTripMeter := 0.0;
    //TERA_MC2M_ResetTrip := T5RUE;
    save_bytearray_R;
END_IF

IF((MainLoop > 0) AND ((MainLoop MOD 100) = 0) )THEN
    save_bytearray_R;
END_IF
