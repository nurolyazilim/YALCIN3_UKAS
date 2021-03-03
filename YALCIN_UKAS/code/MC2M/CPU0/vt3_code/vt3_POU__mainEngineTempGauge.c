/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_C
#define INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_C

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
static const vt3_screen_initializer FAR __init_table__mainEngineTempGauge[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainEngineTempGauge[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainEngineTempGauge_t FAR __const__mainEngineTempGauge__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainEngineTempGauge__param_init */

/* initialization of PROGRAM status */
void mainEngineTempGauge__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainEngineTempGauge; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainEngineTempGauge, &__const__mainEngineTempGauge__param_init, sizeof __const__mainEngineTempGauge__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainEngineTempGauge__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainEngineTempGauge.ENO = mainEngineTempGauge.EN;
	if ( ! mainEngineTempGauge.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( LT_BYTE_2((EngineTempValue),
			((SINT)60)) ) {
			MC2M_IOMODE_PWM01_TempGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((EngineTempValue)),
					((SINT)40),
					((SINT)60),
					(EngineTempGaugeValue_1),
					(EngineTempGaugeValue_2)));
		} else if  ( LT_BYTE_2((EngineTempValue),
			((SINT)80)) ) {
			MC2M_IOMODE_PWM01_TempGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((EngineTempValue)),
					((SINT)60),
					((SINT)80),
					(EngineTempGaugeValue_2),
					(EngineTempGaugeValue_3)));
		} else if  ( LT_BYTE_2((EngineTempValue),
			((SINT)100)) ) {
			MC2M_IOMODE_PWM01_TempGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((EngineTempValue)),
					((SINT)80),
					((SINT)100),
					(EngineTempGaugeValue_3),
					(EngineTempGaugeValue_4)));
		} else if  ( TRUE ) {
			MC2M_IOMODE_PWM01_TempGauge = (UINT)INT_TO_UINT(Interpolate(USINT_TO_INT((EngineTempValue)),
					((SINT)100),
					((SINT)120),
					(EngineTempGaugeValue_4),
					(EngineTempGaugeValue_5)));
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

#endif /* INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_C */

/* end of file */
