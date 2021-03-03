//---------------- Moving Average --------------------------
// Initialize total value
TotalInput_Sensor3 := 0;

//LIMIT the average quantity from 1 TO 30
/*
IF(AverageQuantity_Sensor3<1)THEN
    AverageQuantity_Sensor3 := 1;
END_IF
IF(AverageQuantity_Sensor3>100)THEN
    AverageQuantity_Sensor3 := 100;
END_IF
*/

// shift right the array
FOR i:=0 TO (AverageQuantity_Sensor3-2) DO
    InputArray_Sensor3[(AverageQuantity_Sensor3-1)-i] := InputArray_Sensor3[(AverageQuantity_Sensor3-2)-i];
END_FOR

// INSERT new value from the sensor
    AIN_FootBrakePressureSensor_2_Temp := AIN_FootBrakePressureSensor_2; //(I/A) MC2M_U32
    IF(AIN_FootBrakePressureSensor_2 < 4000)THEN
        AIN_FootBrakePressureSensor_2_Temp := 4000;
    END_IF
        
InputArray_Sensor3[0] := INT_TO_UINT(Interpolate(UINT_TO_INT(AIN_FootBrakePressureSensor_2_Temp), MinSensorValue_3, MaxSensorValue_3, MinScreenValue_3, MaxScreenValue_3));;

// Summation of the array
FOR i:=0 TO (AverageQuantity_Sensor3-1) DO
    TotalInput_Sensor3 := TotalInput_Sensor3 + InputArray_Sensor3[i];
END_FOR

// Average of the array
IF (NMSGUI_MC2M_service_brake_tank_2_touch) THEN
    InputFiltered_Sensor3 := NMSGUI_MC2M_service_brake_tank_2;
ELSE
    InputFiltered_Sensor3 := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor3) / SINT_TO_REAL(AverageQuantity_Sensor3));
END_IF
