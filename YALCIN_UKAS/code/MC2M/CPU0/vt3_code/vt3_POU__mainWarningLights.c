/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINWARNINGLIGHTS_C
#define INCLUDE__VT3_POU__MAINWARNINGLIGHTS_C

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
static const vt3_screen_initializer FAR __init_table__mainWarningLights[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainWarningLights[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainWarningLights_t FAR __const__mainWarningLights__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainWarningLights__param_init */

/* initialization of PROGRAM status */
void mainWarningLights__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainWarningLights; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainWarningLights, &__const__mainWarningLights__param_init, sizeof __const__mainWarningLights__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainWarningLights__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainWarningLights.ENO = mainWarningLights.EN;
	if ( ! mainWarningLights.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Stat_BatteryIndicatorLamp = (AlarmState_Battery);

		Stat_TransOilTempLamp = (AlarmState_TransOilTemperature);

		Stat_BrakeIndicatorLamp = (AlarmState_BrakeIndicator);

		Stat_Wait2StartLamp = EQ_INT_2((SHUTDN_EngineWaitToStartLamp),
			(INT)(1));

		MC2M_IOMODE_DOUT00_ABS_IndicatorLamp = (Stat_ABS_IndicatorLamp);

		MC2M_IOMODE_DOUT10 = (Stat_TransOilTempLamp);

		MC2M_IOMODE_DOUT06 = (Stat_BrakeIndicatorLamp);

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

#endif /* INCLUDE__VT3_POU__MAINWARNINGLIGHTS_C */

/* end of file */
