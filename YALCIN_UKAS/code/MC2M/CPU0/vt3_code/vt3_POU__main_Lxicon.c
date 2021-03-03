/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_LXICON_C
#define INCLUDE__VT3_POU__MAIN_LXICON_C

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
static const vt3_screen_initializer FAR __init_table__main_Lxicon[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_Lxicon[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_Lxicon_t FAR __const__main_Lxicon__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__main_Lxicon__param_init */

/* initialization of PROGRAM status */
void main_Lxicon__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_Lxicon; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_Lxicon, &__const__main_Lxicon__param_init, sizeof __const__main_Lxicon__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_Lxicon__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	main_Lxicon.ENO = main_Lxicon.EN;
	if ( ! main_Lxicon.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		MC2M_TERA_Icon_Status_L01 = (Stat_CentralLockSystem);

		MC2M_TERA_Icon_Status_L02 = OR_BOOL((AlarmState_Alternator),
			(AlarmState_Battery));

		MC2M_TERA_Icon_Status_L03 = (DIGIN_HandBrakeActivated);

		MC2M_TERA_Icon_Status_L04 = (Stat_RedLamp_fromECM);

		MC2M_TERA_Icon_Status_L05 = (Stat_AmberLamp_fromECM);

		MC2M_TERA_Icon_Status_L06 = (DIGIN_TurnLeftSignal);

		MC2M_TERA_Icon_Status_L07 = (DIGIN_TurnRightSignal);

		MC2M_TERA_Icon_Status_L08 = (Stat_EngineProtectionERR);

		MC2M_TERA_DIAG_Stat_4x4 = (SINT)(Stat_4x4);

		MC2M_TERA_Icon_Status_L09 = (Stat_Wait2StartLamp);

		MC2M_TERA_Icon_Status_L10 = (AlarmState_AirFilterClogged);

		MC2M_TERA_Icon_Status_L11 = (Stat_ParkLamp);

		MC2M_TERA_Icon_Status_L12 = (Stat_LowBeam);

		MC2M_TERA_Icon_Status_L13 = (Stat_HighBeam);

		MC2M_TERA_Icon_Status_L14_1 = (AlarmState_DoorOpen_1);

		MC2M_TERA_Icon_Status_L14_2 = (AlarmState_DoorOpen_2);

		MC2M_TERA_Icon_Status_L14_3 = (AlarmState_DoorOpen_3);

		MC2M_TERA_Icon_Status_L14_4 = (AlarmState_DoorOpen_4);

		MC2M_TERA_Icon_Status_L14_5 = (AlarmState_DoorOpen_5);

		MC2M_TERA_Icon_Status_L15 = (Cmd_TriggerRes);

		MC2M_TERA_Icon_Status_L16 = (Stat_CheckTransLamp_fromTCM);

		MC2M_TERA_Icon_Status_L17 = (Stat_EngineProtectionLED);

		MC2M_TERA_Icon_Status_L18 = (DIGIN_IntakeAirHeaterActivated);

		MC2M_TERA_Icon_Status_L19 = (AlarmState_SumpTemp);

		MC2M_TERA_Icon_Status_L20 = OR_BOOL((Stat_ABS_IndicatorLamp),
			(Stat_ABS4WD));

		MC2M_TERA_Icon_Status_L21 = (Stat_DiffLock44);

		MC2M_TERA_Icon_Status_L22 = EQ_SINT_2((Stat_Dropbox),
			((SINT)2));

		MC2M_TERA_Icon_Status_L23 = EQ_SINT_2((Stat_Dropbox),
			((SINT)1));

		MC2M_TERA_Icon_Status_L24 = EQ_SINT_2((Stat_Dropbox),
			((SINT)0));

		MC2M_TERA_Icon_Status_L25 = (Stat_FrontFog);

		MC2M_TERA_Icon_Status_L26 = (Stat_RearFogLamp);

		MC2M_TERA_Icon_Status_L27 = (AlarmState_EngineOilPressure);

		MC2M_TERA_Icon_Status_L28 = (AlarmState_EngineOilTemperature);

		MC2M_TERA_Icon_Status_L29 = (AlarmState_TransOilTemperature);

		MC2M_TERA_Icon_Status_L30 = (AlarmState_FuelLevelLow);

		MC2M_TERA_Icon_Status_L31 = OR_BOOL(OR_BOOL(OR_BOOL((AlarmState_ParkBrakePressure),
					(AlarmState_AccessoryPressure)),
				(AlarmState_ServiceBrake1Pressure)),
			(AlarmState_ServiceBrake2Pressure));

		MC2M_TERA_Icon_Status_L32 = (AlarmState_ParkBrakePressure);

		MC2M_TERA_Icon_Status_L33 = (AlarmState_ServiceBrake1Pressure);

		MC2M_TERA_Icon_Status_L34 = (AlarmState_ServiceBrake2Pressure);

		MC2M_TERA_Icon_Status_L35 = (AlarmState_AccessoryPressure);

		MC2M_TERA_Icon_Status_L36 = (AlarmState_SteeringWheelRepPump);

		MC2M_TERA_Icon_Status_L37 = (Cmd_Bypass_Switch);

		MC2M_TERA_Icon_Status_L38 = (Stat_InterBuzzer);

		MC2M_TERA_Icon_Status_L39 = (AlarmState_HydrolicTankPressure);

		MC2M_TERA_Icon_Status_L40 = (AlarmState_HydrolicTankTemp);

		MC2M_TERA_Icon_Status_L41 = (AlarmState_OilFilterDirty_1);

		MC2M_TERA_Icon_Status_L42 = AND_BOOL((AlarmState_OilFilterDirty_2),
			GT_BYTE_2((HTempLevel_Normalized),
				((SINT)35)));

		MC2M_TERA_Icon_Status_L43 = (Stat_MineLock);

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

#endif /* INCLUDE__VT3_POU__MAIN_LXICON_C */

/* end of file */
