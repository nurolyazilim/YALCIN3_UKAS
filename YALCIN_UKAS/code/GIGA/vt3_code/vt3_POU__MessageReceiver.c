/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MESSAGERECEIVER_C
#define INCLUDE__VT3_POU__MESSAGERECEIVER_C

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
static const vt3_screen_initializer FAR __init_table__MessageReceiver[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__MessageReceiver[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const MessageReceiver_t FAR __const__MessageReceiver__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__MessageReceiver__param_init */

/* initialization of PROGRAM status */
void MessageReceiver__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__MessageReceiver; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&MessageReceiver, &__const__MessageReceiver__param_init, sizeof __const__MessageReceiver__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void MessageReceiver__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	MessageReceiver.ENO = MessageReceiver.EN;
	if ( ! MessageReceiver.EN )
		return;


	{
		/* literal constants used in ST */
		static const STRING(8) FAR _const_0 = { 8, 8, "GIGA   :" };
		static const STRING(1) FAR _const_1 = { 1, 1, "\n" };
		static const STRING(6) FAR _const_2 = { 6, 6, "MC2M :" };
		static const STRING(1) FAR _const_3 = { 1, 1, "\n" };
		static const STRING(4) FAR _const_4 = { 4, 4, "BIT:" };
		static const STRING(15) FAR _const_5 = { 15, 15, "YETERSiZ BASINC" };
		/* end of literals */

		/* statements */
		MOVE_STRING((PSTRING)&SWVersionOnScreen, CONCAT_STRING(11,
			(PSTRING)&_const_0,
			(PSTRING)&(SWVersion_GIGA),
			USINT_TO_STRING((MC2M_TERA_SWVersions2)),
			(PSTRING)&_const_1,
			(PSTRING)&_const_2,
			(PSTRING)&(SWVersion_MC2M),
			USINT_TO_STRING((MC2M_TERA_SWVersions2)),
			(PSTRING)&_const_3,
			(PSTRING)&_const_4,
			BOOL_TO_STRING(NOT_BOOL((vt3_can_alarm_CAN_151))),
			BOOL_TO_STRING(NOT_BOOL((vt3_can_alarm_CAN_187)))));

		MOVE_STRING((PSTRING)&DiagMessage01, UDINT_TO_STRING(VT3_ATOMIC_READ_UDINT(MC2M_TERA_TCM_SuspectParameterNumber)));

		MOVE_STRING((PSTRING)&DiagMessage02, USINT_TO_STRING((MC2M_TERA_TCM_FailureModeIdentifier)));

		MOVE_STRING((PSTRING)&DiagMessage07, USINT_TO_STRING((MC2M_TERA_TCM_OccurrenceCount)));

		MOVE_STRING((PSTRING)&DiagMessage03, UDINT_TO_STRING(VT3_ATOMIC_READ_UDINT(MC2M_TERA_ECM_SuspectParameterNumber)));

		MOVE_STRING((PSTRING)&DiagMessage04, USINT_TO_STRING((MC2M_TERA_ECM_FailureModeIdentifier)));

		MOVE_STRING((PSTRING)&DiagMessage08, USINT_TO_STRING((MC2M_TERA_ECM_OccurrenceCount)));

		MOVE_STRING((PSTRING)&DiagMessage05, UDINT_TO_STRING(VT3_ATOMIC_READ_UDINT(MC2M_TERA_EBS_SuspectParameterNumber)));

		MOVE_STRING((PSTRING)&DiagMessage06, USINT_TO_STRING((MC2M_TERA_EBS_FailureModeIdentifier)));

		MOVE_STRING((PSTRING)&DiagMessage09, USINT_TO_STRING((MC2M_TERA_EBS_OccurrenceCount)));

		AuxPressureLow_Stat = (MC2M_TERA_AuxPressureLow_Stat);

		MOVE_STRING((PSTRING)&AuxPressureLowOnScreen, (PSTRING)&_const_5);

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

#endif /* INCLUDE__VT3_POU__MESSAGERECEIVER_C */

/* end of file */
