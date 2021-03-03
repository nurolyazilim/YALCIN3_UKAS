/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINIGNITIONOFF_C
#define INCLUDE__VT3_POU__MAINIGNITIONOFF_C

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
static const vt3_screen_initializer FAR __init_table__mainIgnitionOff[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainIgnitionOff[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainIgnitionOff_t FAR __const__mainIgnitionOff__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainIgnitionOff__param_init */

/* initialization of PROGRAM status */
void mainIgnitionOff__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainIgnitionOff; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainIgnitionOff, &__const__mainIgnitionOff__param_init, sizeof __const__mainIgnitionOff__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainIgnitionOff__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainIgnitionOff.ENO = mainIgnitionOff.EN;
	if ( ! mainIgnitionOff.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		GIGASpeed = (UINT)((SINT)0);

		GIGAEngineSpeed = (UINT)((SINT)0);

		GIGAFuelLevel = (UINT)((SINT)0);

		GIGAEngineTempValue = (UINT)((SINT)0);

		GIGAEngineOilPressure = (UINT)((SINT)0);

		GIGATransOilTemperature = (UINT)((SINT)0);

		Backlight = (UINT)((SINT)0);

		BacklightScreen = (UINT)((SINT)0);

		GIGAGaugeOverride0 = (INT)((SINT)0);

		GIGAGaugeOverride1 = (INT)((SINT)0);

		GIGAGaugeOverride2 = (INT)((SINT)0);

		GIGAGaugeOverride3 = (INT)((SINT)0);

		GIGAGaugeOverride4 = (INT)((SINT)0);

		GIGAGaugeOverride5 = (INT)((SINT)0);

		GIGABarGaugeOverride = (USINT)((SINT)0);

		led_tmp = FALSE;

		L10_Difflock_Dropbox = FALSE;

		L11_Difflock_Front = FALSE;

		L12_Difflock_Rear = FALSE;

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

#endif /* INCLUDE__VT3_POU__MAINIGNITIONOFF_C */

/* end of file */
