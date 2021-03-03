//DOUT_Brake_En
//ANOUT_BrakeProportional
//AIN_Brake_Joystick
JoystickValue := AIN_Brake_Joystick;

IF( JoystickValue < 2670 ) THEN
    BrakeProportionalValue := 0;
ELSE
    BrakeProportionalValue := INT_TO_UINT(Interpolate(UINT_TO_INT(JoystickValue),JoystickINLowLevel,JoystickINHighLevel,JoystickOutLowLevel,JoystickOutHighLevel));
END_IF

IF( BrakeProportionalValue > 0 ) THEN
    DOUT_Brake_En := TRUE;
ELSE
    DOUT_Brake_En := FALSE;
END_IF

ANOUT_BrakeProportional := BrakeProportionalValue;