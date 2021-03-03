/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_IO_C
#define INCLUDE__VT3_IO_C

#include "vt3_runtime.h"
#include "vt3_IO.h"
#include "vt3_POU_common.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* I/O force flags and values (used by the debugger) */
BYTE FAR vt3_force_flags   [VT3_IO_COUNT];
UINT FAR vt3_force_values  [VT3_IO_COUNT];

/* This function is called by the runtime system at the beginning.
 * In initializes all local I/O resources */
void vt3_IO_init(void)
{
	/* at the beginning no I/O forced */
	FarMemSet(vt3_force_flags, 0, sizeof vt3_force_flags);
	FarMemSet(vt3_force_values, 0, sizeof vt3_force_values);

	/* configure pin INP00 */
	(void)ConfigPIN(INP00, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP01 */
	(void)ConfigPIN(INP01, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP02 */
	(void)ConfigPIN(INP02, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP03 */
	(void)ConfigPIN(INP03, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP04 */
	(void)ConfigPIN(INP04, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP05 */
	(void)ConfigPIN(INP05, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP06 */
	(void)ConfigPIN(INP06, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP07 */
	(void)ConfigPIN(INP07, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP08 */
	(void)ConfigPIN(INP08, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP09 */
	(void)ConfigPIN(INP09, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP10 */
	(void)ConfigPIN(INP10, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP11 */
	(void)ConfigPIN(INP11, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP12 */
	(void)ConfigPIN(INP12, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP13 */
	(void)ConfigPIN(INP13, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP14 */
	(void)ConfigPIN(INP14, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP15 */
	(void)ConfigPIN(INP15, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP17 */
	(void)ConfigPIN(INP17, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP18 */
	(void)ConfigPIN(INP18, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP19 */
	(void)ConfigPIN(INP19, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP20 */
	(void)ConfigPIN(INP20, 0, PIN_LOR_ANALOGIN, 0, NULL);

	/* configure pin INP21 */
	(void)ConfigPIN(INP21, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP22 */
	(void)ConfigPIN(INP22, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP23 */
	(void)ConfigPIN(INP23, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP24 */
	(void)ConfigPIN(INP24, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP25 */
	(void)ConfigPIN(INP25, 0, PIN_LOR_ANALOGIN, 0, NULL);

	/* configure pin INP26 */
	(void)ConfigPIN(INP26, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP27 */
	(void)ConfigPIN(INP27, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP28 */
	(void)ConfigPIN(INP28, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP29 */
	(void)ConfigPIN(INP29, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP30 */
	(void)ConfigPIN(INP30, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP31 */
	(void)ConfigPIN(INP31, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP32 */
	(void)ConfigPIN(INP32, 0, PIN_HIR_ANALOGIN, 0, NULL);

	/* configure pin INP33 */
	(void)ConfigPIN(INP33, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP34 */
	(void)ConfigPIN(INP34, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP35 */
	(void)ConfigPIN(INP35, 0, PIN_20mA_ANALOGIN, 0, NULL);

	/* configure pin INP36 */
	(void)ConfigPIN(INP36, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP37 */
	(void)ConfigPIN(INP37, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP38 */
	(void)ConfigPIN(INP38, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP39 */
	(void)ConfigPIN(INP39, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP40 */
	(void)ConfigPIN(INP40, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP42 */
	(void)ConfigPIN(INP42, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP43 */
	(void)ConfigPIN(INP43, 0, PIN_LO_DIGITALIN, 0, NULL);

	/* configure pin INP44 */
	(void)ConfigPIN(INP44, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP45 */
	(void)ConfigPIN(INP45, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP46 */
	(void)ConfigPIN(INP46, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP47 */
	(void)ConfigPIN(INP47, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP48 */
	(void)ConfigPIN(INP48, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP49 */
	(void)ConfigPIN(INP49, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP50 */
	(void)ConfigPIN(INP50, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP51 */
	(void)ConfigPIN(INP51, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP52 */
	(void)ConfigPIN(INP52, 0, PIN_HI_DIGITALIN, 0, NULL);

	/* configure pin INP53 */
	(void)ConfigPIN(INP53, 0, PIN_30V_ANALOGIN, 0, NULL);

	/* configure pin OUT00 */
	(void)ConfigPIN(OUT00, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT01 */
	(void)ConfigPIN(OUT01, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT02 */
	(void)ConfigPIN(OUT02, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT03 */
	(void)ConfigPIN(OUT03, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT04 */
	(void)ConfigPIN(OUT04, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT06 */
	(void)ConfigPIN(OUT06, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT07 */
	(void)ConfigPIN(OUT07, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT08 */
	(void)ConfigPIN(OUT08, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT09 */
	(void)ConfigPIN(OUT09, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT10 */
	(void)ConfigPIN(OUT10, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT11 */
	(void)ConfigPIN(OUT11, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT12 */
	(void)ConfigPIN(OUT12, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT13 */
	(void)ConfigPIN(OUT13, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT14 */
	(void)ConfigPIN(OUT14, 0, PIN_HI_OPENLOOP_PWMOUT, 100, NULL);

	/* configure pin OUT15 */
	(void)ConfigPIN(OUT15, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT17 */
	(void)ConfigPIN(OUT17, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT18 */
	(void)ConfigPIN(OUT18, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT19 */
	(void)ConfigPIN(OUT19, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT20 */
	(void)ConfigPIN(OUT20, 0, PIN_HI_DIGOUT_D, 0, NULL);

	/* configure pin OUT21 */
	(void)ConfigPIN(OUT21, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT22 */
	(void)ConfigPIN(OUT22, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT23 */
	(void)ConfigPIN(OUT23, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT24 */
	(void)ConfigPIN(OUT24, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT25 */
	(void)ConfigPIN(OUT25, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT26 */
	(void)ConfigPIN(OUT26, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT27 */
	(void)ConfigPIN(OUT27, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT28 */
	(void)ConfigPIN(OUT28, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT29 */
	(void)ConfigPIN(OUT29, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT30 */
	(void)ConfigPIN(OUT30, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT31 */
	(void)ConfigPIN(OUT31, 0, PIN_HI_DIGOUT, 0, NULL);

	/* configure pin OUT33 */
	(void)ConfigPIN(OUT33, 0, PIN_10V_ANOUT, 0, NULL);

} /* vt3_IO_init() */

/* This function is called by the runtime system at time intervals = VT3_TASK_PERIOD_IO
 * In read and writes all local I/O resources */
void vt3_IO_cycle(void)
{
	/* process pin INP00 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_TurnRightSignal] )
	{
		DIGIN_TurnRightSignal = (BOOL)ReadPIN(INP00, NULL);
	}

	/* process pin INP01 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_VVR_OilFilter] )
	{
		DIGIN_VVR_OilFilter = (BOOL)ReadPIN(INP01, NULL);
	}

	/* process pin INP02 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Feedback_4WD_DiffLock] )
	{
		DIGIN_Feedback_4WD_DiffLock = (BOOL)ReadPIN(INP02, NULL);
	}

	/* process pin INP03 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Feedback_DropboxLow] )
	{
		DIGIN_Feedback_DropboxLow = (BOOL)ReadPIN(INP03, NULL);
	}

	/* process pin INP04 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_GunTowerDoor_1] )
	{
		DIGIN_GunTowerDoor_1 = (BOOL)ReadPIN(INP04, NULL);
	}

	/* process pin INP05 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_AirFilterClogged] )
	{
		DIGIN_AirFilterClogged = (BOOL)ReadPIN(INP05, NULL);
	}

	/* process pin INP06 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Feedback_RearAxle] )
	{
		DIGIN_Feedback_RearAxle = (BOOL)ReadPIN(INP06, NULL);
	}

	/* process pin INP07 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_BackDoorHandle_Open] )
	{
		DIGIN_BackDoorHandle_Open = (BOOL)ReadPIN(INP07, NULL);
	}

	/* process pin INP08 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_SteeringWheelRepPump] )
	{
		DIGIN_SteeringWheelRepPump = (BOOL)ReadPIN(INP08, NULL);
	}

	/* process pin INP09 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_EngineCoolantLevelLow] )
	{
		DIGIN_EngineCoolantLevelLow = (BOOL)ReadPIN(INP09, NULL);
	}

	/* process pin INP10 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_Tank_Left_Level] )
	{
		AIN_Tank_Left_Level = (UINT)ReadPIN(INP10, NULL);
	}

	/* process pin INP11 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Light_P1_Park] )
	{
		DIGIN_Light_P1_Park = (BOOL)ReadPIN(INP11, NULL);
	}

	/* process pin INP12 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_FootBrakePressureSensor_1] )
	{
		AIN_FootBrakePressureSensor_1 = (UINT)ReadPIN(INP12, NULL);
	}

	/* process pin INP13 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_FuelTankLeft_Temp] )
	{
		AIN_FuelTankLeft_Temp = (UINT)ReadPIN(INP13, NULL);
	}

	/* process pin INP14 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_AccessoryPressureSensor] )
	{
		AIN_AccessoryPressureSensor = (UINT)ReadPIN(INP14, NULL);
	}

	/* process pin INP15 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_LowBeamStatus] )
	{
		DIGIN_LowBeamStatus = (BOOL)ReadPIN(INP15, NULL);
	}

	/* process pin INP17 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_WiperLow] )
	{
		DIGIN_WiperLow = (BOOL)ReadPIN(INP17, NULL);
	}

	/* process pin INP18 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Unmanned_Mode] )
	{
		DIGIN_Unmanned_Mode = (BOOL)ReadPIN(INP18, NULL);
	}

	/* process pin INP19 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_BackDoor_IN_Close] )
	{
		DIGIN_BackDoor_IN_Close = (BOOL)ReadPIN(INP19, NULL);
	}

	/* process pin INP20 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_Tank_Right_Level] )
	{
		AIN_Tank_Right_Level = (UINT)ReadPIN(INP20, NULL);
	}

	/* process pin INP21 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_HandBrakeActivated] )
	{
		DIGIN_HandBrakeActivated = (BOOL)ReadPIN(INP21, NULL);
	}

	/* process pin INP22 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Feedback_DropboxHigh] )
	{
		DIGIN_Feedback_DropboxHigh = (BOOL)ReadPIN(INP22, NULL);
	}

	/* process pin INP23 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_CentralLockSystemEnable] )
	{
		DIGIN_CentralLockSystemEnable = (BOOL)ReadPIN(INP23, NULL);
	}

	/* process pin INP24 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_VVR_OilLevel] )
	{
		DIGIN_VVR_OilLevel = (BOOL)ReadPIN(INP24, NULL);
	}

	/* process pin INP25 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_FuelTankRight_Temp] )
	{
		AIN_FuelTankRight_Temp = (UINT)ReadPIN(INP25, NULL);
	}

	/* process pin INP26 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_TCM_104] )
	{
		DIGIN_TCM_104 = (BOOL)ReadPIN(INP26, NULL);
	}

	/* process pin INP27 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_BackDoor_OUT_Open] )
	{
		DIGIN_BackDoor_OUT_Open = (BOOL)ReadPIN(INP27, NULL);
	}

	/* process pin INP28 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_BackDoor_OUT_Close] )
	{
		DIGIN_BackDoor_OUT_Close = (BOOL)ReadPIN(INP28, NULL);
	}

	/* process pin INP29 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_AlternatorFailure] )
	{
		DIGIN_AlternatorFailure = (BOOL)ReadPIN(INP29, NULL);
	}

	/* process pin INP30 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_VVR_Pressure] )
	{
		AIN_VVR_Pressure = (UINT)ReadPIN(INP30, NULL);
	}

	/* process pin INP31 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_WebastoTankResistanceSensor] )
	{
		AIN_WebastoTankResistanceSensor = (UINT)ReadPIN(INP31, NULL);
	}

	/* process pin INP32 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_VVR_Temperature] )
	{
		AIN_VVR_Temperature = (UINT)ReadPIN(INP32, NULL);
	}

	/* process pin INP33 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_ParkBrakePressureSensor] )
	{
		AIN_ParkBrakePressureSensor = (UINT)ReadPIN(INP33, NULL);
	}

	/* process pin INP34 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_DoorOpenSwitch] )
	{
		DIGIN_DoorOpenSwitch = (BOOL)ReadPIN(INP34, NULL);
	}

	/* process pin INP35 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_FootBrakePressureSensor_2] )
	{
		AIN_FootBrakePressureSensor_2 = (UINT)ReadPIN(INP35, NULL);
	}

	/* process pin INP36 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Bypass_Switch] )
	{
		DIGIN_Bypass_Switch = (BOOL)ReadPIN(INP36, NULL);
	}

	/* process pin INP37 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_HighBeamStatus] )
	{
		DIGIN_HighBeamStatus = (BOOL)ReadPIN(INP37, NULL);
	}

	/* process pin INP38 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_WiperIntermittent] )
	{
		DIGIN_WiperIntermittent = (BOOL)ReadPIN(INP38, NULL);
	}

	/* process pin INP39 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_WiperHigh] )
	{
		DIGIN_WiperHigh = (BOOL)ReadPIN(INP39, NULL);
	}

	/* process pin INP40 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_TurnLeftSignal] )
	{
		DIGIN_TurnLeftSignal = (BOOL)ReadPIN(INP40, NULL);
	}

	/* process pin INP42 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Back_HydDoorOpened] )
	{
		DIGIN_Back_HydDoorOpened = (BOOL)ReadPIN(INP42, NULL);
	}

	/* process pin INP43 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Back_HydDoorClosed] )
	{
		DIGIN_Back_HydDoorClosed = (BOOL)ReadPIN(INP43, NULL);
	}

	/* process pin INP44 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_WiperWasher] )
	{
		DIGIN_WiperWasher = (BOOL)ReadPIN(INP44, NULL);
	}

	/* process pin INP45 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_BlackOut] )
	{
		DIGIN_BlackOut = (BOOL)ReadPIN(INP45, NULL);
	}

	/* process pin INP46 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_FrontAxleDiffLock] )
	{
		DIGIN_FrontAxleDiffLock = (BOOL)ReadPIN(INP46, NULL);
	}

	/* process pin INP47 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_RearAxleDiffLock] )
	{
		DIGIN_RearAxleDiffLock = (BOOL)ReadPIN(INP47, NULL);
	}

	/* process pin INP48 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_BackDoor_IN_Open] )
	{
		DIGIN_BackDoor_IN_Open = (BOOL)ReadPIN(INP48, NULL);
	}

	/* process pin INP49 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_KeySwitchActivated] )
	{
		DIGIN_KeySwitchActivated = (BOOL)ReadPIN(INP49, NULL);
	}

	/* process pin INP50 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_Hazard] )
	{
		DIGIN_Hazard = (BOOL)ReadPIN(INP50, NULL);
	}

	/* process pin INP51 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_IntakeAirHeaterActivated] )
	{
		DIGIN_IntakeAirHeaterActivated = (BOOL)ReadPIN(INP51, NULL);
	}

	/* process pin INP52 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DIGIN_EngineBrake] )
	{
		DIGIN_EngineBrake = (BOOL)ReadPIN(INP52, NULL);
	}

	/* process pin INP53 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_AIN_Brake_Joystick] )
	{
		AIN_Brake_Joystick = (UINT)ReadPIN(INP53, NULL);
	}

	/* process pin OUT00 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_TurnSignalLamp_Left] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_TurnSignalLamp_Left] = DOUT_TurnSignalLamp_Left;
		DOUT_TurnSignalLamp_Left_feedback = (BOOL)ReadPIN(OUT00, NULL);
		DOUT_TurnSignalLamp_Left_status = ReadPINstatus(OUT00);
	}
	(void)WritePIN(OUT00, vt3_force_values[VT3_IO_INDEX_DOUT_TurnSignalLamp_Left], NULL);

	/* process pin OUT01 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_EngineProtection] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_EngineProtection] = DOUT_EngineProtection;
		DOUT_EngineProtection_feedback = (BOOL)ReadPIN(OUT01, NULL);
		DOUT_EngineProtection_status = ReadPINstatus(OUT01);
	}
	(void)WritePIN(OUT01, vt3_force_values[VT3_IO_INDEX_DOUT_EngineProtection], NULL);

	/* process pin OUT02 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Tank2_Valve_Draw] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Tank2_Valve_Draw] = DOUT_Tank2_Valve_Draw;
		DOUT_Tank2_Valve_Draw_feedback = (BOOL)ReadPIN(OUT02, NULL);
	}
	(void)WritePIN(OUT02, vt3_force_values[VT3_IO_INDEX_DOUT_Tank2_Valve_Draw], NULL);

	/* process pin OUT03 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_FuelWater_Evacuation] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_FuelWater_Evacuation] = DOUT_FuelWater_Evacuation;
		DOUT_FuelWater_Evacuation_feedback = (BOOL)ReadPIN(OUT03, NULL);
	}
	(void)WritePIN(OUT03, vt3_force_values[VT3_IO_INDEX_DOUT_FuelWater_Evacuation], NULL);

	/* process pin OUT04 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Brake_En] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Brake_En] = DOUT_Brake_En;
		DOUT_Brake_En_feedback = (BOOL)ReadPIN(OUT04, NULL);
	}
	(void)WritePIN(OUT04, vt3_force_values[VT3_IO_INDEX_DOUT_Brake_En], NULL);

	/* process pin OUT06 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_T90Enable] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_T90Enable] = DOUT_T90Enable;
		DOUT_T90Enable_feedback = (BOOL)ReadPIN(OUT06, NULL);
	}
	(void)WritePIN(OUT06, vt3_force_values[VT3_IO_INDEX_DOUT_T90Enable], NULL);

	/* process pin OUT07 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Backup_Alarm] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Backup_Alarm] = DOUT_Backup_Alarm;
		DOUT_Backup_Alarm_feedback = (BOOL)ReadPIN(OUT07, NULL);
		DOUT_Backup_Alarm_status = ReadPINstatus(OUT07);
	}
	(void)WritePIN(OUT07, vt3_force_values[VT3_IO_INDEX_DOUT_Backup_Alarm], NULL);

	/* process pin OUT08 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_InteriorVantilator] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_InteriorVantilator] = DOUT_InteriorVantilator;
		DOUT_InteriorVantilator_feedback = (BOOL)ReadPIN(OUT08, NULL);
		DOUT_InteriorVantilator_status = ReadPINstatus(OUT08);
	}
	(void)WritePIN(OUT08, vt3_force_values[VT3_IO_INDEX_DOUT_InteriorVantilator], NULL);

	/* process pin OUT09 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_RearDoorControlValf_1] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_RearDoorControlValf_1] = DOUT_RearDoorControlValf_1;
		DOUT_RearDoorControlValf_1_feedback = (BOOL)ReadPIN(OUT09, NULL);
	}
	(void)WritePIN(OUT09, vt3_force_values[VT3_IO_INDEX_DOUT_RearDoorControlValf_1], NULL);

	/* process pin OUT10 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_WiperMotor_1] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotor_1] = DOUT_WiperMotor_1;
		DOUT_WiperMotor_1_feedback = (BOOL)ReadPIN(OUT10, NULL);
	}
	(void)WritePIN(OUT10, vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotor_1], NULL);

	/* process pin OUT11 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_HazardButtonLed] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_HazardButtonLed] = DOUT_HazardButtonLed;
		DOUT_HazardButtonLed_feedback = (BOOL)ReadPIN(OUT11, NULL);
		DOUT_HazardButtonLed_status = ReadPINstatus(OUT11);
	}
	(void)WritePIN(OUT11, vt3_force_values[VT3_IO_INDEX_DOUT_HazardButtonLed], NULL);

	/* process pin OUT12 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_RearDoorControlValf_2] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_RearDoorControlValf_2] = DOUT_RearDoorControlValf_2;
		DOUT_RearDoorControlValf_2_feedback = (BOOL)ReadPIN(OUT12, NULL);
	}
	(void)WritePIN(OUT12, vt3_force_values[VT3_IO_INDEX_DOUT_RearDoorControlValf_2], NULL);

	/* process pin OUT13 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Tank1_Valve_Draw] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Tank1_Valve_Draw] = DOUT_Tank1_Valve_Draw;
		DOUT_Tank1_Valve_Draw_feedback = (BOOL)ReadPIN(OUT13, NULL);
	}
	(void)WritePIN(OUT13, vt3_force_values[VT3_IO_INDEX_DOUT_Tank1_Valve_Draw], NULL);

	/* process pin OUT14 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_PWMOUT_VVR_Pump] )
	{
		vt3_force_values[VT3_IO_INDEX_PWMOUT_VVR_Pump] = PWMOUT_VVR_Pump;
		PWMOUT_VVR_Pump_feedback = (UINT)ReadPIN(OUT14, NULL);
	}
	(void)WritePIN(OUT14, vt3_force_values[VT3_IO_INDEX_PWMOUT_VVR_Pump], NULL);

	/* process pin OUT15 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_SideWindowResistance] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_SideWindowResistance] = DOUT_SideWindowResistance;
		DOUT_SideWindowResistance_feedback = (BOOL)ReadPIN(OUT15, NULL);
		DOUT_SideWindowResistance_status = ReadPINstatus(OUT15);
	}
	(void)WritePIN(OUT15, vt3_force_values[VT3_IO_INDEX_DOUT_SideWindowResistance], NULL);

	/* process pin OUT17 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_InteriorLamp_BO] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_InteriorLamp_BO] = DOUT_InteriorLamp_BO;
		DOUT_InteriorLamp_BO_feedback = (BOOL)ReadPIN(OUT17, NULL);
		DOUT_InteriorLamp_BO_status = ReadPINstatus(OUT17);
	}
	(void)WritePIN(OUT17, vt3_force_values[VT3_IO_INDEX_DOUT_InteriorLamp_BO], NULL);

	/* process pin OUT18 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_ResistanceLED] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_ResistanceLED] = DOUT_ResistanceLED;
		DOUT_ResistanceLED_feedback = (BOOL)ReadPIN(OUT18, NULL);
		DOUT_ResistanceLED_status = ReadPINstatus(OUT18);
	}
	(void)WritePIN(OUT18, vt3_force_values[VT3_IO_INDEX_DOUT_ResistanceLED], NULL);

	/* process pin OUT19 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Dropbox_4WD_Off] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_4WD_Off] = DOUT_Dropbox_4WD_Off;
		DOUT_Dropbox_4WD_Off_feedback = (BOOL)ReadPIN(OUT19, NULL);
	}
	(void)WritePIN(OUT19, vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_4WD_Off], NULL);

	/* process pin OUT20 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_TurnSignalLamp_Right] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_TurnSignalLamp_Right] = DOUT_TurnSignalLamp_Right;
		DOUT_TurnSignalLamp_Right_feedback = (BOOL)ReadPIN(OUT20, NULL);
		DOUT_TurnSignalLamp_Right_status = ReadPINstatus(OUT20);
	}
	(void)WritePIN(OUT20, vt3_force_values[VT3_IO_INDEX_DOUT_TurnSignalLamp_Right], NULL);

	/* process pin OUT21 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_WiperMotor_2] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotor_2] = DOUT_WiperMotor_2;
		DOUT_WiperMotor_2_feedback = (BOOL)ReadPIN(OUT21, NULL);
	}
	(void)WritePIN(OUT21, vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotor_2], NULL);

	/* process pin OUT22 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Washer] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Washer] = DOUT_Washer;
		DOUT_Washer_feedback = (BOOL)ReadPIN(OUT22, NULL);
	}
	(void)WritePIN(OUT22, vt3_force_values[VT3_IO_INDEX_DOUT_Washer], NULL);

	/* process pin OUT23 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_BatteryCharge] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_BatteryCharge] = DOUT_BatteryCharge;
		DOUT_BatteryCharge_feedback = (BOOL)ReadPIN(OUT23, NULL);
	}
	(void)WritePIN(OUT23, vt3_force_values[VT3_IO_INDEX_DOUT_BatteryCharge], NULL);

	/* process pin OUT24 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Dropbox_Neutral] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_Neutral] = DOUT_Dropbox_Neutral;
		DOUT_Dropbox_Neutral_feedback = (BOOL)ReadPIN(OUT24, NULL);
	}
	(void)WritePIN(OUT24, vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_Neutral], NULL);

	/* process pin OUT25 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Dropbox_Low] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_Low] = DOUT_Dropbox_Low;
		DOUT_Dropbox_Low_feedback = (BOOL)ReadPIN(OUT25, NULL);
	}
	(void)WritePIN(OUT25, vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_Low], NULL);

	/* process pin OUT26 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_Dropbox_High] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_High] = DOUT_Dropbox_High;
		DOUT_Dropbox_High_feedback = (BOOL)ReadPIN(OUT26, NULL);
	}
	(void)WritePIN(OUT26, vt3_force_values[VT3_IO_INDEX_DOUT_Dropbox_High], NULL);

	/* process pin OUT27 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_RearAxleDiffLock] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_RearAxleDiffLock] = DOUT_RearAxleDiffLock;
		DOUT_RearAxleDiffLock_feedback = (BOOL)ReadPIN(OUT27, NULL);
	}
	(void)WritePIN(OUT27, vt3_force_values[VT3_IO_INDEX_DOUT_RearAxleDiffLock], NULL);

	/* process pin OUT28 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_FrontAxleDiffLock] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_FrontAxleDiffLock] = DOUT_FrontAxleDiffLock;
		DOUT_FrontAxleDiffLock_feedback = (BOOL)ReadPIN(OUT28, NULL);
	}
	(void)WritePIN(OUT28, vt3_force_values[VT3_IO_INDEX_DOUT_FrontAxleDiffLock], NULL);

	/* process pin OUT29 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_WiperMotorLow_1] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotorLow_1] = DOUT_WiperMotorLow_1;
		DOUT_WiperMotorLow_1_feedback = (BOOL)ReadPIN(OUT29, NULL);
	}
	(void)WritePIN(OUT29, vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotorLow_1], NULL);

	/* process pin OUT30 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_ResistancesFront] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_ResistancesFront] = DOUT_ResistancesFront;
		DOUT_ResistancesFront_feedback = (BOOL)ReadPIN(OUT30, NULL);
	}
	(void)WritePIN(OUT30, vt3_force_values[VT3_IO_INDEX_DOUT_ResistancesFront], NULL);

	/* process pin OUT31 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_DOUT_WiperMotorLow_2] )
	{
		vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotorLow_2] = DOUT_WiperMotorLow_2;
		DOUT_WiperMotorLow_2_feedback = (BOOL)ReadPIN(OUT31, NULL);
	}
	(void)WritePIN(OUT31, vt3_force_values[VT3_IO_INDEX_DOUT_WiperMotorLow_2], NULL);

	/* process pin OUT33 */
	if ( ! vt3_force_flags[VT3_IO_INDEX_ANOUT_BrakeProportional] )
	{
		vt3_force_values[VT3_IO_INDEX_ANOUT_BrakeProportional] = ANOUT_BrakeProportional;
		ANOUT_BrakeProportional_feedback = (UINT)ReadPIN(OUT33, NULL);
	}
	(void)WritePIN(OUT33, vt3_force_values[VT3_IO_INDEX_ANOUT_BrakeProportional], NULL);

} /* vt3_IO_cycle() */

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_IO_C */

/* end of file */
