
/****************** Arka Hidrolik Kapı ******************************/ 
Cmd_HydraulicDoorOpened := !DIGIN_Back_HydDoorOpened;
Cmd_HydraulicDoorClosed := !DIGIN_Back_HydDoorClosed;

Stat_HydraulicDoorOpened := Cmd_HydraulicDoorOpened;

//BackDoor_OUT_Close Debounce 
IF (DIGIN_BackDoor_OUT_Close) THEN 
    IF (NOT Stat_BackDoor_OUT_Close) THEN 
        BackDoor_OUT_Close_DBCtr := BackDoor_OUT_Close_DBCtr + 100;
    END_IF
ELSE 
    BackDoor_OUT_Close_DBCtr := 0;
END_IF

IF (DIGIN_BackDoor_OUT_Close AND BackDoor_OUT_Close_DBCtr > ButtonDebounceVal ) THEN 
    Stat_BackDoor_OUT_Close:=TRUE;
ELSE    
    Stat_BackDoor_OUT_Close:=FALSE;
END_IF


//BackDoor_IN_Close Debounce 
IF (DIGIN_BackDoor_IN_Close) THEN 
    IF (NOT Stat_BackDoor_IN_Close) THEN 
        BackDoor_IN_Close_DBCtr := BackDoor_IN_Close_DBCtr + 100;
    END_IF
ELSE 
    BackDoor_IN_Close_DBCtr := 0;
END_IF

IF (DIGIN_BackDoor_IN_Close AND BackDoor_IN_Close_DBCtr > ButtonDebounceVal ) THEN 
    Stat_BackDoor_IN_Close:=TRUE;
ELSE    
    Stat_BackDoor_IN_Close:=FALSE;
END_IF

//BackDoor_OUT_Open Debounce
IF (DIGIN_BackDoor_OUT_Open) THEN 
    IF (NOT Stat_BackDoor_OUT_Open) THEN 
        BackDoor_OUT_Open_DBCtr := BackDoor_OUT_Open_DBCtr + 100;
    END_IF
ELSE 
    BackDoor_OUT_Open_DBCtr := 0;
END_IF

IF (DIGIN_BackDoor_OUT_Open AND BackDoor_OUT_Open_DBCtr > ButtonDebounceVal ) THEN 
    Stat_BackDoor_OUT_Open:=TRUE;
ELSE    
    Stat_BackDoor_OUT_Open:=FALSE;
END_IF

//BackDoor_IN_Open Debounce
IF (DIGIN_BackDoor_IN_Open) THEN 
    IF (NOT Stat_BackDoor_IN_Open) THEN 
        BackDoor_IN_Open_DBCtr := BackDoor_IN_Open_DBCtr + 100;
    END_IF
ELSE 
    BackDoor_IN_Open_DBCtr := 0;
END_IF

IF (DIGIN_BackDoor_IN_Open AND BackDoor_IN_Open_DBCtr > ButtonDebounceVal ) THEN 
    Stat_BackDoor_IN_Open:=TRUE;
ELSE    
    Stat_BackDoor_IN_Open:=FALSE;
END_IF

//BackDoor_Handle_Press Debounce (aaslan-a16)

IF (DIGIN_BackDoorHandle_Open) THEN 
    IF (NOT Stat_BackDoorHandle_Open) THEN 
        BackDoorHandle_Open_DBCtr := BackDoorHandle_Open_DBCtr + 100;
    END_IF
ELSE 
    BackDoorHandle_Open_DBCtr := 0;
END_IF

IF (DIGIN_BackDoorHandle_Open AND BackDoorHandle_Open_DBCtr > 200 ) THEN 
    Stat_BackDoorHandle_Open:=TRUE;
ELSE    
    Stat_BackDoorHandle_Open:=FALSE;
END_IF

//HydraulicDoorClosed Debounce 
IF (Cmd_HydraulicDoorClosed) THEN 
    IF (NOT Stat_HydraulicDoorClosed) THEN 
        HydraulicDoorClosed_DBCtr := HydraulicDoorClosed_DBCtr + 100;
    END_IF
ELSE 
    HydraulicDoorClosed_DBCtr := 0;
END_IF

IF (Cmd_HydraulicDoorClosed AND HydraulicDoorClosed_DBCtr > HydraulicDoorClosedDebounceVal ) THEN 
    Stat_HydraulicDoorClosed := TRUE;
ELSE    
    Stat_HydraulicDoorClosed := FALSE;
END_IF

//Alt taraftaki kodun yerine Katar_5arac yazılımından alındı (marel)
/*
DOUT_RearDoorControlValf_1:= (Stat_BackDoor_IN_Open || Stat_BackDoor_OUT_Open) AND 
                             (!Stat_BackDoor_IN_Close) AND (!Stat_BackDoor_OUT_Close) 
                              AND ( !Stat_HydraulicDoorOpened) AND (!Stat_MineLock);
DOUT_RearDoorControlValf_2:= (Stat_BackDoor_IN_Close || Stat_BackDoor_OUT_Close) AND 
                             (NOT Stat_BackDoor_IN_Open) AND (!Stat_BackDoor_OUT_Open)
                              AND (!Stat_HydraulicDoorClosed) AND (!Stat_MineLock);
*/

// arka kapı açma için 
DOUT_RearDoorControlValf_1 := (((Stat_BackDoor_IN_Open XOR Stat_BackDoor_OUT_Open) AND (!Stat_HydraulicDoorClosed)) // Hidrolik kapı kolu geçici iptal edildi(aaslan)
                                    OR (Stat_BackDoorHandle_Open AND Stat_HydraulicDoorClosed)) AND (!Stat_BackDoor_IN_Close) 
                                    AND (!Stat_BackDoor_OUT_Close) AND (!Stat_HydraulicDoorOpened) AND (!Stat_MineLock);
// arka kapı kapatma için 
DOUT_RearDoorControlValf_2 := (Stat_BackDoor_IN_Close XOR Stat_BackDoor_OUT_Close) AND 
                             (!Stat_BackDoor_IN_Open) AND (!Stat_BackDoor_OUT_Open) AND (!Stat_BackDoorHandle_Open)
                              AND (!Stat_HydraulicDoorClosed) AND (!Stat_MineLock);



/************Arka kapı testi için yazıldı**************/
/*IF (!Stat_BackDoor_OUT_Close) THEN
CASE backDoorTest_state OF
    // Arka kapı dış açma butonunu bekle 
    0:
    IF (Stat_BackDoor_OUT_Open) THEN
        backDoorTest_tout := 50;
        backDoorTest_state := 1;
    END_IF
    // Buzerı çalıştır MOD: initialization ve 5sn bekle
    1:
    backDoorTest_buzzer := 1;
    IF (backDoorTest_tout > 0) THEN
        backDoorTest_tout := backDoorTest_tout - 1;
    ELSE
        backDoorTest_state := 2;
    END_IF
    // Buzzer MOD: progress, kapıyı aç ve 5 sn bekle
    2:
    backDoorTest_buzzer := 2;
    IF (!Stat_HydraulicDoorOpened) THEN
        DOUT_RearDoorControlValf_1 := TRUE;
        DOUT_RearDoorControlValf_2 := FALSE;
        backDoorTest_tout := 100;
    ELSE
        DOUT_RearDoorControlValf_1 := FALSE;
        DOUT_RearDoorControlValf_2 := FALSE;
        IF (backDoorTest_tout > 0) THEN
            backDoorTest_tout := backDoorTest_tout - 1;
        ELSE
            backDoorTest_state := 3;
        END_IF
    END_IF
    // buzzer MOD: progress, kapıyı kapat 15sn bekle
    3:
    IF (!Stat_HydraulicDoorClosed) THEN
        DOUT_RearDoorControlValf_1 := FALSE;
        DOUT_RearDoorControlValf_2 := TRUE;
        backDoorTest_tout := 350;
    ELSE
        DOUT_RearDoorControlValf_1 := FALSE;
        DOUT_RearDoorControlValf_2 := FALSE;
        IF (backDoorTest_tout > 0) THEN
            backDoorTest_tout := backDoorTest_tout - 1;
            backDoorTest_buzzer := 1;
        ELSE
            backDoorTest_tout := 50;
            backDoorTest_prd := backDoorTest_prd + 1;
            backDoorTest_state := 1;
        END_IF
    END_IF
END_CASE
ELSE
    backDoorTest_state := 0;
    backDoorTest_buzzer := 0;
    DOUT_RearDoorControlValf_1 := FALSE;
    DOUT_RearDoorControlValf_2 := FALSE;
END_IF

MC2M_TERA_BackDoorTest_Prd := backDoorTest_prd;
MC2M_TERA_BackDoorTest_Buzzer := backDoorTest_buzzer;
*/
/*********************Silah Kulesi Kapısı **************************/
Cmd_GunTowerDoor_1 := DIGIN_GunTowerDoor_1;

