/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DATA_DROPBOX_C
#define INCLUDE__VT3_POU__DATA_DROPBOX_C

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

/* initializers of global variables */
static const TIME FAR __init_value__DropboxPulseDelay = 12000;

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__Data_Dropbox[] = {
	{ &DropboxPulseDelay, &__init_value__DropboxPulseDelay, 4 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__Data_Dropbox[] */

/* initialization of global data block */
void Data_Dropbox__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__Data_Dropbox; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
	TP__init(&Dropbox_High_TP);
	TP__init(&Dropbox_Low_TP);
	TP__init(&Dropbox_Neutral_TP);
	TP__init(&Dropbox_Pulse_TP);
	R_TRIG__init(&Feedback_DropboxHigh_R_TRIG);
	R_TRIG__init(&Feedback_DropboxLow_R_TRIG);
	R_TRIG__init(&Feedback_FrontAxle_R_TRIG);
	R_TRIG__init(&Feedback_RearAxle_R_TRIG);
	R_TRIG__init(&Feedback_4WD_DiffLock_R_TRIG);
	F_TRIG__init(&Feedback_DropboxHigh_F_TRIG);
	F_TRIG__init(&Feedback_DropboxLow_F_TRIG);
	F_TRIG__init(&Feedback_FrontAxle_F_TRIG);
	F_TRIG__init(&Feedback_RearAxle_F_TRIG);
	F_TRIG__init(&Feedback_4WD_DiffLock_F_TRIG);
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__DATA_DROPBOX_C */

/* end of file */
