
ScreenLightSet := ScreenLightSet + 10 * BOOL_TO_USINT(ind_screen_touch_BrightnessInc.eventDown);
ScreenLightSet := ScreenLightSet - 10 * BOOL_TO_USINT(ind_screen_touch_BrightnessDec.eventDown);

IF(ind_screen_touch_BrightnessInc.pressedTime>800 AND ((ind_screen_touch_BrightnessInc.pressedTime MOD 200)=0))THEN
    ScreenLightSet := ScreenLightSet + 10;
END_IF
IF(ind_screen_touch_BrightnessDec.pressedTime>800 AND ((ind_screen_touch_BrightnessDec.pressedTime MOD 200)=0))THEN
    ScreenLightSet := ScreenLightSet - 10;
END_IF

IF(ScreenLightSet < 20)THEN
    ScreenLightSet := 20;
END_IF

IF(ScreenLightSet > 240)THEN
    ScreenLightSet := 240;
END_IF

ShowBrightnessBar := FALSE;

BrightnessBarTOF.IN := (ind_screen_touch_BrightnessInc.eventUp OR ind_screen_touch_BrightnessDec.eventUp);
BrightnessBarTOF.PT := 2000;
BrightnessBarTOF;



IF(ind_screen_touch_BrightnessInc.pressed OR ind_screen_touch_BrightnessDec.pressed) OR (BrightnessBarTOF.Q) THEN
    ShowBrightnessBar := TRUE;
    IF((MainLoop MOD 10)=0)THEN
        save_bytearray_P;
    END_IF
END_IF

IF(MC2M_TERA_Icon_Status_BO_S3) THEN
 ScreenLight:=0;
ELSIF(MC2M_TERA_Icon_Status_BO_S2) THEN 
 //ScreenLight:= ScreenLight_BO;
 ScreenLight:= 0;
ELSIF(MC2M_TERA_Icon_Status_BO_S1) THEN 
 //ScreenLight:= ScreenLight_BO;
 ScreenLight:= 0;
ELSIF(MC2M_TERA_Icon_Status_BO_0) THEN 
 //ScreenLight:= 0;
 //ScreenLight:= 240;
 ScreenLight := ScreenLightSet; 
END_IF















