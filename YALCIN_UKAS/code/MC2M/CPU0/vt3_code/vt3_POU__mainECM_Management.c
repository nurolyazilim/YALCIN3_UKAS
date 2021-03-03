/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINECM_MANAGEMENT_C
#define INCLUDE__VT3_POU__MAINECM_MANAGEMENT_C

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
static const vt3_screen_initializer FAR __init_table__mainECM_Management[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainECM_Management[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainECM_Management_t FAR __const__mainECM_Management__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainECM_Management__param_init */

/* initialization of PROGRAM status */
void mainECM_Management__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainECM_Management; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainECM_Management, &__const__mainECM_Management__param_init, sizeof __const__mainECM_Management__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainECM_Management__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainECM_Management.ENO = mainECM_Management.EN;
	if ( ! mainECM_Management.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		ServiceBrakeActivated = NOT_BOOL(EQ_INT_2((CCVS_BrakeSwitch),
				(INT)(1)));

		EngineStartPermit = EQ_SINT_2((CurrentGear),
			((SINT)0));

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

#endif /* INCLUDE__VT3_POU__MAINECM_MANAGEMENT_C */

/* end of file */
