/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANOPENUKAS_C
#define INCLUDE__VT3_CAN__CANOPENUKAS_C

#include <stdlib.h>
#include "vt3_runtime.h"
#include "vt3_canlib.h"
#include "vt3_POU_common.h"
#include "vt3_CAN__CanOpenUkas.h"
#include "vt3_vars.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* suppress HC12 specific warnings */
#pragma MESSAGE DISABLE C5909 // Assignment in condition
#pragma MESSAGE DISABLE C5918 // Removed dead goto
#pragma MESSAGE DISABLE C5917 // Removed dead assignment
#pragma MESSAGE DISABLE C5660 // Removed dead code
#pragma MESSAGE DISABLE C1420 // Result of function-call is ignored
#pragma MESSAGE DISABLE C4002 // Result not used


/* CAN-bus receive interrupt function */
/* message:  CAN_183_3 */
/* COB-ID:   0x00000183 */
/* CAN port: 2 */
static void canrx_2_00000183_CAN_183_3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open_UKAS = FALSE;

	/* extract variable: WiperLOW */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_WiperLOW = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: WiperHIGH */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_WiperHIGH = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: WiperSelection */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_WiperSelection = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: Washer */
	if ( dlc >= 6 )
	{
		MURPHY_MC2M_Washer = (BOOL)((((BOOL)db[5] >> 5) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_184_3 */
/* COB-ID:   0x00000184 */
/* CAN port: 2 */
static void canrx_2_00000184_CAN_184_3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open_UKAS = FALSE;

	/* extract variable: Horn_switch_On */
	if ( dlc >= 7 )
	{
		MURPHY_MC2M_Horn_switch_On = (USINT)((USINT)db[6]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_185_3 */
/* COB-ID:   0x00000185 */
/* CAN port: 2 */
static void canrx_2_00000185_CAN_185_3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open_UKAS = FALSE;

	/* extract variable: Light_P1_Park */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_Light_P1_Park = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: LowBeamStatus */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_LowBeamStatus = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: LowBeam2Status */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_LowBeam2Status = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: TurnLeftSignal */
	if ( dlc >= 2 )
	{
		MURPHY_MC2M_TurnLeftSignal = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: TurnRightSignal */
	if ( dlc >= 2 )
	{
		MURPHY_MC2M_TurnRightSignal = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}
	/* extract variable: HighBeamStatus */
	if ( dlc >= 2 )
	{
		MURPHY_MC2M_HighBeamStatus = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: HighBeamFlashStatus */
	if ( dlc >= 2 )
	{
		MURPHY_MC2M_HighBeamFlashStatus = (BOOL)((((BOOL)db[1] >> 7) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_186_3 */
/* COB-ID:   0x00000186 */
/* CAN port: 2 */
static void canrx_2_00000186_CAN_186_3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open_UKAS = FALSE;

	/* extract variable: DIGIN19_InteriorLamps */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_DIGIN19_InteriorLamps = (BOOL)((((BOOL)db[2] >> 3) & 0x01));
	}
	/* extract variable: DIGIN25_InteriorVentilation_1 */
	if ( dlc >= 4 )
	{
		MURPHY_MC2M_DIGIN25_InteriorVentilation_1 = (BOOL)((((BOOL)db[3] >> 1) & 0x01));
	}
	/* extract variable: DIGIN26_InteriorVentilation_2 */
	if ( dlc >= 4 )
	{
		MURPHY_MC2M_DIGIN26_InteriorVentilation_2 = (BOOL)((((BOOL)db[3] >> 2) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_187_3 */
/* COB-ID:   0x00000187 */
/* CAN port: 2 */
static void canrx_2_00000187_CAN_187_3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open_UKAS = FALSE;

	/* extract variable: DIGIN07_EngineProtection */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN07_EngineProtection = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: DIGIN12_DropBoxHigh */
	if ( dlc >= 2 )
	{
		MURPHY_MC2M_DIGIN12_DropBoxHigh = (BOOL)((((BOOL)db[1] >> 4) & 0x01));
	}
	/* extract variable: DIGIN14_DropBoxLow */
	if ( dlc >= 2 )
	{
		MURPHY_MC2M_DIGIN14_DropBoxLow = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: DIGIN18_MirrorWindowResistance */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_DIGIN18_MirrorWindowResistance = (BOOL)((((BOOL)db[2] >> 2) & 0x01));
	}
	/* extract variable: DIGIN22_DropBoxNeutral */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_DIGIN22_DropBoxNeutral = (BOOL)((((BOOL)db[2] >> 6) & 0x01));
	}
	/* extract variable: DIGIN25_ABSoffRoad */
	if ( dlc >= 4 )
	{
		MURPHY_MC2M_DIGIN25_ABSoffRoad = (BOOL)((((BOOL)db[3] >> 1) & 0x01));
	}
	/* extract variable: DIGIN26_RearFog */
	if ( dlc >= 4 )
	{
		MURPHY_MC2M_DIGIN26_RearFog = (BOOL)((((BOOL)db[3] >> 2) & 0x01));
	}
	/* extract variable: DIGIN27_DiffLock */
	if ( dlc >= 4 )
	{
		MURPHY_MC2M_DIGIN27_DiffLock = (BOOL)((((BOOL)db[3] >> 3) & 0x01));
	}
	/* extract variable: DIGIN30_FrontFog */
	if ( dlc >= 4 )
	{
		MURPHY_MC2M_DIGIN30_FrontFog = (BOOL)((((BOOL)db[3] >> 6) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_188_3 */
/* COB-ID:   0x00000188 */
/* CAN port: 2 */
static void canrx_2_00000188_CAN_188_3(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open_UKAS = FALSE;

	/* extract variable: DIGIN00_DIGIN_BlackOut_S1 */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1 = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: DIGIN01_DIGIN_BlackOut_S2 */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2 = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: DIGIN02_DIGIN_BlackOut_S3 */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3 = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: DIGIN03_DIGIN_BlackOut_Tag */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: DIGIN04_DIGIN_BlackOut_1 */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1 = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: DIGIN05_DIGIN_BlackOut_2 */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2 = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: DIGIN06_DIGIN_Hazard */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_DIGIN06_DIGIN_Hazard = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: ECM_Remote_Accelerator_Switch */
	if ( dlc >= 1 )
	{
		MURPHY_MC2M_ECM_Remote_Accelerator_Switch = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: ECM_Remote_Accelerator */
	if ( dlc >= 2 )
	{
		MURPHY_MC2M_ECM_Remote_Accelerator = (USINT)((USINT)db[1]);
	}
	/* extract variable: TCM_ShiftSelector_Button_R */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_TCM_ShiftSelector_Button_R = (BOOL)(((BOOL)db[2] & 0x01));
	}
	/* extract variable: TCM_ShiftSelector_Button_N */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_TCM_ShiftSelector_Button_N = (BOOL)((((BOOL)db[2] >> 1) & 0x01));
	}
	/* extract variable: TCM_ShiftSelector_Button_D */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_TCM_ShiftSelector_Button_D = (BOOL)((((BOOL)db[2] >> 2) & 0x01));
	}
	/* extract variable: ECM_RemoteCruiseEnable_Switch */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch = (BOOL)((((BOOL)db[2] >> 3) & 0x01));
	}
	/* extract variable: ECM_RemoteCruiseSet_Switch */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_ECM_RemoteCruiseSet_Switch = (BOOL)((((BOOL)db[2] >> 4) & 0x01));
	}
	/* extract variable: ECM_RemoteCruiseResume_Switch */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_ECM_RemoteCruiseResume_Switch = (BOOL)((((BOOL)db[2] >> 5) & 0x01));
	}
	/* extract variable: ETI_RemooteConnectionOK */
	if ( dlc >= 3 )
	{
		MURPHY_MC2M_ETI_RemooteConnectionOK = (BOOL)((((BOOL)db[2] >> 6) & 0x01));
	}

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanOpenUkas[6] = {
	/*    cob-id    tout  alm  alm   mux   mux  call function                            */
	/*                    off   on   pos    id                                           */
	{ 0x00000183,    150,   3,   1,  255,    0, canrx_2_00000183_CAN_183_3               },
	{ 0x00000184,    150,   3,   1,  255,    0, canrx_2_00000184_CAN_184_3               },
	{ 0x00000185,    150,   3,   1,  255,    0, canrx_2_00000185_CAN_185_3               },
	{ 0x00000186,    150,   3,   1,  255,    0, canrx_2_00000186_CAN_186_3               },
	{ 0x00000187,    150,   3,   1,  255,    0, canrx_2_00000187_CAN_187_3               },
	{ 0x00000188,    300,   3,   1,  255,    0, canrx_2_00000188_CAN_188_3               },
};

/* initializers for receive and transmit variables */
static const BOOL FAR __init_value__MURPHY_MC2M_WiperLOW = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_WiperHIGH = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_WiperSelection = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_Washer = FALSE;
static const USINT FAR __init_value__MURPHY_MC2M_Horn_switch_On = ((USINT)0U);
static const BOOL FAR __init_value__MURPHY_MC2M_Light_P1_Park = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_LowBeamStatus = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_LowBeam2Status = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_TurnLeftSignal = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_TurnRightSignal = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_HighBeamStatus = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_HighBeamFlashStatus = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN19_InteriorLamps = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN25_InteriorVentilation_1 = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN26_InteriorVentilation_2 = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN07_EngineProtection = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN12_DropBoxHigh = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN14_DropBoxLow = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN18_MirrorWindowResistance = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN22_DropBoxNeutral = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN25_ABSoffRoad = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN26_RearFog = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN27_DiffLock = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN30_FrontFog = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1 = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2 = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3 = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1 = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2 = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_DIGIN06_DIGIN_Hazard = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_ECM_Remote_Accelerator_Switch = FALSE;
static const USINT FAR __init_value__MURPHY_MC2M_ECM_Remote_Accelerator = ((USINT)0U);
static const BOOL FAR __init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_R = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_N = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_D = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_ECM_RemoteCruiseSet_Switch = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_ECM_RemoteCruiseResume_Switch = FALSE;
static const BOOL FAR __init_value__MURPHY_MC2M_ETI_RemooteConnectionOK = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Hydrolic_Pressure_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Hydrolic_Temperature_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Alternator_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Low_Fuel_Warning_T1 = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Low_Fuel_Warning_T2 = FALSE;
static const Enum346 FAR __init_value__MC2M_ASELSAN_Water_In_Fuel_Warning = 0;
static const BOOL FAR __init_value__MC2M_ASELSAN_Fire_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Transmission_Oil_Level_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Transmission_Oil_Fiter_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Transmission_Oil_Temp_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Air_Filter_Clogged_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_Engine_Oil_Pressure_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_EngineOilTemperature_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_HighWoltage_Warning = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN_BlackOut_Mode = FALSE;
static const SINT FAR __init_value__MC2M_ASELSAN_Engine_Intake_Manifold_Temp = ((SINT)0);
static const USINT FAR __init_value__MC2M_ASELSAN_Vehicle_Speed = ((USINT)0U);
static const SINT FAR __init_value__MC2M_ASELSAN_FuelLevel_T1 = ((SINT)0);
static const SINT FAR __init_value__MC2M_ASELSAN_FuelLevel_T2 = ((SINT)0);
static const INT FAR __init_value__MC2M_ASELSAN_Transmission_Oil_Temperature = ((INT)0);
static const USINT FAR __init_value__MC2M_ASELSAN2_Transmission_Current_Gear = ((USINT)0U);
static const BOOL FAR __init_value__MC2M_ASELSAN2_Critic_TCM_Error = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN2_Critic_ECM_Error = FALSE;
static const BOOL FAR __init_value__MC2M_ASELSAN2_Motor_Control_Error = FALSE;
static const UINT FAR __init_value__MC2M_ASELSAN2_Engine_Speed = ((UINT)0U);
static const USINT FAR __init_value__MC2M_ASELSAN2_Engine_Temp = ((USINT)0U);
static const USINT FAR __init_value__MC2M_ASELSAN2_Engine_Oil_Press = ((USINT)0U);
static const USINT FAR __init_value__MC2M_ASELSAN2_Engine_Coolant_Level = ((USINT)0U);
static const UINT FAR __init_value__MC2M_MURPHY_EngineSpeed = ((UINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_VehicleSpeed = ((USINT)0U);
static const SINT FAR __init_value__MC2M_MURPHY_FuelLevel_1 = ((SINT)0);
static const USINT FAR __init_value__MC2M_MURPHY_EngineTempValue = ((USINT)0U);
static const UINT FAR __init_value__MC2M_MURPHY_BatteryLevel = ((UINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_EngineOilPressure = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_ParkingBrakePressure = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_ServiceBrake1 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_ServiceBrake2 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_AccessoryPressure = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_TransOilTemperature = ((USINT)0U);
static const SINT FAR __init_value__MC2M_MURPHY_CurrentGear = ((SINT)0);
static const SINT FAR __init_value__MC2M_MURPHY_OutSideTemperature = ((SINT)0);
static const SINT FAR __init_value__MC2M_MURPHY_InSideTemperature = ((SINT)0);
static const INT FAR __init_value__MC2M_MURPHY_AngleX = ((INT)0);
static const INT FAR __init_value__MC2M_MURPHY_AngleY = ((INT)0);
static const BOOL FAR __init_value__MC2M_MURPHY_ServiceBrakeActivated = FALSE;
static const BOOL FAR __init_value__MC2M_MURPHY_ParkingBrakeActivated = FALSE;
static const USINT FAR __init_value__MC2M_MURPHY_RemoteAcceleratorPedalPosition1 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_RemCruiseControlStates = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_RemCruiseControlSetSpeed = ((USINT)0U);
static const SINT FAR __init_value__MC2M_MURPHY_Hour = ((SINT)0);
static const SINT FAR __init_value__MC2M_MURPHY_Minute = ((SINT)0);
static const SINT FAR __init_value__MC2M_MURPHY_Second = ((SINT)0);
static const SINT FAR __init_value__MC2M_MURPHY_SyncMessage = ((SINT)85);
static const BOOL FAR __init_value__MC2M_MOBILEYE_RightSignal = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE_LeftSignal = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE_HighBeam = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE_LowBeam = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE_BrakeSignal = FALSE;
static const USINT FAR __init_value__MC2M_MOBILEYE_VehicleSpeed = ((USINT)0U);
static const UDINT FAR __init_value__MC2M_MURPHY_TCM_SuspectParameterNumber = ((UDINT)0UL);
static const UDINT FAR __init_value__MC2M_MURPHY_ECM_SuspectParameterNumber = ((UDINT)0UL);
static const UDINT FAR __init_value__MC2M_MURPHY_EBS_SuspectParameterNumber = ((UDINT)0UL);
static const USINT FAR __init_value__MC2M_MURPHY_TCM_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_ECM_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_EBS_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_TCM_OccurrenceCount = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_ECM_OccurrenceCount = ((USINT)0U);
static const USINT FAR __init_value__MC2M_MURPHY_EBS_OccurrenceCount = ((USINT)0U);

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanOpenUkas[] = {
	{ &MURPHY_MC2M_WiperLOW, &__init_value__MURPHY_MC2M_WiperLOW, 1 },
	{ &MURPHY_MC2M_WiperHIGH, &__init_value__MURPHY_MC2M_WiperHIGH, 1 },
	{ &MURPHY_MC2M_WiperSelection, &__init_value__MURPHY_MC2M_WiperSelection, 1 },
	{ &MURPHY_MC2M_Washer  , &__init_value__MURPHY_MC2M_Washer, 1 },
	{ &MURPHY_MC2M_Horn_switch_On, &__init_value__MURPHY_MC2M_Horn_switch_On, 1 },
	{ &MURPHY_MC2M_Light_P1_Park, &__init_value__MURPHY_MC2M_Light_P1_Park, 1 },
	{ &MURPHY_MC2M_LowBeamStatus, &__init_value__MURPHY_MC2M_LowBeamStatus, 1 },
	{ &MURPHY_MC2M_LowBeam2Status, &__init_value__MURPHY_MC2M_LowBeam2Status, 1 },
	{ &MURPHY_MC2M_TurnLeftSignal, &__init_value__MURPHY_MC2M_TurnLeftSignal, 1 },
	{ &MURPHY_MC2M_TurnRightSignal, &__init_value__MURPHY_MC2M_TurnRightSignal, 1 },
	{ &MURPHY_MC2M_HighBeamStatus, &__init_value__MURPHY_MC2M_HighBeamStatus, 1 },
	{ &MURPHY_MC2M_HighBeamFlashStatus, &__init_value__MURPHY_MC2M_HighBeamFlashStatus, 1 },
	{ &MURPHY_MC2M_DIGIN19_InteriorLamps, &__init_value__MURPHY_MC2M_DIGIN19_InteriorLamps, 1 },
	{ &MURPHY_MC2M_DIGIN25_InteriorVentilation_1, &__init_value__MURPHY_MC2M_DIGIN25_InteriorVentilation_1, 1 },
	{ &MURPHY_MC2M_DIGIN26_InteriorVentilation_2, &__init_value__MURPHY_MC2M_DIGIN26_InteriorVentilation_2, 1 },
	{ &MURPHY_MC2M_DIGIN07_EngineProtection, &__init_value__MURPHY_MC2M_DIGIN07_EngineProtection, 1 },
	{ &MURPHY_MC2M_DIGIN12_DropBoxHigh, &__init_value__MURPHY_MC2M_DIGIN12_DropBoxHigh, 1 },
	{ &MURPHY_MC2M_DIGIN14_DropBoxLow, &__init_value__MURPHY_MC2M_DIGIN14_DropBoxLow, 1 },
	{ &MURPHY_MC2M_DIGIN18_MirrorWindowResistance, &__init_value__MURPHY_MC2M_DIGIN18_MirrorWindowResistance, 1 },
	{ &MURPHY_MC2M_DIGIN22_DropBoxNeutral, &__init_value__MURPHY_MC2M_DIGIN22_DropBoxNeutral, 1 },
	{ &MURPHY_MC2M_DIGIN25_ABSoffRoad, &__init_value__MURPHY_MC2M_DIGIN25_ABSoffRoad, 1 },
	{ &MURPHY_MC2M_DIGIN26_RearFog, &__init_value__MURPHY_MC2M_DIGIN26_RearFog, 1 },
	{ &MURPHY_MC2M_DIGIN27_DiffLock, &__init_value__MURPHY_MC2M_DIGIN27_DiffLock, 1 },
	{ &MURPHY_MC2M_DIGIN30_FrontFog, &__init_value__MURPHY_MC2M_DIGIN30_FrontFog, 1 },
	{ &MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1, &__init_value__MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1, 1 },
	{ &MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2, &__init_value__MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2, 1 },
	{ &MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3, &__init_value__MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3, 1 },
	{ &MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag, &__init_value__MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag, 1 },
	{ &MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1, &__init_value__MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1, 1 },
	{ &MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2, &__init_value__MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2, 1 },
	{ &MURPHY_MC2M_DIGIN06_DIGIN_Hazard, &__init_value__MURPHY_MC2M_DIGIN06_DIGIN_Hazard, 1 },
	{ &MURPHY_MC2M_ECM_Remote_Accelerator_Switch, &__init_value__MURPHY_MC2M_ECM_Remote_Accelerator_Switch, 1 },
	{ &MURPHY_MC2M_ECM_Remote_Accelerator, &__init_value__MURPHY_MC2M_ECM_Remote_Accelerator, 1 },
	{ &MURPHY_MC2M_TCM_ShiftSelector_Button_R, &__init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_R, 1 },
	{ &MURPHY_MC2M_TCM_ShiftSelector_Button_N, &__init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_N, 1 },
	{ &MURPHY_MC2M_TCM_ShiftSelector_Button_D, &__init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_D, 1 },
	{ &MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch, &__init_value__MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch, 1 },
	{ &MURPHY_MC2M_ECM_RemoteCruiseSet_Switch, &__init_value__MURPHY_MC2M_ECM_RemoteCruiseSet_Switch, 1 },
	{ &MURPHY_MC2M_ECM_RemoteCruiseResume_Switch, &__init_value__MURPHY_MC2M_ECM_RemoteCruiseResume_Switch, 1 },
	{ &MURPHY_MC2M_ETI_RemooteConnectionOK, &__init_value__MURPHY_MC2M_ETI_RemooteConnectionOK, 1 },
	{ &MC2M_ASELSAN_Hydrolic_Pressure_Warning, &__init_value__MC2M_ASELSAN_Hydrolic_Pressure_Warning, 1 },
	{ &MC2M_ASELSAN_Hydrolic_Temperature_Warning, &__init_value__MC2M_ASELSAN_Hydrolic_Temperature_Warning, 1 },
	{ &MC2M_ASELSAN_Alternator_Warning, &__init_value__MC2M_ASELSAN_Alternator_Warning, 1 },
	{ &MC2M_ASELSAN_Low_Fuel_Warning_T1, &__init_value__MC2M_ASELSAN_Low_Fuel_Warning_T1, 1 },
	{ &MC2M_ASELSAN_Low_Fuel_Warning_T2, &__init_value__MC2M_ASELSAN_Low_Fuel_Warning_T2, 1 },
	{ &MC2M_ASELSAN_Water_In_Fuel_Warning, &__init_value__MC2M_ASELSAN_Water_In_Fuel_Warning, 2 },
	{ &MC2M_ASELSAN_Fire_Warning, &__init_value__MC2M_ASELSAN_Fire_Warning, 1 },
	{ &MC2M_ASELSAN_Transmission_Oil_Level_Warning, &__init_value__MC2M_ASELSAN_Transmission_Oil_Level_Warning, 1 },
	{ &MC2M_ASELSAN_Transmission_Oil_Fiter_Warning, &__init_value__MC2M_ASELSAN_Transmission_Oil_Fiter_Warning, 1 },
	{ &MC2M_ASELSAN_Transmission_Oil_Temp_Warning, &__init_value__MC2M_ASELSAN_Transmission_Oil_Temp_Warning, 1 },
	{ &MC2M_ASELSAN_Air_Filter_Clogged_Warning, &__init_value__MC2M_ASELSAN_Air_Filter_Clogged_Warning, 1 },
	{ &MC2M_ASELSAN_Engine_Oil_Pressure_Warning, &__init_value__MC2M_ASELSAN_Engine_Oil_Pressure_Warning, 1 },
	{ &MC2M_ASELSAN_EngineOilTemperature_Warning, &__init_value__MC2M_ASELSAN_EngineOilTemperature_Warning, 1 },
	{ &MC2M_ASELSAN_HighWoltage_Warning, &__init_value__MC2M_ASELSAN_HighWoltage_Warning, 1 },
	{ &MC2M_ASELSAN_BlackOut_Mode, &__init_value__MC2M_ASELSAN_BlackOut_Mode, 1 },
	{ &MC2M_ASELSAN_Engine_Intake_Manifold_Temp, &__init_value__MC2M_ASELSAN_Engine_Intake_Manifold_Temp, 1 },
	{ &MC2M_ASELSAN_Vehicle_Speed, &__init_value__MC2M_ASELSAN_Vehicle_Speed, 1 },
	{ &MC2M_ASELSAN_FuelLevel_T1, &__init_value__MC2M_ASELSAN_FuelLevel_T1, 1 },
	{ &MC2M_ASELSAN_FuelLevel_T2, &__init_value__MC2M_ASELSAN_FuelLevel_T2, 1 },
	{ &MC2M_ASELSAN_Transmission_Oil_Temperature, &__init_value__MC2M_ASELSAN_Transmission_Oil_Temperature, 2 },
	{ &MC2M_ASELSAN2_Transmission_Current_Gear, &__init_value__MC2M_ASELSAN2_Transmission_Current_Gear, 1 },
	{ &MC2M_ASELSAN2_Critic_TCM_Error, &__init_value__MC2M_ASELSAN2_Critic_TCM_Error, 1 },
	{ &MC2M_ASELSAN2_Critic_ECM_Error, &__init_value__MC2M_ASELSAN2_Critic_ECM_Error, 1 },
	{ &MC2M_ASELSAN2_Motor_Control_Error, &__init_value__MC2M_ASELSAN2_Motor_Control_Error, 1 },
	{ &MC2M_ASELSAN2_Engine_Speed, &__init_value__MC2M_ASELSAN2_Engine_Speed, 2 },
	{ &MC2M_ASELSAN2_Engine_Temp, &__init_value__MC2M_ASELSAN2_Engine_Temp, 1 },
	{ &MC2M_ASELSAN2_Engine_Oil_Press, &__init_value__MC2M_ASELSAN2_Engine_Oil_Press, 1 },
	{ &MC2M_ASELSAN2_Engine_Coolant_Level, &__init_value__MC2M_ASELSAN2_Engine_Coolant_Level, 1 },
	{ &MC2M_MURPHY_EngineSpeed, &__init_value__MC2M_MURPHY_EngineSpeed, 2 },
	{ &MC2M_MURPHY_VehicleSpeed, &__init_value__MC2M_MURPHY_VehicleSpeed, 1 },
	{ &MC2M_MURPHY_FuelLevel_1, &__init_value__MC2M_MURPHY_FuelLevel_1, 1 },
	{ &MC2M_MURPHY_EngineTempValue, &__init_value__MC2M_MURPHY_EngineTempValue, 1 },
	{ &MC2M_MURPHY_BatteryLevel, &__init_value__MC2M_MURPHY_BatteryLevel, 2 },
	{ &MC2M_MURPHY_EngineOilPressure, &__init_value__MC2M_MURPHY_EngineOilPressure, 1 },
	{ &MC2M_MURPHY_ParkingBrakePressure, &__init_value__MC2M_MURPHY_ParkingBrakePressure, 1 },
	{ &MC2M_MURPHY_ServiceBrake1, &__init_value__MC2M_MURPHY_ServiceBrake1, 1 },
	{ &MC2M_MURPHY_ServiceBrake2, &__init_value__MC2M_MURPHY_ServiceBrake2, 1 },
	{ &MC2M_MURPHY_AccessoryPressure, &__init_value__MC2M_MURPHY_AccessoryPressure, 1 },
	{ &MC2M_MURPHY_TransOilTemperature, &__init_value__MC2M_MURPHY_TransOilTemperature, 1 },
	{ &MC2M_MURPHY_CurrentGear, &__init_value__MC2M_MURPHY_CurrentGear, 1 },
	{ &MC2M_MURPHY_OutSideTemperature, &__init_value__MC2M_MURPHY_OutSideTemperature, 1 },
	{ &MC2M_MURPHY_InSideTemperature, &__init_value__MC2M_MURPHY_InSideTemperature, 1 },
	{ &MC2M_MURPHY_AngleX  , &__init_value__MC2M_MURPHY_AngleX, 2 },
	{ &MC2M_MURPHY_AngleY  , &__init_value__MC2M_MURPHY_AngleY, 2 },
	{ &MC2M_MURPHY_ServiceBrakeActivated, &__init_value__MC2M_MURPHY_ServiceBrakeActivated, 1 },
	{ &MC2M_MURPHY_ParkingBrakeActivated, &__init_value__MC2M_MURPHY_ParkingBrakeActivated, 1 },
	{ &MC2M_MURPHY_RemoteAcceleratorPedalPosition1, &__init_value__MC2M_MURPHY_RemoteAcceleratorPedalPosition1, 1 },
	{ &MC2M_MURPHY_RemCruiseControlStates, &__init_value__MC2M_MURPHY_RemCruiseControlStates, 1 },
	{ &MC2M_MURPHY_RemCruiseControlSetSpeed, &__init_value__MC2M_MURPHY_RemCruiseControlSetSpeed, 1 },
	{ &MC2M_MURPHY_Hour    , &__init_value__MC2M_MURPHY_Hour, 1 },
	{ &MC2M_MURPHY_Minute  , &__init_value__MC2M_MURPHY_Minute, 1 },
	{ &MC2M_MURPHY_Second  , &__init_value__MC2M_MURPHY_Second, 1 },
	{ &MC2M_MURPHY_SyncMessage, &__init_value__MC2M_MURPHY_SyncMessage, 1 },
	{ &MC2M_MOBILEYE_RightSignal, &__init_value__MC2M_MOBILEYE_RightSignal, 1 },
	{ &MC2M_MOBILEYE_LeftSignal, &__init_value__MC2M_MOBILEYE_LeftSignal, 1 },
	{ &MC2M_MOBILEYE_HighBeam, &__init_value__MC2M_MOBILEYE_HighBeam, 1 },
	{ &MC2M_MOBILEYE_LowBeam, &__init_value__MC2M_MOBILEYE_LowBeam, 1 },
	{ &MC2M_MOBILEYE_BrakeSignal, &__init_value__MC2M_MOBILEYE_BrakeSignal, 1 },
	{ &MC2M_MOBILEYE_VehicleSpeed, &__init_value__MC2M_MOBILEYE_VehicleSpeed, 1 },
	{ &MC2M_MURPHY_TCM_SuspectParameterNumber, &__init_value__MC2M_MURPHY_TCM_SuspectParameterNumber, 4 },
	{ &MC2M_MURPHY_ECM_SuspectParameterNumber, &__init_value__MC2M_MURPHY_ECM_SuspectParameterNumber, 4 },
	{ &MC2M_MURPHY_EBS_SuspectParameterNumber, &__init_value__MC2M_MURPHY_EBS_SuspectParameterNumber, 4 },
	{ &MC2M_MURPHY_TCM_FailureModeIdentifier, &__init_value__MC2M_MURPHY_TCM_FailureModeIdentifier, 1 },
	{ &MC2M_MURPHY_ECM_FailureModeIdentifier, &__init_value__MC2M_MURPHY_ECM_FailureModeIdentifier, 1 },
	{ &MC2M_MURPHY_EBS_FailureModeIdentifier, &__init_value__MC2M_MURPHY_EBS_FailureModeIdentifier, 1 },
	{ &MC2M_MURPHY_TCM_OccurrenceCount, &__init_value__MC2M_MURPHY_TCM_OccurrenceCount, 1 },
	{ &MC2M_MURPHY_ECM_OccurrenceCount, &__init_value__MC2M_MURPHY_ECM_OccurrenceCount, 1 },
	{ &MC2M_MURPHY_EBS_OccurrenceCount, &__init_value__MC2M_MURPHY_EBS_OccurrenceCount, 1 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanOpenUkas[] */

/* transmit timers */
static WORD vt3_can_tx_timeout_CAN_101_Aselsan = 0;
static WORD vt3_can_tx_timeout_CAN_102_Aselsan = 0;
static WORD vt3_can_tx_timeout_CAN_151A = 0;
static WORD vt3_can_tx_timeout_CAN_152A = 0;
static WORD vt3_can_tx_timeout_CAN_153A = 0;
static WORD vt3_can_tx_timeout_CAN_154A = 0;
static WORD vt3_can_tx_timeout_CAN_171_Mobileye = 0;
static WORD vt3_can_tx_timeout_CAN_164A = 0;
static WORD vt3_can_tx_timeout_CAN_165A = 0;
static WORD vt3_can_tx_timeout_CAN_166A = 0;


/******************************************************************************/
/* remote I/O devices */
/******************************************************************************/


/******************************************************************************/
/* functions */
/******************************************************************************/

/* CAN interface initialization function */
void vt3_can_CanOpenUkas_init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize variables */
	for ( p = __init_table__CanOpenUkas; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* reset alarms */
	vt3_can_alarm_busoff_CAN_Open_UKAS = FALSE;
	vt3_can_alarm_CAN_183_3 = FALSE;
	vt3_can_alarm_CAN_184_3 = FALSE;
	vt3_can_alarm_CAN_185_3 = FALSE;
	vt3_can_alarm_CAN_186_3 = FALSE;
	vt3_can_alarm_CAN_187_3 = FALSE;
	vt3_can_alarm_CAN_188_3 = FALSE;

	/* initialize can TX value */
	vt3_can_period_CAN_101_Aselsan = 100;
	vt3_can_trigger_CAN_101_Aselsan = FALSE;
	vt3_can_period_CAN_102_Aselsan = 100;
	vt3_can_trigger_CAN_102_Aselsan = FALSE;
	vt3_can_period_CAN_151A = 100;
	vt3_can_trigger_CAN_151A = FALSE;
	vt3_can_period_CAN_152A = 100;
	vt3_can_trigger_CAN_152A = FALSE;
	vt3_can_period_CAN_153A = 100;
	vt3_can_trigger_CAN_153A = FALSE;
	vt3_can_period_CAN_154A = 1000;
	vt3_can_trigger_CAN_154A = FALSE;
	vt3_can_period_CAN_171_Mobileye = 100;
	vt3_can_trigger_CAN_171_Mobileye = FALSE;
	vt3_can_period_CAN_164A = 100;
	vt3_can_trigger_CAN_164A = FALSE;
	vt3_can_period_CAN_165A = 100;
	vt3_can_trigger_CAN_165A = FALSE;
	vt3_can_period_CAN_166A = 100;
	vt3_can_trigger_CAN_166A = FALSE;

	/* reset timers */
	vt3_can_tx_timeout_CAN_101_Aselsan = 0;
	vt3_can_tx_timeout_CAN_102_Aselsan = 0;
	vt3_can_tx_timeout_CAN_151A = 0;
	vt3_can_tx_timeout_CAN_152A = 0;
	vt3_can_tx_timeout_CAN_153A = 0;
	vt3_can_tx_timeout_CAN_154A = 0;
	vt3_can_tx_timeout_CAN_171_Mobileye = 0;
	vt3_can_tx_timeout_CAN_164A = 0;
	vt3_can_tx_timeout_CAN_165A = 0;
	vt3_can_tx_timeout_CAN_166A = 0;

	/* initialize the interface */
	vt3_init_interface(2, 250, vt3_can_rx_init_CanOpenUkas, 6);

	/******************************************************************************/
	/* initialization of remote I/O devices */
	/******************************************************************************/


}

/* CAN interface receive function */
void vt3_can_CanOpenUkas_rx(void)
{
	CanRxObj * pmsg;  /* pointer to message record */

	/* check for BUSOFF errors */
	if ( vt3_can_check_busoff(2) )
	{
		vt3_can_alarm_busoff_CAN_Open_UKAS = TRUE;
	}

	/* RX message: CAN_183_3 */
	pmsg = vt3_get_canmsg(2, VT3_RXMSG_CAN_183_3);
	if ( ! pmsg->RxOK ) 
	{
		MURPHY_MC2M_WiperLOW = __init_value__MURPHY_MC2M_WiperLOW;
		MURPHY_MC2M_WiperHIGH = __init_value__MURPHY_MC2M_WiperHIGH;
		MURPHY_MC2M_WiperSelection = __init_value__MURPHY_MC2M_WiperSelection;
		MURPHY_MC2M_Washer = __init_value__MURPHY_MC2M_Washer;
	}
	vt3_can_alarm_CAN_183_3 = ! pmsg->RxOK;

	/* RX message: CAN_184_3 */
	pmsg = vt3_get_canmsg(2, VT3_RXMSG_CAN_184_3);
	if ( ! pmsg->RxOK ) 
	{
		MURPHY_MC2M_Horn_switch_On = __init_value__MURPHY_MC2M_Horn_switch_On;
	}
	vt3_can_alarm_CAN_184_3 = ! pmsg->RxOK;

	/* RX message: CAN_185_3 */
	pmsg = vt3_get_canmsg(2, VT3_RXMSG_CAN_185_3);
	if ( ! pmsg->RxOK ) 
	{
		MURPHY_MC2M_Light_P1_Park = __init_value__MURPHY_MC2M_Light_P1_Park;
		MURPHY_MC2M_LowBeamStatus = __init_value__MURPHY_MC2M_LowBeamStatus;
		MURPHY_MC2M_LowBeam2Status = __init_value__MURPHY_MC2M_LowBeam2Status;
		MURPHY_MC2M_TurnLeftSignal = __init_value__MURPHY_MC2M_TurnLeftSignal;
		MURPHY_MC2M_TurnRightSignal = __init_value__MURPHY_MC2M_TurnRightSignal;
		MURPHY_MC2M_HighBeamStatus = __init_value__MURPHY_MC2M_HighBeamStatus;
		MURPHY_MC2M_HighBeamFlashStatus = __init_value__MURPHY_MC2M_HighBeamFlashStatus;
	}
	vt3_can_alarm_CAN_185_3 = ! pmsg->RxOK;

	/* RX message: CAN_186_3 */
	pmsg = vt3_get_canmsg(2, VT3_RXMSG_CAN_186_3);
	if ( ! pmsg->RxOK ) 
	{
		MURPHY_MC2M_DIGIN19_InteriorLamps = __init_value__MURPHY_MC2M_DIGIN19_InteriorLamps;
		MURPHY_MC2M_DIGIN25_InteriorVentilation_1 = __init_value__MURPHY_MC2M_DIGIN25_InteriorVentilation_1;
		MURPHY_MC2M_DIGIN26_InteriorVentilation_2 = __init_value__MURPHY_MC2M_DIGIN26_InteriorVentilation_2;
	}
	vt3_can_alarm_CAN_186_3 = ! pmsg->RxOK;

	/* RX message: CAN_187_3 */
	pmsg = vt3_get_canmsg(2, VT3_RXMSG_CAN_187_3);
	if ( ! pmsg->RxOK ) 
	{
		MURPHY_MC2M_DIGIN07_EngineProtection = __init_value__MURPHY_MC2M_DIGIN07_EngineProtection;
		MURPHY_MC2M_DIGIN12_DropBoxHigh = __init_value__MURPHY_MC2M_DIGIN12_DropBoxHigh;
		MURPHY_MC2M_DIGIN14_DropBoxLow = __init_value__MURPHY_MC2M_DIGIN14_DropBoxLow;
		MURPHY_MC2M_DIGIN18_MirrorWindowResistance = __init_value__MURPHY_MC2M_DIGIN18_MirrorWindowResistance;
		MURPHY_MC2M_DIGIN22_DropBoxNeutral = __init_value__MURPHY_MC2M_DIGIN22_DropBoxNeutral;
		MURPHY_MC2M_DIGIN25_ABSoffRoad = __init_value__MURPHY_MC2M_DIGIN25_ABSoffRoad;
		MURPHY_MC2M_DIGIN26_RearFog = __init_value__MURPHY_MC2M_DIGIN26_RearFog;
		MURPHY_MC2M_DIGIN27_DiffLock = __init_value__MURPHY_MC2M_DIGIN27_DiffLock;
		MURPHY_MC2M_DIGIN30_FrontFog = __init_value__MURPHY_MC2M_DIGIN30_FrontFog;
	}
	vt3_can_alarm_CAN_187_3 = ! pmsg->RxOK;

	/* RX message: CAN_188_3 */
	pmsg = vt3_get_canmsg(2, VT3_RXMSG_CAN_188_3);
	if ( ! pmsg->RxOK ) 
	{
		MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1 = __init_value__MURPHY_MC2M_DIGIN00_DIGIN_BlackOut_S1;
		MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2 = __init_value__MURPHY_MC2M_DIGIN01_DIGIN_BlackOut_S2;
		MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3 = __init_value__MURPHY_MC2M_DIGIN02_DIGIN_BlackOut_S3;
		MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag = __init_value__MURPHY_MC2M_DIGIN03_DIGIN_BlackOut_Tag;
		MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1 = __init_value__MURPHY_MC2M_DIGIN04_DIGIN_BlackOut_1;
		MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2 = __init_value__MURPHY_MC2M_DIGIN05_DIGIN_BlackOut_2;
		MURPHY_MC2M_DIGIN06_DIGIN_Hazard = __init_value__MURPHY_MC2M_DIGIN06_DIGIN_Hazard;
		MURPHY_MC2M_ECM_Remote_Accelerator_Switch = __init_value__MURPHY_MC2M_ECM_Remote_Accelerator_Switch;
		MURPHY_MC2M_ECM_Remote_Accelerator = __init_value__MURPHY_MC2M_ECM_Remote_Accelerator;
		MURPHY_MC2M_TCM_ShiftSelector_Button_R = __init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_R;
		MURPHY_MC2M_TCM_ShiftSelector_Button_N = __init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_N;
		MURPHY_MC2M_TCM_ShiftSelector_Button_D = __init_value__MURPHY_MC2M_TCM_ShiftSelector_Button_D;
		MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch = __init_value__MURPHY_MC2M_ECM_RemoteCruiseEnable_Switch;
		MURPHY_MC2M_ECM_RemoteCruiseSet_Switch = __init_value__MURPHY_MC2M_ECM_RemoteCruiseSet_Switch;
		MURPHY_MC2M_ECM_RemoteCruiseResume_Switch = __init_value__MURPHY_MC2M_ECM_RemoteCruiseResume_Switch;
		MURPHY_MC2M_ETI_RemooteConnectionOK = __init_value__MURPHY_MC2M_ETI_RemooteConnectionOK;
	}
	vt3_can_alarm_CAN_188_3 = ! pmsg->RxOK;


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/


}

/* CAN interface transmit function */
void vt3_can_CanOpenUkas_tx(void)
{
	BYTE txcounter = 0;
	BYTE db[8];

	/* TX message: CAN_101_Aselsan */
	if ( (vt3_can_period_CAN_101_Aselsan != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_101_Aselsan)) ||
	     (vt3_can_period_CAN_101_Aselsan == 0 && vt3_can_trigger_CAN_101_Aselsan == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_ASELSAN_Hydrolic_Pressure_Warning & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN_Hydrolic_Temperature_Warning & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN_Alternator_Warning & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN_Low_Fuel_Warning_T1 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN_Low_Fuel_Warning_T2 & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN_Water_In_Fuel_Warning & 0x03) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN_Fire_Warning & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_ASELSAN_Transmission_Oil_Level_Warning & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_ASELSAN_Transmission_Oil_Fiter_Warning & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_ASELSAN_Transmission_Oil_Temp_Warning & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_ASELSAN_Air_Filter_Clogged_Warning & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_ASELSAN_Engine_Oil_Pressure_Warning & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_ASELSAN_EngineOilTemperature_Warning & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_ASELSAN_HighWoltage_Warning & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_ASELSAN_BlackOut_Mode & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_ASELSAN_Engine_Intake_Manifold_Temp & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_ASELSAN_Vehicle_Speed & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_ASELSAN_FuelLevel_T1 & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_ASELSAN_FuelLevel_T2 & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_ASELSAN_Transmission_Oil_Temperature & 0xFF));
 		db[7] |= (BYTE)(((MC2M_ASELSAN_Transmission_Oil_Temperature >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x101, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_101_Aselsan = 0;
			vt3_can_tx_timeout_CAN_101_Aselsan = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_101_Aselsan);
		}
	}

	/* TX message: CAN_102_Aselsan */
	if ( (vt3_can_period_CAN_102_Aselsan != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_102_Aselsan)) ||
	     (vt3_can_period_CAN_102_Aselsan == 0 && vt3_can_trigger_CAN_102_Aselsan == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_ASELSAN2_Transmission_Current_Gear & 0x0F));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN2_Critic_TCM_Error & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN2_Critic_ECM_Error & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_ASELSAN2_Motor_Control_Error & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_ASELSAN2_Engine_Speed & 0xFF));
 		db[2] |= (BYTE)(((MC2M_ASELSAN2_Engine_Speed >> 8) & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_ASELSAN2_Engine_Temp & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_ASELSAN2_Engine_Oil_Press & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_ASELSAN2_Engine_Coolant_Level & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x102, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_102_Aselsan = 0;
			vt3_can_tx_timeout_CAN_102_Aselsan = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_102_Aselsan);
		}
	}

	/* TX message: CAN_151A */
	if ( (vt3_can_period_CAN_151A != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_151A)) ||
	     (vt3_can_period_CAN_151A == 0 && vt3_can_trigger_CAN_151A == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MURPHY_EngineSpeed & 0xFF));
 		db[1] |= (BYTE)(((MC2M_MURPHY_EngineSpeed >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_MURPHY_VehicleSpeed & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_MURPHY_FuelLevel_1 & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MURPHY_EngineTempValue & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_MURPHY_BatteryLevel & 0xFF));
 		db[6] |= (BYTE)(((MC2M_MURPHY_BatteryLevel >> 8) & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_MURPHY_EngineOilPressure & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x151, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_151A = 0;
			vt3_can_tx_timeout_CAN_151A = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_151A);
		}
	}

	/* TX message: CAN_152A */
	if ( (vt3_can_period_CAN_152A != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_152A)) ||
	     (vt3_can_period_CAN_152A == 0 && vt3_can_trigger_CAN_152A == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MURPHY_ParkingBrakePressure & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_MURPHY_ServiceBrake1 & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_MURPHY_ServiceBrake2 & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_MURPHY_AccessoryPressure & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MURPHY_TransOilTemperature & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_MURPHY_CurrentGear & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_MURPHY_OutSideTemperature & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_MURPHY_InSideTemperature & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x152, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_152A = 0;
			vt3_can_tx_timeout_CAN_152A = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_152A);
		}
	}

	/* TX message: CAN_153A */
	if ( (vt3_can_period_CAN_153A != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_153A)) ||
	     (vt3_can_period_CAN_153A == 0 && vt3_can_trigger_CAN_153A == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MURPHY_AngleX & 0xFF));
 		db[1] |= (BYTE)(((MC2M_MURPHY_AngleX >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_MURPHY_AngleY & 0xFF));
 		db[3] |= (BYTE)(((MC2M_MURPHY_AngleY >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MURPHY_ServiceBrakeActivated & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_MURPHY_ParkingBrakeActivated & 0x01) << 1));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_MURPHY_RemoteAcceleratorPedalPosition1 & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_MURPHY_RemCruiseControlStates & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_MURPHY_RemCruiseControlSetSpeed & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x153, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_153A = 0;
			vt3_can_tx_timeout_CAN_153A = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_153A);
		}
	}

	/* TX message: CAN_154A */
	if ( (vt3_can_period_CAN_154A != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_154A)) ||
	     (vt3_can_period_CAN_154A == 0 && vt3_can_trigger_CAN_154A == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MURPHY_Hour & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_MURPHY_Minute & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_MURPHY_Second & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_MURPHY_SyncMessage & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x154, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_154A = 0;
			vt3_can_tx_timeout_CAN_154A = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_154A);
		}
	}

	/* TX message: CAN_171_Mobileye */
	if ( (vt3_can_period_CAN_171_Mobileye != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_171_Mobileye)) ||
	     (vt3_can_period_CAN_171_Mobileye == 0 && vt3_can_trigger_CAN_171_Mobileye == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MOBILEYE_RightSignal & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_MOBILEYE_LeftSignal & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_MOBILEYE_HighBeam & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MOBILEYE_LowBeam & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_MOBILEYE_BrakeSignal & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MOBILEYE_VehicleSpeed & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x171, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_171_Mobileye = 0;
			vt3_can_tx_timeout_CAN_171_Mobileye = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_171_Mobileye);
		}
	}

	/* TX message: CAN_164A */
	if ( (vt3_can_period_CAN_164A != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_164A)) ||
	     (vt3_can_period_CAN_164A == 0 && vt3_can_trigger_CAN_164A == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MURPHY_TCM_SuspectParameterNumber & 0xFF));
 		db[1] |= (BYTE)(((MC2M_MURPHY_TCM_SuspectParameterNumber >> 8) & 0xFF));
 		db[2] |= (BYTE)(((MC2M_MURPHY_TCM_SuspectParameterNumber >> 16) & 0xFF));
 		db[3] |= (BYTE)(((MC2M_MURPHY_TCM_SuspectParameterNumber >> 24) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MURPHY_ECM_SuspectParameterNumber & 0xFF));
 		db[5] |= (BYTE)(((MC2M_MURPHY_ECM_SuspectParameterNumber >> 8) & 0xFF));
 		db[6] |= (BYTE)(((MC2M_MURPHY_ECM_SuspectParameterNumber >> 16) & 0xFF));
 		db[7] |= (BYTE)(((MC2M_MURPHY_ECM_SuspectParameterNumber >> 24) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x164, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_164A = 0;
			vt3_can_tx_timeout_CAN_164A = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_164A);
		}
	}

	/* TX message: CAN_165A */
	if ( (vt3_can_period_CAN_165A != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_165A)) ||
	     (vt3_can_period_CAN_165A == 0 && vt3_can_trigger_CAN_165A == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MURPHY_EBS_SuspectParameterNumber & 0xFF));
 		db[1] |= (BYTE)(((MC2M_MURPHY_EBS_SuspectParameterNumber >> 8) & 0xFF));
 		db[2] |= (BYTE)(((MC2M_MURPHY_EBS_SuspectParameterNumber >> 16) & 0xFF));
 		db[3] |= (BYTE)(((MC2M_MURPHY_EBS_SuspectParameterNumber >> 24) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MURPHY_TCM_FailureModeIdentifier & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_MURPHY_ECM_FailureModeIdentifier & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_MURPHY_EBS_FailureModeIdentifier & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_MURPHY_TCM_OccurrenceCount & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x165, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_165A = 0;
			vt3_can_tx_timeout_CAN_165A = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_165A);
		}
	}

	/* TX message: CAN_166A */
	if ( (vt3_can_period_CAN_166A != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_166A)) ||
	     (vt3_can_period_CAN_166A == 0 && vt3_can_trigger_CAN_166A == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MURPHY_ECM_OccurrenceCount & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_MURPHY_EBS_OccurrenceCount & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(2, 0x166, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_166A = 0;
			vt3_can_tx_timeout_CAN_166A = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_166A);
		}
	}


	/******************************************************************************/
	/* transmit messages to remote I/O devices (only for master) */
	/******************************************************************************/

}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANOPENUKAS_C */

/* end of file */
