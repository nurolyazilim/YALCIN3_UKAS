    //Backlight := Backlight_prev;
    led_tmp := led_tmp_prev;
    //MC2M_TERA_DIAG_Stat_4x4
    mainAnalogGauges;
    mainDigitalGauges;    
    mainDiffLock;    
    LampAlarm;
    //MC2M_TERA_Icon_Status_L08
    //MC2M_TERA_Icon_Status_L08?EngineProtectionERROnScreen:nullString
    //EngineProtectionERROnScreen := 'Engine Protection OverrideYETERSiZ BASINC';
    EngineProtectionERROnScreen:= CONCAT( ' Engine Protection ',
                                          '$L','Override Devre Disi'
                                        );                                    
    //


//---------------- Moving average for battery level --------------------------
// Initialize total value
TotalInput_BatteryLevel := 0;

// shift right the array
FOR i2:=0 TO (AverageQuantity_BatteryLevel-2) DO
    InputArray_BatteryLevel[(AverageQuantity_BatteryLevel-1)-i2] := InputArray_BatteryLevel[(AverageQuantity_BatteryLevel-2)-i2];
END_FOR

// INSERT new value from the sensor

InputArray_BatteryLevel[0] := MC2M_TERA_BatteryLevel;

// Summation of the array
FOR i2:=0 TO (AverageQuantity_BatteryLevel-1) DO
    TotalInput_BatteryLevel := TotalInput_BatteryLevel + InputArray_BatteryLevel[i2];
END_FOR

// Average of the array
InputFiltered_BatteryLevel := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_BatteryLevel) / SINT_TO_REAL(AverageQuantity_BatteryLevel));

AlarmState_BatteryLevel := (InputFiltered_BatteryLevel < Limit_BatteryLevel);







    IF (MC2M_TERA_Icon_Status_L38) THEN 
        Cmd_Buzzer_Ctr := Cmd_Buzzer_Ctr + 100;
    ELSE 
        Cmd_Buzzer_Ctr := 0;Stat_Buzzer := FALSE;
        Buzzer_Frequency := 0;        
    END_IF

    IF (MC2M_TERA_Icon_Status_L38 AND Cmd_Buzzer_Ctr < 800) THEN 
        Stat_Buzzer := TRUE;
        Buzzer_Frequency := 1000;
    ELSIF (MC2M_TERA_Icon_Status_L38 AND Cmd_Buzzer_Ctr < 1600) THEN     
        Stat_Buzzer := FALSE;
        Buzzer_Frequency := 0;
    ELSIF (MC2M_TERA_Icon_Status_L38 AND Cmd_Buzzer_Ctr > 1600) THEN     
        Cmd_Buzzer_Ctr := 0;
        Buzzer_Frequency := 0;        
    END_IF

    IF (BIT_Test_Init) THEN 
        Cmd_Buzzer_Ctr2 := Cmd_Buzzer_Ctr2 + 1;
    ELSE 
        Cmd_Buzzer_Ctr2 := 0;
    END_IF

    //SaliLedOverride := TRUE; //20150728_01 SALI GÜNÜ SUNUMU İÇİN  
    IF (BIT_Test_Init AND Cmd_Buzzer_Ctr2 < 50) THEN 
        IF EngineSpeed <400 THEN 
            GIGALedOverride := TRUE; 
            GIGAGaugeOverride0 := 1250;//1235;
            GIGAGaugeOverride1 := 1250;//1050;
            GIGAGaugeOverride2 := 1815;//1020;
            GIGAGaugeOverride3 := 1230;//1810; 2500        
            GIGAGaugeOverride4 := 1230;//1810; 2500        
            GIGAGaugeOverride5 := 2420;//1810; 2500        
            //GIGABarGaugeOverride := 120;
            GIGABarGaugeOverride := 80;
            GIGAEngineOilPressure := 0;
            GIGAEngineTempValue := 0;
            GIGAEngineSpeed := 0;
            GIGATransOilTemperature :=0;
            GIGAFuelLevel := 0;
            GIGASpeed := 0;
        ELSE
            GIGALedOverride := FALSE;
            GIGAGaugeOverride0 := 0;//1235;
            GIGAGaugeOverride1 := 0;//1235;
            GIGAGaugeOverride2 := 0;//1020;
            GIGAGaugeOverride3 := 0;//1810; 2500        
            GIGAGaugeOverride4 := 0;//1810; 2500        
            GIGAGaugeOverride5 := 0;//1810; 2500                
            GIGABarGaugeOverride := 0;     
        END_IF 
    ELSIF (BIT_Test_Init AND Cmd_Buzzer_Ctr2 < 100) THEN     
        GIGALedOverride := FALSE;
        GIGAGaugeOverride0 := 0;//1235;
        GIGAGaugeOverride1 := 0;//1235;
        GIGAGaugeOverride2 := 0;//1020;
        GIGAGaugeOverride3 := 0;//1810; 2500        
        GIGAGaugeOverride4 := 0;//1810; 2500        
        GIGAGaugeOverride5 := 0;//1810; 2500                
        GIGABarGaugeOverride := 0; 
    ELSIF (BIT_Test_Init AND Cmd_Buzzer_Ctr2 > 100) THEN     
        BIT_Test_Init := FALSE;
        GIGAGaugeOverride0 := 0;//1235;
        GIGAGaugeOverride1 := 0;//1235;
        GIGAGaugeOverride2 := 0;//1020;
        GIGAGaugeOverride3 := 0;//1810; 2500        
        GIGAGaugeOverride4 := 0;//1810; 2500        
        GIGAGaugeOverride5 := 0;//1810; 2500                
        GIGABarGaugeOverride := 0;         
    END_IF


GIGA_MC2M_GIGAOdometerBackup := GIGAOdometerBackup; 

/*
Buzzer_Frequency := 1000 * BOOL_TO_UINT(MC2M_TERA_WaterInFuel_Stat AND MC2M_TERA_DIAG_INP45) * toggle_500ms; //Water in Fuel Warning Buzzer (marel)
IF((MainLoop MOD 5) == 0 ) THEN
    toggle_500ms := NOT toggle_500ms;
END_IF
*/
/****Arka kapı testi için yazıldı(geçici)******/    
/*
IF (MC2M_TERA_BackDoorTest_Buzzer == 1) THEN
    Buzzer_Frequency := 700 * BOOL_TO_UINT(MC2M_TERA_DIAG_INP45 AND toggle_500ms);
ELSIF (MC2M_TERA_BackDoorTest_Buzzer == 2) THEN
    Buzzer_Frequency := 700 * BOOL_TO_UINT(MC2M_TERA_DIAG_INP45 AND toggle_200ms);
ELSE
    Buzzer_Frequency := 0;
END_IF
*/

IF((MainLoop MOD 5) == 0 ) THEN
    toggle_500ms := NOT toggle_500ms;
END_IF
IF((MainLoop MOD 2) == 0 ) THEN
    toggle_200ms := NOT toggle_200ms;
END_IF