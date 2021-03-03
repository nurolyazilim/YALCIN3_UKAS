//---------------- Moving Average --------------------------
// Initialize total value
TotalInput_Sensor1 := 0;

//LIMIT the average quantity from 1 TO 30
/*
IF(AverageQuantity_Sensor1<1)THEN
    AverageQuantity_Sensor1 := 1;
END_IF
IF(AverageQuantity_Sensor1>100)THEN
    AverageQuantity_Sensor1 := 100;
END_IF
*/

// shift right the array
FOR i:=0 TO (AverageQuantity_Sensor1-2) DO
    InputArray_Sensor1[(AverageQuantity_Sensor1-1)-i] := InputArray_Sensor1[(AverageQuantity_Sensor1-2)-i];
END_FOR

// INSERT new value from the sensor
    AIN_ParkBrakePressureSensor_Temp := AIN_ParkBrakePressureSensor; //(I/A) MC2M_U21
    IF(AIN_ParkBrakePressureSensor<4000)THEN
        AIN_ParkBrakePressureSensor_Temp := 4000;
    END_IF

InputArray_Sensor1[0] := INT_TO_UINT(Interpolate(UINT_TO_INT(AIN_ParkBrakePressureSensor_Temp), MinSensorValue_1, MaxSensorValue_1, MinScreenValue_1, MaxScreenValue_1));;

// Summation of the array
FOR i:=0 TO (AverageQuantity_Sensor1-1) DO
    TotalInput_Sensor1 := TotalInput_Sensor1 + InputArray_Sensor1[i];
END_FOR

// Average of the array
IF (NMSGUI_MC2M_park_brake_tank_touch) THEN
    InputFiltered_Sensor1 := NMSGUI_MC2M_park_brake_tank;
ELSE
    InputFiltered_Sensor1 := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor1) / SINT_TO_REAL(AverageQuantity_Sensor1));
END_IF
