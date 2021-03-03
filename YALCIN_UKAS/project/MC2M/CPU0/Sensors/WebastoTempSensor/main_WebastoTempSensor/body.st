//---------------- Moving Average --------------------------
// Initialize total value
HTempTotalInput_2 := 0;

//LIMIT the average quantity from 1 TO 30
/*
IF(HTempAverageQuantity_2<1)THEN
    HTempAverageQuantity_2 := 30;
END_IF
*/
// shift right the array
FOR i:=0 TO (HTempAverageQuantity_2-2) DO
    HTempInputArray_2[(HTempAverageQuantity_2-1)-i] := HTempInputArray_2[(HTempAverageQuantity_2-2)-i];
END_FOR

// INSERT new value from the sensor
HTempInputArray_2[0] := AIN_WebastoTankResistanceSensor;//   (I/A) MC2M_T27

// Summation of the array
FOR i:=0 TO (HTempAverageQuantity_2-1) DO
    HTempTotalInput_2 := HTempTotalInput_2 + HTempInputArray_2[i];
END_FOR

// Average OF the array
HTempInputFiltered_2 := REAL_TO_UINT(UDINT_TO_REAL(HTempTotalInput_2) / SINT_TO_REAL(HTempAverageQuantity_2));
//---------------------------------------------------------------------

// Normalize the value from Fuel level sensor from 0 TO 100      
IF(HTempInputFiltered_2 < 150)THEN
      HTempLevel_Normalized_2 := -70;
ELSIF(HTempInputFiltered_2 < HTempLevel0_ANALOG_2)THEN
      HTempLevel_Normalized_2 := -50;
ELSIF(HTempInputFiltered_2 <= HTempLevel1_ANALOG_2)THEN
      HTempLevel_Normalized_2 := INT_TO_SINT(Interpolate(UINT_TO_INT(HTempInputFiltered_2), HTempLevel0_ANALOG_2, HTempLevel1_ANALOG_2, HTempLevel0_2, HTempLevel1_2));
ELSIF(HTempInputFiltered_2 <= HTempLevel2_ANALOG_2)THEN
      HTempLevel_Normalized_2 := INT_TO_SINT(Interpolate(UINT_TO_INT(HTempInputFiltered_2), HTempLevel1_ANALOG_2, HTempLevel2_ANALOG_2, HTempLevel1_2, HTempLevel2_2));
ELSIF(HTempInputFiltered_2 <= HTempLevel3_ANALOG_2)THEN
      HTempLevel_Normalized_2 := INT_TO_SINT(Interpolate(UINT_TO_INT(HTempInputFiltered_2), HTempLevel2_ANALOG_2, HTempLevel3_ANALOG_2, HTempLevel2_2, HTempLevel3_2));
ELSIF(HTempInputFiltered_2 <= HTempLevel4_ANALOG_2)THEN
      HTempLevel_Normalized_2 := INT_TO_SINT(Interpolate(UINT_TO_INT(HTempInputFiltered_2), HTempLevel3_ANALOG_2, HTempLevel4_ANALOG_2, HTempLevel3_2, HTempLevel4_2));
ELSIF(HTempInputFiltered_2 <= HTempLevel5_ANALOG_2)THEN
      HTempLevel_Normalized_2 := INT_TO_SINT(Interpolate(UINT_TO_INT(HTempInputFiltered_2), HTempLevel4_ANALOG_2, HTempLevel5_ANALOG_2, HTempLevel4_2, HTempLevel5_2));
ELSIF(HTempInputFiltered_2 <= HTempLevel6_ANALOG_2)THEN
      HTempLevel_Normalized_2 := INT_TO_SINT(Interpolate(UINT_TO_INT(HTempInputFiltered_2), HTempLevel5_ANALOG_2, HTempLevel6_ANALOG_2, HTempLevel5_2, HTempLevel6_2));
ELSIF(HTempInputFiltered_2 <= HTempLevel7_ANALOG_2)THEN
      HTempLevel_Normalized_2 := INT_TO_SINT(Interpolate(UINT_TO_INT(HTempInputFiltered_2), HTempLevel6_ANALOG_2, HTempLevel7_ANALOG_2, HTempLevel6_2, HTempLevel7_2));
ELSE
      HTempLevel_Normalized_2 := 125;
END_IF

fuelTank_2_Temperature := HTempLevel_Normalized_2; 
// Voltage Value to drive analog gauge on dashboard - Low Side PWM
//IF(FuelLevel_Normalized_3 < 50)THEN
    //MC2M_IOMODE_2_PWM00_Tank_1_Gauge := INT_TO_UINT(Interpolate(SINT_TO_INT(FuelLevel_Normalized_1),0,50, FuelGaugeValue_Min_1, FuelGaugeValue_Mid_1));
//ELSE
    //MC2M_IOMODE_2_PWM00_Tank_1_Gauge := INT_TO_UINT(Interpolate(SINT_TO_INT(FuelLevel_Normalized_1),50,100, FuelGaugeValue_Mid_1, FuelGaugeValue_Max_1));
//END_IF
