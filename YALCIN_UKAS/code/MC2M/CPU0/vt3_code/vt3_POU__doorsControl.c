/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DOORSCONTROL_C
#define INCLUDE__VT3_POU__DOORSCONTROL_C

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
static const vt3_screen_initializer FAR __init_table__doorsControl[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__doorsControl[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const doorsControl_t FAR __const__doorsControl__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* backDoorTest_tout    */ ((UINT)0U),
}; /* end of __const__doorsControl__param_init */

/* initialization of PROGRAM status */
void doorsControl__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__doorsControl; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&doorsControl, &__const__doorsControl__param_init, sizeof __const__doorsControl__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void doorsControl__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	doorsControl.ENO = doorsControl.EN;
	if ( ! doorsControl.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Cmd_HydraulicDoorOpened = NOT_BOOL((DIGIN_Back_HydDoorOpened));

		Cmd_HydraulicDoorClosed = NOT_BOOL((DIGIN_Back_HydDoorClosed));

		Stat_HydraulicDoorOpened = (Cmd_HydraulicDoorOpened);

		if ( (DIGIN_BackDoor_OUT_Close) ) {
			if ( NOT_BOOL((Stat_BackDoor_OUT_Close)) ) {
				BackDoor_OUT_Close_DBCtr = (UINT)ADD_UINT((BackDoor_OUT_Close_DBCtr),
					((SINT)100));
			}
		} else if  ( TRUE ) {
			BackDoor_OUT_Close_DBCtr = (UINT)((SINT)0);
		}

		if ( AND_BOOL((DIGIN_BackDoor_OUT_Close),
			GT_WORD_2((BackDoor_OUT_Close_DBCtr),
				(UINT)(((UINT)500U)))) ) {
			Stat_BackDoor_OUT_Close = TRUE;
		} else if  ( TRUE ) {
			Stat_BackDoor_OUT_Close = FALSE;
		}

		if ( (DIGIN_BackDoor_IN_Close) ) {
			if ( NOT_BOOL((Stat_BackDoor_IN_Close)) ) {
				BackDoor_IN_Close_DBCtr = (UINT)ADD_UINT((BackDoor_IN_Close_DBCtr),
					((SINT)100));
			}
		} else if  ( TRUE ) {
			BackDoor_IN_Close_DBCtr = (UINT)((SINT)0);
		}

		if ( AND_BOOL((DIGIN_BackDoor_IN_Close),
			GT_WORD_2((BackDoor_IN_Close_DBCtr),
				(UINT)(((UINT)500U)))) ) {
			Stat_BackDoor_IN_Close = TRUE;
		} else if  ( TRUE ) {
			Stat_BackDoor_IN_Close = FALSE;
		}

		if ( (DIGIN_BackDoor_OUT_Open) ) {
			if ( NOT_BOOL((Stat_BackDoor_OUT_Open)) ) {
				BackDoor_OUT_Open_DBCtr = (UINT)ADD_UINT((BackDoor_OUT_Open_DBCtr),
					((SINT)100));
			}
		} else if  ( TRUE ) {
			BackDoor_OUT_Open_DBCtr = (UINT)((SINT)0);
		}

		if ( AND_BOOL((DIGIN_BackDoor_OUT_Open),
			GT_WORD_2((BackDoor_OUT_Open_DBCtr),
				(UINT)(((UINT)500U)))) ) {
			Stat_BackDoor_OUT_Open = TRUE;
		} else if  ( TRUE ) {
			Stat_BackDoor_OUT_Open = FALSE;
		}

		if ( (DIGIN_BackDoor_IN_Open) ) {
			if ( NOT_BOOL((Stat_BackDoor_IN_Open)) ) {
				BackDoor_IN_Open_DBCtr = (UINT)ADD_UINT((BackDoor_IN_Open_DBCtr),
					((SINT)100));
			}
		} else if  ( TRUE ) {
			BackDoor_IN_Open_DBCtr = (UINT)((SINT)0);
		}

		if ( AND_BOOL((DIGIN_BackDoor_IN_Open),
			GT_WORD_2((BackDoor_IN_Open_DBCtr),
				(UINT)(((UINT)500U)))) ) {
			Stat_BackDoor_IN_Open = TRUE;
		} else if  ( TRUE ) {
			Stat_BackDoor_IN_Open = FALSE;
		}

		if ( (DIGIN_BackDoorHandle_Open) ) {
			if ( NOT_BOOL((Stat_BackDoorHandle_Open)) ) {
				BackDoorHandle_Open_DBCtr = (UINT)ADD_UINT((BackDoorHandle_Open_DBCtr),
					((SINT)100));
			}
		} else if  ( TRUE ) {
			BackDoorHandle_Open_DBCtr = (UINT)((SINT)0);
		}

		if ( AND_BOOL((DIGIN_BackDoorHandle_Open),
			GT_WORD_2((BackDoorHandle_Open_DBCtr),
				((INT)200))) ) {
			Stat_BackDoorHandle_Open = TRUE;
		} else if  ( TRUE ) {
			Stat_BackDoorHandle_Open = FALSE;
		}

		if ( (Cmd_HydraulicDoorClosed) ) {
			if ( NOT_BOOL((Stat_HydraulicDoorClosed)) ) {
				HydraulicDoorClosed_DBCtr = (UINT)ADD_UINT((HydraulicDoorClosed_DBCtr),
					((SINT)100));
			}
		} else if  ( TRUE ) {
			HydraulicDoorClosed_DBCtr = (UINT)((SINT)0);
		}

		if ( AND_BOOL((Cmd_HydraulicDoorClosed),
			GT_WORD_2((HydraulicDoorClosed_DBCtr),
				(UINT)(((UINT)1000U)))) ) {
			Stat_HydraulicDoorClosed = TRUE;
		} else if  ( TRUE ) {
			Stat_HydraulicDoorClosed = FALSE;
		}

		DOUT_RearDoorControlValf_1 = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(OR_BOOL(AND_BOOL(XOR_BOOL((Stat_BackDoor_IN_Open),
									(Stat_BackDoor_OUT_Open)),
								NOT_BOOL((Stat_HydraulicDoorClosed))),
							AND_BOOL((Stat_BackDoorHandle_Open),
								(Stat_HydraulicDoorClosed))),
						NOT_BOOL((Stat_BackDoor_IN_Close))),
					NOT_BOOL((Stat_BackDoor_OUT_Close))),
				NOT_BOOL((Stat_HydraulicDoorOpened))),
			NOT_BOOL((Stat_MineLock)));

		DOUT_RearDoorControlValf_2 = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(XOR_BOOL((Stat_BackDoor_IN_Close),
								(Stat_BackDoor_OUT_Close)),
							NOT_BOOL((Stat_BackDoor_IN_Open))),
						NOT_BOOL((Stat_BackDoor_OUT_Open))),
					NOT_BOOL((Stat_BackDoorHandle_Open))),
				NOT_BOOL((Stat_HydraulicDoorClosed))),
			NOT_BOOL((Stat_MineLock)));

		Cmd_GunTowerDoor_1 = (DIGIN_GunTowerDoor_1);

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

#endif /* INCLUDE__VT3_POU__DOORSCONTROL_C */

/* end of file */
