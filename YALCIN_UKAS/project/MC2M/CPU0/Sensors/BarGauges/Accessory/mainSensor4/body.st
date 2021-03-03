//---------------- Moving Average --------------------------
// Initialize total value
TotalInput_Sensor4 := 0;

//LIMIT the average quantity from 1 TO 30
/*
IF(AverageQuantity_Sensor4<1)THEN
    AverageQuantity_Sensor4 := 1;
END_IF
IF(AverageQuantity_Sensor4>100)THEN
    AverageQuantity_Sensor4 := 100;
END_IF
*/

// shift right the array
FOR i:=0 TO (AverageQuantity_Sensor4-2) DO
    InputArray_Sensor4[(AverageQuantity_Sensor4-1)-i] := InputArray_Sensor4[(AverageQuantity_Sensor4-2)-i];
END_FOR

// INSERT new value from the sensor
    AIN_AccessoryPressureSensor_Temp := AIN_AccessoryPressureSensor; //I/A MC2M_U34
    IF(AIN_AccessoryPressureSensor<4000)THEN
        AIN_AccessoryPressureSensor_Temp := 4000;
    END_IF
        
InputArray_Sensor4[0] := INT_TO_UINT(Interpolate(UINT_TO_INT(AIN_AccessoryPressureSensor_Temp), MinSensorValue_4, MaxSensorValue_4, MinScreenValue_4, MaxScreenValue_4));;

// Summation of the array
FOR i:=0 TO (AverageQuantity_Sensor4-1) DO
    TotalInput_Sensor4 := TotalInput_Sensor4 + InputArray_Sensor4[i];
END_FOR

// Average of the array
IF ( NMSGUI_MC2M_accessory_tank_touch ) THEN
    InputFiltered_Sensor4 := NMSGUI_MC2M_accessory_tank;
ELSE
    InputFiltered_Sensor4 := REAL_TO_UINT(UDINT_TO_REAL(TotalInput_Sensor4) / SINT_TO_REAL(AverageQuantity_Sensor4));
END_IF
