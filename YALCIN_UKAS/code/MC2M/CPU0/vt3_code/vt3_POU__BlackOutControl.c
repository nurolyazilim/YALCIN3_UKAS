/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__BLACKOUTCONTROL_C
#define INCLUDE__VT3_POU__BLACKOUTCONTROL_C

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
static const vt3_screen_initializer FAR __init_table__BlackOutControl[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__BlackOutControl[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const BlackOutControl_t FAR __const__BlackOutControl__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__BlackOutControl__param_init */

/* initialization of PROGRAM status */
void BlackOutControl__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__BlackOutControl; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&BlackOutControl, &__const__BlackOutControl__param_init, sizeof __const__BlackOutControl__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void BlackOutControl__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	BlackOutControl.ENO = BlackOutControl.EN;
	if ( ! BlackOutControl.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Cmd_BlackOut = NOT_BOOL((DIGIN_BlackOut));

		Stat_BlackOut = (Cmd_BlackOut);

		Cmd_BO_ParkLamp = AND_BOOL(OR_BOOL(OR_BOOL((Cmd_ParkLamp),
					(Cmd_HighBeam)),
				(Cmd_LowBeam)),
			OR_BOOL((Stat_BlackOut_S3),
				(Stat_BlackOut_S2)));

		Cmd_BO_StopLamp = AND_BOOL((Cmd_StopLamp),
			OR_BOOL((Stat_BlackOut_S3),
				(Stat_BlackOut_S2)));

		Cmd_BO_FollowLight = OR_BOOL(OR_BOOL((Stat_BlackOut_S3),
				(Stat_BlackOut_S2)),
			(Stat_BlackOut_S1));

		Stat_BlackOut_S1_t = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(NOT_BOOL((Cmd_BlackOut_S1)),
							NOT_BOOL((Cmd_BlackOut_S2))),
						NOT_BOOL((Cmd_BlackOut_S3))),
					NOT_BOOL((Cmd_BlackOut_1))),
				NOT_BOOL((Cmd_BlackOut_2))),
			(Cmd_BlackOut_Tag));

		Stat_BlackOut_S2_t = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(NOT_BOOL((Cmd_BlackOut_S1)),
							NOT_BOOL((Cmd_BlackOut_S2))),
						NOT_BOOL((Cmd_BlackOut_S3))),
					NOT_BOOL((Cmd_BlackOut_Tag))),
				NOT_BOOL((Cmd_BlackOut_2))),
			(Cmd_BlackOut_1));

		Stat_BlackOut_S3_t = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(NOT_BOOL((Cmd_BlackOut_S1)),
							NOT_BOOL((Cmd_BlackOut_S2))),
						NOT_BOOL((Cmd_BlackOut_2))),
					(Cmd_BlackOut_S3)),
				(Cmd_BlackOut_Tag)),
			(Cmd_BlackOut_1));

		Stat_BlackOut_Tag_t = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(NOT_BOOL((Cmd_BlackOut_S1)),
							NOT_BOOL((Cmd_BlackOut_S2))),
						NOT_BOOL((Cmd_BlackOut_S3))),
					NOT_BOOL((Cmd_BlackOut_1))),
				NOT_BOOL((Cmd_BlackOut_Tag))),
			(Cmd_BlackOut_2));

		Stat_BlackOut_1_t = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(NOT_BOOL((Cmd_BlackOut_S1)),
							NOT_BOOL((Cmd_BlackOut_S3))),
						NOT_BOOL((Cmd_BlackOut_1))),
					NOT_BOOL((Cmd_BlackOut_Tag))),
				(Cmd_BlackOut_S2)),
			(Cmd_BlackOut_2));

		Stat_BlackOut_2_t = AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(AND_BOOL(NOT_BOOL((Cmd_BlackOut_S3)),
							NOT_BOOL((Cmd_BlackOut_1))),
						NOT_BOOL((Cmd_BlackOut_Tag))),
					(Cmd_BlackOut_S1)),
				(Cmd_BlackOut_S2)),
			(Cmd_BlackOut_2));

		Stat_BlackOut_H2L = OR_BOOL(OR_BOOL(OR_BOOL(OR_BOOL(OR_BOOL((Stat_BlackOut_S1_t),
							(Stat_BlackOut_S2_t)),
						(Stat_BlackOut_S3_t)),
					(Stat_BlackOut_Tag_t)),
				(Stat_BlackOut_1_t)),
			(Stat_BlackOut_2_t));

		if ( NOT_BOOL((Stat_BlackOut_H2L)) ) {
			if ( NOT_BOOL((Stat_BlackOut0)) ) {
				BlackOut_DBCtr = (UINT)ADD_UINT((BlackOut_DBCtr),
					((SINT)100));
			}
		} else if  ( TRUE ) {
			BlackOut_DBCtr = (UINT)((SINT)0);
			Stat_BlackOut_S1 = (Stat_BlackOut_S1_t);
			Stat_BlackOut_S2 = (Stat_BlackOut_S2_t);
			Stat_BlackOut_S3 = (Stat_BlackOut_S3_t);
			Stat_BlackOut_Tag = (Stat_BlackOut_Tag_t);
			Stat_BlackOut_1 = (Stat_BlackOut_1_t);
			Stat_BlackOut_2 = (Stat_BlackOut_2_t);
		}

		if ( AND_BOOL(NOT_BOOL((Stat_BlackOut_H2L)),
			GT_WORD_2((BlackOut_DBCtr),
				(UINT)(((UINT)500U)))) ) {
			Stat_BlackOut0 = TRUE;
			Stat_BlackOut_S1 = (Stat_BlackOut_S1_t);
			Stat_BlackOut_S2 = (Stat_BlackOut_S2_t);
			Stat_BlackOut_S3 = (Stat_BlackOut_S3_t);
			Stat_BlackOut_Tag = (Stat_BlackOut_Tag_t);
			Stat_BlackOut_1 = (Stat_BlackOut_1_t);
			Stat_BlackOut_2 = (Stat_BlackOut_2_t);
		} else if  ( TRUE ) {
			Stat_BlackOut0 = FALSE;
		}

		Stat_BO_ParkLamp = (Cmd_BO_ParkLamp);

		Stat_BO_StopLamp = (Cmd_BO_StopLamp);

		Stat_BO_FollowLight = (Cmd_BO_FollowLight);

		MC2M_TERA_Icon_Status_BO_S1 = (Stat_BlackOut);

		MC2M_TERA_Icon_Status_BO_S2 = (Stat_BlackOut_S2);

		MC2M_TERA_Icon_Status_GIGA_Bsy = (Stat_GIGA_Busy);

		MC2M_TERA_Icon_Status_BO_1 = (Stat_BlackOut_1);

		MC2M_TERA_Icon_Status_BO_0 = (Stat_BlackOut0);

		DOUT_InteriorLamp_BO = AND_BOOL((IOMODE_2_DIGIN19_InteriorLamps),
			OR_BOOL((Stat_BlackOut_S1),
				(Stat_BlackOut_S2)));

		MC2M_MUX_DIGOUT05_FollowLight = (Stat_BO_FollowLight);

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

#endif /* INCLUDE__VT3_POU__BLACKOUTCONTROL_C */

/* end of file */
