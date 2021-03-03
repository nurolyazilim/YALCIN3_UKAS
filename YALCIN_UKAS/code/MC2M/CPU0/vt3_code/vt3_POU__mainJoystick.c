/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINJOYSTICK_C
#define INCLUDE__VT3_POU__MAINJOYSTICK_C

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
static const vt3_screen_initializer FAR __init_table__mainJoystick[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainJoystick[] */

/* initializers of in_out parameters */

/* POU constants */
static const INT              FAR __const__JoystickINLowLevel   = ((INT)2700);         /*                                          */
static const INT              FAR __const__JoystickINHighLevel  = ((INT)4900);         /*                                          */
static const INT              FAR __const__JoystickOutLowLevel  = ((INT)0);            /*                                          */
static const INT              FAR __const__JoystickOutHighLevel = ((INT)10000);        /*                                          */
/* end of POU constants */

/* initialize values for POU status */
static const mainJoystick_t FAR __const__mainJoystick__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* BrakeProportionalValue */ ((UINT)0U),
	/* JoystickValue        */ ((UINT)0U),
}; /* end of __const__mainJoystick__param_init */

/* initialization of PROGRAM status */
void mainJoystick__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainJoystick; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainJoystick, &__const__mainJoystick__param_init, sizeof __const__mainJoystick__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainJoystick__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainJoystick.ENO = mainJoystick.EN;
	if ( ! mainJoystick.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		mainJoystick.JoystickValue = (UINT)(AIN_Brake_Joystick);

		if ( LT_WORD_2((mainJoystick.JoystickValue),
			((INT)2670)) ) {
			mainJoystick.BrakeProportionalValue = (UINT)((SINT)0);
		} else if  ( TRUE ) {
			mainJoystick.BrakeProportionalValue = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((mainJoystick.JoystickValue)),
					(INT)(((INT)2700)),
					(INT)(((INT)4900)),
					(INT)(((INT)0)),
					(INT)(((INT)10000))));
		}

		if ( GT_WORD_2((mainJoystick.BrakeProportionalValue),
			((SINT)0)) ) {
			DOUT_Brake_En = TRUE;
		} else if  ( TRUE ) {
			DOUT_Brake_En = FALSE;
		}

		ANOUT_BrakeProportional = (UINT)(mainJoystick.BrakeProportionalValue);

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

#endif /* INCLUDE__VT3_POU__MAINJOYSTICK_C */

/* end of file */
