// ####### INPUT CONFIGURATION #############################

//Cmd_HighBeam         := OMNIA_LEFT_HighBeamStatus AND Cmd_LowBeam;
//Cmd_HighBeamFlash    := OMNIA_LEFT_HighBeamFlashStatus;
Cmd_HighBeam         := DIGIN_HighBeamStatus;                     // (I/H) MC2M U29
//Cmd_HighBeam         := test_bit2;                                  // (I/H) MC2M U29
//Cmd_LowBeam          := OMNIA_LEFT_LowBeamStatus OR OMNIA_LEFT_LowBeam2Status;
Cmd_LowBeam          := DIGIN_LowBeamStatus;                      // (I/H) MC2M U14
//Cmd_LowBeam          := test_bit3;                                  // (I/H) MC2M U14

//Cmd_ParkLamp         := OMNIA_LEFT_Light_P1_Park;
Cmd_ParkLamp         := DIGIN_Light_P1_Park;                      // (I/H) MC2M T23
//Cmd_ParkLamp         := test_bit4;                                  // (I/H) MC2M T23

//Cmd_TurnSignal_Left  := OMNIA_LEFT_TurnLeftSignal;

///1Cmd_TurnSignal_Left  := DIGIN_TurnLeftSignal;                   // (I/H) MC2M U26

//Cmd_TurnSignal_Left  := test_bit4;                                // (I/H) MC2M U26
//Cmd_TurnSignal_Right := OMNIA_LEFT_TurnRightSignal;

///1Cmd_TurnSignal_Right := DIGIN_TurnRightSignal;                  // (I/H) MC2M T29

//Cmd_TurnSignal_Right := test_bit5;                                // (I/H) MC2M T29

//TriggerEngineProtection.CLK := test_bit;                          //(IOM1_J2_18 - I/H)

//TriggerTurnLeftSignal.CLK := DIGIN_TurnLeftSignal;             
//TriggerTurnLeftSignal;

//IF(TriggerTurnLeftSignal.Q)THEN
//    Cmd_TurnSignal_Left := TRUE;
//    Stat_TurnSignal_Ctr1 := 0;
//END_IF

IF(DIGIN_TurnLeftSignal)THEN
    Cmd_TurnSignal_Left := TRUE;
    Stat_TurnSignal_Ctr1 := 0;
END_IF

//TriggerTurnRightSignal.CLK := DIGIN_TurnRightSignal ;                 
//TriggerTurnRightSignal;

//IF(TriggerTurnRightSignal.Q)THEN
//    Cmd_TurnSignal_Right := TRUE;
//    Stat_TurnSignal_Ctr1 := 0;
//END_IF

IF(DIGIN_TurnRightSignal)THEN
    Cmd_TurnSignal_Right := TRUE;
    Stat_TurnSignal_Ctr2 := 0;
END_IF
                                 
//TriggerTurnSignal.CLK := DIGIN_TurnLeftSignal AND DIGIN_TurnRightSignal ;     //(IOM1_J2_18 - I/H)             
//TriggerTurnSignal;

//IF(TriggerTurnSignal.Q)THEN
//    Cmd_TurnSignal := TRUE;
//    Stat_TurnSignal_Ctr1 := 0;
//END_IF

//    Stat_TurnSignalLamp_Left := Blink05;
//    Stat_TurnSignalLamp_Right := Blink05;

IF (Cmd_TurnSignal_Left AND Stat_TurnSignal_Ctr1 < 1500) THEN 
    Stat_TurnSignalLamp_Left := Blink05 AND Cmd_TurnSignal_Left;
ELSIF (Cmd_TurnSignal_Left AND Stat_TurnSignal_Ctr1 > 1500) THEN      
    Stat_TurnSignal_Ctr1 := 0; Cmd_TurnSignal_Left := FALSE; 
    Stat_TurnSignalLamp_Left := FALSE;
END_IF

IF (Cmd_TurnSignal_Left) THEN
    Stat_TurnSignal_Ctr1 := Stat_TurnSignal_Ctr1 + 100;
ELSE
    Stat_TurnSignal_Ctr1 := 0; 
END_IF 

IF (Cmd_TurnSignal_Right AND Stat_TurnSignal_Ctr2 < 1500) THEN 
    Stat_TurnSignalLamp_Right := Blink05 AND Cmd_TurnSignal_Right;
ELSIF (Cmd_TurnSignal_Right AND Stat_TurnSignal_Ctr2 > 1500) THEN      
    Stat_TurnSignal_Ctr2 := 0; Cmd_TurnSignal_Right := FALSE; 
    Stat_TurnSignalLamp_Right := FALSE;
END_IF

IF (Cmd_TurnSignal_Right) THEN
    Stat_TurnSignal_Ctr2 := Stat_TurnSignal_Ctr2 + 100;
ELSE
    Stat_TurnSignal_Ctr2 := 0; 
END_IF 

Stat_GIGA_Busy := Cmd_TurnSignal_Left OR Cmd_TurnSignal_Right; 

//Cmd_Hazard        := DIGIN_Hazard; 
Cmd_RearFog       := IOMODE_DIGIN26_RearFog;                    //(I/H-24V/4) IOM1_J3_8
//Cmd_RearFog       := test_bit3;                  //IO-Mode Pin:J3_8 arka sis  lambası

Cmd_FrontFog      := IOMODE_DIGIN30_FrontFog;                   //(I/H-24V/4) IOM1_J3_6 
//Cmd_FrontFog      := test_bit4;                  //IO-Mode Pin:J3_6   ön sis lambas 

////Cmd_WorkLamp_Rear := IOMODE_DIGIN24; //IO-Mode Pin:J3_7
//Cmd_PuddleLamp    := IOMODE_DIGIN19_PuddleLamp; //IO-Mode Pin:J3_9
//Blackout durumuna göre buzzer ı çalıştırır
Cmd_ReverseGear   := (CurrentGear < 0); //ReverseGear means (-1)

//Cmd_StopLamp      := ServiceBrakeActivated; // Data coming from ECM-SPN597

////Cmd_FootBrakeMicro    := IOMODE_2_DIGIN27_FootBrakeMicro;
////Cmd_StopLamp := NOT Cmd_FootBrakeMicro; 

////Cmd_InteriorLamp_Back := IOMODE_2_DIGIN19_InteriorLamps; 
////Cmd_InteriorLamp_Front:= IOMODE_2_DIGIN19_InteriorLamps;



// ####### PROCESSING & CONDITIONS ############################

// Lamps : High - Low - Park - Plate - Side(Puddle)
Stat_HighBeam := Cmd_HighBeam;
Stat_LowBeam := Cmd_LowBeam; 
/*
Stat_HighBeam := (Cmd_HighBeam OR
                 Cmd_HighBeamFlash) AND 
                (!Stat_BlackOut_S3 AND 
                 !Stat_BlackOut_S2 AND 
                 !Stat_BlackOut_S1 AND
                 !Stat_BlackOut0
                 );
// Omnia LEFT icin degistirildi
//s3-s2-s1-tag-0 da yanmaz 
Stat_LowBeam :=   (Cmd_LowBeam OR 
                  Cmd_HighBeam) AND 
                (!Stat_BlackOut_S3 AND 
                 !Stat_BlackOut_S2 AND 
                 !Stat_BlackOut_S1 AND
                 !Stat_BlackOut0
                 );
*/                 

                 
//park lambalar BO da s3 tag ve 0 da yanmayacak 
Stat_ParkLamp := Cmd_ParkLamp;
/*
Stat_ParkLamp :=(Cmd_ParkLamp OR
                 Cmd_LowBeam OR
                 Cmd_HighBeam) AND 
                (!Stat_BlackOut_S3 AND
                 !Stat_BlackOut_S2 AND
                 !Stat_BlackOut_S1 AND
                 !Stat_BlackOut0);
                 
                 
//Stat_PlateLamp:= Stat_ParkLamp;
*/

////Stat_SideLamp := Stat_ParkLamp;
//Stat_PuddleLamp := Cmd_PuddleLamp;


// Turn Signals - Hazard
// s3 ve s2 de sinyalller yanmaz

//1Stat_TurnSignalLamp_Left := Cmd_TurnSignal_Left;
//1Stat_TurnSignalLamp_Right := Cmd_TurnSignal_Right;

////2Stat_TurnSignalLamp_Left := Blink05;
////2Stat_TurnSignalLamp_Right := Blink05;

/*
IF((Cmd_TurnSignal_Left OR Cmd_Hazard) AND 
   (!Stat_BlackOut_S3 AND !Stat_BlackOut_S2))THEN
    Stat_TurnSignalLamp_Left := Blink07;
ELSE
    Stat_TurnSignalLamp_Left := FALSE;
END_IF

IF((Cmd_TurnSignal_Right OR Cmd_Hazard) AND 
   (!Stat_BlackOut_S3 AND !Stat_BlackOut_S2))THEN
    Stat_TurnSignalLamp_Right := Blink07;
ELSE
    Stat_TurnSignalLamp_Right := FALSE;
END_IF
*/


//Hazard
/*
IF(Cmd_Hazard)THEN
    Stat_Hazard := Blink07;
ELSE
    Stat_Hazard := FALSE;
END_IF
*/

// Fog & WorkLamps
//Arka sis BO s3,s2,s1,tag,0 da çalışmıyor
//sis lambalar parklar yanmıyorken yanmaz
Stat_RearFogLamp := Cmd_RearFog; 
Stat_FrontFog    := Cmd_FrontFog;

/* 
Stat_RearFogLamp := Cmd_RearFog AND 
                    Stat_ParkLamp AND 
                   (!Stat_BlackOut_S3 AND 
                    !Stat_BlackOut_S2 AND
                    !Stat_BlackOut_S1 AND 
                    !Stat_BlackOut0);

Stat_FrontFog    := Cmd_FrontFog AND
                    Stat_ParkLamp AND 
                    (!Stat_BlackOut_S3 AND 
                    !Stat_BlackOut_S2 AND 
                    !Stat_BlackOut_S1 AND 
                    !Stat_BlackOut0);
*/

//Stat_WorkLamp_Rear := Cmd_WorkLamp_Rear;

// Stop Lamp
//Stat_StopLamp := Cmd_StopLamp;

//Reverse Gear Lamp & Backup Alarm
//s3-s2-s1 de yanmaz 
//ReverseGearLamp Sadece feedback alıyoruz.
Stat_ReverseGearLamp :=   Cmd_ReverseGear; 
/*
Stat_ReverseGearLamp :=   Cmd_ReverseGear AND 
                        (!Stat_BlackOut_S3 AND 
                         !Stat_BlackOut_S2 AND 
                         !Stat_BlackOut_S1 AND 
                         !Stat_BlackOut0);
                         //OR 
*/
//Stat_BackupAlarm := (Stat_ReverseGearLamp OR Stat_HydraulicDoorClosed) AND 
//                    (!Stat_BlackOut_S3 AND !Stat_BlackOut_S2  AND !Stat_BlackOut_S3);
// Buradaki değişken GIGA ya da TERA buzzer ı nı tetikleyecek.
Stat_BackupAlarm := (Stat_ReverseGearLamp OR DOUT_RearDoorControlValf_1 OR DOUT_RearDoorControlValf_2) AND 
                    (!Stat_BlackOut);

//Stat_BackupAlarm := (Stat_ReverseGearLamp OR DOUT_RearDoorControlValf_1 OR DOUT_RearDoorControlValf_2) AND 
//                    (!Stat_BlackOut_S3 AND !Stat_BlackOut_S2  AND !Stat_BlackOut_S1 AND !Stat_BlackOut0);



//Fren lambası 
/*
Stat_StopLamps :=  Cmd_StopLamp AND 
                  (!Stat_BlackOut_S3 AND
                   !Stat_BlackOut_S2 AND
                   !Stat_BlackOut_S1 AND
                   !Stat_BlackOut0);
*/

//iç lambalar 
//Kapılardan herhangi biri açıkken veya iç lambalar anahtarı on iken  yanacak
//Ama Balackout s1,s2,s3 konumlarında yanmayacak 
/*
Stat_InteriorLamp_Front:= (Cmd_InteriorLamp_Back OR 
                           !AlarmState_DoorOpen_1) AND 
                          (!Stat_BlackOut_S1 AND 
                           !Stat_BlackOut_S2 AND 
                           !Stat_BlackOut_S3 AND 
                           !Stat_BlackOut0); 
*/

////Stat_InteriorLamp_Back := Stat_InteriorLamp_Front; 

// ####### OUTPUT CONFIGURATION ############################

////MC2M_MUX_DIGOUT12_HighBeam_Right := Stat_HighBeam;
////MC2M_MUX_DIGOUT13_HighBeam_Left  := Stat_HighBeam;

////MC2M_MUX_DIGOUT02_LowBeam_L := Stat_LowBeam;
////MC2M_MUX_DIGOUT01_LowBeam_R := Stat_LowBeam;



////DOUT_TurnSignalLamp_Left := Stat_TurnSignalLamp_Left;
////DOUT_TurnSignalLamp_Right:= Stat_TurnSignalLamp_Right;
 


////MC2M_MUX_DIGOUT14_RearFogLamp     := Stat_RearFogLamp;

////MC2M_MUX_DIGOUT15_ReverseGearLamp := Stat_ReverseGearLamp;
//Stat_ReverseGearLamp buzzer senaryosuna eklenecek, blackout ta çalıştırmayacak.
//

//MC2M_MUX_DIGOUT21_Backup_Alarm DOUT_Backup_Alarm    := Stat_BackupAlarm;
 DOUT_Backup_Alarm    := Stat_BackupAlarm;

////DOUT_FrontFogLamp_R := Stat_FrontFog;  
////DOUT_FrontFogLamp_L := Stat_FrontFog;  // sağ sol ön sis lambaları
    

//MC2M_MUX_DIGOUT24 := Stat_WorkLamp_Front;
//MC2M_MUX_DIGOUT25 := Stat_WorkLamp_Rear;
//MC2M_MUX_DIGOUT26 := Stat_WorkLamp_Rear;

//MC2M_MUX_DIGOUT11 := Stat_StopLamp;
//MC2M_MUX_DIGOUT10 := Stat_StopLamp;

////DOUT_ParkLamp_F := Stat_ParkLamp;
//DOUT_ParkLamp_FL := Stat_ParkLamp;
////DOUT_ParkLamp_R := Stat_ParkLamp;
//DOUT_ParkLamp_RR := Stat_ParkLamp;
//MC2M_IOMODE_2_DOUT18_KeyLedOnOff := Stat_ParkLamp;

////MC2M_IOMODE_2_DOUT18_KeyLedOnOff := (NOT Stat_BlackOut_S1 AND NOT Stat_BlackOut_S2 AND NOT Stat_BlackOut_S3  AND NOT Stat_BlackOut0);

 //(NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1   AND NOT Cmd_BlackOut_2) AND  Cmd_BlackOut_Tag  ;

 //Stat_BlackOut_S1:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_1   AND NOT Cmd_BlackOut_2) AND  Cmd_BlackOut_Tag  ;
 //Stat_BlackOut_S2:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2 AND NOT Cmd_BlackOut_S3  AND  NOT Cmd_BlackOut_Tag AND NOT Cmd_BlackOut_2 ) AND   Cmd_BlackOut_1;
 //Stat_BlackOut_S3:= (NOT Cmd_BlackOut_S1  AND NOT Cmd_BlackOut_S2  AND NOT Cmd_BlackOut_2) AND   Cmd_BlackOut_S3 AND Cmd_BlackOut_Tag AND Cmd_BlackOut_1;


//DOUT_PlateLamp := Stat_PlateLamp;
//DOUT_PlateLamp_Right := Stat_PlateLamp;
//DOUT_PlateLamp_Left := Stat_PlateLamp;

//DOUT_SideLamp_FR := Stat_SideLamp;
//DOUT_SideLamp_FL := Stat_SideLamp;
//DOUT_SideLamp_RL := Stat_SideLamp;
//DOUT_SideLamp_RR := Stat_SideLamp;


//DOUT_PuddleLamp := Stat_PuddleLamp;  //iç aydınlatma 

////DOUT_InteriorLamp_Front := Stat_InteriorLamp_Front;
////DOUT_InteriorLamp_Back  := Stat_InteriorLamp_Back;

////DOUT_HazardButtonLed    := Stat_Hazard;

/*
IF(Stat_BlackOut_S3 OR !Stat_ParkLamp) THEN 
  DOUT_DashboardBacklight:=0; 
END_IF
IF(Stat_BlackOut_S2 AND Cmd_ParkLamp) THEN 
 DOUT_DashboardBacklight:=5000;
END_IF
IF((!Stat_BlackOut_S3 OR Stat_BlackOut_S1) AND Cmd_ParkLamp) THEN  
  DOUT_DashboardBacklight:=10000;
END_IF
*/
/* KISA UZUN FARA GÖRE DÜZELTİLMİŞ HALİ
IF(Stat_BlackOut_S3 OR !Stat_ParkLamp) THEN 
  DOUT_DashboardBacklight:=0; 
END_IF
IF(Stat_BlackOut_S2 AND (Cmd_ParkLamp OR Cmd_LowBeam OR Cmd_HighBeam)) THEN 
 DOUT_DashboardBacklight:=5000;
END_IF
IF((!Stat_BlackOut_S3 OR Stat_BlackOut_S1) AND (Cmd_ParkLamp OR Cmd_LowBeam OR Cmd_HighBeam)) THEN  
  DOUT_DashboardBacklight:=10000;
END_IF
*/

/*
IF(Stat_BlackOut_S3 OR Stat_BlackOut_S2 OR Stat_BlackOut_S1 OR Stat_BlackOut0) THEN 
  DOUT_DashboardBacklight:=0; 
ELSIF (Cmd_ParkLamp OR Cmd_LowBeam OR Cmd_HighBeam) THEN
  DOUT_DashboardBacklight:=10000;
ELSE
  DOUT_DashboardBacklight:=0;  
END_IF
*/

//park lambalar BO da s3 tag ve 0 da yanmayacak 

/*
Stat_ParkLamp :=(Cmd_ParkLamp OR
                 Cmd_LowBeam OR
                 Cmd_HighBeam) AND 
                (!Stat_BlackOut_S3 AND
                 !Stat_BlackOut_S2 AND
                 !Stat_BlackOut_S1);
*/

// fren lambaları 
////MC2M_MUX_DIGOUT09_StopLamps:= Stat_StopLamps;   // 

//MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps := TRUE;
////MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps := MC2M_TERA_Icon_Status_L31; 
MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps := MC2M_TERA_Icon_Status_L31; 
