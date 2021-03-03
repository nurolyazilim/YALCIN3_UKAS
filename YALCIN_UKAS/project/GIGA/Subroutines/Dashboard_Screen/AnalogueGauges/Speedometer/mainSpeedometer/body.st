// Value to drive analog gauge on GIGA dashboard 

//---------------- Moving Average --------------------------
// Initialize total value
TotalSpeedometerInput := 0;

// shift right the array
FOR i:=0 TO (AverageQuantitySpeedometer-2) DO
    SpeedometerInputArray[(AverageQuantitySpeedometer-1)-i] := SpeedometerInputArray[(AverageQuantitySpeedometer-2)-i];
END_FOR



// INSERT new GIGASpeed value from the CAN BUS
SpeedometerInputArray[0] := MC2M_TERA_VehicleSpeed;

// Summation of the array
FOR i:=0 TO (AverageQuantitySpeedometer-1) DO
    TotalSpeedometerInput := TotalSpeedometerInput + SpeedometerInputArray[i];
END_FOR

// Average OF the array
Speedometer := REAL_TO_UINT(UDINT_TO_REAL(TotalSpeedometerInput) / SINT_TO_REAL(AverageQuantitySpeedometer));



IF(Speedometer=0)THEN
    GIGASpeed := INT_TO_UINT(GIGASpeedGaugeValue_Min);
ELSIF(Speedometer<=70)THEN
    GIGASpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(Speedometer), 0, 70, GIGASpeedGaugeValue_Min, GIGASpeedGaugeValue_Mid));
ELSIF(Speedometer<=140)THEN
    GIGASpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(Speedometer), 70, 140, GIGASpeedGaugeValue_Mid, GIGASpeedGaugeValue_Max));
ELSE
    GIGASpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(Speedometer), 140, 160, GIGASpeedGaugeValue_Max, GIGASpeedGaugeValue_Max+200));
END_IF

/*
IF(MC2M_TERA_VehicleSpeed=0)THEN
    GIGASpeed := INT_TO_UINT(GIGASpeedGaugeValue_Min);
ELSIF(MC2M_TERA_VehicleSpeed<=70)THEN
    GIGASpeed := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_VehicleSpeed), 0, 70, GIGASpeedGaugeValue_Min, GIGASpeedGaugeValue_Mid));
ELSIF(MC2M_TERA_VehicleSpeed<=140)THEN
    GIGASpeed := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_VehicleSpeed), 70, 140, GIGASpeedGaugeValue_Mid, GIGASpeedGaugeValue_Max));
ELSE
    GIGASpeed := INT_TO_UINT(Interpolate(USINT_TO_INT(MC2M_TERA_VehicleSpeed), 140, 160, GIGASpeedGaugeValue_Max, GIGASpeedGaugeValue_Max+200));
END_IF
*/