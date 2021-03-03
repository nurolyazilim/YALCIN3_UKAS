//---------------- Moving Average1 --------------------------
// Initialize total value
TotalFuelInput_L := 0;

// shift right the array
FOR i:=0 TO (AVGQUANTITYFUEL_L - 2) DO
    FuelInputArray_L[(AVGQUANTITYFUEL_L - 1) - i] := FuelInputArray_L[(AVGQUANTITYFUEL_L - 2) - i];
END_FOR

// INSERT new value from the sensor
    FuelInputArray_L[0] := AIN_Tank_Left_Level;


// Summation of the array
FOR i := 0 TO (AVGQUANTITYFUEL_L - 1) DO
    TotalFuelInput_L := TotalFuelInput_L + FuelInputArray_L[i];
END_FOR

// Average OF the array
FuelInputFiltered_L := REAL_TO_UINT(UDINT_TO_REAL(TotalFuelInput_L) / SINT_TO_REAL(AVGQUANTITYFUEL_L));
//----------------------------------------------------------

// Normalize the value from Fuel level sensor from 0 TO 100
IF ( FuelInputFiltered_L < 0 OR FuelInputFiltered_L > 15000) THEN  //hata durumu Şamandıra için (FuelInputFiltered_L < 2 OR FuelInputFiltered_L > 200)
    FuelLevel_Normalized_L := 110;
ELSIF(FuelInputFiltered_L < FUELLEVEL0_ANALOG_L)THEN
    FuelLevel_Normalized_L := 0;
ELSIF(FuelInputFiltered_L <= FUELLEVEL1_ANALOG_L)THEN
    FuelLevel_Normalized_L := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_L), FUELLEVEL0_ANALOG_L, FUELLEVEL1_ANALOG_L, FUELLEVEL0_L, FUELLEVEL1_L));
ELSIF(FuelInputFiltered_L <= FUELLEVEL2_ANALOG_L)THEN
    FuelLevel_Normalized_L := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_L), FUELLEVEL1_ANALOG_L, FUELLEVEL2_ANALOG_L, FUELLEVEL1_L, FUELLEVEL2_L));
ELSIF(FuelInputFiltered_L <= FUELLEVEL3_ANALOG_L)THEN
    FuelLevel_Normalized_L := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_L), FUELLEVEL2_ANALOG_L, FUELLEVEL3_ANALOG_L, FUELLEVEL2_L, FUELLEVEL3_L));
ELSIF(FuelInputFiltered_L <= FUELLEVEL4_ANALOG_L)THEN
    FuelLevel_Normalized_L := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_L), FUELLEVEL3_ANALOG_L, FUELLEVEL4_ANALOG_L, FUELLEVEL3_L, FUELLEVEL4_L));
ELSIF(FuelInputFiltered_L <= FUELLEVEL5_ANALOG_L)THEN
    FuelLevel_Normalized_L := INT_TO_SINT(Interpolate(UINT_TO_INT(FuelInputFiltered_L), FUELLEVEL4_ANALOG_L, FUELLEVEL5_ANALOG_L, FUELLEVEL4_L, FUELLEVEL5_L));
ELSE
    FuelLevel_Normalized_L := 100;
END_IF

/* Direnç kullanılırken terslemek için yapılıyor
IF (FuelLevel_Normalized_L <= 100) THEN
    FuelLevel_Normalized_L:= 100 - FuelLevel_Normalized_L;
END_IF
*/

//---------------- Moving Average2 --------------------------
///////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////

// Initialize total value
TotalFuelInput2_L := 0;

// shift right the array
FOR i := 0 TO (AVGQUANTITYFUEL2_L - 2) DO
    FuelInputArray2_L[(AVGQUANTITYFUEL2_L - 1) - i] := FuelInputArray2_L[(AVGQUANTITYFUEL2_L - 2) - i];
END_FOR

// INSERT new value from the sensor
FuelInputArray2_L[0] := SINT_TO_UINT(FuelLevel_Normalized_L);
// Summation of the array
FOR i := 0 TO (AVGQUANTITYFUEL2_L - 1) DO
    TotalFuelInput2_L := TotalFuelInput2_L + FuelInputArray2_L[i];
END_FOR

// Average OF the array
IF ( NMSGUI_MC2M_fuel_level_left_touch ) THEN
    FuelLevel_Normalized2_L := NMSGUI_MC2M_fuel_level_left;
ELSE
    FuelLevel_Normalized2_L := REAL_TO_SINT(UDINT_TO_REAL(TotalFuelInput2_L) / SINT_TO_REAL(AVGQUANTITYFUEL2_L));
END_IF
