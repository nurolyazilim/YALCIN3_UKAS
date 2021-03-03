/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINABS4WD_C
#define INCLUDE__VT3_POU__MAINABS4WD_C

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
static const vt3_screen_initializer FAR __init_table__mainABS4WD[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainABS4WD[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainABS4WD_t FAR __const__mainABS4WD__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainABS4WD__param_init */

/* initialization of PROGRAM status */
void mainABS4WD__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainABS4WD; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainABS4WD, &__const__mainABS4WD__param_init, sizeof __const__mainABS4WD__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainABS4WD__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainABS4WD.ENO = mainABS4WD.EN;
	if ( ! mainABS4WD.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Stat_ABS4WD = (IOMODE_DIGIN25_ABSoffRoad);

		Trigger_44.CLK = (IOMODE_DIGIN25_ABSoffRoad);

		
		R_TRIG__call(&Trigger_44);

		Trigger_42.CLK = (IOMODE_DIGIN25_ABSoffRoad);

		
		F_TRIG__call(&Trigger_42);

		EBC1_MC2M_ABSOffRoadSwitch = (SINT)BOOL_TO_SINT((Stat_ABS4WD));

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

#endif /* INCLUDE__VT3_POU__MAINABS4WD_C */

/* end of file */
