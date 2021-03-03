//1.---------MC2M_GIGA_ServiceBrake1 Moving Average-----------
// Initialize total value
TotalGIGA_ServiceBrake1Input := 0;
// Shift right the array
FOR i:=0 TO (AverageQuantityGIGA_ServiceBrake1-2) DO
    GIGA_ServiceBrake1InputArray[(AverageQuantityGIGA_ServiceBrake1-1)-i] := GIGA_ServiceBrake1InputArray[(AverageQuantityGIGA_ServiceBrake1-2)-i];
END_FOR
// INSERT new GIGA_ServiceBrake1 value from the CAN BUS
GIGA_ServiceBrake1InputArray[0] := MC2M_TERA_ServiceBrake1;
//GIGA_ServiceBrake1InputArray[0] := MC2M_GIGA_ServiceBrake1;
// Summation of the array
FOR i:=0 TO (AverageQuantityGIGA_ServiceBrake1-1) DO
    TotalGIGA_ServiceBrake1Input := TotalGIGA_ServiceBrake1Input + GIGA_ServiceBrake1InputArray[i];
END_FOR
// Average OF the array
ServiceBrake1InputFiltered := REAL_TO_USINT(UDINT_TO_REAL(TotalGIGA_ServiceBrake1Input) / SINT_TO_REAL(AverageQuantityGIGA_ServiceBrake1));
GIGA_ServiceBrake1 := ServiceBrake1InputFiltered  +  GIGABarGaugeOverride;
IF GIGA_ServiceBrake1 > 100 THEN
    GIGA_ServiceBrake1 := 100;
END_IF
//2.---------MC2M_GIGA_ServiceBrake2 Moving Average-----------
// Initialize total value
TotalGIGA_ServiceBrake2Input := 0;
// Shift right the array
FOR i:=0 TO (AverageQuantityGIGA_ServiceBrake2-2) DO
    GIGA_ServiceBrake2InputArray[(AverageQuantityGIGA_ServiceBrake2-1)-i] := GIGA_ServiceBrake2InputArray[(AverageQuantityGIGA_ServiceBrake2-2)-i];
END_FOR
// INSERT new GIGA_ServiceBrake1 value from the CAN BUS
GIGA_ServiceBrake2InputArray[0] := MC2M_TERA_ServiceBrake2;
//GIGA_ServiceBrake2InputArray[0] := MC2M_GIGA_ServiceBrake2;
// Summation of the array
FOR i:=0 TO (AverageQuantityGIGA_ServiceBrake2-1) DO
    TotalGIGA_ServiceBrake2Input := TotalGIGA_ServiceBrake2Input + GIGA_ServiceBrake2InputArray[i];
END_FOR
// Average OF the array
ServiceBrake2InputFiltered := REAL_TO_USINT(UDINT_TO_REAL(TotalGIGA_ServiceBrake2Input) / SINT_TO_REAL(AverageQuantityGIGA_ServiceBrake2));
GIGA_ServiceBrake2 := ServiceBrake2InputFiltered  +  GIGABarGaugeOverride;
//GIGA_ServiceBrake2 := GIGA_ServiceBrake2;
IF GIGA_ServiceBrake2 > 100 THEN
    GIGA_ServiceBrake2 := 100;
END_IF

//3.---------MC2M_GIGA_ParkingBrakePressure Moving Average-----------
// Initialize total value
TotalGIGA_ParkingBrakePressureInput := 0;
// Shift right the array
FOR i:=0 TO (AverageQuantityGIGA_ParkingBrakePressure-2) DO
    GIGA_ParkingBrakePressureInputArray[(AverageQuantityGIGA_ParkingBrakePressure-1)-i] := GIGA_ParkingBrakePressureInputArray[(AverageQuantityGIGA_ParkingBrakePressure-2)-i];
END_FOR
// INSERT new GIGA_ServiceBrake1 value from the CAN BUS
GIGA_ParkingBrakePressureInputArray[0] := MC2M_TERA_ParkingBrakePressure;
//GIGA_ParkingBrakePressureInputArray[0] := MC2M_GIGA_ParkingBrakePressure;
// Summation of the array
FOR i:=0 TO (AverageQuantityGIGA_ParkingBrakePressure-1) DO
    TotalGIGA_ParkingBrakePressureInput := TotalGIGA_ParkingBrakePressureInput + GIGA_ParkingBrakePressureInputArray[i];
END_FOR
// Average OF the array
ParkingBrakePressureInputFiltered := REAL_TO_USINT(UDINT_TO_REAL(TotalGIGA_ParkingBrakePressureInput) / SINT_TO_REAL(AverageQuantityGIGA_ParkingBrakePressure));
GIGA_ParkingBrakePressure := ParkingBrakePressureInputFiltered + GIGABarGaugeOverride;
IF GIGA_ParkingBrakePressure > 100 THEN
    GIGA_ParkingBrakePressure := 100;
END_IF

//4.---------MC2M_GIGA_AccessoryPressure Moving Average-----------
// Initialize total value
TotalGIGA_AccessoryPressureInput := 0;
// Shift right the array
FOR i:=0 TO (AverageQuantityGIGA_AccessoryPressure-2) DO
    GIGA_AccessoryPressureInputArray[(AverageQuantityGIGA_AccessoryPressure-1)-i] := GIGA_AccessoryPressureInputArray[(AverageQuantityGIGA_AccessoryPressure-2)-i];
END_FOR
// INSERT new GIGA_ServiceBrake1 value from the CAN BUS
GIGA_AccessoryPressureInputArray[0] := MC2M_TERA_AccessoryPressure;
//GIGA_AccessoryPressureInputArray[0] := MC2M_GIGA_AccessoryPressure;
// Summation of the array
FOR i:=0 TO (AverageQuantityGIGA_AccessoryPressure-1) DO
    TotalGIGA_AccessoryPressureInput := TotalGIGA_AccessoryPressureInput + GIGA_AccessoryPressureInputArray[i];
END_FOR
// Average OF the array
AccessoryPressureInputFiltered := REAL_TO_USINT(UDINT_TO_REAL(TotalGIGA_AccessoryPressureInput) / SINT_TO_REAL(AverageQuantityGIGA_AccessoryPressure));
GIGA_AccessoryPressure := AccessoryPressureInputFiltered + GIGABarGaugeOverride;
//GIGA_AccessoryPressure := GIGA_AccessoryPressure;
IF GIGA_AccessoryPressure > 100 THEN
    GIGA_AccessoryPressure := 100;
END_IF

IF( NMSGUI_MC2M_hydraulic_tank_pressure_touch ) THEN
   GIGA_HyraulicLevel := NMSGUI_MC2M_hydraulic_tank_pressure;
ELSE
   GIGA_HyraulicLevel := INT_TO_USINT(MC2M_TERA_DIAG_PresLevel_Normalized); // sint 'den int 'e değiştirildi (aaslan)
END_IF


IF ( GIGA_HyraulicLevel < 20 OR GIGA_HyraulicLevel > 70 OR test) THEN
    IF ( hydraulicPressureTimer > 100 ) THEN
        Stat_Buzzer := TRUE;
        hydraulicPressureTimer := 101;
        IF ( buzzertimer > 20 ) THEN
            Buzzer_Frequency := 700;
            buzzertimer := 21;
        ELSE
            Buzzer_Frequency := 0;
            buzzertimer := buzzertimer + 1;
        END_IF
    ELSE
        hydraulicPressureTimer := hydraulicPressureTimer + 1;
        Stat_Buzzer := FALSE;
        buzzertimer := 0;
    END_IF
ELSE
    hydraulicPressureTimer := 0;
    Stat_Buzzer := FALSE;
    buzzertimer := 0;
END_IF
//GIGA_HyraulicLevel :=GIGA_HyraulicLevel;

IF( NMSGUI_MC2M_hydraulic_tank_temp_touch ) THEN
    GIGA_HyraulicTemp := NMSGUI_MC2M_hydraulic_tank_temp;
ELSE
    GIGA_HyraulicTemp := INT_TO_SINT(MC2M_TERA_DIAG_HTempLevel_Normalized); // sint 'den int 'e değiştirildi (aaslan)
END_IF
//GIGA_HyraulicTemp :=GIGA_HyraulicTemp;

GIGA_VVRPump := MC2M_TERA_DIAG_VvrPump;
GIGA_VVRPumpTrigger := MC2M_TERA_DIAG_VVRPumpTrigger;
GIGA_CACTemp := MC2M_TERA_DIAG_CACTemp;
GIGA_RadiatorTemp := MC2M_TERA_RadiatorTemp;
//MC2M_GIGA_ServiceBrake1 := MC2M_GIGA_ServiceBrake1;
//
//MC2M_GIGA_ServiceBrake2 := MC2M_GIGA_ServiceBrake2; 
//
//MC2M_GIGA_ParkingBrakePressure := MC2M_GIGA_ParkingBrakePressure; 
//
//MC2M_GIGA_AccessoryPressure := MC2M_GIGA_AccessoryPressure; 

// USINT 
//MC2M_GIGA_ServiceBrake1
//MC2M_GIGA_ServiceBrake2
//MC2M_GIGA_ParkingBrakePressure
//MC2M_GIGA_AccessoryPressure
