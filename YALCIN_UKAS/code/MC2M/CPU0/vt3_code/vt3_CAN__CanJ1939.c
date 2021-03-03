/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANJ1939_C
#define INCLUDE__VT3_CAN__CANJ1939_C

#include <stdlib.h>
#include "vt3_runtime.h"
#include "vt3_canlib.h"
#include "vt3_POU_common.h"
#include "vt3_CAN__CanJ1939.h"
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
/* message:  TRF2_Transmission_Fluids_2 */
/* COB-ID:   0x20FD9503 */
/* CAN port: 1 */
static void canrx_1_20FD9503_TRF2_Transmission_Fluids_2(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: Transmission_Oil_Filter_Restriction_Switch */
	if ( dlc >= 1 )
	{
		TRF2_Transmission_Oil_Filter_Restriction_Switch = (Enum_TransOilFilterRestriction)(((Enum_TransOilFilterRestriction)db[0] & 0x03));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  ETC1_Electronic_Transmission_Controller_1 */
/* COB-ID:   0x2CF00203 */
/* CAN port: 1 */
static void canrx_1_2CF00203_ETC1_Electronic_Transmission_Controller_1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: TransmissionTrqCnvLockupEngaged */
	if ( dlc >= 1 )
	{
		ETC1_TransmissionTrqCnvLockupEngaged = (Enum77)((((Enum77)db[0] >> 2) & 0x03));
	}
	/* extract variable: TransmissionOutputShaftSpeed */
	if ( dlc >= 3 )
	{
		ETC1_TransmissionOutputShaftSpeed = (UINT)((((UINT)db[1] | ((UINT)db[2] << 8)) / 8));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  EEC2_Electronic_Engine_Controller_2 */
/* COB-ID:   0x2CF00300 */
/* CAN port: 1 */
static void canrx_1_2CF00300_EEC2_Electronic_Engine_Controller_2(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: AcceleratorPedalPosition1 */
	if ( dlc >= 2 )
	{
		EEC2_AcceleratorPedalPosition1 = (USINT)((((USINT)db[1] * 2) / 5));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  EEC1_Electronic_Engine_Controller_1 */
/* COB-ID:   0x2CF00400 */
/* CAN port: 1 */
static void canrx_1_2CF00400_EEC1_Electronic_Engine_Controller_1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: EngineSpeed */
	if ( dlc >= 5 )
	{
		EEC1_EngineSpeed = (UINT)((((UINT)db[3] | ((UINT)db[4] << 8)) / 8));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  DM01_BAM_ECM */
/* COB-ID:   0x38ECFF00 */
/* CAN port: 1 */
static void canrx_1_38ECFF00_DM01_BAM_ECM(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: CtrlByte */
	if ( dlc >= 1 )
	{
		DM01_BAM_ECM_CtrlByte = (BYTE)((BYTE)db[0]);
	}
	/* extract variable: TotNumByte */
	if ( dlc >= 3 )
	{
		DM01_BAM_ECM_TotNumByte = (UINT)(((UINT)db[1] | ((UINT)db[2] << 8)));
	}
	/* extract variable: TotNumPacket */
	if ( dlc >= 4 )
	{
		DM01_BAM_ECM_TotNumPacket = (BYTE)((BYTE)db[3]);
	}
	/* extract variable: Reserved */
	if ( dlc >= 5 )
	{
		DM01_BAM_ECM_Reserved = (BYTE)((BYTE)db[4]);
	}
	/* extract variable: PGNofPacket */
	if ( dlc >= 8 )
	{
		DM01_BAM_ECM_PGNofPacket = (UDINT)((((UDINT)db[5] | ((UDINT)db[6] << 8)) | ((UDINT)db[7] << 16)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  DM01_BAM_TCM */
/* COB-ID:   0x38ECFF03 */
/* CAN port: 1 */
static void canrx_1_38ECFF03_DM01_BAM_TCM(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: CtrlByte */
	if ( dlc >= 1 )
	{
		DM01_BAM_TCM_CtrlByte = (BYTE)((BYTE)db[0]);
	}
	/* extract variable: TotNumByte */
	if ( dlc >= 3 )
	{
		DM01_BAM_TCM_TotNumByte = (UINT)(((UINT)db[1] | ((UINT)db[2] << 8)));
	}
	/* extract variable: TotNumPacket */
	if ( dlc >= 4 )
	{
		DM01_BAM_TCM_TotNumPacket = (BYTE)((BYTE)db[3]);
	}
	/* extract variable: Reserved */
	if ( dlc >= 5 )
	{
		DM01_BAM_TCM_Reserved = (BYTE)((BYTE)db[4]);
	}
	/* extract variable: PGNofPacket */
	if ( dlc >= 8 )
	{
		DM01_BAM_TCM_PGNofPacket = (UDINT)((((UDINT)db[5] | ((UDINT)db[6] << 8)) | ((UDINT)db[7] << 16)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  DM01_BAM_EBS */
/* COB-ID:   0x38ECFF0B */
/* CAN port: 1 */
static void canrx_1_38ECFF0B_DM01_BAM_EBS(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: CtrlByte */
	if ( dlc >= 1 )
	{
		DM01_BAM_EBS_CtrlByte = (BYTE)((BYTE)db[0]);
	}
	/* extract variable: TotNumByte */
	if ( dlc >= 3 )
	{
		DM01_BAM_EBS_TotNumByte = (UINT)(((UINT)db[1] | ((UINT)db[2] << 8)));
	}
	/* extract variable: TotNumPacket */
	if ( dlc >= 4 )
	{
		DM01_BAM_EBS_TotNumPacket = (BYTE)((BYTE)db[3]);
	}
	/* extract variable: Reserved */
	if ( dlc >= 5 )
	{
		DM01_BAM_EBS_Reserved = (BYTE)((BYTE)db[4]);
	}
	/* extract variable: PGNofPacket */
	if ( dlc >= 8 )
	{
		DM01_BAM_EBS_PGNofPacket = (UDINT)((((UDINT)db[5] | ((UDINT)db[6] << 8)) | ((UDINT)db[7] << 16)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  EBC1_Electronic_Brake_Controller_1_vECM */
/* COB-ID:   0x38F00100 */
/* CAN port: 1 */
static void canrx_1_38F00100_EBC1_Electronic_Brake_Controller_1_vECM(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: EBSBrakeSwitch */
	if ( dlc >= 1 )
	{
		EBC1_vECM_EBSBrakeSwitch = (Enum66)((((Enum66)db[0] >> 6) & 0x03));
	}
	/* extract variable: EngineRetarderSelection */
	if ( dlc >= 5 )
	{
		EBC1_vECM_EngineRetarderSelection = (USINT)((((USINT)db[4] * 2) / 5));
	}
	/* extract variable: ATCASRInformationSignal */
	if ( dlc >= 6 )
	{
		EBC1_vECM_ATCASRInformationSignal = (Enum73)((((Enum73)db[5] >> 6) & 0x03));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  ETC2_Electronic_Transmission_Controller_2 */
/* COB-ID:   0x38F00503 */
/* CAN port: 1 */
static void canrx_1_38F00503_ETC2_Electronic_Transmission_Controller_2(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: TransmissionCurrentGear */
	if ( dlc >= 4 )
	{
		ETC2_TransmissionCurrentGear = (SINT)(((SINT)db[3] - 125));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  ETC7_Electronic_Transmission_Controller_7 */
/* COB-ID:   0x38FE4A03 */
/* CAN port: 1 */
static void canrx_1_38FE4A03_ETC7_Electronic_Transmission_Controller_7(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: ActiveShiftConsoleIndicator */
	if ( dlc >= 2 )
	{
		ETC7_ActiveShiftConsoleIndicator = (Enum257)((((Enum257)db[1] >> 2) & 0x03));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  EBC2_Wheel_Speed_Information */
/* COB-ID:   0x38FEBF0B */
/* CAN port: 1 */
static void canrx_1_38FEBF0B_EBC2_Wheel_Speed_Information(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: FrontAxleSpeed */
	if ( dlc >= 2 )
	{
		EBC2_FrontAxleSpeed = (UINT)((((UINT)db[0] | ((UINT)db[1] << 8)) / 256));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  DM01_ECM */
/* COB-ID:   0x38FECA00 */
/* CAN port: 1 */
static void canrx_1_38FECA00_DM01_ECM(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: ProtectLamp */
	if ( dlc >= 1 )
	{
		DM01_ECM_ProtectLamp = (Enum13)(((Enum13)db[0] & 0x03));
	}
	/* extract variable: AmberWarningLamp */
	if ( dlc >= 1 )
	{
		DM01_ECM_AmberWarningLamp = (Enum13)((((Enum13)db[0] >> 2) & 0x03));
	}
	/* extract variable: RedStopLamp */
	if ( dlc >= 1 )
	{
		DM01_ECM_RedStopLamp = (Enum13)((((Enum13)db[0] >> 4) & 0x03));
	}
	/* extract variable: MalfunctionIndicatorLamp */
	if ( dlc >= 1 )
	{
		DM01_ECM_MalfunctionIndicatorLamp = (Enum14)((((Enum14)db[0] >> 6) & 0x03));
	}
	/* extract variable: FlashProtectLamp */
	if ( dlc >= 2 )
	{
		DM01_ECM_FlashProtectLamp = (Enum15)(((Enum15)db[1] & 0x03));
	}
	/* extract variable: FlashAmberWarningLamp */
	if ( dlc >= 2 )
	{
		DM01_ECM_FlashAmberWarningLamp = (Enum15)((((Enum15)db[1] >> 2) & 0x03));
	}
	/* extract variable: FlashRedStopLamp */
	if ( dlc >= 2 )
	{
		DM01_ECM_FlashRedStopLamp = (Enum15)((((Enum15)db[1] >> 4) & 0x03));
	}
	/* extract variable: FlashMalfunctionIndicatorLamp */
	if ( dlc >= 2 )
	{
		DM01_ECM_FlashMalfunctionIndicatorLamp = (Enum16)((((Enum16)db[1] >> 6) & 0x03));
	}
	/* extract variable: SuspectParameterNumber */
	if ( dlc >= 5 )
	{
		DM01_ECM_SuspectParameterNumber = (UDINT)(((((UDINT)db[2] << 11) | ((UDINT)db[3] << 3)) | (UDINT)db[4]));
	}
	/* extract variable: FailureModeIdentifier */
	if ( dlc >= 5 )
	{
		DM01_ECM_FailureModeIdentifier = (USINT)((((USINT)db[4] >> 3) & 0x1F));
	}
	/* extract variable: OccurrenceCount */
	if ( dlc >= 6 )
	{
		DM01_ECM_OccurrenceCount = (USINT)(((USINT)db[5] & 0x7F));
	}
	/* extract variable: SPNConversionMethod */
	if ( dlc >= 6 )
	{
		DM01_ECM_SPNConversionMethod = (Enum17)((((Enum17)db[5] >> 7) & 0x01));
	}

	/* call the callback */
	(void)can_callback_DM01_ECM(dlc, (BYTE FARPTR) db);

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  DM01_TCM */
/* COB-ID:   0x38FECA03 */
/* CAN port: 1 */
static void canrx_1_38FECA03_DM01_TCM(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: ProtectLamp */
	if ( dlc >= 1 )
	{
		DM01_TCM_ProtectLamp = (Enum13)(((Enum13)db[0] & 0x03));
	}
	/* extract variable: AmberWarningLamp */
	if ( dlc >= 1 )
	{
		DM01_TCM_AmberWarningLamp = (Enum13)((((Enum13)db[0] >> 2) & 0x03));
	}
	/* extract variable: RedStopLamp */
	if ( dlc >= 1 )
	{
		DM01_TCM_RedStopLamp = (Enum13)((((Enum13)db[0] >> 4) & 0x03));
	}
	/* extract variable: MalfunctionIndicatorLamp */
	if ( dlc >= 1 )
	{
		DM01_TCM_MalfunctionIndicatorLamp = (Enum14)((((Enum14)db[0] >> 6) & 0x03));
	}
	/* extract variable: FlashProtectLamp */
	if ( dlc >= 2 )
	{
		DM01_TCM_FlashProtectLamp = (Enum15)(((Enum15)db[1] & 0x03));
	}
	/* extract variable: FlashAmberWarningLamp */
	if ( dlc >= 2 )
	{
		DM01_TCM_FlashAmberWarningLamp = (Enum15)((((Enum15)db[1] >> 2) & 0x03));
	}
	/* extract variable: FlashRedStopLamp */
	if ( dlc >= 2 )
	{
		DM01_TCM_FlashRedStopLamp = (Enum15)((((Enum15)db[1] >> 4) & 0x03));
	}
	/* extract variable: FlashMalfunctionIndicatorLamp */
	if ( dlc >= 2 )
	{
		DM01_TCM_FlashMalfunctionIndicatorLamp = (Enum16)((((Enum16)db[1] >> 6) & 0x03));
	}
	/* extract variable: SuspectParameterNumber */
	if ( dlc >= 5 )
	{
		DM01_TCM_SuspectParameterNumber = (UDINT)(((((UDINT)db[2] << 11) | ((UDINT)db[3] << 3)) | (UDINT)db[4]));
	}
	/* extract variable: FailureModeIdentifier */
	if ( dlc >= 5 )
	{
		DM01_TCM_FailureModeIdentifier = (USINT)((((USINT)db[4] >> 3) & 0x1F));
	}
	/* extract variable: OccurrenceCount */
	if ( dlc >= 6 )
	{
		DM01_TCM_OccurrenceCount = (USINT)(((USINT)db[5] & 0x7F));
	}
	/* extract variable: SPNConversionMethod */
	if ( dlc >= 6 )
	{
		DM01_TCM_SPNConversionMethod = (Enum17)((((Enum17)db[5] >> 7) & 0x01));
	}

	/* call the callback */
	(void)can_callback_DM01_TCM(dlc, (BYTE FARPTR) db);

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  DM01_EBS */
/* COB-ID:   0x38FECA0B */
/* CAN port: 1 */
static void canrx_1_38FECA0B_DM01_EBS(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: ProtectLamp */
	if ( dlc >= 1 )
	{
		DM01_EBS_ProtectLamp = (Enum13)(((Enum13)db[0] & 0x03));
	}
	/* extract variable: AmberWarningLamp */
	if ( dlc >= 1 )
	{
		DM01_EBS_AmberWarningLamp = (Enum13)((((Enum13)db[0] >> 2) & 0x03));
	}
	/* extract variable: RedStopLamp */
	if ( dlc >= 1 )
	{
		DM01_EBS_RedStopLamp = (Enum13)((((Enum13)db[0] >> 4) & 0x03));
	}
	/* extract variable: MalfunctionIndicatorLamp */
	if ( dlc >= 1 )
	{
		DM01_EBS_MalfunctionIndicatorLamp = (Enum14)((((Enum14)db[0] >> 6) & 0x03));
	}
	/* extract variable: FlashProtectLamp */
	if ( dlc >= 2 )
	{
		DM01_EBS_FlashProtectLamp = (Enum15)(((Enum15)db[1] & 0x03));
	}
	/* extract variable: FlashAmberWarningLamp */
	if ( dlc >= 2 )
	{
		DM01_EBS_FlashAmberWarningLamp = (Enum15)((((Enum15)db[1] >> 2) & 0x03));
	}
	/* extract variable: FlashRedStopLamp */
	if ( dlc >= 2 )
	{
		DM01_EBS_FlashRedStopLamp = (Enum15)((((Enum15)db[1] >> 4) & 0x03));
	}
	/* extract variable: FlashMalfunctionIndicatorLamp */
	if ( dlc >= 2 )
	{
		DM01_EBS_FlashMalfunctionIndicatorLamp = (Enum16)((((Enum16)db[1] >> 6) & 0x03));
	}
	/* extract variable: SuspectParameterNumber */
	if ( dlc >= 5 )
	{
		DM01_EBS_SuspectParameterNumber = (UDINT)(((((UDINT)db[2] << 11) | ((UDINT)db[3] << 3)) | (UDINT)db[4]));
	}
	/* extract variable: FailureModeIdentifier */
	if ( dlc >= 5 )
	{
		DM01_EBS_FailureModeIdentifier = (USINT)((((USINT)db[4] >> 3) & 0x1F));
	}
	/* extract variable: OccurrenceCount */
	if ( dlc >= 6 )
	{
		DM01_EBS_OccurrenceCount = (USINT)(((USINT)db[5] & 0x7F));
	}
	/* extract variable: SPNConversionMethod */
	if ( dlc >= 6 )
	{
		DM01_EBS_SPNConversionMethod = (Enum17)((((Enum17)db[5] >> 7) & 0x01));
	}

	/* call the callback */
	(void)can_callback_DM01_EBS(dlc, (BYTE FARPTR) db);

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  SHUTDN_Shutdown */
/* COB-ID:   0x38FEE400 */
/* CAN port: 1 */
static void canrx_1_38FEE400_SHUTDN_Shutdown(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: EngIdleShutdownHasShutdownEngine */
	if ( dlc >= 1 )
	{
		SHUTDN_EngIdleShutdownHasShutdownEngine = (Enum346)(((Enum346)db[0] & 0x03));
	}
	/* extract variable: EngineIdleShutdownDrvrAlertMode */
	if ( dlc >= 1 )
	{
		SHUTDN_EngineIdleShutdownDrvrAlertMode = (Enum347)((((Enum347)db[0] >> 2) & 0x03));
	}
	/* extract variable: EngineIdleShutdownTimerOverride */
	if ( dlc >= 1 )
	{
		SHUTDN_EngineIdleShutdownTimerOverride = (Enum347)((((Enum347)db[0] >> 4) & 0x03));
	}
	/* extract variable: EngineIdleShutdownTimerState */
	if ( dlc >= 1 )
	{
		SHUTDN_EngineIdleShutdownTimerState = (Enum347)((((Enum347)db[0] >> 6) & 0x03));
	}
	/* extract variable: EngineIdleShutdownTimerFunction */
	if ( dlc >= 2 )
	{
		SHUTDN_EngineIdleShutdownTimerFunction = (Enum348)((((Enum348)db[1] >> 6) & 0x03));
	}
	/* extract variable: ACHighPressureFanSwitch */
	if ( dlc >= 3 )
	{
		SHUTDN_ACHighPressureFanSwitch = (Enum349)(((Enum349)db[2] & 0x03));
	}
	/* extract variable: RefrigerantLowPressureSwitch */
	if ( dlc >= 3 )
	{
		SHUTDN_RefrigerantLowPressureSwitch = (Enum350)((((Enum350)db[2] >> 2) & 0x03));
	}
	/* extract variable: RefrigerantHighPressureSwitch */
	if ( dlc >= 3 )
	{
		SHUTDN_RefrigerantHighPressureSwitch = (Enum351)((((Enum351)db[2] >> 4) & 0x03));
	}
	/* extract variable: EngineWaitToStartLamp */
	if ( dlc >= 4 )
	{
		SHUTDN_EngineWaitToStartLamp = (Enum71)(((Enum71)db[3] & 0x03));
	}
	/* extract variable: EngPrtctnSystemHasShutdownEng */
	if ( dlc >= 5 )
	{
		SHUTDN_EngPrtctnSystemHasShutdownEng = (Enum346)(((Enum346)db[4] & 0x03));
	}
	/* extract variable: EngPrtctnSysApproachingShutdown */
	if ( dlc >= 5 )
	{
		SHUTDN_EngPrtctnSysApproachingShutdown = (Enum352)((((Enum352)db[4] >> 2) & 0x03));
	}
	/* extract variable: EngProtectionSystemTimerOverride */
	if ( dlc >= 5 )
	{
		SHUTDN_EngProtectionSystemTimerOverride = (Enum347)((((Enum347)db[4] >> 4) & 0x03));
	}
	/* extract variable: EngineProtectionSystemTimerState */
	if ( dlc >= 5 )
	{
		SHUTDN_EngineProtectionSystemTimerState = (Enum347)((((Enum347)db[4] >> 6) & 0x03));
	}
	/* extract variable: EngineProtectionSystemConf */
	if ( dlc >= 6 )
	{
		SHUTDN_EngineProtectionSystemConf = (Enum348)((((Enum348)db[5] >> 6) & 0x03));
	}
	/* extract variable: EngineAlarmAcknowledge */
	if ( dlc >= 7 )
	{
		SHUTDN_EngineAlarmAcknowledge = (Enum353)(((Enum353)db[6] & 0x03));
	}
	/* extract variable: EngineAlarmOutputCommandStatus */
	if ( dlc >= 7 )
	{
		SHUTDN_EngineAlarmOutputCommandStatus = (Enum354)((((Enum354)db[6] >> 2) & 0x03));
	}
	/* extract variable: EngineAirShutoffCommandStatus */
	if ( dlc >= 7 )
	{
		SHUTDN_EngineAirShutoffCommandStatus = (Enum355)((((Enum355)db[6] >> 4) & 0x03));
	}
	/* extract variable: EngineOverspeedTest */
	if ( dlc >= 7 )
	{
		SHUTDN_EngineOverspeedTest = (Enum356)((((Enum356)db[6] >> 6) & 0x03));
	}
	/* extract variable: EngineAirShutoffStatus */
	if ( dlc >= 8 )
	{
		SHUTDN_EngineAirShutoffStatus = (Enum357)(((Enum357)db[7] & 0x03));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  EHR_Engine_Hours_Revolutions */
/* COB-ID:   0x38FEE500 */
/* CAN port: 1 */
static void canrx_1_38FEE500_EHR_Engine_Hours_Revolutions(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: TotalEngineHours */
	if ( dlc >= 4 )
	{
		EHR_TotalEngineHours = (UDINT)(((((UDINT)db[0] | ((UDINT)db[1] << 8)) | ((UDINT)db[2] << 16)) | ((UDINT)db[3] << 24)));
	}
	/* extract variable: TotalEngineRevolutions */
	if ( dlc >= 8 )
	{
		EHR_TotalEngineRevolutions = (UDINT)(((((UDINT)db[4] | ((UDINT)db[5] << 8)) | ((UDINT)db[6] << 16)) | ((UDINT)db[7] << 24)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  ET1_Engine_Temperature_1 */
/* COB-ID:   0x38FEEE00 */
/* CAN port: 1 */
static void canrx_1_38FEEE00_ET1_Engine_Temperature_1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: EngineCoolantTemperature */
	if ( dlc >= 1 )
	{
		ET1_EngineCoolantTemperature = (SINT)(((SINT)db[0] - 40));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  EFL_P1_Engine_Fluid_LevelPressure_1 */
/* COB-ID:   0x38FEEF00 */
/* CAN port: 1 */
static void canrx_1_38FEEF00_EFL_P1_Engine_Fluid_LevelPressure_1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: EngineOilLevel */
	if ( dlc >= 3 )
	{
		EFL_P1_EngineOilLevel = (USINT)((((USINT)db[2] * 2) / 5));
	}
	/* extract variable: EngineOilPressure */
	if ( dlc >= 4 )
	{
		EFL_P1_EngineOilPressure = (USINT)((USINT)db[3]);
	}
	/* extract variable: EngineCoolantLevel */
	if ( dlc >= 8 )
	{
		EFL_P1_EngineCoolantLevel = (USINT)((((USINT)db[7] * 2) / 5));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CCVS_Cruise_ControlVehicle_Speed */
/* COB-ID:   0x38FEF100 */
/* CAN port: 1 */
static void canrx_1_38FEF100_CCVS_Cruise_ControlVehicle_Speed(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: TwoSpeedAxleSwitch */
	if ( dlc >= 1 )
	{
		CCVS_TwoSpeedAxleSwitch = (Enum358)(((Enum358)db[0] & 0x03));
	}
	/* extract variable: ParkingBrakeSwitch */
	if ( dlc >= 1 )
	{
		CCVS_ParkingBrakeSwitch = (Enum359)((((Enum359)db[0] >> 2) & 0x03));
	}
	/* extract variable: CruiseControlPauseSwitch */
	if ( dlc >= 1 )
	{
		CCVS_CruiseControlPauseSwitch = (Enum360)((((Enum360)db[0] >> 4) & 0x03));
	}
	/* extract variable: ParkBrakeReleaseInhibitRequest */
	if ( dlc >= 1 )
	{
		CCVS_ParkBrakeReleaseInhibitRequest = (Enum361)((((Enum361)db[0] >> 6) & 0x03));
	}
	/* extract variable: CruiseControlActive */
	if ( dlc >= 4 )
	{
		CCVS_CruiseControlActive = (Enum362)(((Enum362)db[3] & 0x03));
	}
	/* extract variable: CruiseControlEnableSwitch */
	if ( dlc >= 4 )
	{
		CCVS_CruiseControlEnableSwitch = (Enum363)((((Enum363)db[3] >> 2) & 0x03));
	}
	/* extract variable: BrakeSwitch */
	if ( dlc >= 4 )
	{
		CCVS_BrakeSwitch = (Enum364)((((Enum364)db[3] >> 4) & 0x03));
	}
	/* extract variable: ClutchSwitch */
	if ( dlc >= 4 )
	{
		CCVS_ClutchSwitch = (Enum365)((((Enum365)db[3] >> 6) & 0x03));
	}
	/* extract variable: CruiseControlSetSwitch */
	if ( dlc >= 5 )
	{
		CCVS_CruiseControlSetSwitch = (Enum366)(((Enum366)db[4] & 0x03));
	}
	/* extract variable: CruiseControlCoastSwitch */
	if ( dlc >= 5 )
	{
		CCVS_CruiseControlCoastSwitch = (Enum367)((((Enum367)db[4] >> 2) & 0x03));
	}
	/* extract variable: CruiseControlResumeSwitch */
	if ( dlc >= 5 )
	{
		CCVS_CruiseControlResumeSwitch = (Enum368)((((Enum368)db[4] >> 4) & 0x03));
	}
	/* extract variable: CruiseControlAccelerateSwitch */
	if ( dlc >= 5 )
	{
		CCVS_CruiseControlAccelerateSwitch = (Enum369)((((Enum369)db[4] >> 6) & 0x03));
	}
	/* extract variable: CruiseControlSetSpeed */
	if ( dlc >= 6 )
	{
		CCVS_CruiseControlSetSpeed = (USINT)((USINT)db[5]);
	}
	/* extract variable: CruiseControlStates */
	if ( dlc >= 7 )
	{
		CCVS_CruiseControlStates = (Enum370)((((Enum370)db[6] >> 5) & 0x07));
	}
	/* extract variable: EngineIdleIncrementSwitch */
	if ( dlc >= 8 )
	{
		CCVS_EngineIdleIncrementSwitch = (Enum71)(((Enum71)db[7] & 0x03));
	}
	/* extract variable: EngineIdleDecrementSwitch */
	if ( dlc >= 8 )
	{
		CCVS_EngineIdleDecrementSwitch = (Enum71)((((Enum71)db[7] >> 2) & 0x03));
	}
	/* extract variable: EngineTestModeSwitch */
	if ( dlc >= 8 )
	{
		CCVS_EngineTestModeSwitch = (Enum71)((((Enum71)db[7] >> 4) & 0x03));
	}
	/* extract variable: EngineShutdownOverrideSwitch */
	if ( dlc >= 8 )
	{
		CCVS_EngineShutdownOverrideSwitch = (Enum71)((((Enum71)db[7] >> 6) & 0x03));
	}
	/* extract variable: WheelBasedVehicleSpeed */
	if ( dlc >= 3 )
	{
		CCVS_WheelBasedVehicleSpeed = (UINT)((((UINT)db[1] | ((UINT)db[2] << 8)) / 256));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  IC1_InletExhaust_Conditions_1 */
/* COB-ID:   0x38FEF600 */
/* CAN port: 1 */
static void canrx_1_38FEF600_IC1_InletExhaust_Conditions_1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: EngineIntakeManifold1Temperature */
	if ( dlc >= 3 )
	{
		IC1_EngineIntakeManifold1Temperature = (SINT)(((SINT)db[2] - 40));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  VEP1_Vehicle_Electrical_Power_1 */
/* COB-ID:   0x38FEF700 */
/* CAN port: 1 */
static void canrx_1_38FEF700_VEP1_Vehicle_Electrical_Power_1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: BatteryPotentialPowerInput1 */
	if ( dlc >= 6 )
	{
		VEP1_BatteryPotentialPowerInput1 = (UINT)((((UINT)db[4] | ((UINT)db[5] << 8)) / 2));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  TRF1_Transmission_Fluids_1 */
/* COB-ID:   0x38FEF803 */
/* CAN port: 1 */
static void canrx_1_38FEF803_TRF1_Transmission_Fluids_1(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: TransmissionOilLevelHighLow */
	if ( dlc >= 7 )
	{
		TRF1_TransmissionOilLevelHighLow = (SINT)((((SINT)db[6] - 125) / 2));
	}
	/* extract variable: TransmissionOilTemperature */
	if ( dlc >= 6 )
	{
		TRF1_TransmissionOilTemperature = (INT)(((((INT)db[4] | ((INT)db[5] << 8)) - 8736) / 32));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  WFI_Water_in_Fuel_Indicator */
/* COB-ID:   0x38FEFF00 */
/* CAN port: 1 */
static void canrx_1_38FEFF00_WFI_Water_in_Fuel_Indicator(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;

	/* extract variable: WaterInFuelIndicator */
	if ( dlc >= 1 )
	{
		WFI_WaterInFuelIndicator = (Enum346)(((Enum346)db[0] & 0x03));
	}

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanJ1939[23] = {
	/*    cob-id    tout  alm  alm   mux   mux  call function                            */
	/*                    off   on   pos    id                                           */
	{ 0x00FD9503,   1500,   3,   1,  255,    0, canrx_1_20FD9503_TRF2_Transmission_Fluids_2 },
	{ 0x0CF00203,     20,   3,   1,  255,    0, canrx_1_2CF00203_ETC1_Electronic_Transmission_Controller_1 },
	{ 0x0CF00300,     60,   3,   1,  255,    0, canrx_1_2CF00300_EEC2_Electronic_Engine_Controller_2 },
	{ 0x0CF00400,   1500,   3,   1,  255,    0, canrx_1_2CF00400_EEC1_Electronic_Engine_Controller_1 },
	{ 0x18ECFF00,   1500,   3,   1,  255,    0, canrx_1_38ECFF00_DM01_BAM_ECM            },
	{ 0x18ECFF03,   1500,   3,   1,  255,    0, canrx_1_38ECFF03_DM01_BAM_TCM            },
	{ 0x18ECFF0B,   1500,   3,   1,  255,    0, canrx_1_38ECFF0B_DM01_BAM_EBS            },
	{ 0x18F00100,    110,   3,   1,  255,    0, canrx_1_38F00100_EBC1_Electronic_Brake_Controller_1_vECM },
	{ 0x18F00503,    110,   3,   1,  255,    0, canrx_1_38F00503_ETC2_Electronic_Transmission_Controller_2 },
	{ 0x18FE4A03,    110,   3,   1,  255,    0, canrx_1_38FE4A03_ETC7_Electronic_Transmission_Controller_7 },
	{ 0x18FEBF0B,    110,   3,   1,  255,    0, canrx_1_38FEBF0B_EBC2_Wheel_Speed_Information },
	{ 0x18FECA00,   5000,   3,  10,  255,    0, canrx_1_38FECA00_DM01_ECM                },
	{ 0x18FECA03,   5000,   3,  10,  255,    0, canrx_1_38FECA03_DM01_TCM                },
	{ 0x18FECA0B,   5000,   3,  10,  255,    0, canrx_1_38FECA0B_DM01_EBS                },
	{ 0x18FEE400,   1010,   3,   1,  255,    0, canrx_1_38FEE400_SHUTDN_Shutdown         },
	{ 0x18FEE500,   1010,   1,   1,  255,    0, canrx_1_38FEE500_EHR_Engine_Hours_Revolutions },
	{ 0x18FEEE00,   1010,   3,   1,  255,    0, canrx_1_38FEEE00_ET1_Engine_Temperature_1 },
	{ 0x18FEEF00,    510,   3,   1,  255,    0, canrx_1_38FEEF00_EFL_P1_Engine_Fluid_LevelPressure_1 },
	{ 0x18FEF100,    110,   3,   1,  255,    0, canrx_1_38FEF100_CCVS_Cruise_ControlVehicle_Speed },
	{ 0x18FEF600,    510,   3,   1,  255,    0, canrx_1_38FEF600_IC1_InletExhaust_Conditions_1 },
	{ 0x18FEF700,   1010,   3,   1,  255,    0, canrx_1_38FEF700_VEP1_Vehicle_Electrical_Power_1 },
	{ 0x18FEF803,   1010,   3,   1,  255,    0, canrx_1_38FEF803_TRF1_Transmission_Fluids_1 },
	{ 0x18FEFF00,  15000,   3,   1,  255,    0, canrx_1_38FEFF00_WFI_Water_in_Fuel_Indicator },
};

/* initializers for receive and transmit variables */
static const Enum_TransOilFilterRestriction FAR __init_value__TRF2_Transmission_Oil_Filter_Restriction_Switch = 0;
static const Enum77 FAR __init_value__ETC1_TransmissionTrqCnvLockupEngaged = 0;
static const UINT FAR __init_value__ETC1_TransmissionOutputShaftSpeed = ((UINT)0U);
static const USINT FAR __init_value__EEC2_AcceleratorPedalPosition1 = ((USINT)0U);
static const UINT FAR __init_value__EEC1_EngineSpeed = ((UINT)0U);
static const BYTE FAR __init_value__DM01_BAM_ECM_CtrlByte = ((BYTE)0x0U);
static const UINT FAR __init_value__DM01_BAM_ECM_TotNumByte = ((UINT)0U);
static const BYTE FAR __init_value__DM01_BAM_ECM_TotNumPacket = ((BYTE)0x0U);
static const BYTE FAR __init_value__DM01_BAM_ECM_Reserved = ((BYTE)0xFFU);
static const UDINT FAR __init_value__DM01_BAM_ECM_PGNofPacket = ((UDINT)0UL);
static const BYTE FAR __init_value__DM01_BAM_TCM_CtrlByte = ((BYTE)0x0U);
static const UINT FAR __init_value__DM01_BAM_TCM_TotNumByte = ((UINT)0U);
static const BYTE FAR __init_value__DM01_BAM_TCM_TotNumPacket = ((BYTE)0x0U);
static const BYTE FAR __init_value__DM01_BAM_TCM_Reserved = ((BYTE)0xFFU);
static const UDINT FAR __init_value__DM01_BAM_TCM_PGNofPacket = ((UDINT)0UL);
static const BYTE FAR __init_value__DM01_BAM_EBS_CtrlByte = ((BYTE)0x0U);
static const UINT FAR __init_value__DM01_BAM_EBS_TotNumByte = ((UINT)0U);
static const BYTE FAR __init_value__DM01_BAM_EBS_TotNumPacket = ((BYTE)0x0U);
static const BYTE FAR __init_value__DM01_BAM_EBS_Reserved = ((BYTE)0xFFU);
static const UDINT FAR __init_value__DM01_BAM_EBS_PGNofPacket = ((UDINT)0UL);
static const Enum66 FAR __init_value__EBC1_vECM_EBSBrakeSwitch = 0;
static const USINT FAR __init_value__EBC1_vECM_EngineRetarderSelection = ((USINT)0U);
static const Enum73 FAR __init_value__EBC1_vECM_ATCASRInformationSignal = 0;
static const SINT FAR __init_value__ETC2_TransmissionCurrentGear = ((SINT)0);
static const Enum257 FAR __init_value__ETC7_ActiveShiftConsoleIndicator = 0;
static const UINT FAR __init_value__EBC2_FrontAxleSpeed = ((UINT)0U);
static const Enum13 FAR __init_value__DM01_ECM_ProtectLamp = 0;
static const Enum13 FAR __init_value__DM01_ECM_AmberWarningLamp = 0;
static const Enum13 FAR __init_value__DM01_ECM_RedStopLamp = 0;
static const Enum14 FAR __init_value__DM01_ECM_MalfunctionIndicatorLamp = 0;
static const Enum15 FAR __init_value__DM01_ECM_FlashProtectLamp = 0;
static const Enum15 FAR __init_value__DM01_ECM_FlashAmberWarningLamp = 0;
static const Enum15 FAR __init_value__DM01_ECM_FlashRedStopLamp = 0;
static const Enum16 FAR __init_value__DM01_ECM_FlashMalfunctionIndicatorLamp = 0;
static const UDINT FAR __init_value__DM01_ECM_SuspectParameterNumber = ((UDINT)0UL);
static const USINT FAR __init_value__DM01_ECM_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__DM01_ECM_OccurrenceCount = ((USINT)0U);
static const Enum17 FAR __init_value__DM01_ECM_SPNConversionMethod = 0;
static const Enum13 FAR __init_value__DM01_TCM_ProtectLamp = 0;
static const Enum13 FAR __init_value__DM01_TCM_AmberWarningLamp = 0;
static const Enum13 FAR __init_value__DM01_TCM_RedStopLamp = 0;
static const Enum14 FAR __init_value__DM01_TCM_MalfunctionIndicatorLamp = 0;
static const Enum15 FAR __init_value__DM01_TCM_FlashProtectLamp = 0;
static const Enum15 FAR __init_value__DM01_TCM_FlashAmberWarningLamp = 0;
static const Enum15 FAR __init_value__DM01_TCM_FlashRedStopLamp = 0;
static const Enum16 FAR __init_value__DM01_TCM_FlashMalfunctionIndicatorLamp = 0;
static const UDINT FAR __init_value__DM01_TCM_SuspectParameterNumber = ((UDINT)0UL);
static const USINT FAR __init_value__DM01_TCM_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__DM01_TCM_OccurrenceCount = ((USINT)0U);
static const Enum17 FAR __init_value__DM01_TCM_SPNConversionMethod = 0;
static const Enum13 FAR __init_value__DM01_EBS_ProtectLamp = 0;
static const Enum13 FAR __init_value__DM01_EBS_AmberWarningLamp = 0;
static const Enum13 FAR __init_value__DM01_EBS_RedStopLamp = 0;
static const Enum14 FAR __init_value__DM01_EBS_MalfunctionIndicatorLamp = 0;
static const Enum15 FAR __init_value__DM01_EBS_FlashProtectLamp = 0;
static const Enum15 FAR __init_value__DM01_EBS_FlashAmberWarningLamp = 0;
static const Enum15 FAR __init_value__DM01_EBS_FlashRedStopLamp = 0;
static const Enum16 FAR __init_value__DM01_EBS_FlashMalfunctionIndicatorLamp = 0;
static const UDINT FAR __init_value__DM01_EBS_SuspectParameterNumber = ((UDINT)0UL);
static const USINT FAR __init_value__DM01_EBS_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__DM01_EBS_OccurrenceCount = ((USINT)0U);
static const Enum17 FAR __init_value__DM01_EBS_SPNConversionMethod = 0;
static const Enum346 FAR __init_value__SHUTDN_EngIdleShutdownHasShutdownEngine = 0;
static const Enum347 FAR __init_value__SHUTDN_EngineIdleShutdownDrvrAlertMode = 0;
static const Enum347 FAR __init_value__SHUTDN_EngineIdleShutdownTimerOverride = 0;
static const Enum347 FAR __init_value__SHUTDN_EngineIdleShutdownTimerState = 0;
static const Enum348 FAR __init_value__SHUTDN_EngineIdleShutdownTimerFunction = 0;
static const Enum349 FAR __init_value__SHUTDN_ACHighPressureFanSwitch = 0;
static const Enum350 FAR __init_value__SHUTDN_RefrigerantLowPressureSwitch = 0;
static const Enum351 FAR __init_value__SHUTDN_RefrigerantHighPressureSwitch = 0;
static const Enum71 FAR __init_value__SHUTDN_EngineWaitToStartLamp = 0;
static const Enum346 FAR __init_value__SHUTDN_EngPrtctnSystemHasShutdownEng = 0;
static const Enum352 FAR __init_value__SHUTDN_EngPrtctnSysApproachingShutdown = 0;
static const Enum347 FAR __init_value__SHUTDN_EngProtectionSystemTimerOverride = 0;
static const Enum347 FAR __init_value__SHUTDN_EngineProtectionSystemTimerState = 0;
static const Enum348 FAR __init_value__SHUTDN_EngineProtectionSystemConf = 0;
static const Enum353 FAR __init_value__SHUTDN_EngineAlarmAcknowledge = 0;
static const Enum354 FAR __init_value__SHUTDN_EngineAlarmOutputCommandStatus = 0;
static const Enum355 FAR __init_value__SHUTDN_EngineAirShutoffCommandStatus = 0;
static const Enum356 FAR __init_value__SHUTDN_EngineOverspeedTest = 0;
static const Enum357 FAR __init_value__SHUTDN_EngineAirShutoffStatus = 0;
static const UDINT FAR __init_value__EHR_TotalEngineHours = ((UDINT)0UL);
static const UDINT FAR __init_value__EHR_TotalEngineRevolutions = ((UDINT)0UL);
static const SINT FAR __init_value__ET1_EngineCoolantTemperature = ((SINT)0);
static const USINT FAR __init_value__EFL_P1_EngineOilLevel = ((USINT)0U);
static const USINT FAR __init_value__EFL_P1_EngineOilPressure = ((USINT)0U);
static const USINT FAR __init_value__EFL_P1_EngineCoolantLevel = ((USINT)0U);
static const Enum358 FAR __init_value__CCVS_TwoSpeedAxleSwitch = 0;
static const Enum359 FAR __init_value__CCVS_ParkingBrakeSwitch = 0;
static const Enum360 FAR __init_value__CCVS_CruiseControlPauseSwitch = 0;
static const Enum361 FAR __init_value__CCVS_ParkBrakeReleaseInhibitRequest = 0;
static const Enum362 FAR __init_value__CCVS_CruiseControlActive = 0;
static const Enum363 FAR __init_value__CCVS_CruiseControlEnableSwitch = 0;
static const Enum364 FAR __init_value__CCVS_BrakeSwitch = 0;
static const Enum365 FAR __init_value__CCVS_ClutchSwitch = 0;
static const Enum366 FAR __init_value__CCVS_CruiseControlSetSwitch = 0;
static const Enum367 FAR __init_value__CCVS_CruiseControlCoastSwitch = 0;
static const Enum368 FAR __init_value__CCVS_CruiseControlResumeSwitch = 0;
static const Enum369 FAR __init_value__CCVS_CruiseControlAccelerateSwitch = 0;
static const USINT FAR __init_value__CCVS_CruiseControlSetSpeed = ((USINT)0U);
static const Enum370 FAR __init_value__CCVS_CruiseControlStates = 0;
static const Enum71 FAR __init_value__CCVS_EngineIdleIncrementSwitch = 0;
static const Enum71 FAR __init_value__CCVS_EngineIdleDecrementSwitch = 0;
static const Enum71 FAR __init_value__CCVS_EngineTestModeSwitch = 0;
static const Enum71 FAR __init_value__CCVS_EngineShutdownOverrideSwitch = 0;
static const UINT FAR __init_value__CCVS_WheelBasedVehicleSpeed = ((UINT)0U);
static const SINT FAR __init_value__IC1_EngineIntakeManifold1Temperature = ((SINT)0);
static const UINT FAR __init_value__VEP1_BatteryPotentialPowerInput1 = ((UINT)0U);
static const SINT FAR __init_value__TRF1_TransmissionOilLevelHighLow = ((SINT)0);
static const INT FAR __init_value__TRF1_TransmissionOilTemperature = ((INT)0);
static const Enum346 FAR __init_value__WFI_WaterInFuelIndicator = 0;
static const USINT FAR __init_value__EAC1_Location = ((USINT)0U);
static const USINT FAR __init_value__EAC1_DifferentialLockStateFrontAxle1 = ((USINT)0U);
static const USINT FAR __init_value__EAC1_DifferentialLockStateFrontAxle2 = ((USINT)0U);
static const USINT FAR __init_value__EAC1_DifferentialLockStateRearAxle1 = ((USINT)0U);
static const USINT FAR __init_value__EAC1_DifferentialLockStateRearAxle2 = ((USINT)0U);
static const SINT FAR __init_value__EBC1_MC2M_ABSOffRoadSwitch = ((SINT)0);
static const USINT FAR __init_value__EBC1_MC2M_EngineRetarder = ((USINT)0U);
static const UINT FAR __init_value__EHR2_DestinationAdr = ((UINT)0U);
static const Enum87 FAR __init_value__EBC1_GasPedalEnable = 0;
static const USINT FAR __init_value__EEC2_GasPedal = ((USINT)0U);
static const Enum255 FAR __init_value__TC1_1_TransmissionGearShiftInhbtRq = 0;
static const Enum255 FAR __init_value__TC1_1_TrnsmTrqCnvLockupDisableRq = 0;
static const Enum255 FAR __init_value__TC1_1_DisengageDrivelineRequest = 0;
static const Enum255 FAR __init_value__TC1_1_TrnsmReverseGearShftInhbtRq = 0;
static const USINT FAR __init_value__TC1_1_RequestedPercentClutchSlip = ((USINT)0U);
static const USINT FAR __init_value__TC1_1_TransmissionRequestedGear = ((USINT)0U);
static const Enum255 FAR __init_value__TC1_1_DisengiffLockRequestFrontAxl1 = 0;
static const Enum255 FAR __init_value__TC1_1_DisengiffLockRequestFrontAxl2 = 0;
static const Enum255 FAR __init_value__TC1_1_DisengageDiffLockRequestRearAxl1 = 0;
static const Enum255 FAR __init_value__TC1_1_DisengageDiffLockRequestRearAxl2 = 0;
static const Enum255 FAR __init_value__TC1_1_DisengageDiffLockRequestCentral = 0;
static const Enum255 FAR __init_value__TC1_1_DisengiffLockRequestCentralFront = 0;
static const Enum255 FAR __init_value__TC1_1_DisengiffLockRequestCentralRear = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode1 = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode2 = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode3 = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode4 = 0;
static const Enum88 FAR __init_value__TC1_1_TransmissionRequestedLaunchGear = 0;
static const Enum255 FAR __init_value__TC1_1_TrnsmShftSlctorDisplayMdeSw = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode5 = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode6 = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode7 = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionMode8 = 0;
static const Enum255 FAR __init_value__TC1_1_TransmissionRequestedLaunchGear_res = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionGearShiftInhbtRq = 0;
static const Enum255 FAR __init_value__TC1_2_TrnsmTrqCnvLockupDisableRq = 0;
static const Enum255 FAR __init_value__TC1_2_DisengageDrivelineRequest = 0;
static const Enum255 FAR __init_value__TC1_2_TrnsmReverseGearShftInhbtRq = 0;
static const USINT FAR __init_value__TC1_2_RequestedPercentClutchSlip = ((USINT)0U);
static const USINT FAR __init_value__TC1_2_TransmissionRequestedGear = ((USINT)0U);
static const Enum255 FAR __init_value__TC1_2_DisengiffLockRequestFrontAxl1 = 0;
static const Enum255 FAR __init_value__TC1_2_DisengiffLockRequestFrontAxl2 = 0;
static const Enum255 FAR __init_value__TC1_2_DisengageDiffLockRequestRearAxl1 = 0;
static const Enum255 FAR __init_value__TC1_2_DisengageDiffLockRequestRearAxl2 = 0;
static const Enum255 FAR __init_value__TC1_2_DisengageDiffLockRequestCentral = 0;
static const Enum255 FAR __init_value__TC1_2_DisengiffLockRequestCentralFront = 0;
static const Enum255 FAR __init_value__TC1_2_DisengiffLockRequestCentralRear = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode1 = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode2 = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode3 = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode4 = 0;
static const Enum88 FAR __init_value__TC1_2_TransmissionRequestedLaunchGear = 0;
static const Enum255 FAR __init_value__TC1_2_TrnsmShftSlctorDisplayMdeSw = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode5 = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode6 = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode7 = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionMode8 = 0;
static const Enum255 FAR __init_value__TC1_2_TransmissionRequestedLaunchGear_res = 0;
static const Enum358 FAR __init_value__Cummins_TwoSpeedAxleSwitch = 0;
static const Enum359 FAR __init_value__Cummins_ParkingBrakeSwitch = 0;
static const Enum360 FAR __init_value__Cummins_CruiseControlPauseSwitch = 0;
static const Enum361 FAR __init_value__Cummins_ParkBrakeReleaseInhibitRequest = 0;
static const Enum362 FAR __init_value__Cummins_CruiseControlActive = 0;
static const Enum363 FAR __init_value__Cummins_CruiseControlEnableSwitch = 0;
static const Enum364 FAR __init_value__Cummins_BrakeSwitch = 0;
static const Enum365 FAR __init_value__Cummins_ClutchSwitch = 0;
static const Enum366 FAR __init_value__Cummins_CruiseControlSetSwitch = 0;
static const Enum367 FAR __init_value__Cummins_CruiseControlCoastSwitch = 0;
static const Enum368 FAR __init_value__Cummins_CruiseControlResumeSwitch = 0;
static const Enum369 FAR __init_value__Cummins_CruiseControlAccelerateSwitch = 0;
static const USINT FAR __init_value__Cummins_CruiseControlSetSpeed = ((USINT)0U);
static const Enum370 FAR __init_value__Cummins_CruiseControlStates = 0;
static const Enum71 FAR __init_value__Cummins_EngineIdleIncrementSwitch = 0;
static const Enum71 FAR __init_value__Cummins_EngineIdleDecrementSwitch = 0;
static const Enum71 FAR __init_value__Cummins_EngineTestModeSwitch = 0;
static const Enum71 FAR __init_value__Cummins_EngineShutdownOverrideSwitch = 0;
static const UINT FAR __init_value__Cummins_WheelBasedVehicleSpeed = ((UINT)0U);

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanJ1939[] = {
	{ &TRF2_Transmission_Oil_Filter_Restriction_Switch, &__init_value__TRF2_Transmission_Oil_Filter_Restriction_Switch, 2 },
	{ &ETC1_TransmissionTrqCnvLockupEngaged, &__init_value__ETC1_TransmissionTrqCnvLockupEngaged, 2 },
	{ &ETC1_TransmissionOutputShaftSpeed, &__init_value__ETC1_TransmissionOutputShaftSpeed, 2 },
	{ &EEC2_AcceleratorPedalPosition1, &__init_value__EEC2_AcceleratorPedalPosition1, 1 },
	{ &EEC1_EngineSpeed    , &__init_value__EEC1_EngineSpeed, 2 },
	{ &DM01_BAM_ECM_CtrlByte, &__init_value__DM01_BAM_ECM_CtrlByte, 1 },
	{ &DM01_BAM_ECM_TotNumByte, &__init_value__DM01_BAM_ECM_TotNumByte, 2 },
	{ &DM01_BAM_ECM_TotNumPacket, &__init_value__DM01_BAM_ECM_TotNumPacket, 1 },
	{ &DM01_BAM_ECM_Reserved, &__init_value__DM01_BAM_ECM_Reserved, 1 },
	{ &DM01_BAM_ECM_PGNofPacket, &__init_value__DM01_BAM_ECM_PGNofPacket, 4 },
	{ &DM01_BAM_TCM_CtrlByte, &__init_value__DM01_BAM_TCM_CtrlByte, 1 },
	{ &DM01_BAM_TCM_TotNumByte, &__init_value__DM01_BAM_TCM_TotNumByte, 2 },
	{ &DM01_BAM_TCM_TotNumPacket, &__init_value__DM01_BAM_TCM_TotNumPacket, 1 },
	{ &DM01_BAM_TCM_Reserved, &__init_value__DM01_BAM_TCM_Reserved, 1 },
	{ &DM01_BAM_TCM_PGNofPacket, &__init_value__DM01_BAM_TCM_PGNofPacket, 4 },
	{ &DM01_BAM_EBS_CtrlByte, &__init_value__DM01_BAM_EBS_CtrlByte, 1 },
	{ &DM01_BAM_EBS_TotNumByte, &__init_value__DM01_BAM_EBS_TotNumByte, 2 },
	{ &DM01_BAM_EBS_TotNumPacket, &__init_value__DM01_BAM_EBS_TotNumPacket, 1 },
	{ &DM01_BAM_EBS_Reserved, &__init_value__DM01_BAM_EBS_Reserved, 1 },
	{ &DM01_BAM_EBS_PGNofPacket, &__init_value__DM01_BAM_EBS_PGNofPacket, 4 },
	{ &EBC1_vECM_EBSBrakeSwitch, &__init_value__EBC1_vECM_EBSBrakeSwitch, 2 },
	{ &EBC1_vECM_EngineRetarderSelection, &__init_value__EBC1_vECM_EngineRetarderSelection, 1 },
	{ &EBC1_vECM_ATCASRInformationSignal, &__init_value__EBC1_vECM_ATCASRInformationSignal, 2 },
	{ &ETC2_TransmissionCurrentGear, &__init_value__ETC2_TransmissionCurrentGear, 1 },
	{ &ETC7_ActiveShiftConsoleIndicator, &__init_value__ETC7_ActiveShiftConsoleIndicator, 2 },
	{ &EBC2_FrontAxleSpeed , &__init_value__EBC2_FrontAxleSpeed, 2 },
	{ &DM01_ECM_ProtectLamp, &__init_value__DM01_ECM_ProtectLamp, 2 },
	{ &DM01_ECM_AmberWarningLamp, &__init_value__DM01_ECM_AmberWarningLamp, 2 },
	{ &DM01_ECM_RedStopLamp, &__init_value__DM01_ECM_RedStopLamp, 2 },
	{ &DM01_ECM_MalfunctionIndicatorLamp, &__init_value__DM01_ECM_MalfunctionIndicatorLamp, 2 },
	{ &DM01_ECM_FlashProtectLamp, &__init_value__DM01_ECM_FlashProtectLamp, 2 },
	{ &DM01_ECM_FlashAmberWarningLamp, &__init_value__DM01_ECM_FlashAmberWarningLamp, 2 },
	{ &DM01_ECM_FlashRedStopLamp, &__init_value__DM01_ECM_FlashRedStopLamp, 2 },
	{ &DM01_ECM_FlashMalfunctionIndicatorLamp, &__init_value__DM01_ECM_FlashMalfunctionIndicatorLamp, 2 },
	{ &DM01_ECM_SuspectParameterNumber, &__init_value__DM01_ECM_SuspectParameterNumber, 4 },
	{ &DM01_ECM_FailureModeIdentifier, &__init_value__DM01_ECM_FailureModeIdentifier, 1 },
	{ &DM01_ECM_OccurrenceCount, &__init_value__DM01_ECM_OccurrenceCount, 1 },
	{ &DM01_ECM_SPNConversionMethod, &__init_value__DM01_ECM_SPNConversionMethod, 2 },
	{ &DM01_TCM_ProtectLamp, &__init_value__DM01_TCM_ProtectLamp, 2 },
	{ &DM01_TCM_AmberWarningLamp, &__init_value__DM01_TCM_AmberWarningLamp, 2 },
	{ &DM01_TCM_RedStopLamp, &__init_value__DM01_TCM_RedStopLamp, 2 },
	{ &DM01_TCM_MalfunctionIndicatorLamp, &__init_value__DM01_TCM_MalfunctionIndicatorLamp, 2 },
	{ &DM01_TCM_FlashProtectLamp, &__init_value__DM01_TCM_FlashProtectLamp, 2 },
	{ &DM01_TCM_FlashAmberWarningLamp, &__init_value__DM01_TCM_FlashAmberWarningLamp, 2 },
	{ &DM01_TCM_FlashRedStopLamp, &__init_value__DM01_TCM_FlashRedStopLamp, 2 },
	{ &DM01_TCM_FlashMalfunctionIndicatorLamp, &__init_value__DM01_TCM_FlashMalfunctionIndicatorLamp, 2 },
	{ &DM01_TCM_SuspectParameterNumber, &__init_value__DM01_TCM_SuspectParameterNumber, 4 },
	{ &DM01_TCM_FailureModeIdentifier, &__init_value__DM01_TCM_FailureModeIdentifier, 1 },
	{ &DM01_TCM_OccurrenceCount, &__init_value__DM01_TCM_OccurrenceCount, 1 },
	{ &DM01_TCM_SPNConversionMethod, &__init_value__DM01_TCM_SPNConversionMethod, 2 },
	{ &DM01_EBS_ProtectLamp, &__init_value__DM01_EBS_ProtectLamp, 2 },
	{ &DM01_EBS_AmberWarningLamp, &__init_value__DM01_EBS_AmberWarningLamp, 2 },
	{ &DM01_EBS_RedStopLamp, &__init_value__DM01_EBS_RedStopLamp, 2 },
	{ &DM01_EBS_MalfunctionIndicatorLamp, &__init_value__DM01_EBS_MalfunctionIndicatorLamp, 2 },
	{ &DM01_EBS_FlashProtectLamp, &__init_value__DM01_EBS_FlashProtectLamp, 2 },
	{ &DM01_EBS_FlashAmberWarningLamp, &__init_value__DM01_EBS_FlashAmberWarningLamp, 2 },
	{ &DM01_EBS_FlashRedStopLamp, &__init_value__DM01_EBS_FlashRedStopLamp, 2 },
	{ &DM01_EBS_FlashMalfunctionIndicatorLamp, &__init_value__DM01_EBS_FlashMalfunctionIndicatorLamp, 2 },
	{ &DM01_EBS_SuspectParameterNumber, &__init_value__DM01_EBS_SuspectParameterNumber, 4 },
	{ &DM01_EBS_FailureModeIdentifier, &__init_value__DM01_EBS_FailureModeIdentifier, 1 },
	{ &DM01_EBS_OccurrenceCount, &__init_value__DM01_EBS_OccurrenceCount, 1 },
	{ &DM01_EBS_SPNConversionMethod, &__init_value__DM01_EBS_SPNConversionMethod, 2 },
	{ &SHUTDN_EngIdleShutdownHasShutdownEngine, &__init_value__SHUTDN_EngIdleShutdownHasShutdownEngine, 2 },
	{ &SHUTDN_EngineIdleShutdownDrvrAlertMode, &__init_value__SHUTDN_EngineIdleShutdownDrvrAlertMode, 2 },
	{ &SHUTDN_EngineIdleShutdownTimerOverride, &__init_value__SHUTDN_EngineIdleShutdownTimerOverride, 2 },
	{ &SHUTDN_EngineIdleShutdownTimerState, &__init_value__SHUTDN_EngineIdleShutdownTimerState, 2 },
	{ &SHUTDN_EngineIdleShutdownTimerFunction, &__init_value__SHUTDN_EngineIdleShutdownTimerFunction, 2 },
	{ &SHUTDN_ACHighPressureFanSwitch, &__init_value__SHUTDN_ACHighPressureFanSwitch, 2 },
	{ &SHUTDN_RefrigerantLowPressureSwitch, &__init_value__SHUTDN_RefrigerantLowPressureSwitch, 2 },
	{ &SHUTDN_RefrigerantHighPressureSwitch, &__init_value__SHUTDN_RefrigerantHighPressureSwitch, 2 },
	{ &SHUTDN_EngineWaitToStartLamp, &__init_value__SHUTDN_EngineWaitToStartLamp, 2 },
	{ &SHUTDN_EngPrtctnSystemHasShutdownEng, &__init_value__SHUTDN_EngPrtctnSystemHasShutdownEng, 2 },
	{ &SHUTDN_EngPrtctnSysApproachingShutdown, &__init_value__SHUTDN_EngPrtctnSysApproachingShutdown, 2 },
	{ &SHUTDN_EngProtectionSystemTimerOverride, &__init_value__SHUTDN_EngProtectionSystemTimerOverride, 2 },
	{ &SHUTDN_EngineProtectionSystemTimerState, &__init_value__SHUTDN_EngineProtectionSystemTimerState, 2 },
	{ &SHUTDN_EngineProtectionSystemConf, &__init_value__SHUTDN_EngineProtectionSystemConf, 2 },
	{ &SHUTDN_EngineAlarmAcknowledge, &__init_value__SHUTDN_EngineAlarmAcknowledge, 2 },
	{ &SHUTDN_EngineAlarmOutputCommandStatus, &__init_value__SHUTDN_EngineAlarmOutputCommandStatus, 2 },
	{ &SHUTDN_EngineAirShutoffCommandStatus, &__init_value__SHUTDN_EngineAirShutoffCommandStatus, 2 },
	{ &SHUTDN_EngineOverspeedTest, &__init_value__SHUTDN_EngineOverspeedTest, 2 },
	{ &SHUTDN_EngineAirShutoffStatus, &__init_value__SHUTDN_EngineAirShutoffStatus, 2 },
	{ &EHR_TotalEngineHours, &__init_value__EHR_TotalEngineHours, 4 },
	{ &EHR_TotalEngineRevolutions, &__init_value__EHR_TotalEngineRevolutions, 4 },
	{ &ET1_EngineCoolantTemperature, &__init_value__ET1_EngineCoolantTemperature, 1 },
	{ &EFL_P1_EngineOilLevel, &__init_value__EFL_P1_EngineOilLevel, 1 },
	{ &EFL_P1_EngineOilPressure, &__init_value__EFL_P1_EngineOilPressure, 1 },
	{ &EFL_P1_EngineCoolantLevel, &__init_value__EFL_P1_EngineCoolantLevel, 1 },
	{ &CCVS_TwoSpeedAxleSwitch, &__init_value__CCVS_TwoSpeedAxleSwitch, 2 },
	{ &CCVS_ParkingBrakeSwitch, &__init_value__CCVS_ParkingBrakeSwitch, 2 },
	{ &CCVS_CruiseControlPauseSwitch, &__init_value__CCVS_CruiseControlPauseSwitch, 2 },
	{ &CCVS_ParkBrakeReleaseInhibitRequest, &__init_value__CCVS_ParkBrakeReleaseInhibitRequest, 2 },
	{ &CCVS_CruiseControlActive, &__init_value__CCVS_CruiseControlActive, 2 },
	{ &CCVS_CruiseControlEnableSwitch, &__init_value__CCVS_CruiseControlEnableSwitch, 2 },
	{ &CCVS_BrakeSwitch    , &__init_value__CCVS_BrakeSwitch, 2 },
	{ &CCVS_ClutchSwitch   , &__init_value__CCVS_ClutchSwitch, 2 },
	{ &CCVS_CruiseControlSetSwitch, &__init_value__CCVS_CruiseControlSetSwitch, 2 },
	{ &CCVS_CruiseControlCoastSwitch, &__init_value__CCVS_CruiseControlCoastSwitch, 2 },
	{ &CCVS_CruiseControlResumeSwitch, &__init_value__CCVS_CruiseControlResumeSwitch, 2 },
	{ &CCVS_CruiseControlAccelerateSwitch, &__init_value__CCVS_CruiseControlAccelerateSwitch, 2 },
	{ &CCVS_CruiseControlSetSpeed, &__init_value__CCVS_CruiseControlSetSpeed, 1 },
	{ &CCVS_CruiseControlStates, &__init_value__CCVS_CruiseControlStates, 2 },
	{ &CCVS_EngineIdleIncrementSwitch, &__init_value__CCVS_EngineIdleIncrementSwitch, 2 },
	{ &CCVS_EngineIdleDecrementSwitch, &__init_value__CCVS_EngineIdleDecrementSwitch, 2 },
	{ &CCVS_EngineTestModeSwitch, &__init_value__CCVS_EngineTestModeSwitch, 2 },
	{ &CCVS_EngineShutdownOverrideSwitch, &__init_value__CCVS_EngineShutdownOverrideSwitch, 2 },
	{ &CCVS_WheelBasedVehicleSpeed, &__init_value__CCVS_WheelBasedVehicleSpeed, 2 },
	{ &IC1_EngineIntakeManifold1Temperature, &__init_value__IC1_EngineIntakeManifold1Temperature, 1 },
	{ &VEP1_BatteryPotentialPowerInput1, &__init_value__VEP1_BatteryPotentialPowerInput1, 2 },
	{ &TRF1_TransmissionOilLevelHighLow, &__init_value__TRF1_TransmissionOilLevelHighLow, 1 },
	{ &TRF1_TransmissionOilTemperature, &__init_value__TRF1_TransmissionOilTemperature, 2 },
	{ &WFI_WaterInFuelIndicator, &__init_value__WFI_WaterInFuelIndicator, 2 },
	{ &EAC1_Location       , &__init_value__EAC1_Location, 1 },
	{ &EAC1_DifferentialLockStateFrontAxle1, &__init_value__EAC1_DifferentialLockStateFrontAxle1, 1 },
	{ &EAC1_DifferentialLockStateFrontAxle2, &__init_value__EAC1_DifferentialLockStateFrontAxle2, 1 },
	{ &EAC1_DifferentialLockStateRearAxle1, &__init_value__EAC1_DifferentialLockStateRearAxle1, 1 },
	{ &EAC1_DifferentialLockStateRearAxle2, &__init_value__EAC1_DifferentialLockStateRearAxle2, 1 },
	{ &EBC1_MC2M_ABSOffRoadSwitch, &__init_value__EBC1_MC2M_ABSOffRoadSwitch, 1 },
	{ &EBC1_MC2M_EngineRetarder, &__init_value__EBC1_MC2M_EngineRetarder, 1 },
	{ &EHR2_DestinationAdr , &__init_value__EHR2_DestinationAdr, 2 },
	{ &EBC1_GasPedalEnable , &__init_value__EBC1_GasPedalEnable, 2 },
	{ &EEC2_GasPedal       , &__init_value__EEC2_GasPedal, 1 },
	{ &TC1_1_TransmissionGearShiftInhbtRq, &__init_value__TC1_1_TransmissionGearShiftInhbtRq, 2 },
	{ &TC1_1_TrnsmTrqCnvLockupDisableRq, &__init_value__TC1_1_TrnsmTrqCnvLockupDisableRq, 2 },
	{ &TC1_1_DisengageDrivelineRequest, &__init_value__TC1_1_DisengageDrivelineRequest, 2 },
	{ &TC1_1_TrnsmReverseGearShftInhbtRq, &__init_value__TC1_1_TrnsmReverseGearShftInhbtRq, 2 },
	{ &TC1_1_RequestedPercentClutchSlip, &__init_value__TC1_1_RequestedPercentClutchSlip, 1 },
	{ &TC1_1_TransmissionRequestedGear, &__init_value__TC1_1_TransmissionRequestedGear, 1 },
	{ &TC1_1_DisengiffLockRequestFrontAxl1, &__init_value__TC1_1_DisengiffLockRequestFrontAxl1, 2 },
	{ &TC1_1_DisengiffLockRequestFrontAxl2, &__init_value__TC1_1_DisengiffLockRequestFrontAxl2, 2 },
	{ &TC1_1_DisengageDiffLockRequestRearAxl1, &__init_value__TC1_1_DisengageDiffLockRequestRearAxl1, 2 },
	{ &TC1_1_DisengageDiffLockRequestRearAxl2, &__init_value__TC1_1_DisengageDiffLockRequestRearAxl2, 2 },
	{ &TC1_1_DisengageDiffLockRequestCentral, &__init_value__TC1_1_DisengageDiffLockRequestCentral, 2 },
	{ &TC1_1_DisengiffLockRequestCentralFront, &__init_value__TC1_1_DisengiffLockRequestCentralFront, 2 },
	{ &TC1_1_DisengiffLockRequestCentralRear, &__init_value__TC1_1_DisengiffLockRequestCentralRear, 2 },
	{ &TC1_1_TransmissionMode1, &__init_value__TC1_1_TransmissionMode1, 2 },
	{ &TC1_1_TransmissionMode2, &__init_value__TC1_1_TransmissionMode2, 2 },
	{ &TC1_1_TransmissionMode3, &__init_value__TC1_1_TransmissionMode3, 2 },
	{ &TC1_1_TransmissionMode4, &__init_value__TC1_1_TransmissionMode4, 2 },
	{ &TC1_1_TransmissionRequestedLaunchGear, &__init_value__TC1_1_TransmissionRequestedLaunchGear, 2 },
	{ &TC1_1_TrnsmShftSlctorDisplayMdeSw, &__init_value__TC1_1_TrnsmShftSlctorDisplayMdeSw, 2 },
	{ &TC1_1_TransmissionMode5, &__init_value__TC1_1_TransmissionMode5, 2 },
	{ &TC1_1_TransmissionMode6, &__init_value__TC1_1_TransmissionMode6, 2 },
	{ &TC1_1_TransmissionMode7, &__init_value__TC1_1_TransmissionMode7, 2 },
	{ &TC1_1_TransmissionMode8, &__init_value__TC1_1_TransmissionMode8, 2 },
	{ &TC1_1_TransmissionRequestedLaunchGear_res, &__init_value__TC1_1_TransmissionRequestedLaunchGear_res, 2 },
	{ &TC1_2_TransmissionGearShiftInhbtRq, &__init_value__TC1_2_TransmissionGearShiftInhbtRq, 2 },
	{ &TC1_2_TrnsmTrqCnvLockupDisableRq, &__init_value__TC1_2_TrnsmTrqCnvLockupDisableRq, 2 },
	{ &TC1_2_DisengageDrivelineRequest, &__init_value__TC1_2_DisengageDrivelineRequest, 2 },
	{ &TC1_2_TrnsmReverseGearShftInhbtRq, &__init_value__TC1_2_TrnsmReverseGearShftInhbtRq, 2 },
	{ &TC1_2_RequestedPercentClutchSlip, &__init_value__TC1_2_RequestedPercentClutchSlip, 1 },
	{ &TC1_2_TransmissionRequestedGear, &__init_value__TC1_2_TransmissionRequestedGear, 1 },
	{ &TC1_2_DisengiffLockRequestFrontAxl1, &__init_value__TC1_2_DisengiffLockRequestFrontAxl1, 2 },
	{ &TC1_2_DisengiffLockRequestFrontAxl2, &__init_value__TC1_2_DisengiffLockRequestFrontAxl2, 2 },
	{ &TC1_2_DisengageDiffLockRequestRearAxl1, &__init_value__TC1_2_DisengageDiffLockRequestRearAxl1, 2 },
	{ &TC1_2_DisengageDiffLockRequestRearAxl2, &__init_value__TC1_2_DisengageDiffLockRequestRearAxl2, 2 },
	{ &TC1_2_DisengageDiffLockRequestCentral, &__init_value__TC1_2_DisengageDiffLockRequestCentral, 2 },
	{ &TC1_2_DisengiffLockRequestCentralFront, &__init_value__TC1_2_DisengiffLockRequestCentralFront, 2 },
	{ &TC1_2_DisengiffLockRequestCentralRear, &__init_value__TC1_2_DisengiffLockRequestCentralRear, 2 },
	{ &TC1_2_TransmissionMode1, &__init_value__TC1_2_TransmissionMode1, 2 },
	{ &TC1_2_TransmissionMode2, &__init_value__TC1_2_TransmissionMode2, 2 },
	{ &TC1_2_TransmissionMode3, &__init_value__TC1_2_TransmissionMode3, 2 },
	{ &TC1_2_TransmissionMode4, &__init_value__TC1_2_TransmissionMode4, 2 },
	{ &TC1_2_TransmissionRequestedLaunchGear, &__init_value__TC1_2_TransmissionRequestedLaunchGear, 2 },
	{ &TC1_2_TrnsmShftSlctorDisplayMdeSw, &__init_value__TC1_2_TrnsmShftSlctorDisplayMdeSw, 2 },
	{ &TC1_2_TransmissionMode5, &__init_value__TC1_2_TransmissionMode5, 2 },
	{ &TC1_2_TransmissionMode6, &__init_value__TC1_2_TransmissionMode6, 2 },
	{ &TC1_2_TransmissionMode7, &__init_value__TC1_2_TransmissionMode7, 2 },
	{ &TC1_2_TransmissionMode8, &__init_value__TC1_2_TransmissionMode8, 2 },
	{ &TC1_2_TransmissionRequestedLaunchGear_res, &__init_value__TC1_2_TransmissionRequestedLaunchGear_res, 2 },
	{ &Cummins_TwoSpeedAxleSwitch, &__init_value__Cummins_TwoSpeedAxleSwitch, 2 },
	{ &Cummins_ParkingBrakeSwitch, &__init_value__Cummins_ParkingBrakeSwitch, 2 },
	{ &Cummins_CruiseControlPauseSwitch, &__init_value__Cummins_CruiseControlPauseSwitch, 2 },
	{ &Cummins_ParkBrakeReleaseInhibitRequest, &__init_value__Cummins_ParkBrakeReleaseInhibitRequest, 2 },
	{ &Cummins_CruiseControlActive, &__init_value__Cummins_CruiseControlActive, 2 },
	{ &Cummins_CruiseControlEnableSwitch, &__init_value__Cummins_CruiseControlEnableSwitch, 2 },
	{ &Cummins_BrakeSwitch , &__init_value__Cummins_BrakeSwitch, 2 },
	{ &Cummins_ClutchSwitch, &__init_value__Cummins_ClutchSwitch, 2 },
	{ &Cummins_CruiseControlSetSwitch, &__init_value__Cummins_CruiseControlSetSwitch, 2 },
	{ &Cummins_CruiseControlCoastSwitch, &__init_value__Cummins_CruiseControlCoastSwitch, 2 },
	{ &Cummins_CruiseControlResumeSwitch, &__init_value__Cummins_CruiseControlResumeSwitch, 2 },
	{ &Cummins_CruiseControlAccelerateSwitch, &__init_value__Cummins_CruiseControlAccelerateSwitch, 2 },
	{ &Cummins_CruiseControlSetSpeed, &__init_value__Cummins_CruiseControlSetSpeed, 1 },
	{ &Cummins_CruiseControlStates, &__init_value__Cummins_CruiseControlStates, 2 },
	{ &Cummins_EngineIdleIncrementSwitch, &__init_value__Cummins_EngineIdleIncrementSwitch, 2 },
	{ &Cummins_EngineIdleDecrementSwitch, &__init_value__Cummins_EngineIdleDecrementSwitch, 2 },
	{ &Cummins_EngineTestModeSwitch, &__init_value__Cummins_EngineTestModeSwitch, 2 },
	{ &Cummins_EngineShutdownOverrideSwitch, &__init_value__Cummins_EngineShutdownOverrideSwitch, 2 },
	{ &Cummins_WheelBasedVehicleSpeed, &__init_value__Cummins_WheelBasedVehicleSpeed, 2 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanJ1939[] */

/* transmit timers */
static WORD vt3_can_tx_timeout_EAC1_Electronic_Axle_Controller_1 = 0;
static WORD vt3_can_tx_timeout_EBC1_Electronic_Brake_Controller_33 = 0;
static WORD vt3_can_tx_timeout_CAN_message = 0;
static WORD vt3_can_tx_timeout_ECM_EBC1 = 0;
static WORD vt3_can_tx_timeout_ECM_EEC2 = 0;
static WORD vt3_can_tx_timeout_TC1_SHIFT_SELECTOR1 = 0;
static WORD vt3_can_tx_timeout_TC1_SHIFT_SELECTOR2 = 0;
static WORD vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed2 = 0;


/******************************************************************************/
/* remote I/O devices */
/******************************************************************************/


/******************************************************************************/
/* functions */
/******************************************************************************/

/* CAN interface initialization function */
void vt3_can_CanJ1939_init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize variables */
	for ( p = __init_table__CanJ1939; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* reset alarms */
	vt3_can_alarm_busoff_CAN_J1939 = FALSE;
	vt3_can_alarm_TRF2_Transmission_Fluids_2 = FALSE;
	vt3_can_alarm_ETC1_Electronic_Transmission_Controller_1 = FALSE;
	vt3_can_alarm_EEC2_Electronic_Engine_Controller_2 = FALSE;
	vt3_can_alarm_EEC1_Electronic_Engine_Controller_1 = FALSE;
	vt3_can_alarm_DM01_BAM_ECM = FALSE;
	vt3_can_alarm_DM01_BAM_TCM = FALSE;
	vt3_can_alarm_DM01_BAM_EBS = FALSE;
	vt3_can_alarm_EBC1_Electronic_Brake_Controller_1_vECM = FALSE;
	vt3_can_alarm_ETC2_Electronic_Transmission_Controller_2 = FALSE;
	vt3_can_alarm_ETC7_Electronic_Transmission_Controller_7 = FALSE;
	vt3_can_alarm_EBC2_Wheel_Speed_Information = FALSE;
	vt3_can_alarm_DM01_ECM = FALSE;
	vt3_can_alarm_DM01_TCM = FALSE;
	vt3_can_alarm_DM01_EBS = FALSE;
	vt3_can_alarm_SHUTDN_Shutdown = FALSE;
	vt3_can_alarm_EHR_Engine_Hours_Revolutions = FALSE;
	vt3_can_alarm_ET1_Engine_Temperature_1 = FALSE;
	vt3_can_alarm_EFL_P1_Engine_Fluid_LevelPressure_1 = FALSE;
	vt3_can_alarm_CCVS_Cruise_ControlVehicle_Speed = FALSE;
	vt3_can_alarm_IC1_InletExhaust_Conditions_1 = FALSE;
	vt3_can_alarm_VEP1_Vehicle_Electrical_Power_1 = FALSE;
	vt3_can_alarm_TRF1_Transmission_Fluids_1 = FALSE;
	vt3_can_alarm_WFI_Water_in_Fuel_Indicator = FALSE;

	/* initialize can TX value */
	vt3_can_period_EAC1_Electronic_Axle_Controller_1 = 500;
	vt3_can_trigger_EAC1_Electronic_Axle_Controller_1 = FALSE;
	vt3_can_period_EBC1_Electronic_Brake_Controller_33 = 100;
	vt3_can_trigger_EBC1_Electronic_Brake_Controller_33 = FALSE;
	vt3_can_period_CAN_message = 1000;
	vt3_can_trigger_CAN_message = FALSE;
	vt3_can_period_ECM_EBC1 = 100;
	vt3_can_trigger_ECM_EBC1 = FALSE;
	vt3_can_period_ECM_EEC2 = 50;
	vt3_can_trigger_ECM_EEC2 = FALSE;
	vt3_can_period_TC1_SHIFT_SELECTOR1 = 50;
	vt3_can_trigger_TC1_SHIFT_SELECTOR1 = FALSE;
	vt3_can_period_TC1_SHIFT_SELECTOR2 = 50;
	vt3_can_trigger_TC1_SHIFT_SELECTOR2 = FALSE;
	vt3_can_period_CCVS_Cruise_ControlVehicle_Speed2 = 100;
	vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed2 = FALSE;

	/* reset timers */
	vt3_can_tx_timeout_EAC1_Electronic_Axle_Controller_1 = 0;
	vt3_can_tx_timeout_EBC1_Electronic_Brake_Controller_33 = 0;
	vt3_can_tx_timeout_CAN_message = 0;
	vt3_can_tx_timeout_ECM_EBC1 = 0;
	vt3_can_tx_timeout_ECM_EEC2 = 0;
	vt3_can_tx_timeout_TC1_SHIFT_SELECTOR1 = 0;
	vt3_can_tx_timeout_TC1_SHIFT_SELECTOR2 = 0;
	vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed2 = 0;

	/* initialize the interface */
	vt3_init_interface(1, 250, vt3_can_rx_init_CanJ1939, 23);

	/******************************************************************************/
	/* initialization of remote I/O devices */
	/******************************************************************************/


}

/* CAN interface receive function */
void vt3_can_CanJ1939_rx(void)
{
	CanRxObj * pmsg;  /* pointer to message record */

	/* check for BUSOFF errors */
	if ( vt3_can_check_busoff(1) )
	{
		vt3_can_alarm_busoff_CAN_J1939 = TRUE;
	}

	/* RX message: TRF2_Transmission_Fluids_2 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_TRF2_TRANSMISSION_FLUIDS_2);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&TRF2_Transmission_Oil_Filter_Restriction_Switch, &__init_value__TRF2_Transmission_Oil_Filter_Restriction_Switch, 2);
	}
	vt3_can_alarm_TRF2_Transmission_Fluids_2 = ! pmsg->RxOK;

	/* RX message: ETC1_Electronic_Transmission_Controller_1 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_ETC1_ELECTRONIC_TRANSMISSION_CONTROLLER_1);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&ETC1_TransmissionTrqCnvLockupEngaged, &__init_value__ETC1_TransmissionTrqCnvLockupEngaged, 2);
		ETC1_TransmissionOutputShaftSpeed = __init_value__ETC1_TransmissionOutputShaftSpeed;
	}
	vt3_can_alarm_ETC1_Electronic_Transmission_Controller_1 = ! pmsg->RxOK;

	/* RX message: EEC2_Electronic_Engine_Controller_2 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_EEC2_ELECTRONIC_ENGINE_CONTROLLER_2);
	if ( ! pmsg->RxOK ) 
	{
		EEC2_AcceleratorPedalPosition1 = __init_value__EEC2_AcceleratorPedalPosition1;
	}
	vt3_can_alarm_EEC2_Electronic_Engine_Controller_2 = ! pmsg->RxOK;

	/* RX message: EEC1_Electronic_Engine_Controller_1 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_EEC1_ELECTRONIC_ENGINE_CONTROLLER_1);
	if ( ! pmsg->RxOK ) 
	{
		EEC1_EngineSpeed = __init_value__EEC1_EngineSpeed;
	}
	vt3_can_alarm_EEC1_Electronic_Engine_Controller_1 = ! pmsg->RxOK;

	/* RX message: DM01_BAM_ECM */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_DM01_BAM_ECM);
	if ( ! pmsg->RxOK ) 
	{
		DM01_BAM_ECM_CtrlByte = __init_value__DM01_BAM_ECM_CtrlByte;
		DM01_BAM_ECM_TotNumByte = __init_value__DM01_BAM_ECM_TotNumByte;
		DM01_BAM_ECM_TotNumPacket = __init_value__DM01_BAM_ECM_TotNumPacket;
		DM01_BAM_ECM_Reserved = __init_value__DM01_BAM_ECM_Reserved;
		DM01_BAM_ECM_PGNofPacket = __init_value__DM01_BAM_ECM_PGNofPacket;
	}
	vt3_can_alarm_DM01_BAM_ECM = ! pmsg->RxOK;

	/* RX message: DM01_BAM_TCM */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_DM01_BAM_TCM);
	if ( ! pmsg->RxOK ) 
	{
		DM01_BAM_TCM_CtrlByte = __init_value__DM01_BAM_TCM_CtrlByte;
		DM01_BAM_TCM_TotNumByte = __init_value__DM01_BAM_TCM_TotNumByte;
		DM01_BAM_TCM_TotNumPacket = __init_value__DM01_BAM_TCM_TotNumPacket;
		DM01_BAM_TCM_Reserved = __init_value__DM01_BAM_TCM_Reserved;
		DM01_BAM_TCM_PGNofPacket = __init_value__DM01_BAM_TCM_PGNofPacket;
	}
	vt3_can_alarm_DM01_BAM_TCM = ! pmsg->RxOK;

	/* RX message: DM01_BAM_EBS */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_DM01_BAM_EBS);
	if ( ! pmsg->RxOK ) 
	{
		DM01_BAM_EBS_CtrlByte = __init_value__DM01_BAM_EBS_CtrlByte;
		DM01_BAM_EBS_TotNumByte = __init_value__DM01_BAM_EBS_TotNumByte;
		DM01_BAM_EBS_TotNumPacket = __init_value__DM01_BAM_EBS_TotNumPacket;
		DM01_BAM_EBS_Reserved = __init_value__DM01_BAM_EBS_Reserved;
		DM01_BAM_EBS_PGNofPacket = __init_value__DM01_BAM_EBS_PGNofPacket;
	}
	vt3_can_alarm_DM01_BAM_EBS = ! pmsg->RxOK;

	/* RX message: EBC1_Electronic_Brake_Controller_1_vECM */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_EBC1_ELECTRONIC_BRAKE_CONTROLLER_1_VECM);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&EBC1_vECM_EBSBrakeSwitch, &__init_value__EBC1_vECM_EBSBrakeSwitch, 2);
		EBC1_vECM_EngineRetarderSelection = __init_value__EBC1_vECM_EngineRetarderSelection;
		(void) memcpy(&EBC1_vECM_ATCASRInformationSignal, &__init_value__EBC1_vECM_ATCASRInformationSignal, 2);
	}
	vt3_can_alarm_EBC1_Electronic_Brake_Controller_1_vECM = ! pmsg->RxOK;

	/* RX message: ETC2_Electronic_Transmission_Controller_2 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_ETC2_ELECTRONIC_TRANSMISSION_CONTROLLER_2);
	if ( ! pmsg->RxOK ) 
	{
		ETC2_TransmissionCurrentGear = __init_value__ETC2_TransmissionCurrentGear;
	}
	vt3_can_alarm_ETC2_Electronic_Transmission_Controller_2 = ! pmsg->RxOK;

	/* RX message: ETC7_Electronic_Transmission_Controller_7 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_ETC7_ELECTRONIC_TRANSMISSION_CONTROLLER_7);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&ETC7_ActiveShiftConsoleIndicator, &__init_value__ETC7_ActiveShiftConsoleIndicator, 2);
	}
	vt3_can_alarm_ETC7_Electronic_Transmission_Controller_7 = ! pmsg->RxOK;

	/* RX message: EBC2_Wheel_Speed_Information */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_EBC2_WHEEL_SPEED_INFORMATION);
	if ( ! pmsg->RxOK ) 
	{
		EBC2_FrontAxleSpeed = __init_value__EBC2_FrontAxleSpeed;
	}
	vt3_can_alarm_EBC2_Wheel_Speed_Information = ! pmsg->RxOK;

	/* RX message: DM01_ECM */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_DM01_ECM);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&DM01_ECM_ProtectLamp, &__init_value__DM01_ECM_ProtectLamp, 2);
		(void) memcpy(&DM01_ECM_AmberWarningLamp, &__init_value__DM01_ECM_AmberWarningLamp, 2);
		(void) memcpy(&DM01_ECM_RedStopLamp, &__init_value__DM01_ECM_RedStopLamp, 2);
		(void) memcpy(&DM01_ECM_MalfunctionIndicatorLamp, &__init_value__DM01_ECM_MalfunctionIndicatorLamp, 2);
		(void) memcpy(&DM01_ECM_FlashProtectLamp, &__init_value__DM01_ECM_FlashProtectLamp, 2);
		(void) memcpy(&DM01_ECM_FlashAmberWarningLamp, &__init_value__DM01_ECM_FlashAmberWarningLamp, 2);
		(void) memcpy(&DM01_ECM_FlashRedStopLamp, &__init_value__DM01_ECM_FlashRedStopLamp, 2);
		(void) memcpy(&DM01_ECM_FlashMalfunctionIndicatorLamp, &__init_value__DM01_ECM_FlashMalfunctionIndicatorLamp, 2);
		DM01_ECM_SuspectParameterNumber = __init_value__DM01_ECM_SuspectParameterNumber;
		DM01_ECM_FailureModeIdentifier = __init_value__DM01_ECM_FailureModeIdentifier;
		DM01_ECM_OccurrenceCount = __init_value__DM01_ECM_OccurrenceCount;
		(void) memcpy(&DM01_ECM_SPNConversionMethod, &__init_value__DM01_ECM_SPNConversionMethod, 2);
	}
	vt3_can_alarm_DM01_ECM = ! pmsg->RxOK;

	/* RX message: DM01_TCM */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_DM01_TCM);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&DM01_TCM_ProtectLamp, &__init_value__DM01_TCM_ProtectLamp, 2);
		(void) memcpy(&DM01_TCM_AmberWarningLamp, &__init_value__DM01_TCM_AmberWarningLamp, 2);
		(void) memcpy(&DM01_TCM_RedStopLamp, &__init_value__DM01_TCM_RedStopLamp, 2);
		(void) memcpy(&DM01_TCM_MalfunctionIndicatorLamp, &__init_value__DM01_TCM_MalfunctionIndicatorLamp, 2);
		(void) memcpy(&DM01_TCM_FlashProtectLamp, &__init_value__DM01_TCM_FlashProtectLamp, 2);
		(void) memcpy(&DM01_TCM_FlashAmberWarningLamp, &__init_value__DM01_TCM_FlashAmberWarningLamp, 2);
		(void) memcpy(&DM01_TCM_FlashRedStopLamp, &__init_value__DM01_TCM_FlashRedStopLamp, 2);
		(void) memcpy(&DM01_TCM_FlashMalfunctionIndicatorLamp, &__init_value__DM01_TCM_FlashMalfunctionIndicatorLamp, 2);
		DM01_TCM_SuspectParameterNumber = __init_value__DM01_TCM_SuspectParameterNumber;
		DM01_TCM_FailureModeIdentifier = __init_value__DM01_TCM_FailureModeIdentifier;
		DM01_TCM_OccurrenceCount = __init_value__DM01_TCM_OccurrenceCount;
		(void) memcpy(&DM01_TCM_SPNConversionMethod, &__init_value__DM01_TCM_SPNConversionMethod, 2);
	}
	vt3_can_alarm_DM01_TCM = ! pmsg->RxOK;

	/* RX message: DM01_EBS */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_DM01_EBS);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&DM01_EBS_ProtectLamp, &__init_value__DM01_EBS_ProtectLamp, 2);
		(void) memcpy(&DM01_EBS_AmberWarningLamp, &__init_value__DM01_EBS_AmberWarningLamp, 2);
		(void) memcpy(&DM01_EBS_RedStopLamp, &__init_value__DM01_EBS_RedStopLamp, 2);
		(void) memcpy(&DM01_EBS_MalfunctionIndicatorLamp, &__init_value__DM01_EBS_MalfunctionIndicatorLamp, 2);
		(void) memcpy(&DM01_EBS_FlashProtectLamp, &__init_value__DM01_EBS_FlashProtectLamp, 2);
		(void) memcpy(&DM01_EBS_FlashAmberWarningLamp, &__init_value__DM01_EBS_FlashAmberWarningLamp, 2);
		(void) memcpy(&DM01_EBS_FlashRedStopLamp, &__init_value__DM01_EBS_FlashRedStopLamp, 2);
		(void) memcpy(&DM01_EBS_FlashMalfunctionIndicatorLamp, &__init_value__DM01_EBS_FlashMalfunctionIndicatorLamp, 2);
		DM01_EBS_SuspectParameterNumber = __init_value__DM01_EBS_SuspectParameterNumber;
		DM01_EBS_FailureModeIdentifier = __init_value__DM01_EBS_FailureModeIdentifier;
		DM01_EBS_OccurrenceCount = __init_value__DM01_EBS_OccurrenceCount;
		(void) memcpy(&DM01_EBS_SPNConversionMethod, &__init_value__DM01_EBS_SPNConversionMethod, 2);
	}
	vt3_can_alarm_DM01_EBS = ! pmsg->RxOK;

	/* RX message: SHUTDN_Shutdown */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_SHUTDN_SHUTDOWN);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&SHUTDN_EngIdleShutdownHasShutdownEngine, &__init_value__SHUTDN_EngIdleShutdownHasShutdownEngine, 2);
		(void) memcpy(&SHUTDN_EngineIdleShutdownDrvrAlertMode, &__init_value__SHUTDN_EngineIdleShutdownDrvrAlertMode, 2);
		(void) memcpy(&SHUTDN_EngineIdleShutdownTimerOverride, &__init_value__SHUTDN_EngineIdleShutdownTimerOverride, 2);
		(void) memcpy(&SHUTDN_EngineIdleShutdownTimerState, &__init_value__SHUTDN_EngineIdleShutdownTimerState, 2);
		(void) memcpy(&SHUTDN_EngineIdleShutdownTimerFunction, &__init_value__SHUTDN_EngineIdleShutdownTimerFunction, 2);
		(void) memcpy(&SHUTDN_ACHighPressureFanSwitch, &__init_value__SHUTDN_ACHighPressureFanSwitch, 2);
		(void) memcpy(&SHUTDN_RefrigerantLowPressureSwitch, &__init_value__SHUTDN_RefrigerantLowPressureSwitch, 2);
		(void) memcpy(&SHUTDN_RefrigerantHighPressureSwitch, &__init_value__SHUTDN_RefrigerantHighPressureSwitch, 2);
		(void) memcpy(&SHUTDN_EngineWaitToStartLamp, &__init_value__SHUTDN_EngineWaitToStartLamp, 2);
		(void) memcpy(&SHUTDN_EngPrtctnSystemHasShutdownEng, &__init_value__SHUTDN_EngPrtctnSystemHasShutdownEng, 2);
		(void) memcpy(&SHUTDN_EngPrtctnSysApproachingShutdown, &__init_value__SHUTDN_EngPrtctnSysApproachingShutdown, 2);
		(void) memcpy(&SHUTDN_EngProtectionSystemTimerOverride, &__init_value__SHUTDN_EngProtectionSystemTimerOverride, 2);
		(void) memcpy(&SHUTDN_EngineProtectionSystemTimerState, &__init_value__SHUTDN_EngineProtectionSystemTimerState, 2);
		(void) memcpy(&SHUTDN_EngineProtectionSystemConf, &__init_value__SHUTDN_EngineProtectionSystemConf, 2);
		(void) memcpy(&SHUTDN_EngineAlarmAcknowledge, &__init_value__SHUTDN_EngineAlarmAcknowledge, 2);
		(void) memcpy(&SHUTDN_EngineAlarmOutputCommandStatus, &__init_value__SHUTDN_EngineAlarmOutputCommandStatus, 2);
		(void) memcpy(&SHUTDN_EngineAirShutoffCommandStatus, &__init_value__SHUTDN_EngineAirShutoffCommandStatus, 2);
		(void) memcpy(&SHUTDN_EngineOverspeedTest, &__init_value__SHUTDN_EngineOverspeedTest, 2);
		(void) memcpy(&SHUTDN_EngineAirShutoffStatus, &__init_value__SHUTDN_EngineAirShutoffStatus, 2);
	}
	vt3_can_alarm_SHUTDN_Shutdown = ! pmsg->RxOK;

	/* RX message: EHR_Engine_Hours_Revolutions */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_EHR_ENGINE_HOURS_REVOLUTIONS);
	if ( ! pmsg->RxOK ) 
	{
		EHR_TotalEngineHours = __init_value__EHR_TotalEngineHours;
		EHR_TotalEngineRevolutions = __init_value__EHR_TotalEngineRevolutions;
	}
	vt3_can_alarm_EHR_Engine_Hours_Revolutions = ! pmsg->RxOK;

	/* RX message: ET1_Engine_Temperature_1 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_ET1_ENGINE_TEMPERATURE_1);
	if ( ! pmsg->RxOK ) 
	{
		ET1_EngineCoolantTemperature = __init_value__ET1_EngineCoolantTemperature;
	}
	vt3_can_alarm_ET1_Engine_Temperature_1 = ! pmsg->RxOK;

	/* RX message: EFL_P1_Engine_Fluid_LevelPressure_1 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_EFL_P1_ENGINE_FLUID_LEVELPRESSURE_1);
	if ( ! pmsg->RxOK ) 
	{
		EFL_P1_EngineOilLevel = __init_value__EFL_P1_EngineOilLevel;
		EFL_P1_EngineOilPressure = __init_value__EFL_P1_EngineOilPressure;
		EFL_P1_EngineCoolantLevel = __init_value__EFL_P1_EngineCoolantLevel;
	}
	vt3_can_alarm_EFL_P1_Engine_Fluid_LevelPressure_1 = ! pmsg->RxOK;

	/* RX message: CCVS_Cruise_ControlVehicle_Speed */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_CCVS_CRUISE_CONTROLVEHICLE_SPEED);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&CCVS_TwoSpeedAxleSwitch, &__init_value__CCVS_TwoSpeedAxleSwitch, 2);
		(void) memcpy(&CCVS_ParkingBrakeSwitch, &__init_value__CCVS_ParkingBrakeSwitch, 2);
		(void) memcpy(&CCVS_CruiseControlPauseSwitch, &__init_value__CCVS_CruiseControlPauseSwitch, 2);
		(void) memcpy(&CCVS_ParkBrakeReleaseInhibitRequest, &__init_value__CCVS_ParkBrakeReleaseInhibitRequest, 2);
		(void) memcpy(&CCVS_CruiseControlActive, &__init_value__CCVS_CruiseControlActive, 2);
		(void) memcpy(&CCVS_CruiseControlEnableSwitch, &__init_value__CCVS_CruiseControlEnableSwitch, 2);
		(void) memcpy(&CCVS_BrakeSwitch, &__init_value__CCVS_BrakeSwitch, 2);
		(void) memcpy(&CCVS_ClutchSwitch, &__init_value__CCVS_ClutchSwitch, 2);
		(void) memcpy(&CCVS_CruiseControlSetSwitch, &__init_value__CCVS_CruiseControlSetSwitch, 2);
		(void) memcpy(&CCVS_CruiseControlCoastSwitch, &__init_value__CCVS_CruiseControlCoastSwitch, 2);
		(void) memcpy(&CCVS_CruiseControlResumeSwitch, &__init_value__CCVS_CruiseControlResumeSwitch, 2);
		(void) memcpy(&CCVS_CruiseControlAccelerateSwitch, &__init_value__CCVS_CruiseControlAccelerateSwitch, 2);
		CCVS_CruiseControlSetSpeed = __init_value__CCVS_CruiseControlSetSpeed;
		(void) memcpy(&CCVS_CruiseControlStates, &__init_value__CCVS_CruiseControlStates, 2);
		(void) memcpy(&CCVS_EngineIdleIncrementSwitch, &__init_value__CCVS_EngineIdleIncrementSwitch, 2);
		(void) memcpy(&CCVS_EngineIdleDecrementSwitch, &__init_value__CCVS_EngineIdleDecrementSwitch, 2);
		(void) memcpy(&CCVS_EngineTestModeSwitch, &__init_value__CCVS_EngineTestModeSwitch, 2);
		(void) memcpy(&CCVS_EngineShutdownOverrideSwitch, &__init_value__CCVS_EngineShutdownOverrideSwitch, 2);
		CCVS_WheelBasedVehicleSpeed = __init_value__CCVS_WheelBasedVehicleSpeed;
	}
	vt3_can_alarm_CCVS_Cruise_ControlVehicle_Speed = ! pmsg->RxOK;

	/* RX message: IC1_InletExhaust_Conditions_1 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_IC1_INLETEXHAUST_CONDITIONS_1);
	if ( ! pmsg->RxOK ) 
	{
		IC1_EngineIntakeManifold1Temperature = __init_value__IC1_EngineIntakeManifold1Temperature;
	}
	vt3_can_alarm_IC1_InletExhaust_Conditions_1 = ! pmsg->RxOK;

	/* RX message: VEP1_Vehicle_Electrical_Power_1 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_VEP1_VEHICLE_ELECTRICAL_POWER_1);
	if ( ! pmsg->RxOK ) 
	{
		VEP1_BatteryPotentialPowerInput1 = __init_value__VEP1_BatteryPotentialPowerInput1;
	}
	vt3_can_alarm_VEP1_Vehicle_Electrical_Power_1 = ! pmsg->RxOK;

	/* RX message: TRF1_Transmission_Fluids_1 */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_TRF1_TRANSMISSION_FLUIDS_1);
	if ( ! pmsg->RxOK ) 
	{
		TRF1_TransmissionOilLevelHighLow = __init_value__TRF1_TransmissionOilLevelHighLow;
		TRF1_TransmissionOilTemperature = __init_value__TRF1_TransmissionOilTemperature;
	}
	vt3_can_alarm_TRF1_Transmission_Fluids_1 = ! pmsg->RxOK;

	/* RX message: WFI_Water_in_Fuel_Indicator */
	pmsg = vt3_get_canmsg(1, VT3_RXMSG_WFI_WATER_IN_FUEL_INDICATOR);
	if ( ! pmsg->RxOK ) 
	{
		(void) memcpy(&WFI_WaterInFuelIndicator, &__init_value__WFI_WaterInFuelIndicator, 2);
	}
	vt3_can_alarm_WFI_Water_in_Fuel_Indicator = ! pmsg->RxOK;


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/


}

/* CAN interface transmit function */
void vt3_can_CanJ1939_tx(void)
{
	BYTE txcounter = 0;
	BYTE db[8];
	DINT tmp;

	/* TX message: EAC1_Electronic_Axle_Controller_1 */
	if ( (vt3_can_period_EAC1_Electronic_Axle_Controller_1 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_EAC1_Electronic_Axle_Controller_1)) ||
	     (vt3_can_period_EAC1_Electronic_Axle_Controller_1 == 0 && vt3_can_trigger_EAC1_Electronic_Axle_Controller_1 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((EAC1_Location & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((EAC1_DifferentialLockStateFrontAxle1 & 0x03));
 		/* little-endian */
 		db[1] |= (BYTE)(((EAC1_DifferentialLockStateFrontAxle2 & 0x03) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((EAC1_DifferentialLockStateRearAxle1 & 0x03) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((EAC1_DifferentialLockStateRearAxle2 & 0x03) << 6));

		/* send message */
		if ( vt3_send_canmsg(1, 0x38F00621, 8, db) == ERR_OK )
		{
			vt3_can_trigger_EAC1_Electronic_Axle_Controller_1 = 0;
			vt3_can_tx_timeout_EAC1_Electronic_Axle_Controller_1 = TIME_TO_TICKS_CAN_TX(vt3_can_period_EAC1_Electronic_Axle_Controller_1);
		}
	}

	/* TX message: EBC1_Electronic_Brake_Controller_33 */
	if ( (vt3_can_period_EBC1_Electronic_Brake_Controller_33 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_EBC1_Electronic_Brake_Controller_33)) ||
	     (vt3_can_period_EBC1_Electronic_Brake_Controller_33 == 0 && vt3_can_trigger_EBC1_Electronic_Brake_Controller_33 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[2] |= (BYTE)((EBC1_MC2M_ABSOffRoadSwitch & 0x03));
 		tmp = (((DINT)EBC1_MC2M_EngineRetarder) * 5) / 2;
 		/* little-endian */
 		db[4] |= (BYTE)((tmp & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(1, 0x38F00133, 8, db) == ERR_OK )
		{
			vt3_can_trigger_EBC1_Electronic_Brake_Controller_33 = 0;
			vt3_can_tx_timeout_EBC1_Electronic_Brake_Controller_33 = TIME_TO_TICKS_CAN_TX(vt3_can_period_EBC1_Electronic_Brake_Controller_33);
		}
	}

	/* TX message: CAN_message */
	if ( (vt3_can_period_CAN_message != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_message)) ||
	     (vt3_can_period_CAN_message == 0 && vt3_can_trigger_CAN_message == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((EHR2_DestinationAdr & 0xFF));
 		db[1] |= (BYTE)(((EHR2_DestinationAdr >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(1, 0x38EA0005, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_message = 0;
			vt3_can_tx_timeout_CAN_message = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_message);
		}
	}

	/* TX message: ECM_EBC1 */
	if ( (vt3_can_period_ECM_EBC1 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_ECM_EBC1)) ||
	     (vt3_can_period_ECM_EBC1 == 0 && vt3_can_trigger_ECM_EBC1 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[3] |= (BYTE)(((EBC1_GasPedalEnable & 0x03) << 6));

		/* send message */
		if ( vt3_send_canmsg(1, 0x2CF00117, 8, db) == ERR_OK )
		{
			vt3_can_trigger_ECM_EBC1 = 0;
			vt3_can_tx_timeout_ECM_EBC1 = TIME_TO_TICKS_CAN_TX(vt3_can_period_ECM_EBC1);
		}
	}

	/* TX message: ECM_EEC2 */
	if ( (vt3_can_period_ECM_EEC2 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_ECM_EEC2)) ||
	     (vt3_can_period_ECM_EEC2 == 0 && vt3_can_trigger_ECM_EEC2 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[3] |= (BYTE)((EEC2_GasPedal & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(1, 0x2CF00317, 8, db) == ERR_OK )
		{
			vt3_can_trigger_ECM_EEC2 = 0;
			vt3_can_tx_timeout_ECM_EEC2 = TIME_TO_TICKS_CAN_TX(vt3_can_period_ECM_EEC2);
		}
	}

	/* TX message: TC1_SHIFT_SELECTOR1 */
	if ( (vt3_can_period_TC1_SHIFT_SELECTOR1 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_TC1_SHIFT_SELECTOR1)) ||
	     (vt3_can_period_TC1_SHIFT_SELECTOR1 == 0 && vt3_can_trigger_TC1_SHIFT_SELECTOR1 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((TC1_1_TransmissionGearShiftInhbtRq & 0x03));
 		/* little-endian */
 		db[0] |= (BYTE)(((TC1_1_TrnsmTrqCnvLockupDisableRq & 0x03) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((TC1_1_DisengageDrivelineRequest & 0x03) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((TC1_1_TrnsmReverseGearShftInhbtRq & 0x03) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)((TC1_1_RequestedPercentClutchSlip & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((TC1_1_TransmissionRequestedGear & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((TC1_1_DisengiffLockRequestFrontAxl1 & 0x03));
 		/* little-endian */
 		db[3] |= (BYTE)(((TC1_1_DisengiffLockRequestFrontAxl2 & 0x03) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((TC1_1_DisengageDiffLockRequestRearAxl1 & 0x03) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((TC1_1_DisengageDiffLockRequestRearAxl2 & 0x03) << 6));
 		/* little-endian */
 		db[4] |= (BYTE)((TC1_1_DisengageDiffLockRequestCentral & 0x03));
 		/* little-endian */
 		db[4] |= (BYTE)(((TC1_1_DisengiffLockRequestCentralFront & 0x03) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((TC1_1_DisengiffLockRequestCentralRear & 0x03) << 4));
 		/* little-endian */
 		db[5] |= (BYTE)((TC1_1_TransmissionMode1 & 0x03));
 		/* little-endian */
 		db[5] |= (BYTE)(((TC1_1_TransmissionMode2 & 0x03) << 2));
 		/* little-endian */
 		db[5] |= (BYTE)(((TC1_1_TransmissionMode3 & 0x03) << 4));
 		/* little-endian */
 		db[5] |= (BYTE)(((TC1_1_TransmissionMode4 & 0x03) << 6));
 		/* little-endian */
 		db[6] |= (BYTE)(((TC1_1_TransmissionRequestedLaunchGear & 0x0F) << 2));
 		/* little-endian */
 		db[6] |= (BYTE)(((TC1_1_TrnsmShftSlctorDisplayMdeSw & 0x03) << 6));
 		/* little-endian */
 		db[7] |= (BYTE)((TC1_1_TransmissionMode5 & 0x03));
 		/* little-endian */
 		db[7] |= (BYTE)(((TC1_1_TransmissionMode6 & 0x03) << 2));
 		/* little-endian */
 		db[7] |= (BYTE)(((TC1_1_TransmissionMode7 & 0x03) << 4));
 		/* little-endian */
 		db[7] |= (BYTE)(((TC1_1_TransmissionMode8 & 0x03) << 6));
 		/* little-endian */
 		db[6] |= (BYTE)((TC1_1_TransmissionRequestedLaunchGear_res & 0x03));

		/* send message */
		if ( vt3_send_canmsg(1, 0x2C010305, 8, db) == ERR_OK )
		{
			vt3_can_trigger_TC1_SHIFT_SELECTOR1 = 0;
			vt3_can_tx_timeout_TC1_SHIFT_SELECTOR1 = TIME_TO_TICKS_CAN_TX(vt3_can_period_TC1_SHIFT_SELECTOR1);
		}
	}

	/* TX message: TC1_SHIFT_SELECTOR2 */
	if ( (vt3_can_period_TC1_SHIFT_SELECTOR2 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_TC1_SHIFT_SELECTOR2)) ||
	     (vt3_can_period_TC1_SHIFT_SELECTOR2 == 0 && vt3_can_trigger_TC1_SHIFT_SELECTOR2 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((TC1_2_TransmissionGearShiftInhbtRq & 0x03));
 		/* little-endian */
 		db[0] |= (BYTE)(((TC1_2_TrnsmTrqCnvLockupDisableRq & 0x03) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((TC1_2_DisengageDrivelineRequest & 0x03) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((TC1_2_TrnsmReverseGearShftInhbtRq & 0x03) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)((TC1_2_RequestedPercentClutchSlip & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((TC1_2_TransmissionRequestedGear & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((TC1_2_DisengiffLockRequestFrontAxl1 & 0x03));
 		/* little-endian */
 		db[3] |= (BYTE)(((TC1_2_DisengiffLockRequestFrontAxl2 & 0x03) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((TC1_2_DisengageDiffLockRequestRearAxl1 & 0x03) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((TC1_2_DisengageDiffLockRequestRearAxl2 & 0x03) << 6));
 		/* little-endian */
 		db[4] |= (BYTE)((TC1_2_DisengageDiffLockRequestCentral & 0x03));
 		/* little-endian */
 		db[4] |= (BYTE)(((TC1_2_DisengiffLockRequestCentralFront & 0x03) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((TC1_2_DisengiffLockRequestCentralRear & 0x03) << 4));
 		/* little-endian */
 		db[5] |= (BYTE)((TC1_2_TransmissionMode1 & 0x03));
 		/* little-endian */
 		db[5] |= (BYTE)(((TC1_2_TransmissionMode2 & 0x03) << 2));
 		/* little-endian */
 		db[5] |= (BYTE)(((TC1_2_TransmissionMode3 & 0x03) << 4));
 		/* little-endian */
 		db[5] |= (BYTE)(((TC1_2_TransmissionMode4 & 0x03) << 6));
 		/* little-endian */
 		db[6] |= (BYTE)(((TC1_2_TransmissionRequestedLaunchGear & 0x0F) << 2));
 		/* little-endian */
 		db[6] |= (BYTE)(((TC1_2_TrnsmShftSlctorDisplayMdeSw & 0x03) << 6));
 		/* little-endian */
 		db[7] |= (BYTE)((TC1_2_TransmissionMode5 & 0x03));
 		/* little-endian */
 		db[7] |= (BYTE)(((TC1_2_TransmissionMode6 & 0x03) << 2));
 		/* little-endian */
 		db[7] |= (BYTE)(((TC1_2_TransmissionMode7 & 0x03) << 4));
 		/* little-endian */
 		db[7] |= (BYTE)(((TC1_2_TransmissionMode8 & 0x03) << 6));
 		/* little-endian */
 		db[6] |= (BYTE)((TC1_2_TransmissionRequestedLaunchGear_res & 0x03));

		/* send message */
		if ( vt3_send_canmsg(1, 0x2C010306, 8, db) == ERR_OK )
		{
			vt3_can_trigger_TC1_SHIFT_SELECTOR2 = 0;
			vt3_can_tx_timeout_TC1_SHIFT_SELECTOR2 = TIME_TO_TICKS_CAN_TX(vt3_can_period_TC1_SHIFT_SELECTOR2);
		}
	}

	/* TX message: CCVS_Cruise_ControlVehicle_Speed2 */
	if ( (vt3_can_period_CCVS_Cruise_ControlVehicle_Speed2 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed2)) ||
	     (vt3_can_period_CCVS_Cruise_ControlVehicle_Speed2 == 0 && vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed2 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((Cummins_TwoSpeedAxleSwitch & 0x03));
 		/* little-endian */
 		db[0] |= (BYTE)(((Cummins_ParkingBrakeSwitch & 0x03) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((Cummins_CruiseControlPauseSwitch & 0x03) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((Cummins_ParkBrakeReleaseInhibitRequest & 0x03) << 6));
 		/* little-endian */
 		db[3] |= (BYTE)((Cummins_CruiseControlActive & 0x03));
 		/* little-endian */
 		db[3] |= (BYTE)(((Cummins_CruiseControlEnableSwitch & 0x03) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((Cummins_BrakeSwitch & 0x03) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((Cummins_ClutchSwitch & 0x03) << 6));
 		/* little-endian */
 		db[4] |= (BYTE)((Cummins_CruiseControlSetSwitch & 0x03));
 		/* little-endian */
 		db[4] |= (BYTE)(((Cummins_CruiseControlCoastSwitch & 0x03) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((Cummins_CruiseControlResumeSwitch & 0x03) << 4));
 		/* little-endian */
 		db[4] |= (BYTE)(((Cummins_CruiseControlAccelerateSwitch & 0x03) << 6));
 		/* little-endian */
 		db[5] |= (BYTE)((Cummins_CruiseControlSetSpeed & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)(((Cummins_CruiseControlStates & 0x07) << 5));
 		/* little-endian */
 		db[7] |= (BYTE)((Cummins_EngineIdleIncrementSwitch & 0x03));
 		/* little-endian */
 		db[7] |= (BYTE)(((Cummins_EngineIdleDecrementSwitch & 0x03) << 2));
 		/* little-endian */
 		db[7] |= (BYTE)(((Cummins_EngineTestModeSwitch & 0x03) << 4));
 		/* little-endian */
 		db[7] |= (BYTE)(((Cummins_EngineShutdownOverrideSwitch & 0x03) << 6));
 		tmp = ((DINT)Cummins_WheelBasedVehicleSpeed) * 256;
 		/* little-endian */
 		db[1] |= (BYTE)((tmp & 0xFF));
 		db[2] |= (BYTE)(((tmp >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(1, 0x2CFEF111, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed2 = 0;
			vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed2 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CCVS_Cruise_ControlVehicle_Speed2);
		}
	}


	/******************************************************************************/
	/* transmit messages to remote I/O devices (only for master) */
	/******************************************************************************/

}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANJ1939_C */

/* end of file */
