//TCM
//TCM_SuspectParameterNumber := DM01_TCM_SuspectParameterNumber; 
//1111MC2M_TERA_TCM_SuspectParameterNumber := TCM_SuspectParameterNumber; 
//TCM_FailureModeIdentifier := DM01_TCM_FailureModeIdentifier; 
//1111MC2M_TERA_TCM_FailureModeIdentifier := TCM_FailureModeIdentifier;
//ECM
//ECM_SuspectParameterNumber := DM01_ECM_SuspectParameterNumber;
//1111MC2M_TERA_ECM_SuspectParameterNumber := ECM_SuspectParameterNumber; 
//ECM_FailureModeIdentifier := DM01_ECM_FailureModeIdentifier; 
//1111MC2M_TERA_ECM_FailureModeIdentifier := ECM_FailureModeIdentifier;
//ABS
//EBS_SuspectParameterNumber := DM01_EBS_SuspectParameterNumber; 
//MC2M_TERA_EBS_SuspectParameterNumber := EBS_SuspectParameterNumber;
//EBS_FailureModeIdentifier := DM01_EBS_FailureModeIdentifier; 
//MC2M_TERA_EBS_FailureModeIdentifier := EBS_FailureModeIdentifier;



ECM_TotalAlarm  := UDINT_TO_SINT(ECM_dtcSpnEngine[0]); //Kac adet alarm var?

IF(ECM_TotalAlarm > 0)THEN
    IF ((MainLoop MOD 20)==0)THEN
        ECM_indexAlarm := (ECM_indexAlarm + 1) MOD ECM_TotalAlarm;
       // InfoNo5 := ActiveAlarm[indexAlarm];        
        //dataMatrix[indexAlarm][0] = i+1;
        //dataMatrix[indexAlarm][1] = SPN;
        MC2M_TERA_ECM_SuspectParameterNumber := ECM_dataMatrix[ECM_indexAlarm][1]; 
        //dataMatrix[indexAlarm][2] = USINT_TO_UDINT(FMI);
        MC2M_TERA_ECM_FailureModeIdentifier := UDINT_TO_USINT(ECM_dataMatrix[ECM_indexAlarm][2]);         
        //dataMatrix[indexAlarm][3] = USINT_TO_UDINT(OC);
        MC2M_TERA_ECM_OccurrenceCount:=  UDINT_TO_USINT(ECM_dataMatrix[ECM_indexAlarm][3]);
    END_IF
ELSE
    MC2M_TERA_ECM_SuspectParameterNumber := 0;
    MC2M_TERA_ECM_FailureModeIdentifier := 0;
    MC2M_TERA_ECM_OccurrenceCount := 0;
    ECM_indexAlarm := 0;
END_IF

TCM_TotalAlarm  := UDINT_TO_SINT(TCM_dtcSpnEngine[0]); //Kac adet alarm var?

IF(TCM_TotalAlarm > 0)THEN
    IF ((MainLoop MOD 20)==0)THEN
        TCM_indexAlarm := (TCM_indexAlarm + 1) MOD TCM_TotalAlarm;
        MC2M_TERA_TCM_SuspectParameterNumber := TCM_dataMatrix[TCM_indexAlarm][1]; 
        MC2M_TERA_TCM_FailureModeIdentifier := UDINT_TO_USINT(TCM_dataMatrix[TCM_indexAlarm][2]);         
        MC2M_TERA_TCM_OccurrenceCount:=  UDINT_TO_USINT(TCM_dataMatrix[TCM_indexAlarm][3]);
    END_IF
ELSE
    MC2M_TERA_TCM_SuspectParameterNumber := 0;
    MC2M_TERA_TCM_FailureModeIdentifier := 0;
    MC2M_TERA_TCM_OccurrenceCount := 0;
    TCM_indexAlarm := 0;
END_IF

EBS_TotalAlarm  := UDINT_TO_SINT(EBS_dtcSpnEngine[0]); //Kac adet alarm var?

IF(EBS_TotalAlarm > 0)THEN
    IF ((MainLoop MOD 20)==0)THEN
        EBS_indexAlarm := (EBS_indexAlarm + 1) MOD EBS_TotalAlarm;
        MC2M_TERA_EBS_SuspectParameterNumber := EBS_dataMatrix[EBS_indexAlarm][1]; 
        MC2M_TERA_EBS_FailureModeIdentifier := UDINT_TO_USINT(EBS_dataMatrix[EBS_indexAlarm][2]);         
        MC2M_TERA_EBS_OccurrenceCount:=  UDINT_TO_USINT(EBS_dataMatrix[EBS_indexAlarm][3]);
    END_IF
ELSE
    MC2M_TERA_EBS_SuspectParameterNumber := 0;
    MC2M_TERA_EBS_FailureModeIdentifier := 0;
    MC2M_TERA_EBS_OccurrenceCount := 0;
    EBS_indexAlarm := 0;
END_IF
