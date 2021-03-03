/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINENGINEPROTECTION_C
#define INCLUDE__VT3_POU__MAINENGINEPROTECTION_C

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
static const vt3_screen_initializer FAR __init_table__mainEngineProtection[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainEngineProtection[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainEngineProtection_t FAR __const__mainEngineProtection__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainEngineProtection__param_init */

/* initialization of PROGRAM status */
void mainEngineProtection__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainEngineProtection; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainEngineProtection, &__const__mainEngineProtection__param_init, sizeof __const__mainEngineProtection__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainEngineProtection__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainEngineProtection.ENO = mainEngineProtection.EN;
	if ( ! mainEngineProtection.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Stat_EngProtectionSystemTimerOverride = EQ_INT_2((SHUTDN_EngProtectionSystemTimerOverride),
			(INT)(1));

		Stat_EngineProtection = (Stat_EngProtectionSystemTimerOverride);

		TriggerEngineProtection.CLK = (IOMODE_DIGIN07_EngineProtection);

		
		F_TRIG__call(&TriggerEngineProtection);

		if ( (TriggerEngineProtection.Q) ) {
			Cmd_EngineProtection = TRUE;
			Stat_EngineProtection_Ctr1 = (UDINT)((SINT)0);
		}

		if ( AND_BOOL((Cmd_EngineProtection),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_EngineProtection_Ctr1),
				((DINT)90000L))) ) {
			Stat_EngineProtectionLED = TRUE;
			DOUT_EngineProtection = TRUE;
		} else if  ( AND_BOOL((Cmd_EngineProtection),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_EngineProtection_Ctr1),
				((DINT)120000L))) ) {
			Stat_EngineProtectionLED = (Blink05);
			DOUT_EngineProtection = (Blink05);
		} else if  ( AND_BOOL((Cmd_EngineProtection),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_EngineProtection_Ctr1),
				((DINT)120000L))) ) {
			Stat_EngineProtection_Ctr1 = (UDINT)((SINT)0);
			Cmd_EngineProtection = FALSE;
			Stat_EngineProtectionLED = FALSE;
			DOUT_EngineProtection = FALSE;
		}

		if ( (Cmd_EngineProtection) ) {
			Stat_EngineProtection_Ctr1 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Stat_EngineProtection_Ctr1),
				((SINT)100));
			Stat_EngineProtectionERR = FALSE;
			if ( NOT_BOOL((Stat_EngineProtection)) ) {
				Stat_EngineProtectionERR = TRUE;
				Stat_EngineProtectionLED = (Blink05);
				DOUT_EngineProtection = (Blink05);
			}
		} else if  ( TRUE ) {
			Stat_EngineProtection_Ctr1 = (UDINT)((SINT)0);
			Stat_EngineProtectionLED = FALSE;
			Stat_EngineProtectionERR = FALSE;
			DOUT_EngineProtection = FALSE;
		}

		MC2M_IOMODE_DOUT01_EngineProtection = NOT_BOOL((Cmd_EngineProtection));

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

#endif /* INCLUDE__VT3_POU__MAINENGINEPROTECTION_C */

/* end of file */
