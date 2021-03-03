BatteryLevel := VEP1_BatteryPotentialPowerInput1; // Battery Level = Format: 00.0 V
EngineTempValue := INT_TO_USINT(ET1_EngineCoolantTemperature); //Format 00 degree C
//EngineOilPressure := REAL_TO_USINT(USINT_TO_REAL(EFL_P1_EngineOilPressure) * 0.1); // 100kPa = 1 Bar - x10    EJDERDE HATALI
EngineOilPressure := REAL_TO_USINT(USINT_TO_REAL(EFL_P1_EngineOilPressure) * 0.4); // 100kPa = 1 Bar - x10       EJDERDE DÜZELTİLEN
//InputArray_oil[0] := REAL_TO_UINT(USINT_TO_REAL(EFL_P1_EngineOilPressure) * 0.4);                             TOMADA DÜZELTİLEN
//EngineOilPressure := REAL_TO_USINT(USINT_TO_REAL(EFL_P1_EngineOilPressure) * 0.1); // 100kPa = 1 Bar - x10    TOMADA HATALI ÇALIŞAN


TransOilTemperature := TRF1_TransmissionOilTemperature; // Format 00 degree C

//ABS hızı alındı.
Odometer_EBS_FrontAxleSpeed := EBC2_FrontAxleSpeed;
//Odometer_Active_Gear := EBC2_FrontAxleSpeed;
//Odometer_Dropbox_Status := EBC2_FrontAxleSpeed;
//Odometer_TCM_Speed := EBC2_FrontAxleSpeed;

//Odometer_EBS_FrontAxleSpeed := EBC2_FrontAxleSpeed;
 


//Normalization ---------------------

IF(BatteryLevel<200)THEN
    BatteryLevel := 200;
ELSIF(BatteryLevel>320)THEN
    BatteryLevel := 320;
END_IF

IF(EngineTempValue<40)THEN
    EngineTempValue := 40;
ELSIF(EngineTempValue>125)THEN
    EngineTempValue := 125;
END_IF

IF(EngineOilPressure<0)THEN
    EngineOilPressure := 0;
ELSIF(EngineOilPressure>80)THEN
    EngineOilPressure := 80;
END_IF

IF(TransOilTemperature>150)THEN
    TransOilTemperature := 150;
ELSIF(TransOilTemperature<70)THEN
    TransOilTemperature := 70;
END_IF

CCVS_2_TwoSpeedAxleSwitch := CCVS_TwoSpeedAxleSwitch ;
CCVS_2_ParkingBrakeSwitch := CCVS_ParkingBrakeSwitch ;
CCVS_2_CruiseControlPauseSwitch := CCVS_CruiseControlPauseSwitch ;
CCVS_2_ParkBrakeReleaseInhibitRequest := CCVS_ParkBrakeReleaseInhibitRequest ;
CCVS_2_CruiseControlActive := CCVS_CruiseControlActive ;
CCVS_2_CruiseControlEnableSwitch := CCVS_CruiseControlEnableSwitch ;
CCVS_2_BrakeSwitch := CCVS_BrakeSwitch ;
CCVS_2_ClutchSwitch := CCVS_ClutchSwitch ;
CCVS_2_CruiseControlSetSwitch := CCVS_CruiseControlSetSwitch ;
CCVS_2_CruiseControlCoastSwitch := CCVS_CruiseControlCoastSwitch ;
CCVS_2_CruiseControlResumeSwitch := CCVS_CruiseControlResumeSwitch ;
CCVS_2_CruiseControlAccelerateSwitch := CCVS_CruiseControlAccelerateSwitch ;
CCVS_2_CruiseControlSetSpeed := CCVS_CruiseControlSetSpeed ;
CCVS_2_CruiseControlStates := CCVS_CruiseControlStates ;
CCVS_2_EngineIdleIncrementSwitch := CCVS_EngineIdleIncrementSwitch ;
CCVS_2_EngineIdleDecrementSwitch := CCVS_EngineIdleDecrementSwitch ;
CCVS_2_EngineTestModeSwitch := CCVS_EngineTestModeSwitch ;
CCVS_2_EngineShutdownOverrideSwitch := CCVS_EngineShutdownOverrideSwitch ;

//CCVS_2_WheelBasedVehicleSpeed := CCVS_WheelBasedVehicleSpeed ;

//EHR_TotalEngineHours := temp; //motor saati testi için aktif et (aaslan)
// Motor saatini güncellemek için başlangıçta yanlış değerlere karşı gecikmeli çalıştır. (aaslan)
IF (Ehr_updateTout > 0) THEN 
    Ehr_updateTout := Ehr_updateTout - 1; 
END_IF
// Eğer motor değişti ise motor saati farkına göre(10 saat) tespit et(aaslan)
// Fakat en doğru yöntem ECU seri numarasını CAN hattından alıp motor değişimini tespit etmek(aaslan)
IF (!vt3_can_alarm_EHR_Engine_Hours_Revolutions AND Ehr_updateTout == 0) THEN
    IF (((EHR_2_TotalEngineHours - EHR_TotalEngineHours) > 200) AND EHR_2_TotalEngineHours > EHR_TotalEngineHours OR 
        ((EHR_TotalEngineHours - EHR_2_TotalEngineHours) > 200) AND EHR_TotalEngineHours > EHR_2_TotalEngineHours) THEN
        TotalEngineHours_Old := ((EHR_2_TotalEngineHours * 5) / 100);
    END_IF
    EHR_2_TotalEngineHours := EHR_TotalEngineHours;
END_IF

//EHR_2_TotalEngineHours:= EHR_2_TotalEngineHoursTest;
//MC2M_TERA_DIAG_TotalEngineHours := EHR_TotalEngineHours;
MC2M_TERA_DIAG_TotalEngineHours := ((EHR_2_TotalEngineHours * 5) / 100);
MC2M_TERA_DIAG_TotalEngineHours_Old := TotalEngineHours_Old;


//MC2M_TERA_DIAG_TotalEngineHours := MainLoop;

EHR_2_TotalEngineRevolutions:= EHR_TotalEngineRevolutions;
EHR2_DestinationAdr := 65253;


mainECM_TCM_ABS_DIAG;

