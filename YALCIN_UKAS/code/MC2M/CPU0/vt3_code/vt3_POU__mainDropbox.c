/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINDROPBOX_C
#define INCLUDE__VT3_POU__MAINDROPBOX_C

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
static const vt3_screen_initializer FAR __init_table__mainDropbox[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainDropbox[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainDropbox_t FAR __const__mainDropbox__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainDropbox__param_init */

/* initialization of PROGRAM status */
void mainDropbox__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainDropbox; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainDropbox, &__const__mainDropbox__param_init, sizeof __const__mainDropbox__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainDropbox__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainDropbox.ENO = mainDropbox.EN;
	if ( ! mainDropbox.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( NOT_BOOL((Cmd_Bypass_Switch)) ) {
			if ( AND_BOOL(AND_BOOL(EQ_SINT_2((CurrentGear),
						((SINT)0)),
					LE_BYTE_2((VehicleSpeed),
						((SINT)0))),
				GE_BYTE_2((MC2M_TERA_AccessoryPressure),
					(USINT)(((USINT)60U)))) ) {
				if ( (NMSGUI_MC2M_dropbox_admin_touch) ) {
					Cmd_Dropbox_Low = (NMSGUI_MC2M_dropbox_low_touch);
					Cmd_Dropbox_High = (NMSGUI_MC2M_dropbox_high_touch);
					Cmd_Dropbox_Neutral = (NMSGUI_MC2M_dropbox_neutral_touch);
				} else if  ( TRUE ) {
					Cmd_Dropbox_Low = (IOMODE_DIGIN14_DropBoxLow);
					Cmd_Dropbox_High = (IOMODE_DIGIN12_DropBoxHigh);
					Cmd_Dropbox_Neutral = (IOMODE_DIGIN22_DopBoxNeutral);
				}
			}
			MC2M_TERA_AuxPressureLow_Stat = LT_BYTE_2((MC2M_TERA_AccessoryPressure),
				(USINT)(((USINT)60U)));
			Stat_Dropbox_High = (Cmd_Dropbox_High);
			Stat_Dropbox_Low = (Cmd_Dropbox_Low);
			Stat_Dropbox_Neutral = (Cmd_Dropbox_Neutral);
			if ( (Stat_Dropbox_High) ) {
				if ( (DIGIN_Feedback_DropboxHigh) ) {
					Stat_Dropbox = (SINT)((SINT)2);
				} else if  ( TRUE ) {
					if ( (Blink05) ) {
						Stat_Dropbox = (SINT)((SINT)2);
					} else if  ( TRUE ) {
						Stat_Dropbox = (SINT)((SINT)-1);
					}
				}
			} else if  ( (Stat_Dropbox_Low) ) {
				if ( (DIGIN_Feedback_DropboxLow) ) {
					Stat_Dropbox = (SINT)((SINT)1);
				} else if  ( TRUE ) {
					if ( (Blink05) ) {
						Stat_Dropbox = (SINT)((SINT)1);
					} else if  ( TRUE ) {
						Stat_Dropbox = (SINT)((SINT)-1);
					}
				}
			} else if  ( (Stat_Dropbox_Neutral) ) {
				Stat_Dropbox = (SINT)((SINT)0);
			} else if  ( TRUE ) {
				Stat_Dropbox = (SINT)((SINT)-1);
			}
			if ( (Stat_Dropbox_High) ) {
				DOUT_Dropbox_High = TRUE;
				DOUT_Dropbox_Low = FALSE;
				DOUT_Dropbox_Neutral = FALSE;
			} else if  ( (Stat_Dropbox_Low) ) {
				DOUT_Dropbox_Low = TRUE;
				DOUT_Dropbox_High = FALSE;
				DOUT_Dropbox_Neutral = FALSE;
			} else if  ( (Stat_Dropbox_Neutral) ) {
				DOUT_Dropbox_Neutral = TRUE;
				DOUT_Dropbox_Low = FALSE;
				DOUT_Dropbox_High = FALSE;
			}
		} else if  ( TRUE ) {
			DOUT_Dropbox_High = FALSE;
			DOUT_Dropbox_Low = FALSE;
			DOUT_Dropbox_Neutral = FALSE;
			if ( (DIGIN_Feedback_DropboxHigh) ) {
				Stat_Dropbox = (SINT)((SINT)2);
			} else if  ( (DIGIN_Feedback_DropboxLow) ) {
				Stat_Dropbox = (SINT)((SINT)1);
			} else if  ( (Stat_Dropbox_Neutral) ) {
				Stat_Dropbox = (SINT)((SINT)0);
			} else if  ( TRUE ) {
				Stat_Dropbox = (SINT)((SINT)-1);
			}
		}

		if ( AND_BOOL((DIGIN_Feedback_DropboxHigh),
			(DIGIN_Feedback_DropboxLow)) ) {
			DropboxFeedbackState = (USINT)((SINT)3);
		} else if  ( (DIGIN_Feedback_DropboxHigh) ) {
			DropboxFeedbackState = (USINT)((SINT)2);
		} else if  ( (DIGIN_Feedback_DropboxLow) ) {
			DropboxFeedbackState = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			DropboxFeedbackState = (USINT)((SINT)0);
		}

		if ( AND_BOOL(AND_BOOL((DOUT_Dropbox_High),
				(DOUT_Dropbox_Low)),
			(DOUT_Dropbox_Neutral)) ) {
			DropboxDoutState = (USINT)((SINT)7);
		} else if  ( AND_BOOL((DOUT_Dropbox_High),
			(DOUT_Dropbox_Low)) ) {
			DropboxDoutState = (USINT)((SINT)6);
		} else if  ( AND_BOOL((DOUT_Dropbox_High),
			(DOUT_Dropbox_Neutral)) ) {
			DropboxDoutState = (USINT)((SINT)5);
		} else if  ( AND_BOOL((DOUT_Dropbox_Low),
			(DOUT_Dropbox_Neutral)) ) {
			DropboxDoutState = (USINT)((SINT)4);
		} else if  ( (DOUT_Dropbox_High) ) {
			DropboxDoutState = (USINT)((SINT)3);
		} else if  ( (DOUT_Dropbox_Low) ) {
			DropboxDoutState = (USINT)((SINT)2);
		} else if  ( (DOUT_Dropbox_Neutral) ) {
			DropboxDoutState = (USINT)((SINT)1);
		} else if  ( TRUE ) {
			DropboxDoutState = (USINT)((SINT)0);
		}

		Feedback_DropboxHigh_R_TRIG.CLK = (DIGIN_Feedback_DropboxHigh);

		
		R_TRIG__call(&Feedback_DropboxHigh_R_TRIG);

		Feedback_DropboxHigh_F_TRIG.CLK = (DIGIN_Feedback_DropboxHigh);

		
		F_TRIG__call(&Feedback_DropboxHigh_F_TRIG);

		Feedback_DropboxLow_R_TRIG.CLK = (DIGIN_Feedback_DropboxLow);

		
		R_TRIG__call(&Feedback_DropboxLow_R_TRIG);

		Feedback_DropboxLow_F_TRIG.CLK = (DIGIN_Feedback_DropboxLow);

		
		F_TRIG__call(&Feedback_DropboxLow_F_TRIG);

		Feedback_FrontAxle_R_TRIG.CLK = (IOMODE_DIGIN16_FeedBack_FrontAxle);

		
		R_TRIG__call(&Feedback_FrontAxle_R_TRIG);

		Feedback_FrontAxle_F_TRIG.CLK = (IOMODE_DIGIN16_FeedBack_FrontAxle);

		
		F_TRIG__call(&Feedback_FrontAxle_F_TRIG);

		Feedback_RearAxle_R_TRIG.CLK = (DIGIN_Feedback_RearAxle);

		
		R_TRIG__call(&Feedback_RearAxle_R_TRIG);

		Feedback_RearAxle_F_TRIG.CLK = (DIGIN_Feedback_RearAxle);

		
		F_TRIG__call(&Feedback_RearAxle_F_TRIG);

		Feedback_4WD_DiffLock_R_TRIG.CLK = (DIGIN_Feedback_4WD_DiffLock);

		
		R_TRIG__call(&Feedback_4WD_DiffLock_R_TRIG);

		Feedback_4WD_DiffLock_F_TRIG.CLK = (DIGIN_Feedback_4WD_DiffLock);

		
		F_TRIG__call(&Feedback_4WD_DiffLock_F_TRIG);

		Stat_WarningL2H = OR_BOOL(OR_BOOL(OR_BOOL(OR_BOOL((Feedback_DropboxHigh_R_TRIG.Q),
						(Feedback_DropboxLow_R_TRIG.Q)),
					(Feedback_FrontAxle_R_TRIG.Q)),
				(Feedback_RearAxle_R_TRIG.Q)),
			(Feedback_4WD_DiffLock_R_TRIG.Q));

		Stat_WarningH2L = OR_BOOL(OR_BOOL(OR_BOOL(OR_BOOL((Feedback_DropboxHigh_F_TRIG.Q),
						(Feedback_DropboxLow_F_TRIG.Q)),
					(Feedback_FrontAxle_F_TRIG.Q)),
				(Feedback_RearAxle_F_TRIG.Q)),
			(Feedback_4WD_DiffLock_F_TRIG.Q));

		DropboxDifflockAlarm = OR_BOOL((Stat_WarningL2H),
			(Stat_WarningH2L));

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

#endif /* INCLUDE__VT3_POU__MAINDROPBOX_C */

/* end of file */
