
(* type code here *)


 outSideTemperature:= SINT_TO_STRING(MC2M_TERA_OutSideTemperature);
 inSideTemperature := SINT_TO_STRING(MC2M_TERA_InSideTemperature);
 
 
 //vehicleAngleX := MC2M_TERA_AngleX;
/* 
 IF(MC2M_TERA_AngleY<0) THEN 
  vehicleAngleY:=600-((-1)* MC2M_TERA_AngleY);
 ELSE 
  vehicleAngleY:=MC2M_TERA_AngleY+600;
 END_IF
 
 
 IF(MC2M_TERA_AngleX<0) THEN 
  vehicleAngleX:= 600-((-1)*MC2M_TERA_AngleX);
 ELSE 
   vehicleAngleX:= MC2M_TERA_AngleX+600;
 END_IF
 */
 
  IF(MC2M_TERA_AngleY<0) THEN 
  vehicleAngleY:=600-((-1)* MC2M_TERA_AngleY);
 ELSE 
  vehicleAngleY:=MC2M_TERA_AngleY+600;
 END_IF
 IF(MC2M_TERA_AngleX<0) THEN 
  vehicleAngleX:= 600-((-1)*MC2M_TERA_AngleX);
 ELSE 
   vehicleAngleX:= MC2M_TERA_AngleX+600;
 END_IF

 
 //vehicleAngleY := 0;//MC2M_TERA_AngleY;
 //vehicleAngleX := MC2M_TERA_AngleX;

 /*
 SWVersion :=  MC2M_TERA_SWVerisons;
 IF(SWVersion >99 AND SWVersion < 999) THEN 
 SWVersionOnScreen:= CONCAT(INT_TO_STRING(SWVersion/100),'.',INT_TO_STRING(SWVersion MOD 1000),'.',INT_TO_STRING(SWVersion MOD 10));
 END_IF
 */
  //SWVersionOnScreen:= CONCAT('MC2M Software Config:$L NMS.',USINT_TO_STRING(MC2M_TERA_SWConfig0),'.',USINT_TO_STRING(MC2M_TERA_SWConfig1),',$L Version:',USINT_TO_STRING(MC2M_TERA_SWVersions0),'.',USINT_TO_STRING(MC2M_TERA_SWVersions1),'.',USINT_TO_STRING(MC2M_TERA_SWVersions2));
  //SWVersionOnScreen:= CONCAT(INT_TO_STRING(MC2M_TERA_SWVersions0),'.',INT_TO_STRING(MC2M_TERA_SWVersions1),'.',INT_TO_STRING(MC2M_TERA_SWVersions2));

//BIT_IO_MODE1 := vt3_can_alarm_CAN_187;

    SWVersionOnScreen:= CONCAT(   'TERA12:',
                                SWVersion_TERA,'$L',
                                'MC2M  :NMS.',
                                USINT_TO_STRING(MC2M_TERA_SWConfig0),'.0',
                                USINT_TO_STRING(MC2M_TERA_SWConfig1),'-',
                                USINT_TO_STRING(MC2M_TERA_SWVersions0),'.',
                                USINT_TO_STRING(MC2M_TERA_SWVersions1),'.',
                                USINT_TO_STRING(MC2M_TERA_SWVersions2),'$L',
                                'BIT   :',
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_151),         //MC2MTest 
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_181),         //MUXTest
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_187),         //IOMode1Test
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_186),         //IOMode2Test
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_Light_4E),    //OMNIA_LEFTMC2MTest
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_Wiper_4F),    //OMNIA_RIGHTTest
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_18D)          //AMU_CBOTest
                            );
    
AuxPressureLow_Stat := MC2M_TERA_AuxPressureLow_Stat;
AuxPressureLowOnScreen := 'YETERSiZ BASINC';//CONCAT('TERA12:','BIT   :');