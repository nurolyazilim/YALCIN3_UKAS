/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINENGINEBRAKE_C
#define INCLUDE__VT3_POU__MAINENGINEBRAKE_C

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
static const vt3_screen_initializer FAR __init_table__mainEngineBrake[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainEngineBrake[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainEngineBrake_t FAR __const__mainEngineBrake__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainEngineBrake__param_init */

/* initialization of PROGRAM status */
void mainEngineBrake__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainEngineBrake; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainEngineBrake, &__const__mainEngineBrake__param_init, sizeof __const__mainEngineBrake__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainEngineBrake__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainEngineBrake.ENO = mainEngineBrake.EN;
	if ( ! mainEngineBrake.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Cmd_EngineBrake = AND_BOOL(AND_BOOL(AND_BOOL((DIGIN_EngineBrake),
					GT_SINT_2((CurrentGear),
						((SINT)0))),
				GT_INT_2((VehicleSpeed),
					(INT)(((INT)20)))),
			EQ_BYTE_2((EEC2_AcceleratorPedalPosition1),
				((SINT)0)));

		ETC1_TransmissionTrqCnvLockupEngaged = (ETC1_TransmissionTrqCnvLockupEngaged);

		Stat_EngineBrake = (Cmd_EngineBrake);

		MC2M_IOMODE_DOUT11_EngineBrakeActivation = (Stat_EngineBrake);

		MC2M_TERA_Engine_Brake_Stat = (Stat_EngineBrake);

		Stat_EngineBrakeLED = EQ_BYTE_2((EBC1_vECM_EngineRetarderSelection),
			((SINT)100));

		MC2M_TERA_Icon_Status_BO_2 = (Stat_EngineBrakeLED);

		EBC1_MC2M_EngineRetarder = (USINT)(EBC1_vECM_EngineRetarderSelection);

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

#endif /* INCLUDE__VT3_POU__MAINENGINEBRAKE_C */

/* end of file */
