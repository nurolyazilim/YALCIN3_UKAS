/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINDIFFLOCK_C
#define INCLUDE__VT3_POU__MAINDIFFLOCK_C

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
static const vt3_screen_initializer FAR __init_table__mainDiffLock[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainDiffLock[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainDiffLock_t FAR __const__mainDiffLock__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainDiffLock__param_init */

/* initialization of PROGRAM status */
void mainDiffLock__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainDiffLock; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainDiffLock, &__const__mainDiffLock__param_init, sizeof __const__mainDiffLock__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainDiffLock__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainDiffLock.ENO = mainDiffLock.EN;
	if ( ! mainDiffLock.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( NOT_BOOL((Cmd_Bypass_Switch)) ) {
			if ( AND_BOOL(LE_BYTE_2((VehicleSpeed),
					((SINT)20)),
				GE_BYTE_2((MC2M_TERA_AccessoryPressure),
					(USINT)(((USINT)60U)))) ) {
				if ( (NMSGUI_MC2M_difflock_admin_touch) ) {
					Cmd_Dropbox_4WD_Off = (NMSGUI_MC2M_difflock_mid_touch);
					Cmd_RearAxleDiffLock = (NMSGUI_MC2M_difflock_rear_touch);
					Cmd_FrontAxleDiffLock = (NMSGUI_MC2M_difflock_front_touch);
				} else if  ( TRUE ) {
					Cmd_Dropbox_4WD_Off = (IOMODE_DIGIN27_DiffLock);
					Cmd_RearAxleDiffLock = (DIGIN_RearAxleDiffLock);
					Cmd_FrontAxleDiffLock = (DIGIN_FrontAxleDiffLock);
				}
			}
			Stat_Dropbox_4WD_Off = (Cmd_Dropbox_4WD_Off);
			Stat_RearAxleDiffLock = AND_BOOL((Cmd_RearAxleDiffLock),
				(Stat_Dropbox_4WD_Off));
			Stat_FrontAxleDiffLock = AND_BOOL((Cmd_FrontAxleDiffLock),
				(Stat_RearAxleDiffLock));
			if ( (Stat_FrontAxleDiffLock) ) {
				if ( AND_BOOL(AND_BOOL((IOMODE_DIGIN16_FeedBack_FrontAxle),
						(DIGIN_Feedback_RearAxle)),
					(DIGIN_Feedback_4WD_DiffLock)) ) {
					Stat_4x4 = (SINT)((SINT)3);
					Cmd_4x4_Buzzer = (SINT)((SINT)3);
				} else if  ( TRUE ) {
					Cmd_4x4_Buzzer = (SINT)((SINT)4);
					if ( (Blink05) ) {
						Stat_4x4 = (SINT)((SINT)3);
					} else if  ( TRUE ) {
						Stat_4x4 = (SINT)((SINT)0);
					}
				}
			} else if  ( (Stat_RearAxleDiffLock) ) {
				if ( AND_BOOL((DIGIN_Feedback_RearAxle),
					(DIGIN_Feedback_4WD_DiffLock)) ) {
					Stat_4x4 = (SINT)((SINT)2);
					Cmd_4x4_Buzzer = (SINT)((SINT)2);
				} else if  ( TRUE ) {
					Cmd_4x4_Buzzer = (SINT)((SINT)4);
					if ( (Blink05) ) {
						Stat_4x4 = (SINT)((SINT)2);
					} else if  ( TRUE ) {
						Stat_4x4 = (SINT)((SINT)0);
					}
				}
			} else if  ( (Stat_Dropbox_4WD_Off) ) {
				if ( (DIGIN_Feedback_4WD_DiffLock) ) {
					Stat_4x4 = (SINT)((SINT)1);
					Cmd_4x4_Buzzer = (SINT)((SINT)1);
				} else if  ( TRUE ) {
					Cmd_4x4_Buzzer = (SINT)((SINT)4);
					if ( (Blink05) ) {
						Stat_4x4 = (SINT)((SINT)1);
					} else if  ( TRUE ) {
						Stat_4x4 = (SINT)((SINT)0);
					}
				}
			} else if  ( TRUE ) {
				Stat_4x4 = (SINT)((SINT)0);
				Cmd_4x4_Buzzer = (SINT)((SINT)0);
			}
			DOUT_Dropbox_4WD_Off = (Stat_Dropbox_4WD_Off);
			DOUT_RearAxleDiffLock = (Stat_RearAxleDiffLock);
			DOUT_FrontAxleDiffLock = (Stat_FrontAxleDiffLock);
			Stat_DiffLock44 = AND_BOOL(AND_BOOL(AND_BOOL((DIGIN_Feedback_4WD_DiffLock),
						(IOMODE_DIGIN16_FeedBack_FrontAxle)),
					(DIGIN_Feedback_RearAxle)),
				EQ_SINT_2((Stat_4x4),
					((SINT)3)));
			EAC1_DifferentialLockStateFrontAxle1 = (USINT)BOOL_TO_USINT((IOMODE_DIGIN16_FeedBack_FrontAxle));
			EAC1_DifferentialLockStateRearAxle1 = (USINT)BOOL_TO_USINT((DIGIN_Feedback_RearAxle));
		} else if  ( TRUE ) {
			DOUT_Dropbox_4WD_Off = FALSE;
			DOUT_RearAxleDiffLock = FALSE;
			DOUT_FrontAxleDiffLock = FALSE;
			if ( AND_BOOL(AND_BOOL((IOMODE_DIGIN16_FeedBack_FrontAxle),
					(DIGIN_Feedback_RearAxle)),
				(DIGIN_Feedback_4WD_DiffLock)) ) {
				Stat_4x4 = (SINT)((SINT)3);
				Cmd_4x4_Buzzer = (SINT)((SINT)3);
			} else if  ( AND_BOOL((DIGIN_Feedback_RearAxle),
				(DIGIN_Feedback_4WD_DiffLock)) ) {
				Stat_4x4 = (SINT)((SINT)2);
				Cmd_4x4_Buzzer = (SINT)((SINT)2);
			} else if  ( (DIGIN_Feedback_4WD_DiffLock) ) {
				Stat_4x4 = (SINT)((SINT)1);
				Cmd_4x4_Buzzer = (SINT)((SINT)1);
			} else if  ( TRUE ) {
				Cmd_4x4_Buzzer = (SINT)((SINT)4);
				Stat_4x4 = (SINT)((SINT)0);
			}
			Stat_DiffLock44 = AND_BOOL(AND_BOOL((DIGIN_Feedback_4WD_DiffLock),
					(IOMODE_DIGIN16_FeedBack_FrontAxle)),
				(DIGIN_Feedback_RearAxle));
		}

		if ( AND_BOOL(AND_BOOL((IOMODE_DIGIN16_FeedBack_FrontAxle),
				(DIGIN_Feedback_RearAxle)),
			(DIGIN_Feedback_4WD_DiffLock)) ) {
			DifflockFeedbackState = (USINT)((SINT)7);
		} else if  ( AND_BOOL((IOMODE_DIGIN16_FeedBack_FrontAxle),
			(DIGIN_Feedback_RearAxle)) ) {
			DifflockFeedbackState = (USINT)((SINT)6);
		} else if  ( AND_BOOL((IOMODE_DIGIN16_FeedBack_FrontAxle),
			(DIGIN_Feedback_4WD_DiffLock)) ) {
			DifflockFeedbackState = (USINT)((SINT)5);
		} else if  ( AND_BOOL((DIGIN_Feedback_RearAxle),
			(DIGIN_Feedback_4WD_DiffLock)) ) {
			DifflockFeedbackState = (USINT)((SINT)4);
		} else if  ( (DIGIN_Feedback_4WD_DiffLock) ) {
			DifflockFeedbackState = (USINT)((SINT)3);
		} else if  ( (DIGIN_Feedback_RearAxle) ) {
			DifflockFeedbackState = (USINT)((SINT)2);
		} else if  ( (IOMODE_DIGIN16_FeedBack_FrontAxle) ) {
			DifflockFeedbackState = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			DifflockFeedbackState = (USINT)((SINT)0);
		}

		if ( AND_BOOL(AND_BOOL((DOUT_Dropbox_4WD_Off),
				(DOUT_RearAxleDiffLock)),
			(DOUT_FrontAxleDiffLock)) ) {
			DifflockDoutState = (USINT)((SINT)7);
		} else if  ( AND_BOOL((DOUT_Dropbox_4WD_Off),
			(DOUT_RearAxleDiffLock)) ) {
			DifflockDoutState = (USINT)((SINT)6);
		} else if  ( AND_BOOL((DOUT_Dropbox_4WD_Off),
			(DOUT_FrontAxleDiffLock)) ) {
			DifflockDoutState = (USINT)((SINT)5);
		} else if  ( AND_BOOL((DOUT_RearAxleDiffLock),
			(DOUT_FrontAxleDiffLock)) ) {
			DifflockDoutState = (USINT)((SINT)4);
		} else if  ( (DOUT_Dropbox_4WD_Off) ) {
			DifflockDoutState = (USINT)((SINT)3);
		} else if  ( (DOUT_RearAxleDiffLock) ) {
			DifflockDoutState = (USINT)((SINT)2);
		} else if  ( (DOUT_FrontAxleDiffLock) ) {
			DifflockDoutState = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			DifflockDoutState = (USINT)((SINT)0);
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

#endif /* INCLUDE__VT3_POU__MAINDIFFLOCK_C */

/* end of file */
