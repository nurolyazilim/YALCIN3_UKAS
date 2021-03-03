/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINMC2MDIAGNOSTICS_C
#define INCLUDE__VT3_POU__MAINMC2MDIAGNOSTICS_C

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
static const vt3_screen_initializer FAR __init_table__mainMC2MDiagnostics[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainMC2MDiagnostics[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainMC2MDiagnostics_t FAR __const__mainMC2MDiagnostics__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* tempcoolant          */ ((UINT)0U),
}; /* end of __const__mainMC2MDiagnostics__param_init */

/* initialization of PROGRAM status */
void mainMC2MDiagnostics__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainMC2MDiagnostics; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainMC2MDiagnostics, &__const__mainMC2MDiagnostics__param_init, sizeof __const__mainMC2MDiagnostics__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainMC2MDiagnostics__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainMC2MDiagnostics.ENO = mainMC2MDiagnostics.EN;
	if ( ! mainMC2MDiagnostics.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		MC2M_TERA_DIAG_INP00 = (DIGIN_TurnRightSignal);

		MC2M_TERA_DIAG_INP02 = (DIGIN_Feedback_4WD_DiffLock);

		MC2M_TERA_DIAG_INP03 = (DIGIN_Feedback_DropboxLow);

		MC2M_TERA_DIAG_INP04 = (DIGIN_GunTowerDoor_1);

		MC2M_TERA_DIAG_INP05 = (DIGIN_AirFilterClogged);

		MC2M_TERA_DIAG_INP06 = (DIGIN_Feedback_RearAxle);

		MC2M_TERA_DIAG_INP07 = AND_BOOL((DIGIN_Back_HydDoorOpened),
			(DIGIN_Back_HydDoorClosed));

		MC2M_TERA_DIAG_INP08 = (DIGIN_SteeringWheelRepPump);

		MC2M_TERA_DIAG_INP09 = EQ_BYTE_2((EFL_P1_EngineCoolantLevel),
			((SINT)0));

		MC2M_TERA_DIAG_INP10 = UINT_TO_BOOL((AIN_Tank_Left_Level));

		MC2M_TERA_DIAG_INP11 = (DIGIN_Light_P1_Park);

		MC2M_TERA_DIAG_INP12 = UINT_TO_BOOL((AIN_FootBrakePressureSensor_1));

		MC2M_TERA_DIAG_INP13 = UINT_TO_BOOL((AIN_FuelTankLeft_Temp));

		MC2M_TERA_DIAG_INP14 = UINT_TO_BOOL((AIN_AccessoryPressureSensor));

		MC2M_TERA_DIAG_INP15 = (DIGIN_LowBeamStatus);

		MC2M_TERA_DIAG_INP16 = FALSE;

		MC2M_TERA_DIAG_INP17 = (DIGIN_WiperLow);

		MC2M_TERA_DIAG_INP18 = FALSE;

		MC2M_TERA_DIAG_INP19 = (DIGIN_BackDoor_IN_Close);

		MC2M_TERA_DIAG_INP20 = FALSE;

		MC2M_TERA_DIAG_INP21 = (DIGIN_HandBrakeActivated);

		MC2M_TERA_DIAG_INP22 = (DIGIN_Feedback_DropboxHigh);

		MC2M_TERA_DIAG_INP23 = (DIGIN_CentralLockSystemEnable);

		MC2M_TERA_DIAG_INP25 = FALSE;

		MC2M_TERA_DIAG_INP26 = (DIGIN_TCM_104);

		MC2M_TERA_DIAG_INP27 = (DIGIN_BackDoor_OUT_Open);

		MC2M_TERA_DIAG_INP28 = (DIGIN_BackDoor_OUT_Close);

		MC2M_TERA_DIAG_INP29 = (DIGIN_AlternatorFailure);

		MC2M_TERA_DIAG_INP31 = UINT_TO_BOOL((AIN_WebastoTankResistanceSensor));

		MC2M_TERA_DIAG_INP33 = UINT_TO_BOOL((AIN_ParkBrakePressureSensor));

		MC2M_TERA_DIAG_INP34 = (DIGIN_DoorOpenSwitch);

		MC2M_TERA_DIAG_INP35 = UINT_TO_BOOL((AIN_FootBrakePressureSensor_2));

		MC2M_TERA_DIAG_INP36 = (DIGIN_Bypass_Switch);

		MC2M_TERA_DIAG_INP37 = (DIGIN_HighBeamStatus);

		MC2M_TERA_DIAG_INP38 = (DIGIN_WiperIntermittent);

		MC2M_TERA_DIAG_INP39 = (DIGIN_WiperHigh);

		MC2M_TERA_DIAG_INP40 = (DIGIN_TurnLeftSignal);

		MC2M_TERA_DIAG_INP41 = FALSE;

		MC2M_TERA_DIAG_INP42 = (DIGIN_Back_HydDoorOpened);

		MC2M_TERA_DIAG_INP43 = (DIGIN_Back_HydDoorClosed);

		MC2M_TERA_DIAG_INP44 = (DIGIN_WiperWasher);

		MC2M_TERA_DIAG_INP45 = (DIGIN_BlackOut);

		MC2M_TERA_DIAG_INP46 = (DIGIN_FrontAxleDiffLock);

		MC2M_TERA_DIAG_INP47 = (DIGIN_RearAxleDiffLock);

		MC2M_TERA_DIAG_INP48 = (DIGIN_BackDoor_IN_Open);

		MC2M_TERA_DIAG_INP49 = (DIGIN_KeySwitchActivated);

		MC2M_TERA_DIAG_INP51 = (DIGIN_IntakeAirHeaterActivated);

		MC2M_TERA_DIAG_INP52 = (DIGIN_EngineBrake);

		MC2M_TERA_DIAG_OUT00 = (DOUT_TurnSignalLamp_Left);

		MC2M_TERA_DIAG_OUT01 = (DOUT_EngineProtection);

		MC2M_TERA_DIAG_OUT03 = FALSE;

		MC2M_TERA_DIAG_OUT04 = FALSE;

		MC2M_TERA_DIAG_OUT06 = FALSE;

		MC2M_TERA_DIAG_OUT07 = (DOUT_Backup_Alarm);

		MC2M_TERA_DIAG_OUT08 = (DOUT_InteriorVantilator);

		MC2M_TERA_DIAG_OUT09 = (DOUT_RearDoorControlValf_1);

		MC2M_TERA_DIAG_OUT10 = UINT_TO_BOOL((DOUT_WiperMotor_1));

		MC2M_TERA_DIAG_OUT11 = (DOUT_HazardButtonLed);

		MC2M_TERA_DIAG_OUT12 = (DOUT_RearDoorControlValf_2);

		MC2M_TERA_DIAG_OUT15 = (DOUT_SideWindowResistance);

		MC2M_TERA_DIAG_OUT17 = (DOUT_InteriorLamp_BO);

		MC2M_TERA_DIAG_OUT18 = (DOUT_ResistanceLED);

		MC2M_TERA_DIAG_OUT19 = (DOUT_Dropbox_4WD_Off);

		MC2M_TERA_DIAG_OUT20 = (DOUT_TurnSignalLamp_Right);

		MC2M_TERA_DIAG_OUT21 = UINT_TO_BOOL((DOUT_WiperMotor_2));

		MC2M_TERA_DIAG_OUT22 = (DOUT_Washer);

		MC2M_TERA_DIAG_OUT23 = (DOUT_BatteryCharge);

		MC2M_TERA_DIAG_OUT24 = (DOUT_Dropbox_Neutral);

		MC2M_TERA_DIAG_OUT25 = (DOUT_Dropbox_Low);

		MC2M_TERA_DIAG_OUT26 = (DOUT_Dropbox_High);

		MC2M_TERA_DIAG_OUT27 = (DOUT_RearAxleDiffLock);

		MC2M_TERA_DIAG_OUT28 = (DOUT_FrontAxleDiffLock);

		MC2M_TERA_DIAG_OUT29 = (DOUT_WiperMotorLow_1);

		MC2M_TERA_DIAG_OUT30 = (DOUT_ResistancesFront);

		MC2M_TERA_DIAG_OUT31 = (DOUT_WiperMotorLow_2);

		MC2M_TERA_DIAG_OUT32 = FALSE;

		MC2M_TERA_DIAG_OUT33 = FALSE;

		MC2M_TERA_DIAG_OUT34 = FALSE;

		MC2M_TERA_DIAG_OUT35 = FALSE;

		MC2M_TERA_DIAG_OUT36 = FALSE;

		MC2M_TERA_DIAG_OUT37 = FALSE;

		MC2M_TERA_DIAG_OUT38 = FALSE;

		MC2M_TERA_DIAG_OUT39 = FALSE;

		MC2M_TERA_DIAG_INP10AN = (UINT)(AIN_Tank_Left_Level);

		MC2M_TERA_DIAG_INP12AN = (UINT)(AIN_FootBrakePressureSensor_1);

		MC2M_TERA_DIAG_INP13AN = (UINT)(AIN_FuelTankLeft_Temp);

		MC2M_TERA_DIAG_INP14AN = (UINT)(AIN_AccessoryPressureSensor);

		MC2M_TERA_DIAG_INP31AN = (UINT)(AIN_WebastoTankResistanceSensor);

		MC2M_TERA_DIAG_INP33AN = (UINT)(AIN_ParkBrakePressureSensor);

		MC2M_TERA_DIAG_INP35AN = (UINT)(AIN_FootBrakePressureSensor_2);

		MC2M_TERA_DIAG_OUT10AN = (UINT)(DOUT_WiperMotor_1);

		MC2M_TERA_DIAG_OUT21AN = (UINT)(DOUT_WiperMotor_2);

		MC2M_TERA_DIAG_fuelTank_1_Temperature = (INT)(fuelTank_1_Temperature);

		MC2M_TERA_DIAG_PresLevel_Normalized = (INT)(PresLevel_Normalized);

		MC2M_TERA_DIAG_HTempLevel_Normalized_2 = (INT)(HTempLevel_Normalized_2);

		MC2M_TERA_DIAG_HTempLevel_Normalized = (INT)(HTempLevel_Normalized);

		MC2M_TERA_DIAG_EngineCoolantLevel = (USINT)(EFL_P1_EngineCoolantLevel);

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

#endif /* INCLUDE__VT3_POU__MAINMC2MDIAGNOSTICS_C */

/* end of file */
