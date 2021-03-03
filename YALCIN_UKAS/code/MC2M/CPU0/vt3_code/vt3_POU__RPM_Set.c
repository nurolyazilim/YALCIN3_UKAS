/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__RPM_SET_C
#define INCLUDE__VT3_POU__RPM_SET_C

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
static const vt3_screen_initializer FAR __init_table__RPM_Set[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__RPM_Set[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const RPM_Set_t FAR __const__RPM_Set__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* PedalSpeedTout       */ ((USINT)0U),
	/* PedalSpeed           */ ((USINT)0U),
	/* RPM_diff             */ ((UINT)0U),
	/* SelectedRPM          */ ((UINT)0U),
	/* Start_Val            */ ((UINT)0U),
}; /* end of __const__RPM_Set__param_init */

/* initialization of PROGRAM status */
void RPM_Set__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__RPM_Set; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&RPM_Set, &__const__RPM_Set__param_init, sizeof __const__RPM_Set__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void RPM_Set__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	RPM_Set.ENO = RPM_Set.EN;
	if ( ! RPM_Set.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( (TEST_MC2M_RemoteGasEnable) ) {
			EBC1_GasPedalEnable = (INT)(1);
			if ( LT_WORD_2((RPM_Set.Start_Val),
				((SINT)1)) ) {
				RPM_Set.Start_Val = (UINT)ADD_UINT((RPM_Set.Start_Val),
					((SINT)1));
			}
		} else if  ( TRUE ) {
			EBC1_GasPedalEnable = (INT)(0);
			RPM_Set.Start_Val = (UINT)((SINT)0);
		}

		

		if ( AND_BOOL(GT_WORD_2((TEST_MC2M_RemoteGasRatio),
				((SINT)6)),
			LT_WORD_2((TEST_MC2M_RemoteGasRatio),
				((SINT)30))) ) {
			RPM_Set.SelectedRPM = (UINT)MUL_UINT((TEST_MC2M_RemoteGasRatio),
				((SINT)100));
		} else if  ( LE_WORD_2((TEST_MC2M_RemoteGasRatio),
			((SINT)6)) ) {
			RPM_Set.SelectedRPM = (UINT)((INT)700);
		} else if  ( TRUE ) {
			RPM_Set.SelectedRPM = (UINT)((INT)3000);
		}

		if ( EQ_INT_2((EBC1_GasPedalEnable),
			(INT)(1)) ) {
			if ( AND_BOOL(LT_WORD_2((MC2M_TERA_EngineSpeed),
					(RPM_Set.SelectedRPM)),
				GE_BYTE_2((RPM_Set.PedalSpeedTout),
					(RPM_Set.PedalSpeed))) ) {
				if ( LT_BYTE_2((EEC2_GasPedal),
					((INT)250)) ) {
					EEC2_GasPedal = (USINT)ADD_USINT((EEC2_GasPedal),
						((SINT)1));
				} else if  ( TRUE ) {
					EEC2_GasPedal = (USINT)((INT)250);
				}
				RPM_Set.PedalSpeedTout = (USINT)((SINT)0);
			} else if  ( AND_BOOL(GT_WORD_2((MC2M_TERA_EngineSpeed),
					(RPM_Set.SelectedRPM)),
				GE_BYTE_2((RPM_Set.PedalSpeedTout),
					(RPM_Set.PedalSpeed))) ) {
				if ( GT_BYTE_2((EEC2_GasPedal),
					((SINT)0)) ) {
					EEC2_GasPedal = (USINT)SUB_USINT((EEC2_GasPedal),
						((SINT)1));
				} else if  ( TRUE ) {
					EEC2_GasPedal = (USINT)((SINT)0);
				}
				RPM_Set.PedalSpeedTout = (USINT)((SINT)0);
			} else if  ( EQ_WORD_2((MC2M_TERA_EngineSpeed),
				(RPM_Set.SelectedRPM)) ) {
				RPM_Set.PedalSpeedTout = (USINT)((SINT)0);
			} else if  ( TRUE ) {
				RPM_Set.PedalSpeedTout = (USINT)ADD_USINT((RPM_Set.PedalSpeedTout),
					((SINT)1));
			}
		} else if  ( TRUE ) {
			EEC2_GasPedal = (USINT)((SINT)0);
		}

		if ( GT_WORD_2((RPM_Set.SelectedRPM),
			(MC2M_TERA_EngineSpeed)) ) {
			RPM_Set.RPM_diff = (UINT)SUB_UINT((RPM_Set.SelectedRPM),
				(MC2M_TERA_EngineSpeed));
		} else if  ( TRUE ) {
			RPM_Set.RPM_diff = (UINT)SUB_UINT((MC2M_TERA_EngineSpeed),
				(RPM_Set.SelectedRPM));
		}

		if ( AND_BOOL(LE_WORD_2((RPM_Set.RPM_diff),
				((SINT)50)),
			GT_WORD_2((RPM_Set.RPM_diff),
				((SINT)40))) ) {
			RPM_Set.PedalSpeed = (USINT)((SINT)6);
		} else if  ( AND_BOOL(LE_WORD_2((RPM_Set.RPM_diff),
				((SINT)40)),
			GT_WORD_2((RPM_Set.RPM_diff),
				((SINT)30))) ) {
			RPM_Set.PedalSpeed = (USINT)((SINT)7);
		} else if  ( AND_BOOL(LE_WORD_2((RPM_Set.RPM_diff),
				((SINT)30)),
			GT_WORD_2((RPM_Set.RPM_diff),
				((SINT)20))) ) {
			RPM_Set.PedalSpeed = (USINT)((SINT)8);
		} else if  ( AND_BOOL(LE_WORD_2((RPM_Set.RPM_diff),
				((SINT)20)),
			GT_WORD_2((RPM_Set.RPM_diff),
				((SINT)10))) ) {
			RPM_Set.PedalSpeed = (USINT)((SINT)9);
		} else if  ( LE_WORD_2((RPM_Set.RPM_diff),
			((SINT)10)) ) {
			RPM_Set.PedalSpeed = (USINT)((SINT)10);
		} else if  ( TRUE ) {
			RPM_Set.PedalSpeed = (USINT)((SINT)2);
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

#endif /* INCLUDE__VT3_POU__RPM_SET_C */

/* end of file */
