// Value to drive analog gauge on GIGA dashboard 

//GIGAEngineOilPressure  := REAL_TO_UINT((UINT_TO_REAL(MC2M_TERA_EngineOilPressure)*16.45));

//---------------- Moving Average --------------------------
// Initialize total value
TotalEngineOilPressureInput := 0;

// shift right the array
FOR i:=0 TO (AverageQuantityEngineOilPressure-2) DO
    EngineOilPressureInputArray[(AverageQuantityEngineOilPressure-1)-i] := EngineOilPressureInputArray[(AverageQuantityEngineOilPressure-2)-i];
END_FOR


// INSERT new GIGAEngineOilPressure value from the CAN BUS
EngineOilPressureInputArray[0] := MC2M_TERA_EngineOilPressure;

// Summation of the array
FOR i:=0 TO (AverageQuantityEngineOilPressure-1) DO
    TotalEngineOilPressureInput := TotalEngineOilPressureInput + EngineOilPressureInputArray[i];
END_FOR

// Average OF the array
EngineOilPressure := REAL_TO_UINT(UDINT_TO_REAL(TotalEngineOilPressureInput) / SINT_TO_REAL(AverageQuantityEngineOilPressure));


IF(EngineOilPressure=0)THEN
    GIGAEngineOilPressure := INT_TO_UINT(GIGAEngineOilPressureGaugeValue_Min);
ELSIF(EngineOilPressure<=40)THEN
    GIGAEngineOilPressure := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineOilPressure), 0, 40, GIGAEngineOilPressureGaugeValue_Min, GIGAEngineOilPressureGaugeValue_Mid));
ELSIF(EngineOilPressure<=80)THEN
    GIGAEngineOilPressure := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineOilPressure), 40, 80, GIGAEngineOilPressureGaugeValue_Mid, GIGAEngineOilPressureGaugeValue_Max));
ELSE
    GIGAEngineOilPressure := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineOilPressure), 80, 100, GIGAEngineOilPressureGaugeValue_Max, GIGAEngineOilPressureGaugeValue_Max+200));
END_IF

/*
IF(MC2M_TERA_EngineOilPressure=0)THEN
    GIGAEngineOilPressure := INT_TO_UINT(GIGAEngineOilPressureGaugeValue_Min);
ELSIF(MC2M_TERA_EngineOilPressure<=40)THEN
    GIGAEngineOilPressure := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_EngineOilPressure), 0, 40, GIGAEngineOilPressureGaugeValue_Min, GIGAEngineOilPressureGaugeValue_Mid));
ELSIF(MC2M_TERA_EngineOilPressure<=80)THEN
    GIGAEngineOilPressure := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_EngineOilPressure), 40, 80, GIGAEngineOilPressureGaugeValue_Mid, GIGAEngineOilPressureGaugeValue_Max));
ELSE
    GIGAEngineOilPressure := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_EngineOilPressure), 80, 100, GIGAEngineOilPressureGaugeValue_Max, GIGAEngineOilPressureGaugeValue_Max+200));
END_IF
*/

