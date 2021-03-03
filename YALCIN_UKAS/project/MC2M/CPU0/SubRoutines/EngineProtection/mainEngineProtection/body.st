// Engine protection override

//ENG PRO. OVRD BUTONUNA BASILDIKTAN SONRA LED 90 sn BOYUNCA YANACAK 30 sn  BLINK EDİP SÖNECEK.
Stat_EngProtectionSystemTimerOverride := (SHUTDN_EngProtectionSystemTimerOverride = Enum347_ACTIVE);
Stat_EngineProtection := Stat_EngProtectionSystemTimerOverride;

//TriggerEngineProtection.CLK := test_bit;                          //(IOM1_J2_18 - I/H)                                 
TriggerEngineProtection.CLK := IOMODE_DIGIN07_EngineProtection;     //(IOM1_J2_18 - I/H)             
TriggerEngineProtection;

IF(TriggerEngineProtection.Q)THEN
    Cmd_EngineProtection := TRUE;
    Stat_EngineProtection_Ctr1 := 0;
END_IF

//ENGINE PROTECTION INDIKASYON-BUZZER SENARYOSU 
//Stat_EngineProtection
IF (Cmd_EngineProtection AND Stat_EngineProtection_Ctr1 < 90000) THEN 
    Stat_EngineProtectionLED := TRUE; DOUT_EngineProtection := TRUE;
ELSIF (Cmd_EngineProtection AND Stat_EngineProtection_Ctr1 < 120000) THEN     
    Stat_EngineProtectionLED := Blink05; DOUT_EngineProtection := Blink05;
ELSIF (Cmd_EngineProtection AND Stat_EngineProtection_Ctr1 > 120000) THEN     
    Stat_EngineProtection_Ctr1 := 0; Cmd_EngineProtection := FALSE;
    Stat_EngineProtectionLED := FALSE; DOUT_EngineProtection := FALSE;
END_IF

/*
IF (Stat_EngineProtection AND Cmd_EngineProtection) THEN 
    Stat_EngineProtection_Ctr1 := Stat_EngineProtection_Ctr1 + 100;
ELSE 
    Stat_EngineProtection_Ctr1 := 0;Stat_EngineProtectionLED := FALSE;
END_IF
*/

IF (Cmd_EngineProtection) THEN
        Stat_EngineProtection_Ctr1 := Stat_EngineProtection_Ctr1 + 100;
        Stat_EngineProtectionERR := FALSE;
    IF (!Stat_EngineProtection) THEN
        //Engine Protection Override Devre disi
        Stat_EngineProtectionERR := TRUE;
        Stat_EngineProtectionLED := Blink05;
        DOUT_EngineProtection := Blink05;        
    END_IF
ELSE
    Stat_EngineProtection_Ctr1 := 0;Stat_EngineProtectionLED := FALSE; 
    Stat_EngineProtectionERR := FALSE;DOUT_EngineProtection := FALSE;
END_IF 


// OUTPUT Configuration -----------------------------
//Engine protecttion override TO ECM.15
MC2M_IOMODE_DOUT01_EngineProtection := NOT Cmd_EngineProtection; //IOM1_J2_15 O/L
//2MC2M_IOMODE_DOUT01_EngineProtection := FALSE; //IOM1_J2_15 O/L
