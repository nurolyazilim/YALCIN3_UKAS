//---------------- Moving Average --------------------------
// Initialize total value
TotalPresInput := 0;

//LIMIT the average quantity from 1 TO 30
/*
IF(AverageQuantityPres<1)THEN
    AverageQuantityPres := 30;
END_IF
*/
// shift right the array
FOR i:=0 TO (AverageQuantityPres-2) DO
    PresInputArray[(AverageQuantityPres-1)-i] := PresInputArray[(AverageQuantityPres-2)-i];
END_FOR

// INSERT new value from the sensor

    PresInputArray[0] := AIN_VVR_Pressure;  //(I/A) MC2M_U12 

// Summation of the array
FOR i:=0 TO (AverageQuantityPres-1) DO
    TotalPresInput := TotalPresInput + PresInputArray[i];
END_FOR



// Average OF the array
    InputFilteredPres := REAL_TO_UINT(UDINT_TO_REAL(TotalPresInput) / SINT_TO_REAL(AverageQuantityPres));

//---------------------------------------------------------------------

// Normalize the value from Fuel level sensor from 0 TO 100
IF(InputFilteredPres < PresLevel0_ANALOG)THEN
    PresLevel_Normalized := 0;
ELSIF(InputFilteredPres <= PresLevel1_ANALOG)THEN
    PresLevel_Normalized := INT_TO_SINT(Interpolate(UINT_TO_INT(InputFilteredPres), PresLevel0_ANALOG, PresLevel1_ANALOG, PresLevel0, PresLevel1));
ELSE
    PresLevel_Normalized := 100;
END_IF



// Voltage Value to drive analog gauge on dashboard - Low Side PWM
//IF(FuelLevel_Normalized_3 < 50)THEN
    //MC2M_IOMODE_2_PWM00_Tank_1_Gauge := INT_TO_UINT(Interpolate(SINT_TO_INT(FuelLevel_Normalized_1),0,50, FuelGaugeValue_Min_1, FuelGaugeValue_Mid_1));
//ELSE
    //MC2M_IOMODE_2_PWM00_Tank_1_Gauge := INT_TO_UINT(Interpolate(SINT_TO_INT(FuelLevel_Normalized_1),50,100, FuelGaugeValue_Mid_1, FuelGaugeValue_Max_1));
//END_IF
