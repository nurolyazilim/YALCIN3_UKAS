/*

FORMULATION OF VEHICLE SPEED

                (WheelCircle x WheelRPM x 60)
VehicleSpeed = ---------------------------------------
                        1000 x 1000


                DropboxRPM  
WheelRPM = --------------------------------------
                UnderCarriageGearRatio

                TransmissionRPM
DropboxRPM = ---------------------------------
                DropboxGearRatio_Curr
*/
// --------- PARAMETERS ------------------------------
IF(Stat_Dropbox<2)THEN
    DropboxGearRatio_Curr := DropboxGearRatio_Low;
ELSE
    DropboxGearRatio_Curr := DropboxGearRatio_High;
END_IF

//DropboxGearRatio_Curr := DropboxGearRatio_High; //20150728_01 SALI GÜNÜ SUNUMU İÇİN

TransOutputShaftSpeed := ETC1_TransmissionOutputShaftSpeed; //temp //SPN 191 //hız simulasyonu için temp değişkeni yazılır (aaslan)

// ---------- CALCULATION -------------------------------
DropboxRPM := REAL_TO_UINT((UINT_TO_REAL(TransOutputShaftSpeed) * 100.0) / UINT_TO_REAL(DropboxGearRatio_Curr));

WheelRPM := REAL_TO_UINT((UINT_TO_REAL(DropboxRPM) * 100.0) / UINT_TO_REAL(UnderCarriageGearRatio));

IF (NOT Stat_Dropbox_Neutral) THEN 
    VehicleSpeed := REAL_TO_USINT((UINT_TO_REAL(WheelCircle) * 60.0 * UINT_TO_REAL(WheelRPM)) * 0.000001 * 1.12);
ELSE
    VehicleSpeed := 0;
END_IF

//20150728_01 SALI GÜNÜ SUNUMU İÇİN
//VehicleSpeed := REAL_TO_USINT((UINT_TO_REAL(WheelCircle) * 60.0 * UINT_TO_REAL(WheelRPM)) * 0.000001 * 1.12);

//CTIS e gönderilen msj 
CCVS_WheelBasedVehicleSpeed:= VehicleSpeed;

// Voltage Value to drive analog gauge on dashboard - Hz Signal
IF(VehicleSpeed=0)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := 0;
ELSIF(VehicleSpeed<=10)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 0, 10, SpeedometerGaugeValue_0, SpeedometerGaugeValue_1));
ELSIF(VehicleSpeed<=20)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 10, 20, SpeedometerGaugeValue_1, SpeedometerGaugeValue_2));
ELSIF(VehicleSpeed<=30)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 20, 30, SpeedometerGaugeValue_2, SpeedometerGaugeValue_3));
ELSIF(VehicleSpeed<=40)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 30, 40, SpeedometerGaugeValue_3, SpeedometerGaugeValue_4));
ELSIF(VehicleSpeed<=50)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 40, 50, SpeedometerGaugeValue_4, SpeedometerGaugeValue_5));
ELSIF(VehicleSpeed<=60)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 50, 60, SpeedometerGaugeValue_5, SpeedometerGaugeValue_6));
ELSIF(VehicleSpeed<=70)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 60, 70, SpeedometerGaugeValue_6, SpeedometerGaugeValue_7));
ELSIF(VehicleSpeed<=80)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 70, 80, SpeedometerGaugeValue_7, SpeedometerGaugeValue_8));
ELSIF(VehicleSpeed<=90)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 80, 90, SpeedometerGaugeValue_8, SpeedometerGaugeValue_9));
ELSIF(VehicleSpeed<=100)THEN
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 90, 100, SpeedometerGaugeValue_9, SpeedometerGaugeValue_10));
ELSIF (VehicleSpeed<=110) THEN 
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 100, 110, SpeedometerGaugeValue_10, SpeedometerGaugeValue_11));
ELSE
    MC2M_IOMODE_PWM00_SpeedGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(VehicleSpeed), 110, 120, SpeedometerGaugeValue_11, SpeedometerGaugeValue_12));    
END_IF
