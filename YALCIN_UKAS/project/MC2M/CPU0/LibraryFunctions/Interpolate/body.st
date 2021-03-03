/*---------------------------------------------------------------*/
/*                    Interpolation                              */
/*                                                               */ 
/*                  (y2 - y1) * (xm - x1)                        */
/*            ym =  --------------------- + y1                   */
/*                        (x2 - x1)                              */
/*---------------------------------------------------------------*/ 

IF(x1=x2)THEN 
    Interpolate := y1;
    RETURN;
END_IF

DataA := y2 - y1;
DataB := xm - x1;
DataC := x2 - x1;
DataD := REAL_TO_INT(((INT_TO_REAL(DataA) * INT_TO_REAL(DataB))/INT_TO_REAL(DataC))) + y1;

IF(DataD > 32000)THEN 
    Interpolate := 32000;
    RETURN;
END_IF


IF(DataD < -32000)THEN 
    Interpolate := -32000;
    RETURN;
END_IF

Interpolate := DataD;
RETURN;
