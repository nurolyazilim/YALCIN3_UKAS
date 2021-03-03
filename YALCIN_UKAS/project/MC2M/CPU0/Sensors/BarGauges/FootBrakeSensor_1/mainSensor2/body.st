//---------------- Moving Average --------------------------
// Initialize total value
TotalInput_Sensor2 := 0;

//LIMIT the average quantity from 1 TO 30
/*
IF(AverageQuantity_Sensor2<1)THEN
    AverageQuantity_Sensor2 := 1;
END_IF
IF(AverageQuantity_Sensor2>100)THEN
    AverageQuantity_Sensor2 := 100;
END_IF
*/

// shift right the array
FOR i:=0 TO (AverageQuantity_Sensor2-2) DO
    InputArray_Sensor2[(AverageQuantity_Sensor2-1)-i] := InputArray_Sensor2[(AverageQuantity_Sensor2-2)-i];
END_FOR

// INSERT new value from the sensor OR DATA ENTERED FROM NMSGUI 19.09.2019
    AIN_FootBrakePressureSensor_1_Temp := AIN_FootBrakePressureSensor_1; //(I/A) MC2M_U24
    IF(AIN_FootBrakePressureSensor_1<4000)THEN
        AIN_FootBrakePressureSensor_1_Temp := 4000;
    END_IF


InputArray_Sensor2[0] := INT_TO_UINT(Interpolate(UINT_TO_INT(AIN_FootBrakePressureSensor_1_Temp), MinSensorValue_2, MaxSensorValue_2, MinScreenValue_2, MaxScreenValue_2));;

// Summation of the array
FOR i:=0 TO (AverageQuantity_Sensor2-1) DO
    TotalInput_Sensor2 := TotalInput_Sensor2 + InputArray_Sensor2[i];
END_FOR

// Average of the array
IF ( NMSGUI_MC2M_service_brake_tank_1_touch ) THEN
    InputFiltered_Sensor2 := NMSGUI_MC2M_service_brake_tank_1;
ELSE
    InputFiltered_Sensor2 := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor2) / SINT_TO_REAL(AverageQuantity_Sensor2));
END_IF
