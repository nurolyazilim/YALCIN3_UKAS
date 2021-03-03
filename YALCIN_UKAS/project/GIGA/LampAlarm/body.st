//NIL;
i:=0;
IF(MC2M_TERA_Icon_Status_L14_2)THEN //MC2M_TERA_Icon_Status_L14_1 := AlarmState_DoorOpen_1; //DIGIN_Back_HydDoorClosed; //(I/L) MC2M U06 [X]
    ActiveAlarm[i] := 1;
    i := i + 1;
END_IF

IF(MC2M_TERA_Icon_Status_L14_3)THEN //MC2M_TERA_Icon_Status_L14_3 := AlarmState_DoorOpen_3; //DIGIN_GunTowerDoor_1 (I/L) MC2M_T36 
    ActiveAlarm[i] := 2;
    i := i + 1;
END_IF

IF(MC2M_TERA_Icon_Status_L14_5)THEN //MC2M_TERA_Icon_Status_L14_5 := AlarmState_DoorOpen_5; //DIGIN_DoorOpenSwitch (I/L) MC2M_U11
    ActiveAlarm[i] := 3;
    i := i + 1;
END_IF

IF(MC2M_TERA_Icon_Status_L09)THEN //MC2M_TERA_Icon_Status_L09 := Stat_Wait2StartLamp; //Wait2Start OR PreHeating
    ActiveAlarm[i] := 4;
    i := i + 1;
END_IF

IF(MC2M_TERA_Icon_Status_L43)THEN //MC2M_TERA_Icon_Status_L43 := Stat_MineLock; //DIGIN_RearDoorMineLock (I/L) MC2M_T37 
    ActiveAlarm[i] := 5;
    i := i + 1;
END_IF
IF(MC2M_TERA_Engine_Brake_Stat)THEN //Engine Brake in progress (aaslan)
    ActiveAlarm[i] := 6;
    i := i + 1;
END_IF

//IF(MC2M_TERA_Icon_Status_L31)THEN


TotalAlarm := i;
IF(TotalAlarm > 0)THEN
    IF ((MainLoop MOD 20)==0)THEN
        indexAlarm := (indexAlarm + 1) MOD TotalAlarm;
        InfoNo5 := ActiveAlarm[indexAlarm];        
    END_IF
ELSE
    InfoNo5 := 0;
    indexAlarm := 0;
END_IF



// InfoNo 6
i2:=0;
IF(MC2M_TERA_Icon_Status_L37)THEN //MC2M_TERA_Icon_Status_L14_1 := AlarmState_DoorOpen_1; //DIGIN_Back_HydDoorClosed; //(I/L) MC2M U06 [X]
    ActiveAlarm2[i2] := 1;
    i2 := i2 + 1;
END_IF

IF(MC2M_TERA_Icon_Status_L17)THEN //MC2M_TERA_Icon_Status_L14_3 := AlarmState_DoorOpen_3; //DIGIN_GunTowerDoor_1 (I/L) MC2M_T36 
    ActiveAlarm2[i2] := 2;
    i2 := i2 + 1;
END_IF

IF(MC2M_TERA_AuxPressureLow_Stat)THEN //MC2M_TERA_Icon_Status_L14_3 := AlarmState_DoorOpen_3; //DIGIN_GunTowerDoor_1 (I/L) MC2M_T36 
    ActiveAlarm2[i2] := 3;
    i2 := i2 + 1;
END_IF

IF(MC2M_TERA_Icon_Status_L08)THEN //MC2M_TERA_Icon_Status_L14_3 := AlarmState_DoorOpen_3; //DIGIN_GunTowerDoor_1 (I/L) MC2M_T36 
    ActiveAlarm2[i] := 4;
    i2 := i2 + 1;
END_IF

//Engine coolant level (aaslan)
IF(MC2M_TERA_DIAG_EngineCoolantLevel == 0)THEN //MC2M_TERA_DIAG_INP09 := (EFL_P1_EngineCoolantLevel == 0);//DIGIN_EngineCoolantLevelLow;(aaslan)
    ActiveAlarm2[i2] := 5;
    i2 := i2 + 1;
END_IF

//Water In Fuel Warning (marel)
IF(MC2M_TERA_WaterInFuel_Stat)THEN //water in fuel (marel)
    ActiveAlarm2[i2] := 6;
    i2 := i2 + 1;
END_IF

// Hidrolik Giriş Sensörü Kirlilik Uyarısı (marel)
IF(MC2M_TERA_Icon_Status_L42)THEN
    ActiveAlarm2[i2] := 7;
    i2 := i2 + 1;
END_IF

// Hidrolik Çıkış Sensörü Kirlilik Uyarısı (marel)
IF(MC2M_TERA_Icon_Status_L41)THEN 
    ActiveAlarm2[i2] := 8;
    i2 := i2 + 1;
END_IF

TotalAlarm2 := i2;
IF(TotalAlarm2 > 0)THEN
    IF ((MainLoop MOD 20)==0)THEN
        indexAlarm2 := (indexAlarm2 + 1) MOD TotalAlarm2;
        InfoNo6 := ActiveAlarm2[indexAlarm2];        
    END_IF
ELSE
    InfoNo6 := 0;
    indexAlarm2 := 0;
END_IF


/*

IF(MC2M_TERA_LampAlarm_L02)THEN
    ActiveAlarm[i] := 2;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L03)THEN
    ActiveAlarm[i] := 3;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L04)THEN
    ActiveAlarm[i] := 4;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L05)THEN
    ActiveAlarm[i] := 5;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L06)THEN
    ActiveAlarm[i] := 6;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L07)THEN
    ActiveAlarm[i] := 7;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L08)THEN
    ActiveAlarm[i] := 8;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L09)THEN
    ActiveAlarm[i] := 9;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L10)THEN
    ActiveAlarm[i] := 10;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L11)THEN
    ActiveAlarm[i] := 11;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L12)THEN
    ActiveAlarm[i] := 12;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L13)THEN
    ActiveAlarm[i] := 13;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L14)THEN
    ActiveAlarm[i] := 14;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L15)THEN
    ActiveAlarm[i] := 15;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L16)THEN
    ActiveAlarm[i] := 16;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L17)THEN
    ActiveAlarm[i] := 17;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L18)THEN
    ActiveAlarm[i] := 18;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L19)THEN
    ActiveAlarm[i] := 19;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L20)THEN
    ActiveAlarm[i] := 20;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L21)THEN
    ActiveAlarm[i] := 21;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L22)THEN
    ActiveAlarm[i] := 22;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L23)THEN
    ActiveAlarm[i] := 23;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L24)THEN
    ActiveAlarm[i] := 24;
    i := i + 1;
END_IF
IF(MC2M_TERA_LampAlarm_L25)THEN
    ActiveAlarm[i] := 25;
    i := i + 1;
END_IF

IF(MC2M_TERA_LampAlarm_L26)THEN
    ActiveAlarm[i] := 26;
    i := i + 1;
END_IF
*/

/*
TotalAlarm := i;
IF(TotalAlarm > 0)THEN
    IF ((MainLoop MOD 20)==0)THEN
        indexAlarm := (indexAlarm + 1) MOD TotalAlarm;
        InfoNo := ActiveAlarm[indexAlarm];
    END_IF
ELSE
    InfoNo := 0;
    indexAlarm := 0;
END_IF
*/

