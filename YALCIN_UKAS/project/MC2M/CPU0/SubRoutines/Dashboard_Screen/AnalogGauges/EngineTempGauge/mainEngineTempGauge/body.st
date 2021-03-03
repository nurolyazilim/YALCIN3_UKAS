

// Voltage Value to drive analog gauge on dashboard - Low PWM
/*
IF(EngineTempValue < 80)THEN
    MC2M_IOMODE_PWM01_TempGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(EngineTempValue), 40, 80, EngineTempGaugeValue_Min, EngineTempGaugeValue_Mid));
ELSE
    MC2M_IOMODE_PWM01_TempGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(EngineTempValue), 80, 120, EngineTempGaugeValue_Mid, EngineTempGaugeValue_Max));
END_IF
*/

IF(EngineTempValue < 60)THEN
    MC2M_IOMODE_PWM01_TempGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(EngineTempValue), 40, 60, EngineTempGaugeValue_1, EngineTempGaugeValue_2));
ELSIF (EngineTempValue < 80)THEN
    MC2M_IOMODE_PWM01_TempGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(EngineTempValue), 60, 80, EngineTempGaugeValue_2, EngineTempGaugeValue_3));
ELSIF (EngineTempValue < 100)THEN
    MC2M_IOMODE_PWM01_TempGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(EngineTempValue), 80, 100, EngineTempGaugeValue_3, EngineTempGaugeValue_4));
ELSE
    MC2M_IOMODE_PWM01_TempGauge := INT_TO_UINT(Interpolate(USINT_TO_INT(EngineTempValue), 100, 120, EngineTempGaugeValue_4, EngineTempGaugeValue_5));
END_IF

