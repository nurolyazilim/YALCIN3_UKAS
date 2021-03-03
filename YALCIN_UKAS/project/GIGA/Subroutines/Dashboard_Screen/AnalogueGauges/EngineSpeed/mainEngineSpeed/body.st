// Value to drive analog gauge on GIGA dashboard 

//GIGAEngineSpeed  := REAL_TO_UINT((UINT_TO_REAL(MC2M_TERA_EngineSpeed) * 63.0)/100);

//---------------- Moving Average --------------------------
// Initialize total value
TotalEngineSpeedInput := 0;

// shift right the array
FOR i:=0 TO (AverageQuantityEngineSpeed-2) DO
    EngineSpeedInputArray[(AverageQuantityEngineSpeed-1)-i] := EngineSpeedInputArray[(AverageQuantityEngineSpeed-2)-i];
END_FOR



// INSERT new GIGAEngineSpeed value from the CAN BUS
EngineSpeedInputArray[0] := MC2M_TERA_EngineSpeed;

// Summation of the array
FOR i:=0 TO (AverageQuantityEngineSpeed-1) DO
    TotalEngineSpeedInput := TotalEngineSpeedInput + EngineSpeedInputArray[i];
END_FOR

// Average OF the array
EngineSpeed := REAL_TO_UINT(UDINT_TO_REAL(TotalEngineSpeedInput) / SINT_TO_REAL(AverageQuantityEngineSpeed));

IF(EngineSpeed=0)THEN
    GIGAEngineSpeed := INT_TO_UINT(GIGAEngineSpeedGaugeValue_1);
ELSIF(EngineSpeed<=700)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineSpeed), 0, 700, GIGAEngineSpeedGaugeValue_1, GIGAEngineSpeedGaugeValue_2));
ELSIF(EngineSpeed<=1200)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineSpeed), 700, 1200, GIGAEngineSpeedGaugeValue_2, GIGAEngineSpeedGaugeValue_3));
ELSIF(EngineSpeed<=2000)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineSpeed), 1200, 2000, GIGAEngineSpeedGaugeValue_3, GIGAEngineSpeedGaugeValue_4));
ELSIF(EngineSpeed<=2600)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineSpeed), 2000, 2600, GIGAEngineSpeedGaugeValue_4, GIGAEngineSpeedGaugeValue_5));
ELSE
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(EngineSpeed), 2600, 2800, GIGAEngineSpeedGaugeValue_5, GIGAEngineSpeedGaugeValue_5+200));
END_IF


/*
IF(MC2M_TERA_EngineSpeed=0)THEN
    GIGAEngineSpeed := INT_TO_UINT(GIGAEngineSpeedGaugeValue_1);
ELSIF(MC2M_TERA_EngineSpeed<=700)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(MC2M_TERA_EngineSpeed), 0, 700, GIGAEngineSpeedGaugeValue_1, GIGAEngineSpeedGaugeValue_2));
ELSIF(MC2M_TERA_EngineSpeed<=1200)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(MC2M_TERA_EngineSpeed), 700, 1200, GIGAEngineSpeedGaugeValue_2, GIGAEngineSpeedGaugeValue_3));
ELSIF(MC2M_TERA_EngineSpeed<=2000)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(MC2M_TERA_EngineSpeed), 1200, 2000, GIGAEngineSpeedGaugeValue_3, GIGAEngineSpeedGaugeValue_4));
ELSIF(MC2M_TERA_EngineSpeed<=2600)THEN
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(MC2M_TERA_EngineSpeed), 2000, 2600, GIGAEngineSpeedGaugeValue_4, GIGAEngineSpeedGaugeValue_5));
ELSE
    GIGAEngineSpeed := INT_TO_UINT(Interpolate(UINT_TO_INT(MC2M_TERA_EngineSpeed), 2600, 2800, GIGAEngineSpeedGaugeValue_5, GIGAEngineSpeedGaugeValue_5+200));
END_IF
*/

//    GIGAEngineSpeed  := REAL_TO_UINT((UINT_TO_REAL(MC2M_TERA_EngineSpeed) * 63.0)/100);
