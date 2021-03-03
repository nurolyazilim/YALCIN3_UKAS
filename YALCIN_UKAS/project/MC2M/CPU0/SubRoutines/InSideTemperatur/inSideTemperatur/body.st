
TotalTemInput_2:=0;
//Limit average quantitiy 
/*
IF(AverageQuantityTem_2<0) THEN 
AverageQuantityTem_2:=0;
END_IF
IF(AverageQuantityTem_2>120) THEN 
AverageQuantityTem_2:=120;
END_IF 
*/
 
// Shift right the array
FOR i:=0 TO (AverageQuantityTem_2-2) DO
TemInputArray_2[(AverageQuantityTem_2-1)-i] := TemInputArray_2[(AverageQuantityTem_2-2)-i];
END_FOR
 
//TemInputArray_2[0]:=AIN_inSideTemperatur; 
     
// Summation of the array
FOR i:=0 TO (AverageQuantityTem_2-1) DO
TotalTemInput_2 := TotalTemInput_2 + TemInputArray_2[i];
END_FOR

// Average of the array
TemInputFiltered_2 := REAL_TO_UINT(UDINT_TO_REAL(TotalTemInput_2) / SINT_TO_REAL(AverageQuantityTem_2));

// Normalize the value from Fuel level sensor from -50 TO 110 C
    IF(TemInputFiltered_2 < TemLevel0_ANALOG_2)THEN          //110-552
        TemLevelNormalized_2 := temValueMin_2;
    ELSIF(TemInputFiltered_2 <= TemLevel1_ANALOG_2)THEN      //90-789
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel0_ANALOG_2, TemLevel1_ANALOG_2, TemLevel0_2, TemLevel1_2);
    ELSIF(TemInputFiltered_2 <= TemLevel2_ANALOG_2)THEN      //75-1006
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel1_ANALOG_2, TemLevel2_ANALOG_2, TemLevel1_2, TemLevel2_2);
    ELSIF(TemInputFiltered_2 <= TemLevel3_ANALOG_2)THEN      //60-1245
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel2_ANALOG_2, TemLevel3_ANALOG_2, TemLevel2_2, TemLevel3_2);
    ELSIF(TemInputFiltered_2 <= TemLevel4_ANALOG_2)THEN      //45-1481
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel3_ANALOG_2, TemLevel4_ANALOG_2, TemLevel3_2, TemLevel4_2);
    ELSIF(TemInputFiltered_2 <= TemLevel5_ANALOG_2)THEN      //35-1625
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel4_ANALOG_2, TemLevel5_ANALOG_2, TemLevel4_2, TemLevel5_2);
    ELSIF(TemInputFiltered_2 <= TemLevel6_ANALOG_2)THEN      //25-1750
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel5_ANALOG_2, TemLevel6_ANALOG_2, TemLevel5_2, TemLevel6_2);
    ELSIF(TemInputFiltered_2 <= TemLevel7_ANALOG_2)THEN      //15-1854
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel6_ANALOG_2, TemLevel7_ANALOG_2, TemLevel6_2, TemLevel7_2);
    ELSIF(TemInputFiltered_2 <= TemLevel8_ANALOG_2)THEN      //0-1969 
       TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel7_ANALOG_2, TemLevel8_ANALOG_2, TemLevel7_2, TemLevel8_2);
    ELSIF(TemInputFiltered_2 <= TemLevel9_ANALOG_2)THEN      //-10-2021
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel8_ANALOG_2, TemLevel9_ANALOG_2, TemLevel8_2, TemLevel9_2);
    ELSIF(TemInputFiltered_2 <= TemLevel10_ANALOG_2)THEN     //-20-2058
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel9_ANALOG_2, TemLevel10_ANALOG_2, TemLevel9_2, TemLevel10_2);
    ELSIF(TemInputFiltered_2 <= TemLevel11_ANALOG_2)THEN     //-30-2083
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel10_ANALOG_2, TemLevel11_ANALOG_2, TemLevel10_2, TemLevel11_2);
    ELSIF(TemInputFiltered_2 <= TemLevel12_ANALOG_2)THEN     //-50-2109
        TemLevelNormalized_2 := Interpolate(UINT_TO_INT(TemInputFiltered_2), TemLevel11_ANALOG_2, TemLevel12_ANALOG_2, TemLevel11_2, TemLevel12_2);
    ELSE
        TemLevelNormalized_2 := temValueMax_2;
    END_IF

TotalTemInput_22:=0;
//LIMIT avaragequantitiy 
/*
IF(AverageQuantityTem_22<0) THEN 
AverageQuantityTem_22:=0;
END_IF
IF(AverageQuantityTem_2>120) THEN 
AverageQuantityTem_22:=120;
END_IF 
*/
 
// shift right the array
FOR i:=0 TO (AverageQuantityTem_22-2) DO
TemInputArray_22[(AverageQuantityTem_22-1)-i] := TemInputArray_22[(AverageQuantityTem_22-2)-i];
END_FOR
 
TemInputArray_22[0]:=INT_TO_UINT(TemLevelNormalized_2); 
     
 // Summation of the array
FOR i:=0 TO (AverageQuantityTem_22-1) DO
TotalTemInput_22 := TotalTemInput_22 + TemInputArray_22[i];
END_FOR

// Average OF the array
TemInputFiltered_22 := REAL_TO_UINT(UDINT_TO_REAL(TotalTemInput_22) / SINT_TO_REAL(AverageQuantityTem_22));

inSideTemperature:=UINT_TO_SINT(TemInputFiltered_22);
//inSideTemperature:=INT_TO_SINT(TemLevelNormalized_2);   //Commented FOR debug

MC2M_TERA_InSideTemperature:= inSideTemperature;        //Added FOR debug 

