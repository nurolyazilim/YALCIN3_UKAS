

/********************************AMU_CBO****************************/
    MC2M_TERA_AngleX := Interpolate(AMUCBO_AngleX+AMUCBO_AngleXOffSet,AngX_MinADC,AngX_MaxADC,AngX_MinACT,AngX_MaxACT);
    MC2M_TERA_AngleY := Interpolate(AMUCBO_AngleY+AMUCBO_AngleYOffSet,AngY_MinADC,AngY_MaxADC,AngY_MinACT,AngY_MaxACT);
    MC2M_TERA_AngleY := -MC2M_TERA_AngleY;
/*
IF (VehicleSpeed>5) THEN 
    MC2M_TERA_AngleX := 0;
    MC2M_TERA_AngleY := 0;
ELSE     
    MC2M_TERA_AngleX := Interpolate(AMUCBO_AngleX+AMUCBO_AngleXOffSet,AngX_MinADC,AngX_MaxADC,AngX_MinACT,AngX_MaxACT);
    MC2M_TERA_AngleY := Interpolate(AMUCBO_AngleY+AMUCBO_AngleYOffSet,AngY_MinADC,AngY_MaxADC,AngY_MinACT,AngY_MaxACT);
END_IF
*/

//MC2M_TERA_AngleX := Interpolate(AMUCBO_AngleX,AngX_MinADC,AngX_MaxADC,AngX_MinACT,AngX_MaxACT);
//MC2M_TERA_AngleY := Interpolate(AMUCBO_AngleY,AngY_MinADC,AngY_MaxADC,AngY_MinACT,AngY_MaxACT);

//MC2M_TERA_AngleX := AMUCBO_AngleX;
//MC2M_TERA_AngleY := AMUCBO_AngleY;
