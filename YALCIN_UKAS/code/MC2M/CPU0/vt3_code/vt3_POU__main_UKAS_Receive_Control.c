/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_UKAS_RECEIVE_CONTROL_C
#define INCLUDE__VT3_POU__MAIN_UKAS_RECEIVE_CONTROL_C

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
static const vt3_screen_initializer FAR __init_table__main_UKAS_Receive_Control[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_UKAS_Receive_Control[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_UKAS_Receive_Control_t FAR __const__main_UKAS_Receive_Control__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__main_UKAS_Receive_Control__param_init */

/* initialization of PROGRAM status */
void main_UKAS_Receive_Control__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_UKAS_Receive_Control; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_UKAS_Receive_Control, &__const__main_UKAS_Receive_Control__param_init, sizeof __const__main_UKAS_Receive_Control__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_UKAS_Receive_Control__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	main_UKAS_Receive_Control.ENO = main_UKAS_Receive_Control.EN;
	if ( ! main_UKAS_Receive_Control.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( NOT_BOOL((vt3_can_alarm_CAN_188_3)) ) {
			UKAS_ECM_Remote_Accelerator_Switch = (MURPHY_MC2M_ECM_Remote_Accelerator_Switch);
			UKAS_ECM_Remote_Accelerator = (USINT)(MURPHY_MC2M_ECM_Remote_Accelerator);
			UKAS_TCM_ShiftSelector_Button_R = (MURPHY_MC2M_TCM_ShiftSelector_Button_R);
			UKAS_TCM_ShiftSelector_Button_N = (MURPHY_MC2M_TCM_ShiftSelector_Button_N);
			UKAS_TCM_ShiftSelector_Button_D = (MURPHY_MC2M_TCM_ShiftSelector_Button_D);
		} else if  ( TRUE ) {
			UKAS_ECM_Remote_Accelerator_Switch = FALSE;
			UKAS_ECM_Remote_Accelerator = (USINT)((SINT)0);
			UKAS_TCM_ShiftSelector_Button_R = FALSE;
			UKAS_TCM_ShiftSelector_Button_N = FALSE;
			UKAS_TCM_ShiftSelector_Button_D = FALSE;
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

#endif /* INCLUDE__VT3_POU__MAIN_UKAS_RECEIVE_CONTROL_C */

/* end of file */
