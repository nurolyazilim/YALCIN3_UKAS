//---------------- Moving Average --------------------------
// Initialize total value
HTempTotalInput := 0;

/*
//LIMIT the average quantity from 1 TO 30
IF(HTempAverageQuantity<1)THEN
    HTempAverageQuantity := 30;
END_IF
*/

// shift right the array
FOR i:=0 TO (HTempAverageQuantity-2) DO
    HTempInputArray[(HTempAverageQuantity-1)-i] := HTempInputArray[(HTempAverageQuantity-2)-i];
END_FOR

// INSERT new value from the sensor
    HTempInputArray[0] := AIN_VVR_Temperature; //(I/L) MC2M_U01 

// Summation of the array
FOR i:=0 TO (HTempAverageQuantity-1) DO
    HTempTotalInput := HTempTotalInput + HTempInputArray[i];
END_FOR

// Average OF the array
HTempInputFiltered := REAL_TO_UINT(UDINT_TO_REAL(HTempTotalInput) / SINT_TO_REAL(HTempAverageQuantity));
//Displaying raw data at GIGA
MC2M_TERA_HTempInputFiltered := HTempInputFiltered;
//---------------------------------------------------------------------

// Normalize the value from Fuel level sensor from 0 TO 100
IF(HTempInputFiltered < HTempLevel0_ANALOG)THEN
      HTempLevel_Normalized := 0;
ELSIF(HTempInputFiltered <= HTempLevel1_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel0_ANALOG, HTempLevel1_ANALOG, HTempLevel0, HTempLevel1));
ELSIF(HTempInputFiltered <= HTempLevel2_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel1_ANALOG, HTempLevel2_ANALOG, HTempLevel1, HTempLevel2));
ELSIF(HTempInputFiltered <= HTempLevel3_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel2_ANALOG, HTempLevel3_ANALOG, HTempLevel2, HTempLevel3));
ELSIF(HTempInputFiltered <= HTempLevel4_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel3_ANALOG, HTempLevel4_ANALOG, HTempLevel3, HTempLevel4));
ELSIF(HTempInputFiltered <= HTempLevel5_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel4_ANALOG, HTempLevel5_ANALOG, HTempLevel4, HTempLevel5));
ELSIF(HTempInputFiltered <= HTempLevel6_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel5_ANALOG, HTempLevel6_ANALOG, HTempLevel5, HTempLevel6));
ELSIF(HTempInputFiltered <= HTempLevel7_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel6_ANALOG, HTempLevel7_ANALOG, HTempLevel6, HTempLevel7));
ELSIF(HTempInputFiltered <= HTempLevel8_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel7_ANALOG, HTempLevel8_ANALOG, HTempLevel7, HTempLevel8));
ELSIF(HTempInputFiltered <= HTempLevel9_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel8_ANALOG, HTempLevel9_ANALOG, HTempLevel8, HTempLevel9));
ELSIF(HTempInputFiltered <= HTempLevel10_ANALOG)THEN
      HTempLevel_Normalized := INT_TO_USINT(Interpolate(UINT_TO_INT(HTempInputFiltered) - 55, HTempLevel9_ANALOG, HTempLevel10_ANALOG, HTempLevel9, HTempLevel10));
ELSE
      HTempLevel_Normalized := 200;
END_IF



// Voltage Value to drive analog gauge on dashboard - Low Side PWM
//IF(FuelLevel_Normalized_3 < 50)THEN
    //MC2M_IOMODE_2_PWM00_Tank_1_Gauge := INT_TO_UINT(Interpolate(SINT_TO_INT(FuelLevel_Normalized_1),0,50, FuelGaugeValue_Min_1, FuelGaugeValue_Mid_1));
//ELSE
    //MC2M_IOMODE_2_PWM00_Tank_1_Gauge := INT_TO_UINT(Interpolate(SINT_TO_INT(FuelLevel_Normalized_1),50,100, FuelGaugeValue_Mid_1, FuelGaugeValue_Max_1));
//END_IF
