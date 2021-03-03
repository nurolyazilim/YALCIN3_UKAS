// Value to drive analog gauge on GIGA dashboard 

//GIGAFuelLevel := SINT_TO_UINT(MC2M_TERA_FuelLevel_1)*13;

//---------------- Moving Average --------------------------
// Initialize total value
TotalFuelLevelInput := 0;

// shift right the array
FOR i:=0 TO (AverageQuantityFuelLevel-2) DO
    FuelLevelInputArray[(AverageQuantityFuelLevel-1)-i] := FuelLevelInputArray[(AverageQuantityFuelLevel-2)-i];
END_FOR


// INSERT new GIGAFuelLevel value from the CAN BUS
FuelLevelInputArray[0] := SINT_TO_UINT(MC2M_TERA_FuelLevel_1);

// Summation of the array
FOR i:=0 TO (AverageQuantityFuelLevel-1) DO
    TotalFuelLevelInput := TotalFuelLevelInput + FuelLevelInputArray[i];
END_FOR

// Average OF the array
FuelLevel := REAL_TO_UINT(UDINT_TO_REAL(TotalFuelLevelInput) / SINT_TO_REAL(AverageQuantityFuelLevel));

IF(FuelLevel = 0)THEN
    GIGAFuelLevel := INT_TO_UINT(GIGAFuelLevelGaugeValue_Min);
ELSIF(FuelLevel <= 50)THEN
    GIGAFuelLevel := INT_TO_UINT(Interpolate(UINT_TO_INT(FuelLevel), 0, 50, GIGAFuelLevelGaugeValue_Min, GIGAFuelLevelGaugeValue_Mid));
ELSIF(FuelLevel <= 100)THEN
    GIGAFuelLevel := INT_TO_UINT(Interpolate(UINT_TO_INT(FuelLevel), 50, 100, GIGAFuelLevelGaugeValue_Mid, GIGAFuelLevelGaugeValue_Max));
ELSE
    GIGAFuelLevel := INT_TO_UINT(Interpolate(UINT_TO_INT(FuelLevel), 100, 120, GIGAFuelLevelGaugeValue_Max, GIGAFuelLevelGaugeValue_Max+200));
END_IF

/*
IF(MC2M_TERA_FuelLevel_1=0)THEN
    GIGAFuelLevel := INT_TO_UINT(GIGAFuelLevelGaugeValue_Min);
ELSIF(MC2M_TERA_FuelLevel_1<=50)THEN
    GIGAFuelLevel := INT_TO_UINT(Interpolate(SINT_TO_INT(MC2M_TERA_FuelLevel_1), 0, 50, GIGAFuelLevelGaugeValue_Min, GIGAFuelLevelGaugeValue_Mid));
ELSIF(MC2M_TERA_FuelLevel_1<=100)THEN
    GIGAFuelLevel := INT_TO_UINT(Interpolate(SINT_TO_INT(MC2M_TERA_FuelLevel_1), 50, 100, GIGAFuelLevelGaugeValue_Mid, GIGAFuelLevelGaugeValue_Max));
ELSE
    GIGAFuelLevel := INT_TO_UINT(Interpolate(SINT_TO_INT(MC2M_TERA_FuelLevel_1), 100, 120, GIGAFuelLevelGaugeValue_Max, GIGAFuelLevelGaugeValue_Max+200));
END_IF
*/
//    GIGAEngineSpeed  := REAL_TO_UINT((UINT_TO_REAL(MC2M_TERA_EngineSpeed) * 63.0)/100);