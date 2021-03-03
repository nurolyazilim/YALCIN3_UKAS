//---------------- Moving Average --------------------------
// Initialize total value
TotalInput_Sensor1 := 0;

// shift right the array
FOR i:=0 TO (AverageQuantity_Sensor1-2) DO
    InputArray_Sensor1[(AverageQuantity_Sensor1-1)-i] := InputArray_Sensor1[(AverageQuantity_Sensor1-2)-i];
END_FOR

// INSERT new value from the sensor

InputArray_Sensor1[0] := MC2M_TERA_EngineSpeed;

// Summation of the array
FOR i:=0 TO (AverageQuantity_Sensor1-1) DO
    TotalInput_Sensor1 := TotalInput_Sensor1 + InputArray_Sensor1[i];
END_FOR

// Average of the array
InputFiltered_Sensor1 := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor1) / SINT_TO_REAL(AverageQuantity_Sensor1));



