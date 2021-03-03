// Variohm temperature sensor -40/+150 4mA-20mA
//---------------- Moving Average --------------------------
// Initialize total value
TotalTempInput_FuelT_L := 0;

// shift right the array
FOR i := 0 TO (AVGUANTITYTEMP_FUELT_L - 2) DO
    TempInputArray_FuelT_L[(AVGUANTITYTEMP_FUELT_L - 1) - i] := TempInputArray_FuelT_L[(AVGUANTITYTEMP_FUELT_L - 2) - i];
END_FOR

// INSERT new value from the sensor
    TempInputArray_FuelT_L[0] := AIN_FuelTankLeft_Temp;//AIN_Tank_1_Temperature; (I/A)

// Summation of the array
FOR i := 0 TO (AVGUANTITYTEMP_FUELT_L - 1) DO
    TotalTempInput_FuelT_L := TotalTempInput_FuelT_L + TempInputArray_FuelT_L[i];
END_FOR

// Average OF the array
TempInputFiltered_FuelT_L := REAL_TO_UINT(UDINT_TO_REAL(TotalTempInput_FuelT_L) / SINT_TO_REAL(AVGUANTITYTEMP_FUELT_L));
//----------------------------------------------------------
// Normalize the value from Fuel level sensor from 0 TO 150
IF ( NMSGUI_MC2M_fuel_temp_left_touch ) THEN
    TempLevel_Normalized_FuelT_L := NMSGUI_MC2M_fuel_temp_left;
ELSE
    IF(TempInputFiltered_FuelT_L < TEMPLEVEL0_ANALOG_FUELT_L)THEN
        TempLevel_Normalized_FuelT_L := TEMPLEVEL0_FUELT_L;
    ELSIF(TempInputFiltered_FuelT_L <= TEMPLEVEL1_ANALOG_FUELT_L)THEN
        TempLevel_Normalized_FuelT_L := Interpolate(UINT_TO_INT(TempInputFiltered_FuelT_L), TEMPLEVEL0_ANALOG_FUELT_L, TEMPLEVEL1_ANALOG_FUELT_L, TEMPLEVEL0_FUELT_L, TEMPLEVEL1_FUELT_L);
    ELSE
        TempLevel_Normalized_FuelT_L := TEMPLEVEL1_FUELT_L;
    END_IF 
END_IF


