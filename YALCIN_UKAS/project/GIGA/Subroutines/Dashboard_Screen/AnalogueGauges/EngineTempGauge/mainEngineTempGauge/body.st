//---------------- Moving Average --------------------------
// Initialize total value
TotalEngineTempGaugeInput := 0;

// shift right the array
FOR i:=0 TO (AverageQuantityEngineTempGauge-2) DO
    EngineTempGaugeInputArray[(AverageQuantityEngineTempGauge-1)-i] := EngineTempGaugeInputArray[(AverageQuantityEngineTempGauge-2)-i];
END_FOR

// INSERT new GIGAEngineTempValue value from the CAN BUS
EngineTempGaugeInputArray[0] := MC2M_TERA_EngineTempValue;

// Summation of the array
FOR i:=0 TO (AverageQuantityEngineTempGauge-1) DO
    TotalEngineTempGaugeInput := TotalEngineTempGaugeInput + EngineTempGaugeInputArray[i];
END_FOR

// Average OF the array
EngineTempGauge := REAL_TO_UINT(UDINT_TO_REAL(TotalEngineTempGaugeInput) / SINT_TO_REAL(AverageQuantityEngineTempGauge));



IF(EngineTempGauge<50)THEN
    GIGAEngineTempValue := INT_TO_UINT(EngineTempGaugeValue_Min);
ELSIF(EngineTempGauge<=90)THEN
    GIGAEngineTempValue := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineTempGauge), 50, 90, EngineTempGaugeValue_Min, EngineTempGaugeValue_Mid));
ELSIF(EngineTempGauge<=140)THEN
    GIGAEngineTempValue := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineTempGauge), 90, 130, EngineTempGaugeValue_Mid, EngineTempGaugeValue_Max));
ELSE
    GIGAEngineTempValue := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineTempGauge), 130, 150, EngineTempGaugeValue_Max, EngineTempGaugeValue_Max+200));
END_IF

/*
IF(MC2M_TERA_EngineTempValue<50)THEN
    GIGAEngineTempValue := INT_TO_UINT(EngineTempGaugeValue_Min);
ELSIF(MC2M_TERA_EngineTempValue<=90)THEN
    GIGAEngineTempValue := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_EngineTempValue), 50, 90, EngineTempGaugeValue_Min, EngineTempGaugeValue_Mid));
ELSIF(MC2M_TERA_EngineTempValue<=140)THEN
    GIGAEngineTempValue := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_EngineTempValue), 90, 130, EngineTempGaugeValue_Mid, EngineTempGaugeValue_Max));
ELSE
    GIGAEngineTempValue := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_EngineTempValue), 130, 150, EngineTempGaugeValue_Max, EngineTempGaugeValue_Max+200));
END_IF
*/
