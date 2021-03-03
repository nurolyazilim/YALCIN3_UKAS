/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINSPEEDOMETER_C
#define INCLUDE__VT3_POU__MAINSPEEDOMETER_C

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* suppress HC12 specific warnings */
#pragma MESSAGE DISABLE C5909 // Assignment in condition
#pragma MESSAGE DISABLE C5918 // Removed dead goto
#pragma MESSAGE DISABLE C5917 // Removed dead assignment
#pragma MESSAGE DISABLE C5660 // Removed dead code
#pragma MESSAGE DISABLE C1420 // Result of function-call is ignored
#pragma MESSAGE DISABLE C4002 // Result not used

/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__mainSpeedometer[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainSpeedometer[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainSpeedometer_t FAR __const__mainSpeedometer__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainSpeedometer__param_init */

/* initialization of PROGRAM status */
void mainSpeedometer__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainSpeedometer; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainSpeedometer, &__const__mainSpeedometer__param_init, sizeof __const__mainSpeedometer__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainSpeedometer__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainSpeedometer.ENO = mainSpeedometer.EN;
	if ( ! mainSpeedometer.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( LT_SINT_2((Stat_Dropbox),
			((SINT)2)) ) {
			DropboxGearRatio_Curr = (UINT)(UINT)(((UINT)247U));
		} else if  ( TRUE ) {
			DropboxGearRatio_Curr = (UINT)(UINT)(((UINT)109U));
		}

		TransOutputShaftSpeed = (UINT)(ETC1_TransmissionOutputShaftSpeed);

		DropboxRPM = (UINT)REAL_TO_UINT(DIV_REAL(MUL_REAL(UINT_TO_REAL((TransOutputShaftSpeed)),
					100.0),
				UINT_TO_REAL((DropboxGearRatio_Curr))));

		WheelRPM = (UINT)REAL_TO_UINT(DIV_REAL(MUL_REAL(UINT_TO_REAL((DropboxRPM)),
					100.0),
				UINT_TO_REAL((UINT)(((UINT)538U)))));

		if ( NOT_BOOL((Stat_Dropbox_Neutral)) ) {
			VehicleSpeed = (USINT)REAL_TO_USINT(MUL_REAL(MUL_REAL(MUL_REAL(MUL_REAL(UINT_TO_REAL((UINT)(((UINT)3263U))),
								60.0),
							UINT_TO_REAL((WheelRPM))),
						0.000001),
					1.12));
		} else if  ( TRUE ) {
			VehicleSpeed = (USINT)((SINT)0);
		}

		CCVS_WheelBasedVehicleSpeed = (UINT)(VehicleSpeed);

		if ( EQ_BYTE_2((VehicleSpeed),
			((SINT)0)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)((SINT)0);
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)10)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)0),
					((SINT)10),
					(INT)(((INT)0)),
					(INT)(((INT)25))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)20)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)10),
					((SINT)20),
					(INT)(((INT)25)),
					(INT)(((INT)45))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)30)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)20),
					((SINT)30),
					(INT)(((INT)45)),
					(INT)(((INT)65))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)40)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)30),
					((SINT)40),
					(INT)(((INT)65)),
					(INT)(((INT)90))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)50)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)40),
					((SINT)50),
					(INT)(((INT)90)),
					(INT)(((INT)108))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)60)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)50),
					((SINT)60),
					(INT)(((INT)108)),
					(INT)(((INT)135))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)70)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)60),
					((SINT)70),
					(INT)(((INT)135)),
					(INT)(((INT)154))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)80)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)70),
					((SINT)80),
					(INT)(((INT)154)),
					(INT)(((INT)177))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)90)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)80),
					((SINT)90),
					(INT)(((INT)177)),
					(INT)(((INT)200))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)100)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)90),
					((SINT)100),
					(INT)(((INT)200)),
					(INT)(((INT)221))));
		} else if  ( LE_BYTE_2((VehicleSpeed),
			((SINT)110)) ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)100),
					((SINT)110),
					(INT)(((INT)221)),
					(INT)(((INT)240))));
		} else if  ( TRUE ) {
			MC2M_IOMODE_PWM00_SpeedGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((VehicleSpeed)),
					((SINT)110),
					((SINT)120),
					(INT)(((INT)240)),
					(INT)(((INT)260))));
		}

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


	/* end of PROGRAM body */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__MAINSPEEDOMETER_C */

/* end of file */
