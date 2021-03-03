// Value to drive analog gauge on GIGA dashboard 

 //   GIGATransOilTemperature  := REAL_TO_UINT((UINT_TO_REAL(MC2M_TERA_TransOilTemperature)*5.45));

//---------------- Moving Average --------------------------
// Initialize total value
TotalTransOilTemperatureInput := 0;

// shift right the array
FOR i:=0 TO (AverageQuantityTransOilTemperature-2) DO
    TransOilTemperatureInputArray[(AverageQuantityTransOilTemperature-1)-i] := TransOilTemperatureInputArray[(AverageQuantityTransOilTemperature-2)-i];
END_FOR


// INSERT new GIGAEngineOilPressure value from the CAN BUS
TransOilTemperatureInputArray[0] := MC2M_TERA_TransOilTemperature;

// Summation of the array
FOR i:=0 TO (AverageQuantityTransOilTemperature-1) DO
    TotalTransOilTemperatureInput := TotalTransOilTemperatureInput + TransOilTemperatureInputArray[i];
END_FOR

// Average OF the array
TransOilTemperature := REAL_TO_UINT(UDINT_TO_REAL(TotalTransOilTemperatureInput) / SINT_TO_REAL(AverageQuantityTransOilTemperature));


IF(TransOilTemperature<=70)THEN
    GIGATransOilTemperature := INT_TO_UINT(GIGATransOilTemperatureGaugeValue_Min);
ELSIF(TransOilTemperature<=120)THEN
    GIGATransOilTemperature := INT_TO_UINT(Interpolate(UINT_TO_INT(TransOilTemperature), 70, 120, GIGATransOilTemperatureGaugeValue_Min, GIGATransOilTemperatureGaugeValue_Mid));
ELSIF(TransOilTemperature<=170)THEN
    GIGATransOilTemperature := INT_TO_UINT(Interpolate(UINT_TO_INT(TransOilTemperature), 120, 170, GIGATransOilTemperatureGaugeValue_Mid, GIGATransOilTemperatureGaugeValue_Max));
ELSE
    GIGATransOilTemperature := INT_TO_UINT(Interpolate(UINT_TO_INT(TransOilTemperature), 170, 190, GIGATransOilTemperatureGaugeValue_Max, GIGATransOilTemperatureGaugeValue_Max+200));
END_IF

/*
IF(MC2M_TERA_TransOilTemperature=70)THEN
    GIGATransOilTemperature := INT_TO_UINT(GIGATransOilTemperatureGaugeValue_Min);
ELSIF(MC2M_TERA_TransOilTemperature<=120)THEN
    GIGATransOilTemperature := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_TransOilTemperature), 70, 120, GIGATransOilTemperatureGaugeValue_Min, GIGATransOilTemperatureGaugeValue_Mid));
ELSIF(MC2M_TERA_TransOilTemperature<=170)THEN
    GIGATransOilTemperature := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_TransOilTemperature), 120, 170, GIGATransOilTemperatureGaugeValue_Mid, GIGATransOilTemperatureGaugeValue_Max));
ELSE
    GIGATransOilTemperature := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_TransOilTemperature), 170, 190, GIGATransOilTemperatureGaugeValue_Max, GIGATransOilTemperatureGaugeValue_Max+200));
END_IF
*/
//    GIGAEngineSpeed  := REAL_TO_UINT((UINT_TO_REAL(MC2M_TERA_EngineSpeed) * 63.0)/100);
