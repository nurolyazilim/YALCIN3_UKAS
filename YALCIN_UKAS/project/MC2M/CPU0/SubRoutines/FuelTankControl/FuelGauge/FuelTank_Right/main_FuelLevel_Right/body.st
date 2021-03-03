//---------------- Moving Average1 --------------------------
// Initialize total value
TotalFuelInput_R := 0;

// shift right the array
FOR i := 0 TO (AVGQUANTITYFUEL_R - 2) DO
    FuelInputArray_R[(AVGQUANTITYFUEL_R - 1) - i] := FuelInputArray_R[(AVGQUANTITYFUEL_R - 2) - i];
END_FOR

// INSERT new value from the sensor
    FuelInputArray_R[0] := AIN_Tank_Right_Level;
    
// Summation of the array
FOR i := 0 TO (AVGQUANTITYFUEL_R - 1) DO
    TotalFuelInput_R := TotalFuelInput_R + FuelInputArray_R[i];
END_FOR

// Average OF the array
FuelInputFiltered_R := REAL_TO_UINT(UDINT_TO_REAL(TotalFuelInput_R) / SINT_TO_REAL(AVGQUANTITYFUEL_R));
//----------------------------------------------------------

// Normalize the value from Fuel level sensor from 0 TO 100
IF ( FuelInputFiltered_R < 1 OR FuelInputFiltered_R > 200) THEN  //hata durumu
    FuelLevel_Normalized_R := 110;
ELSIF(FuelInputFiltered_R < FUELLEVEL0_ANALOG_R)THEN
    FuelLevel_Normalized_R := 0;
ELSIF(FuelInputFiltered_R <= FUELLEVEL1_ANALOG_R)THEN
    FuelLevel_Normalized_R := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_R), FUELLEVEL0_ANALOG_R, FUELLEVEL1_ANALOG_R, FUELLEVEL0_R, FUELLEVEL1_R));
ELSIF(FuelInputFiltered_R <= FUELLEVEL2_ANALOG_R)THEN
    FuelLevel_Normalized_R := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_R), FUELLEVEL1_ANALOG_R, FUELLEVEL2_ANALOG_R, FUELLEVEL1_R, FUELLEVEL2_R));
ELSIF(FuelInputFiltered_R <= FUELLEVEL3_ANALOG_R)THEN
    FuelLevel_Normalized_R := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_R), FUELLEVEL2_ANALOG_R, FUELLEVEL3_ANALOG_R, FUELLEVEL2_R, FUELLEVEL3_R));
ELSIF(FuelInputFiltered_R <= FUELLEVEL4_ANALOG_R)THEN
    FuelLevel_Normalized_R := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_R), FUELLEVEL3_ANALOG_R, FUELLEVEL4_ANALOG_R, FUELLEVEL3_R, FUELLEVEL4_R));
ELSE
    FuelLevel_Normalized_R := 100;
END_IF

IF (FuelLevel_Normalized_R <= 100) THEN
    FuelLevel_Normalized_R := 100 - FuelLevel_Normalized_R;
END_IF

//---------------- Moving Average2 --------------------------
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

// Initialize total value
TotalFuelInput2_R := 0;

// shift right the array
FOR i := 0 TO (AVGQUANTITYFUEL2_R - 2) DO
    FuelInputArray2_R[(AVGQUANTITYFUEL2_R - 1) - i] := FuelInputArray2_R[(AVGQUANTITYFUEL2_R - 2) - i];
END_FOR

// INSERT new value from the sensor
FuelInputArray2_R[0] := SINT_TO_UINT(FuelLevel_Normalized_R);
// Summation of the array
FOR i := 0 TO (AVGQUANTITYFUEL2_R - 1) DO
    TotalFuelInput2_R := TotalFuelInput2_R + FuelInputArray2_R[i];
END_FOR

// Average OF the array
IF ( NMSGUI_MC2M_fuel_level_right_touch ) THEN
    FuelLevel_Normalized2_R := NMSGUI_MC2M_fuel_level_right;
ELSE
    FuelLevel_Normalized2_R := REAL_TO_SINT(UDINT_TO_REAL(TotalFuelInput2_R) / SINT_TO_REAL(AVGQUANTITYFUEL2_R));
END_IF
