// Variohm temperature sensor -40/+150 4mA-20mA
//---------------- Moving Average --------------------------
// Initialize total value
TotalTempInput_FuelT_R := 0;

// shift right the array
FOR i := 0 TO (AVGUANTITYTEMP_FUELT_R - 2) DO
    TempInputArray_FuelT_R[(AVGUANTITYTEMP_FUELT_R - 1) - i] := TempInputArray_FuelT_R[(AVGUANTITYTEMP_FUELT_R - 2) - i];
END_FOR

// INSERT new value from the sensor
    TempInputArray_FuelT_R[0] := AIN_FuelTankRight_Temp;//AIN_Tank_1_Temperature; (I/A)

// Summation of the array
FOR i := 0 TO (AVGUANTITYTEMP_FUELT_R - 1) DO
    TotalTempInput_FuelT_R := TotalTempInput_FuelT_R + TempInputArray_FuelT_R[i];
END_FOR

// Average OF the array
TempInputFiltered_FuelT_R := REAL_TO_UINT(UDINT_TO_REAL(TotalTempInput_FuelT_R) / SINT_TO_REAL(AVGUANTITYTEMP_FUELT_R));
//----------------------------------------------------------
// Normalize the value from Fuel level sensor from 0 TO 100

IF ( NMSGUI_MC2M_fuel_temp_left_touch ) THEN
    TempLevel_Normalized_FuelT_R := NMSGUI_MC2M_fuel_temp_right;
ELSE
    IF(TempInputFiltered_FuelT_R < TEMPLEVEL0_ANALOG_FUELT_R)THEN
        TempLevel_Normalized_FuelT_R := TEMPLEVEL0_FUELT_R;
    ELSIF(TempInputFiltered_FuelT_R <= TEMPLEVEL1_ANALOG_FUELT_R)THEN
        TempLevel_Normalized_FuelT_R := Interpolate(UINT_TO_INT(TempInputFiltered_FuelT_R), TEMPLEVEL0_ANALOG_FUELT_R, TEMPLEVEL1_ANALOG_FUELT_R, TEMPLEVEL0_FUELT_R, TEMPLEVEL1_FUELT_R);
    ELSE
        TempLevel_Normalized_FuelT_R := TEMPLEVEL1_FUELT_R;
    END_IF 
END_IF
