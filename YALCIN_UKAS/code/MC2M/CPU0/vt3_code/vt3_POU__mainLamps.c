/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINLAMPS_C
#define INCLUDE__VT3_POU__MAINLAMPS_C

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
static const vt3_screen_initializer FAR __init_table__mainLamps[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainLamps[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainLamps_t FAR __const__mainLamps__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainLamps__param_init */

/* initialization of PROGRAM status */
void mainLamps__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainLamps; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainLamps, &__const__mainLamps__param_init, sizeof __const__mainLamps__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainLamps__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainLamps.ENO = mainLamps.EN;
	if ( ! mainLamps.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Cmd_HighBeam = (DIGIN_HighBeamStatus);

		Cmd_LowBeam = (DIGIN_LowBeamStatus);

		Cmd_ParkLamp = (DIGIN_Light_P1_Park);

		if ( (DIGIN_TurnLeftSignal) ) {
			Cmd_TurnSignal_Left = TRUE;
			Stat_TurnSignal_Ctr1 = (UDINT)((SINT)0);
		}

		if ( (DIGIN_TurnRightSignal) ) {
			Cmd_TurnSignal_Right = TRUE;
			Stat_TurnSignal_Ctr2 = (UDINT)((SINT)0);
		}

		if ( AND_BOOL((Cmd_TurnSignal_Left),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_TurnSignal_Ctr1),
				((INT)1500))) ) {
			Stat_TurnSignalLamp_Left = AND_BOOL((Blink05),
				(Cmd_TurnSignal_Left));
		} else if  ( AND_BOOL((Cmd_TurnSignal_Left),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_TurnSignal_Ctr1),
				((INT)1500))) ) {
			Stat_TurnSignal_Ctr1 = (UDINT)((SINT)0);
			Cmd_TurnSignal_Left = FALSE;
			Stat_TurnSignalLamp_Left = FALSE;
		}

		if ( (Cmd_TurnSignal_Left) ) {
			Stat_TurnSignal_Ctr1 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Stat_TurnSignal_Ctr1),
				((SINT)100));
		} else if  ( TRUE ) {
			Stat_TurnSignal_Ctr1 = (UDINT)((SINT)0);
		}

		if ( AND_BOOL((Cmd_TurnSignal_Right),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_TurnSignal_Ctr2),
				((INT)1500))) ) {
			Stat_TurnSignalLamp_Right = AND_BOOL((Blink05),
				(Cmd_TurnSignal_Right));
		} else if  ( AND_BOOL((Cmd_TurnSignal_Right),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Stat_TurnSignal_Ctr2),
				((INT)1500))) ) {
			Stat_TurnSignal_Ctr2 = (UDINT)((SINT)0);
			Cmd_TurnSignal_Right = FALSE;
			Stat_TurnSignalLamp_Right = FALSE;
		}

		if ( (Cmd_TurnSignal_Right) ) {
			Stat_TurnSignal_Ctr2 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Stat_TurnSignal_Ctr2),
				((SINT)100));
		} else if  ( TRUE ) {
			Stat_TurnSignal_Ctr2 = (UDINT)((SINT)0);
		}

		Stat_GIGA_Busy = OR_BOOL((Cmd_TurnSignal_Left),
			(Cmd_TurnSignal_Right));

		Cmd_RearFog = (IOMODE_DIGIN26_RearFog);

		Cmd_FrontFog = (IOMODE_DIGIN30_FrontFog);

		Cmd_ReverseGear = LT_SINT_2((CurrentGear),
			((SINT)0));

		Stat_HighBeam = (Cmd_HighBeam);

		Stat_LowBeam = (Cmd_LowBeam);

		Stat_ParkLamp = (Cmd_ParkLamp);

		Stat_RearFogLamp = (Cmd_RearFog);

		Stat_FrontFog = (Cmd_FrontFog);

		Stat_ReverseGearLamp = (Cmd_ReverseGear);

		Stat_BackupAlarm = AND_BOOL(OR_BOOL(OR_BOOL((Stat_ReverseGearLamp),
					(DOUT_RearDoorControlValf_1)),
				(DOUT_RearDoorControlValf_2)),
			NOT_BOOL((Stat_BlackOut)));

		DOUT_Backup_Alarm = (Stat_BackupAlarm);

		MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps = (MC2M_TERA_Icon_Status_L31);

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

#endif /* INCLUDE__VT3_POU__MAINLAMPS_C */

/* end of file */
