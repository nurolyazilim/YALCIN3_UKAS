
/*
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
                                //BOOL_TO_STRING(NOT vt3_can_alarm_CAN_181),         //MUXTest
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_187)            //IOMode1Test
                                //BOOL_TO_STRING(NOT vt3_can_alarm_CAN_186),         //IOMode2Test
                                //BOOL_TO_STRING(NOT vt3_can_alarm_CAN_Light_4E),    //OMNIA_LEFTMC2MTest
                                //BOOL_TO_STRING(NOT vt3_can_alarm_CAN_Wiper_4F),    //OMNIA_RIGHTTest
                                //BOOL_TO_STRING(NOT vt3_can_alarm_CAN_18D)          //AMU_CBOTest
                            );
    
*/
    SWVersionOnScreen:= CONCAT( 'GIGA   :', SWVersion_GIGA,
                                USINT_TO_STRING(MC2M_TERA_SWVersions2),'$L',
                                'MC2M :', SWVersion_MC2M,
                                USINT_TO_STRING(MC2M_TERA_SWVersions2),'$L', 
                                'BIT:',
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_151),         //MC2MTest 
                                BOOL_TO_STRING(NOT vt3_can_alarm_CAN_187)          //IOMode1Test
                                );

//TCM
DiagMessage01 := UDINT_TO_STRING(MC2M_TERA_TCM_SuspectParameterNumber);
DiagMessage02 := USINT_TO_STRING(MC2M_TERA_TCM_FailureModeIdentifier);
DiagMessage07 := USINT_TO_STRING(MC2M_TERA_TCM_OccurrenceCount);

//ECM
DiagMessage03 := UDINT_TO_STRING(MC2M_TERA_ECM_SuspectParameterNumber);
DiagMessage04 := USINT_TO_STRING(MC2M_TERA_ECM_FailureModeIdentifier);
DiagMessage08 := USINT_TO_STRING(MC2M_TERA_ECM_OccurrenceCount);

//ABS
DiagMessage05 := UDINT_TO_STRING(MC2M_TERA_EBS_SuspectParameterNumber);
DiagMessage06 := USINT_TO_STRING(MC2M_TERA_EBS_FailureModeIdentifier);
DiagMessage09 := USINT_TO_STRING(MC2M_TERA_EBS_OccurrenceCount);


    
AuxPressureLow_Stat := MC2M_TERA_AuxPressureLow_Stat;
AuxPressureLowOnScreen := 'YETERSiZ BASINC';//CONCAT('TERA12:','BIT   :');