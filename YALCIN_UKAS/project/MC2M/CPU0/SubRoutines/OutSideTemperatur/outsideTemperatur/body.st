
 TotalTemInput:=0;
 //LIMIT average quantitiy 
 /*
 IF(AverageQuantityTem<0) THEN 
  AverageQuantityTem:=0;
 END_IF
 IF(AverageQuantityTem>120) THEN 
  AverageQuantityTem:=120;
 END_IF 
 */
 // shift right the array
 FOR i:=0 TO (AverageQuantityTem-2) DO
    TemInputArray[(AverageQuantityTem-1)-i] := TemInputArray[(AverageQuantityTem-2)-i];
 END_FOR
 
 //TemInputArray[0]:=AIN_outSideTemperatur; 
    
     // Summation of the array
 FOR i:=0 TO (AverageQuantityTem-1) DO
    TotalTemInput := TotalTemInput + TemInputArray[i];
 END_FOR

  // Average OF the array
 TemInputFiltered := REAL_TO_UINT(UDINT_TO_REAL(TotalTemInput) / SINT_TO_REAL(AverageQuantityTem));
 
 
  // Normalize the value from Temp level sensor from 0 TO 100
    IF(TemInputFiltered < TemLevel0_ANALOG)THEN       //110-552
        TemLevelNormalized := temValueMin;
    ELSIF(TemInputFiltered <= TemLevel1_ANALOG)THEN   //90-789
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel0_ANALOG, TemLevel1_ANALOG, TemLevel0, TemLevel1);
    ELSIF(TemInputFiltered <= TemLevel2_ANALOG)THEN   //75-1006
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel1_ANALOG, TemLevel2_ANALOG, TemLevel1, TemLevel2);
    ELSIF(TemInputFiltered <= TemLevel3_ANALOG)THEN   //60-1245 
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel2_ANALOG, TemLevel3_ANALOG, TemLevel2, TemLevel3);
    ELSIF(TemInputFiltered <= TemLevel4_ANALOG)THEN   //45-1481
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel3_ANALOG, TemLevel4_ANALOG, TemLevel3, TemLevel4);
    ELSIF(TemInputFiltered <= TemLevel5_ANALOG)THEN   //35-1625 
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel4_ANALOG, TemLevel5_ANALOG, TemLevel4, TemLevel5);
    ELSIF(TemInputFiltered <= TemLevel6_ANALOG)THEN   //25-1750
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel5_ANALOG, TemLevel6_ANALOG, TemLevel5, TemLevel6);
    ELSIF(TemInputFiltered <= TemLevel7_ANALOG)THEN   //15-1854
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel6_ANALOG, TemLevel7_ANALOG, TemLevel6, TemLevel7);
    ELSIF(TemInputFiltered <= TemLevel8_ANALOG)THEN   //0-1969
       TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel7_ANALOG, TemLevel8_ANALOG, TemLevel7, TemLevel8);
    ELSIF(TemInputFiltered <= TemLevel9_ANALOG)THEN   //-10-2021
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel8_ANALOG, TemLevel9_ANALOG, TemLevel8, TemLevel9);
    ELSIF(TemInputFiltered <= TemLevel10_ANALOG)THEN  //-20-2058 
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel9_ANALOG, TemLevel10_ANALOG, TemLevel9, TemLevel10);
    ELSIF(TemInputFiltered <= TemLevel11_ANALOG)THEN  //-30-2083
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel10_ANALOG, TemLevel11_ANALOG, TemLevel10, TemLevel11);
    ELSIF(TemInputFiltered <= TemLevel12_ANALOG)THEN  //-50-2109 
        TemLevelNormalized := Interpolate(UINT_TO_INT(TemInputFiltered), TemLevel11_ANALOG, TemLevel12_ANALOG, TemLevel11, TemLevel12);
    ELSE
        TemLevelNormalized := temValueMax;
    END_IF

 
 TotalTemInput_23:=0;
//LIMIT average quantitiy
/* 
IF(AverageQuantityTem_23<0) THEN 
AverageQuantityTem_23:=0;
END_IF
IF(AverageQuantityTem_23>120) THEN 
AverageQuantityTem_23:=120;
END_IF 
*/
 
// shift right the array
FOR i:=0 TO (AverageQuantityTem_23-2) DO
TemInputArray_23[(AverageQuantityTem_23-1)-i] := TemInputArray_23[(AverageQuantityTem_23-2)-i];
END_FOR
 
TemInputArray_23[0]:=INT_TO_UINT(TemLevelNormalized); 
     
 // Summation of the array
FOR i:=0 TO (AverageQuantityTem_23-1) DO
TotalTemInput_23 := TotalTemInput_23 + TemInputArray_23[i];
END_FOR

// Average OF the array
TemInputFiltered_23 := REAL_TO_UINT(UDINT_TO_REAL(TotalTemInput_23) / SINT_TO_REAL(AverageQuantityTem_23));

outSideTemperature:=UINT_TO_SINT(TemInputFiltered_23);

//outSideTemperature:=INT_TO_SINT(TemLevelNormalized);
MC2M_TERA_OutSideTemperature:= outSideTemperature;


