/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANOPEN_C
#define INCLUDE__VT3_CAN__CANOPEN_C

#include <stdlib.h>
#include "vt3_runtime.h"
#include "vt3_canlib.h"
#include "vt3_POU_common.h"
#include "vt3_CAN__CanOpen.h"
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
/* message:  CAN_151 */
/* COB-ID:   0x00000151 */
/* CAN port: 0 */
static void canrx_0_00000151_CAN_151(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: EngineSpeed */
	if ( dlc >= 2 )
	{
		MC2M_TERA_EngineSpeed = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: VehicleSpeed */
	if ( dlc >= 3 )
	{
		MC2M_TERA_VehicleSpeed = (USINT)((USINT)db[2]);
	}
	/* extract variable: FuelLevel_1 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_FuelLevel_1 = (SINT)((SINT)db[3]);
	}
	/* extract variable: EngineTempValue */
	if ( dlc >= 5 )
	{
		MC2M_TERA_EngineTempValue = (USINT)((USINT)db[4]);
	}
	/* extract variable: BatteryLevel */
	if ( dlc >= 7 )
	{
		MC2M_TERA_BatteryLevel = (UINT)(((UINT)db[5] | ((UINT)db[6] << 8)));
	}
	/* extract variable: EngineOilPressure */
	if ( dlc >= 8 )
	{
		MC2M_TERA_EngineOilPressure = (USINT)((USINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_152 */
/* COB-ID:   0x00000152 */
/* CAN port: 0 */
static void canrx_0_00000152_CAN_152(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ParkingBrakePressure */
	if ( dlc >= 1 )
	{
		MC2M_TERA_ParkingBrakePressure = (USINT)((USINT)db[0]);
	}
	/* extract variable: ServiceBrake1 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_ServiceBrake1 = (USINT)((USINT)db[1]);
	}
	/* extract variable: ServiceBrake2 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_ServiceBrake2 = (USINT)((USINT)db[2]);
	}
	/* extract variable: AccessoryPressure */
	if ( dlc >= 4 )
	{
		MC2M_TERA_AccessoryPressure = (USINT)((USINT)db[3]);
	}
	/* extract variable: TransOilTemperature */
	if ( dlc >= 5 )
	{
		MC2M_TERA_TransOilTemperature = (USINT)((USINT)db[4]);
	}
	/* extract variable: CurrentGear */
	if ( dlc >= 6 )
	{
		MC2M_TERA_CurrentGear = (SINT)((SINT)db[5]);
	}
	/* extract variable: OutSideTemperature */
	if ( dlc >= 7 )
	{
		MC2M_TERA_OutSideTemperature = (SINT)((SINT)db[6]);
	}
	/* extract variable: InSideTemperature */
	if ( dlc >= 8 )
	{
		MC2M_TERA_InSideTemperature = (SINT)((SINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_153 */
/* COB-ID:   0x00000153 */
/* CAN port: 0 */
static void canrx_0_00000153_CAN_153(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: L01 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L01 = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: L02 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L02 = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: L03 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L03 = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: L04 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L04 = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: L05 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L05 = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: L06 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L06 = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: L07 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L07 = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: L08 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_Icon_Status_L08 = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: L09 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L09 = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: L10 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L10 = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}
	/* extract variable: L11 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L11 = (BOOL)((((BOOL)db[1] >> 2) & 0x01));
	}
	/* extract variable: L12 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L12 = (BOOL)((((BOOL)db[1] >> 3) & 0x01));
	}
	/* extract variable: L13 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L13 = (BOOL)((((BOOL)db[1] >> 4) & 0x01));
	}
	/* extract variable: L14_1 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L14_1 = (BOOL)((((BOOL)db[1] >> 5) & 0x01));
	}
	/* extract variable: L15 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L15 = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: L16 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_Icon_Status_L16 = (BOOL)((((BOOL)db[1] >> 7) & 0x01));
	}
	/* extract variable: L17 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L17 = (BOOL)(((BOOL)db[2] & 0x01));
	}
	/* extract variable: L18 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L18 = (BOOL)((((BOOL)db[2] >> 1) & 0x01));
	}
	/* extract variable: L19 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L19 = (BOOL)((((BOOL)db[2] >> 2) & 0x01));
	}
	/* extract variable: L20 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L20 = (BOOL)((((BOOL)db[2] >> 3) & 0x01));
	}
	/* extract variable: L21 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L21 = (BOOL)((((BOOL)db[2] >> 4) & 0x01));
	}
	/* extract variable: L22 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L22 = (BOOL)((((BOOL)db[2] >> 5) & 0x01));
	}
	/* extract variable: L23 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L23 = (BOOL)((((BOOL)db[2] >> 6) & 0x01));
	}
	/* extract variable: L24 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_Icon_Status_L24 = (BOOL)((((BOOL)db[2] >> 7) & 0x01));
	}
	/* extract variable: L25 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L25 = (BOOL)(((BOOL)db[3] & 0x01));
	}
	/* extract variable: L26 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L26 = (BOOL)((((BOOL)db[3] >> 1) & 0x01));
	}
	/* extract variable: L27 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L27 = (BOOL)((((BOOL)db[3] >> 2) & 0x01));
	}
	/* extract variable: L28 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L28 = (BOOL)((((BOOL)db[3] >> 3) & 0x01));
	}
	/* extract variable: L29 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L29 = (BOOL)((((BOOL)db[3] >> 4) & 0x01));
	}
	/* extract variable: L30 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L30 = (BOOL)((((BOOL)db[3] >> 5) & 0x01));
	}
	/* extract variable: L31 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L31 = (BOOL)((((BOOL)db[3] >> 6) & 0x01));
	}
	/* extract variable: L32 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_Icon_Status_L32 = (BOOL)((((BOOL)db[3] >> 7) & 0x01));
	}
	/* extract variable: L33 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L33 = (BOOL)(((BOOL)db[4] & 0x01));
	}
	/* extract variable: L34 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L34 = (BOOL)((((BOOL)db[4] >> 1) & 0x01));
	}
	/* extract variable: L35 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L35 = (BOOL)((((BOOL)db[4] >> 2) & 0x01));
	}
	/* extract variable: L36 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L36 = (BOOL)((((BOOL)db[4] >> 3) & 0x01));
	}
	/* extract variable: L37 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L37 = (BOOL)((((BOOL)db[4] >> 4) & 0x01));
	}
	/* extract variable: L38 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L38 = (BOOL)((((BOOL)db[4] >> 5) & 0x01));
	}
	/* extract variable: L39 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L39 = (BOOL)((((BOOL)db[4] >> 6) & 0x01));
	}
	/* extract variable: L40 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_Icon_Status_L40 = (BOOL)((((BOOL)db[4] >> 7) & 0x01));
	}
	/* extract variable: L41 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_L41 = (BOOL)(((BOOL)db[5] & 0x01));
	}
	/* extract variable: L42 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_L42 = (BOOL)((((BOOL)db[5] >> 1) & 0x01));
	}
	/* extract variable: L43 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_L43 = (BOOL)((((BOOL)db[5] >> 2) & 0x01));
	}
	/* extract variable: BO_S1 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_BO_S1 = (BOOL)((((BOOL)db[5] >> 3) & 0x01));
	}
	/* extract variable: BO_S2 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_BO_S2 = (BOOL)((((BOOL)db[5] >> 4) & 0x01));
	}
	/* extract variable: BO_S3 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_BO_S3 = (BOOL)((((BOOL)db[5] >> 5) & 0x01));
	}
	/* extract variable: GIGA_Bsy */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_GIGA_Bsy = (BOOL)((((BOOL)db[5] >> 6) & 0x01));
	}
	/* extract variable: BO_1 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Icon_Status_BO_1 = (BOOL)((((BOOL)db[5] >> 7) & 0x01));
	}
	/* extract variable: BO_2 */
	if ( dlc >= 7 )
	{
		MC2M_TERA_Icon_Status_BO_2 = (BOOL)(((BOOL)db[6] & 0x01));
	}
	/* extract variable: L14_2 */
	if ( dlc >= 7 )
	{
		MC2M_TERA_Icon_Status_L14_2 = (BOOL)((((BOOL)db[6] >> 2) & 0x01));
	}
	/* extract variable: L14_3 */
	if ( dlc >= 7 )
	{
		MC2M_TERA_Icon_Status_L14_3 = (BOOL)((((BOOL)db[6] >> 3) & 0x01));
	}
	/* extract variable: L14_4 */
	if ( dlc >= 7 )
	{
		MC2M_TERA_Icon_Status_L14_4 = (BOOL)((((BOOL)db[6] >> 4) & 0x01));
	}
	/* extract variable: L14_5 */
	if ( dlc >= 7 )
	{
		MC2M_TERA_Icon_Status_L14_5 = (BOOL)((((BOOL)db[6] >> 5) & 0x01));
	}
	/* extract variable: TankType */
	if ( dlc >= 8 )
	{
		MC2M_TERA_Icon_Status_TankType = (SINT)(((((SINT)db[6] >> 6) & 0x03) | (((SINT)db[7] & 0x3F) << 2)));
	}
	/* extract variable: BO_0 */
	if ( dlc >= 8 )
	{
		MC2M_TERA_Icon_Status_BO_0 = (BOOL)((((BOOL)db[7] >> 6) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_154 */
/* COB-ID:   0x00000154 */
/* CAN port: 0 */
static void canrx_0_00000154_CAN_154(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: L01 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L01 = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: L02 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L02 = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: L03 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L03 = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: L04 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L04 = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: L05 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L05 = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: L06 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L06 = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: L07 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L07 = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: L08 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_LampAlarm_L08 = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: L09 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L09 = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: L10 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L10 = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}
	/* extract variable: L11 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L11 = (BOOL)((((BOOL)db[1] >> 2) & 0x01));
	}
	/* extract variable: L12 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L12 = (BOOL)((((BOOL)db[1] >> 3) & 0x01));
	}
	/* extract variable: L13 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L13 = (BOOL)((((BOOL)db[1] >> 4) & 0x01));
	}
	/* extract variable: L14 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L14 = (BOOL)((((BOOL)db[1] >> 5) & 0x01));
	}
	/* extract variable: L15 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L15 = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: L16 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_LampAlarm_L16 = (BOOL)((((BOOL)db[1] >> 7) & 0x01));
	}
	/* extract variable: L17 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L17 = (BOOL)(((BOOL)db[2] & 0x01));
	}
	/* extract variable: L18 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L18 = (BOOL)((((BOOL)db[2] >> 1) & 0x01));
	}
	/* extract variable: L19 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L19 = (BOOL)((((BOOL)db[2] >> 2) & 0x01));
	}
	/* extract variable: L20 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L20 = (BOOL)((((BOOL)db[2] >> 3) & 0x01));
	}
	/* extract variable: L21 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L21 = (BOOL)((((BOOL)db[2] >> 4) & 0x01));
	}
	/* extract variable: L22 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L22 = (BOOL)((((BOOL)db[2] >> 5) & 0x01));
	}
	/* extract variable: L23 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L23 = (BOOL)((((BOOL)db[2] >> 6) & 0x01));
	}
	/* extract variable: L24 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_LampAlarm_L24 = (BOOL)((((BOOL)db[2] >> 7) & 0x01));
	}
	/* extract variable: L25 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L25 = (BOOL)(((BOOL)db[3] & 0x01));
	}
	/* extract variable: L26 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L26 = (BOOL)((((BOOL)db[3] >> 1) & 0x01));
	}
	/* extract variable: L27 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L27 = (BOOL)((((BOOL)db[3] >> 2) & 0x01));
	}
	/* extract variable: L28 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L28 = (BOOL)((((BOOL)db[3] >> 3) & 0x01));
	}
	/* extract variable: L29 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L29 = (BOOL)((((BOOL)db[3] >> 4) & 0x01));
	}
	/* extract variable: L30 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L30 = (BOOL)((((BOOL)db[3] >> 5) & 0x01));
	}
	/* extract variable: L31 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L31 = (BOOL)((((BOOL)db[3] >> 6) & 0x01));
	}
	/* extract variable: L32 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_LampAlarm_L32 = (BOOL)((((BOOL)db[3] >> 7) & 0x01));
	}
	/* extract variable: L33 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_LampAlarm_L33 = (BOOL)(((BOOL)db[4] & 0x01));
	}
	/* extract variable: L34 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_LampAlarm_L34 = (BOOL)((((BOOL)db[4] >> 1) & 0x01));
	}
	/* extract variable: L35 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_LampAlarm_L35 = (BOOL)((((BOOL)db[4] >> 2) & 0x01));
	}
	/* extract variable: L36 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_LampAlarm_L36 = (BOOL)((((BOOL)db[4] >> 3) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_155 */
/* COB-ID:   0x00000155 */
/* CAN port: 0 */
static void canrx_0_00000155_CAN_155(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: AngleX */
	if ( dlc >= 2 )
	{
		MC2M_TERA_AngleX = (INT)(((INT)db[0] | ((INT)db[1] << 8)));
	}
	/* extract variable: AngleY */
	if ( dlc >= 4 )
	{
		MC2M_TERA_AngleY = (INT)(((INT)db[2] | ((INT)db[3] << 8)));
	}
	/* extract variable: FuelLevel_2 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_FuelLevel_2 = (SINT)((SINT)db[4]);
	}
	/* extract variable: FuelTankSel1 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_FuelTankSel1 = (SINT)(((SINT)db[5] & 0x07));
	}
	/* extract variable: FuelTankSel2 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_FuelTankSel2 = (SINT)((((SINT)db[5] >> 3) & 0x07));
	}
	/* extract variable: BackDoorTest_Buzzer */
	if ( dlc >= 7 )
	{
		MC2M_TERA_BackDoorTest_Buzzer = (USINT)((USINT)db[6]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_156 */
/* COB-ID:   0x00000156 */
/* CAN port: 0 */
static void canrx_0_00000156_CAN_156(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: SWConfig0 */
	if ( dlc >= 1 )
	{
		MC2M_TERA_SWConfig0 = (USINT)((USINT)db[0]);
	}
	/* extract variable: SWConfig1 */
	if ( dlc >= 2 )
	{
		MC2M_TERA_SWConfig1 = (USINT)((USINT)db[1]);
	}
	/* extract variable: SWVersions0 */
	if ( dlc >= 3 )
	{
		MC2M_TERA_SWVersions0 = (USINT)((USINT)db[2]);
	}
	/* extract variable: SWVersions1 */
	if ( dlc >= 4 )
	{
		MC2M_TERA_SWVersions1 = (USINT)((USINT)db[3]);
	}
	/* extract variable: SWVersions2 */
	if ( dlc >= 5 )
	{
		MC2M_TERA_SWVersions2 = (USINT)((USINT)db[4]);
	}
	/* extract variable: AuxPressureLow_Stat */
	if ( dlc >= 6 )
	{
		MC2M_TERA_AuxPressureLow_Stat = (BOOL)(((BOOL)db[5] & 0x01));
	}
	/* extract variable: Engine_Brake_Stat */
	if ( dlc >= 6 )
	{
		MC2M_TERA_Engine_Brake_Stat = (BOOL)((((BOOL)db[5] >> 1) & 0x01));
	}
	/* extract variable: WaterInFuel_Stat */
	if ( dlc >= 6 )
	{
		MC2M_TERA_WaterInFuel_Stat = (BOOL)((((BOOL)db[5] >> 2) & 0x01));
	}
	/* extract variable: BackDoorTest_Prd */
	if ( dlc >= 8 )
	{
		MC2M_TERA_BackDoorTest_Prd = (UINT)(((UINT)db[6] | ((UINT)db[7] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_157 */
/* COB-ID:   0x00000157 */
/* CAN port: 0 */
static void canrx_0_00000157_CAN_157(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: INP45 */
	if ( dlc >= 6 )
	{
		MC2M_TERA_DIAG_INP45 = (BOOL)((((BOOL)db[5] >> 5) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_162 */
/* COB-ID:   0x00000162 */
/* CAN port: 0 */
static void canrx_0_00000162_CAN_162(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: PresLevel_Normalized */
	if ( dlc >= 6 )
	{
		MC2M_TERA_DIAG_PresLevel_Normalized = (INT)(((INT)db[4] | ((INT)db[5] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_163 */
/* COB-ID:   0x00000163 */
/* CAN port: 0 */
static void canrx_0_00000163_CAN_163(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: HTempLevel_Normalized */
	if ( dlc >= 2 )
	{
		MC2M_TERA_DIAG_HTempLevel_Normalized = (INT)(((INT)db[0] | ((INT)db[1] << 8)));
	}
	/* extract variable: TotalEngineHours */
	if ( dlc >= 6 )
	{
		MC2M_TERA_DIAG_TotalEngineHours = (UDINT)(((((UDINT)db[2] | ((UDINT)db[3] << 8)) | ((UDINT)db[4] << 16)) | ((UDINT)db[5] << 24)));
	}
	/* extract variable: Stat_4x4 */
	if ( dlc >= 7 )
	{
		MC2M_TERA_DIAG_Stat_4x4 = (SINT)((SINT)db[6]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_164 */
/* COB-ID:   0x00000164 */
/* CAN port: 0 */
static void canrx_0_00000164_CAN_164(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: TCM_SuspectParameterNumber */
	if ( dlc >= 4 )
	{
		MC2M_TERA_TCM_SuspectParameterNumber = (UDINT)(((((UDINT)db[0] | ((UDINT)db[1] << 8)) | ((UDINT)db[2] << 16)) | ((UDINT)db[3] << 24)));
	}
	/* extract variable: ECM_SuspectParameterNumber */
	if ( dlc >= 8 )
	{
		MC2M_TERA_ECM_SuspectParameterNumber = (UDINT)(((((UDINT)db[4] | ((UDINT)db[5] << 8)) | ((UDINT)db[6] << 16)) | ((UDINT)db[7] << 24)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_165 */
/* COB-ID:   0x00000165 */
/* CAN port: 0 */
static void canrx_0_00000165_CAN_165(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: EBS_SuspectParameterNumber */
	if ( dlc >= 4 )
	{
		MC2M_TERA_EBS_SuspectParameterNumber = (UDINT)(((((UDINT)db[0] | ((UDINT)db[1] << 8)) | ((UDINT)db[2] << 16)) | ((UDINT)db[3] << 24)));
	}
	/* extract variable: TCM_FailureModeIdentifier */
	if ( dlc >= 5 )
	{
		MC2M_TERA_TCM_FailureModeIdentifier = (USINT)((USINT)db[4]);
	}
	/* extract variable: ECM_FailureModeIdentifier */
	if ( dlc >= 6 )
	{
		MC2M_TERA_ECM_FailureModeIdentifier = (USINT)((USINT)db[5]);
	}
	/* extract variable: EBS_FailureModeIdentifier */
	if ( dlc >= 7 )
	{
		MC2M_TERA_EBS_FailureModeIdentifier = (USINT)((USINT)db[6]);
	}
	/* extract variable: TCM_OccurrenceCount */
	if ( dlc >= 8 )
	{
		MC2M_TERA_TCM_OccurrenceCount = (USINT)((USINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_166 */
/* COB-ID:   0x00000166 */
/* CAN port: 0 */
static void canrx_0_00000166_CAN_166(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ECM_OccurrenceCount */
	if ( dlc >= 1 )
	{
		MC2M_TERA_ECM_OccurrenceCount = (USINT)((USINT)db[0]);
	}
	/* extract variable: EBS_OccurrenceCount */
	if ( dlc >= 2 )
	{
		MC2M_TERA_EBS_OccurrenceCount = (USINT)((USINT)db[1]);
	}
	/* extract variable: RadiatorTemp */
	if ( dlc >= 3 )
	{
		MC2M_TERA_RadiatorTemp = (INT)((INT)db[2]);
	}
	/* extract variable: HTempInputFiltered */
	if ( dlc >= 5 )
	{
		MC2M_TERA_HTempInputFiltered = (UINT)(((UINT)db[3] | ((UINT)db[4] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_168 */
/* COB-ID:   0x00000168 */
/* CAN port: 0 */
static void canrx_0_00000168_CAN_168(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: TripCounter */
	if ( dlc >= 4 )
	{
		MC2M_TERA_TripCounter = (UDINT)(((((UDINT)db[0] | ((UDINT)db[1] << 8)) | ((UDINT)db[2] << 16)) | ((UDINT)db[3] << 24)));
	}
	/* extract variable: TotalOdometer */
	if ( dlc >= 8 )
	{
		MC2M_TERA_TotalOdometer = (UDINT)(((((UDINT)db[4] | ((UDINT)db[5] << 8)) | ((UDINT)db[6] << 16)) | ((UDINT)db[7] << 24)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_169 */
/* COB-ID:   0x00000169 */
/* CAN port: 0 */
static void canrx_0_00000169_CAN_169(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: TotalEngineHours_Old */
	if ( dlc >= 4 )
	{
		MC2M_TERA_DIAG_TotalEngineHours_Old = (UDINT)(((((UDINT)db[0] | ((UDINT)db[1] << 8)) | ((UDINT)db[2] << 16)) | ((UDINT)db[3] << 24)));
	}
	/* extract variable: EngineCoolantLevel */
	if ( dlc >= 5 )
	{
		MC2M_TERA_DIAG_EngineCoolantLevel = (USINT)((USINT)db[4]);
	}
	/* extract variable: VvrPump */
	if ( dlc >= 6 )
	{
		MC2M_TERA_DIAG_VvrPump = (INT)((INT)db[5]);
	}
	/* extract variable: VVRPumpTrigger */
	if ( dlc >= 7 )
	{
		MC2M_TERA_DIAG_VVRPumpTrigger = (SINT)(((SINT)db[6] & 0x0F));
	}
	/* extract variable: CACTemp */
	if ( dlc >= 8 )
	{
		MC2M_TERA_DIAG_CACTemp = (INT)(((((INT)db[6] >> 4) & 0x0F) | (((INT)db[7] & 0x0F) << 4)));
	}
	/* extract variable: RadiatorTemp */
	if ( dlc >= 8 )
	{
		MC2M_TERA_DIAG_RadiatorTemp = (INT)((((INT)db[7] >> 4) & 0x0F));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_181 */
/* COB-ID:   0x00000181 */
/* CAN port: 0 */
static void canrx_0_00000181_CAN_181(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: KL15_Ignition */
	if ( dlc >= 1 )
	{
		MUX_KL15_Ignition = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_186 */
/* COB-ID:   0x00000186 */
/* CAN port: 0 */
static void canrx_0_00000186_CAN_186(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: DIGIN00_Winch_RC_Up */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN00_Winch_RC_Up = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: DIGIN29 */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN29 = (BOOL)((((BOOL)db[3] >> 5) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_187 */
/* COB-ID:   0x00000187 */
/* CAN port: 0 */
static void canrx_0_00000187_CAN_187(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: DIGIN29 */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN29 = (BOOL)((((BOOL)db[3] >> 5) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_18D */
/* COB-ID:   0x0000018D */
/* CAN port: 0 */
static void canrx_0_0000018D_CAN_18D(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: AngleX */
	if ( dlc >= 2 )
	{
		AMUCBO_AngleX = (INT)(((INT)db[0] | ((INT)db[1] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_792 */
/* COB-ID:   0x00000792 */
/* CAN port: 0 */
static void canrx_0_00000792_CAN_792(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: hydraulic_tank_pressure */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_hydraulic_tank_pressure = (USINT)((USINT)db[0]);
	}
	/* extract variable: hydraulic_tank_temp */
	if ( dlc >= 2 )
	{
		NMSGUI_MC2M_hydraulic_tank_temp = (SINT)((SINT)db[1]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_793 */
/* COB-ID:   0x00000793 */
/* CAN port: 0 */
static void canrx_0_00000793_CAN_793(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: hydraulic_tank_pressure_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_hydraulic_tank_pressure_touch = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: hydraulic_tank_temp_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_hydraulic_tank_temp_touch = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_Light_4E */
/* COB-ID:   0x2CFDCC4E */
/* CAN port: 0 */
static void canrx_0_2CFDCC4E_CAN_Light_4E(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: Light_P1_Park */
	if ( dlc >= 1 )
	{
		OMNIA_LEFT_Light_P1_Park = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_Wiper_4F */
/* COB-ID:   0x38FDCD4F */
/* CAN port: 0 */
static void canrx_0_38FDCD4F_CAN_Wiper_4F(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: WiperLOW */
	if ( dlc >= 1 )
	{
		OMNIA_RIGHT_WiperLOW = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanOpen[22] = {
	/*    cob-id    tout  alm  alm   mux   mux  call function                            */
	/*                    off   on   pos    id                                           */
	{ 0x00000151,    150,   3,   1,  255,    0, canrx_0_00000151_CAN_151                 },
	{ 0x00000152,    150,   3,   1,  255,    0, canrx_0_00000152_CAN_152                 },
	{ 0x00000153,   1500,   3,   1,  255,    0, canrx_0_00000153_CAN_153                 },
	{ 0x00000154,   1500,   3,   1,  255,    0, canrx_0_00000154_CAN_154                 },
	{ 0x00000155,   1500,   3,   1,  255,    0, canrx_0_00000155_CAN_155                 },
	{ 0x00000156,   1500,   3,   1,  255,    0, canrx_0_00000156_CAN_156                 },
	{ 0x00000157,   1500,   3,   1,  255,    0, canrx_0_00000157_CAN_157                 },
	{ 0x00000162,   1500,   3,   1,  255,    0, canrx_0_00000162_CAN_162                 },
	{ 0x00000163,   1500,   3,   1,  255,    0, canrx_0_00000163_CAN_163                 },
	{ 0x00000164,   1500,   3,   1,  255,    0, canrx_0_00000164_CAN_164                 },
	{ 0x00000165,   1500,   3,   1,  255,    0, canrx_0_00000165_CAN_165                 },
	{ 0x00000166,   1500,   3,   1,  255,    0, canrx_0_00000166_CAN_166                 },
	{ 0x00000168,   1500,   3,   1,  255,    0, canrx_0_00000168_CAN_168                 },
	{ 0x00000169,   1500,   3,   1,  255,    0, canrx_0_00000169_CAN_169                 },
	{ 0x00000181,   1500,   3,   1,  255,    0, canrx_0_00000181_CAN_181                 },
	{ 0x00000186,    150,   3,   1,  255,    0, canrx_0_00000186_CAN_186                 },
	{ 0x00000187,    150,   3,   1,  255,    0, canrx_0_00000187_CAN_187                 },
	{ 0x0000018D,    500,   3,   1,  255,    0, canrx_0_0000018D_CAN_18D                 },
	{ 0x00000792,    500,   3,   1,  255,    0, canrx_0_00000792_CAN_792                 },
	{ 0x00000793,    500,   3,   1,  255,    0, canrx_0_00000793_CAN_793                 },
	{ 0x0CFDCC4E,   1500,   1,   1,  255,    0, canrx_0_2CFDCC4E_CAN_Light_4E            },
	{ 0x18FDCD4F,   1500,   1,   1,  255,    0, canrx_0_38FDCD4F_CAN_Wiper_4F            },
};

/* initializers for receive and transmit variables */
static const UINT FAR __init_value__MC2M_TERA_EngineSpeed = ((UINT)0U);
static const USINT FAR __init_value__MC2M_TERA_VehicleSpeed = ((USINT)0U);
static const SINT FAR __init_value__MC2M_TERA_FuelLevel_1 = ((SINT)0);
static const USINT FAR __init_value__MC2M_TERA_EngineTempValue = ((USINT)0U);
static const UINT FAR __init_value__MC2M_TERA_BatteryLevel = ((UINT)0U);
static const USINT FAR __init_value__MC2M_TERA_EngineOilPressure = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_ParkingBrakePressure = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_ServiceBrake1 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_ServiceBrake2 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_AccessoryPressure = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_TransOilTemperature = ((USINT)0U);
static const SINT FAR __init_value__MC2M_TERA_CurrentGear = ((SINT)0);
static const SINT FAR __init_value__MC2M_TERA_OutSideTemperature = ((SINT)0);
static const SINT FAR __init_value__MC2M_TERA_InSideTemperature = ((SINT)0);
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L01 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L02 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L03 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L04 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L05 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L06 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L07 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L08 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L09 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L10 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L11 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L12 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L13 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L14_1 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L15 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L16 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L17 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L18 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L19 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L20 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L21 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L22 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L23 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L24 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L25 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L26 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L27 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L28 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L29 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L30 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L31 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L32 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L33 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L34 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L35 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L36 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L37 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L38 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L39 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L40 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L41 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L42 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L43 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_BO_S1 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_BO_S2 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_BO_S3 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_GIGA_Bsy = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_BO_1 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_BO_2 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L14_2 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L14_3 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L14_4 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_L14_5 = FALSE;
static const SINT FAR __init_value__MC2M_TERA_Icon_Status_TankType = ((SINT)0);
static const BOOL FAR __init_value__MC2M_TERA_Icon_Status_BO_0 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L01 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L02 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L03 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L04 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L05 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L06 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L07 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L08 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L09 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L10 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L11 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L12 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L13 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L14 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L15 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L16 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L17 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L18 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L19 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L20 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L21 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L22 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L23 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L24 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L25 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L26 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L27 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L28 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L29 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L30 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L31 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L32 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L33 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L34 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L35 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_LampAlarm_L36 = FALSE;
static const INT FAR __init_value__MC2M_TERA_AngleX = ((INT)0);
static const INT FAR __init_value__MC2M_TERA_AngleY = ((INT)0);
static const SINT FAR __init_value__MC2M_TERA_FuelLevel_2 = ((SINT)0);
static const SINT FAR __init_value__MC2M_TERA_FuelTankSel1 = ((SINT)0);
static const SINT FAR __init_value__MC2M_TERA_FuelTankSel2 = ((SINT)0);
static const USINT FAR __init_value__MC2M_TERA_BackDoorTest_Buzzer = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_SWConfig0 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_SWConfig1 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_SWVersions0 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_SWVersions1 = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_SWVersions2 = ((USINT)0U);
static const BOOL FAR __init_value__MC2M_TERA_AuxPressureLow_Stat = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_Engine_Brake_Stat = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_WaterInFuel_Stat = FALSE;
static const UINT FAR __init_value__MC2M_TERA_BackDoorTest_Prd = ((UINT)0U);
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP45 = FALSE;
static const INT FAR __init_value__MC2M_TERA_DIAG_PresLevel_Normalized = ((INT)1);
static const INT FAR __init_value__MC2M_TERA_DIAG_HTempLevel_Normalized = ((INT)0);
static const UDINT FAR __init_value__MC2M_TERA_DIAG_TotalEngineHours = ((UDINT)0UL);
static const SINT FAR __init_value__MC2M_TERA_DIAG_Stat_4x4 = ((SINT)0);
static const UDINT FAR __init_value__MC2M_TERA_TCM_SuspectParameterNumber = ((UDINT)0UL);
static const UDINT FAR __init_value__MC2M_TERA_ECM_SuspectParameterNumber = ((UDINT)0UL);
static const UDINT FAR __init_value__MC2M_TERA_EBS_SuspectParameterNumber = ((UDINT)0UL);
static const USINT FAR __init_value__MC2M_TERA_TCM_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_ECM_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_EBS_FailureModeIdentifier = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_TCM_OccurrenceCount = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_ECM_OccurrenceCount = ((USINT)0U);
static const USINT FAR __init_value__MC2M_TERA_EBS_OccurrenceCount = ((USINT)0U);
static const INT FAR __init_value__MC2M_TERA_RadiatorTemp = ((INT)0);
static const UINT FAR __init_value__MC2M_TERA_HTempInputFiltered = ((UINT)0U);
static const UDINT FAR __init_value__MC2M_TERA_TripCounter = ((UDINT)0UL);
static const UDINT FAR __init_value__MC2M_TERA_TotalOdometer = ((UDINT)0UL);
static const UDINT FAR __init_value__MC2M_TERA_DIAG_TotalEngineHours_Old = ((UDINT)0UL);
static const USINT FAR __init_value__MC2M_TERA_DIAG_EngineCoolantLevel = ((USINT)0U);
static const INT FAR __init_value__MC2M_TERA_DIAG_VvrPump = ((INT)0);
static const SINT FAR __init_value__MC2M_TERA_DIAG_VVRPumpTrigger = ((SINT)0);
static const INT FAR __init_value__MC2M_TERA_DIAG_CACTemp = ((INT)0);
static const INT FAR __init_value__MC2M_TERA_DIAG_RadiatorTemp = ((INT)0);
static const BOOL FAR __init_value__MUX_KL15_Ignition = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN00_Winch_RC_Up = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN29 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN29 = FALSE;
static const INT FAR __init_value__AMUCBO_AngleX = ((INT)0);
static const USINT FAR __init_value__NMSGUI_MC2M_hydraulic_tank_pressure = ((USINT)0U);
static const SINT FAR __init_value__NMSGUI_MC2M_hydraulic_tank_temp = ((SINT)0);
static const BOOL FAR __init_value__NMSGUI_MC2M_hydraulic_tank_pressure_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_hydraulic_tank_temp_touch = FALSE;
static const BOOL FAR __init_value__OMNIA_LEFT_Light_P1_Park = FALSE;
static const BOOL FAR __init_value__OMNIA_RIGHT_WiperLOW = FALSE;
static const BOOL FAR __init_value__GIGA_MC2M_ResetTrip = FALSE;
static const UDINT FAR __init_value__GIGA_MC2M_GIGAOdometerBackup = ((UDINT)0UL);

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanOpen[] = {
	{ &MC2M_TERA_EngineSpeed, &__init_value__MC2M_TERA_EngineSpeed, 2 },
	{ &MC2M_TERA_VehicleSpeed, &__init_value__MC2M_TERA_VehicleSpeed, 1 },
	{ &MC2M_TERA_FuelLevel_1, &__init_value__MC2M_TERA_FuelLevel_1, 1 },
	{ &MC2M_TERA_EngineTempValue, &__init_value__MC2M_TERA_EngineTempValue, 1 },
	{ &MC2M_TERA_BatteryLevel, &__init_value__MC2M_TERA_BatteryLevel, 2 },
	{ &MC2M_TERA_EngineOilPressure, &__init_value__MC2M_TERA_EngineOilPressure, 1 },
	{ &MC2M_TERA_ParkingBrakePressure, &__init_value__MC2M_TERA_ParkingBrakePressure, 1 },
	{ &MC2M_TERA_ServiceBrake1, &__init_value__MC2M_TERA_ServiceBrake1, 1 },
	{ &MC2M_TERA_ServiceBrake2, &__init_value__MC2M_TERA_ServiceBrake2, 1 },
	{ &MC2M_TERA_AccessoryPressure, &__init_value__MC2M_TERA_AccessoryPressure, 1 },
	{ &MC2M_TERA_TransOilTemperature, &__init_value__MC2M_TERA_TransOilTemperature, 1 },
	{ &MC2M_TERA_CurrentGear, &__init_value__MC2M_TERA_CurrentGear, 1 },
	{ &MC2M_TERA_OutSideTemperature, &__init_value__MC2M_TERA_OutSideTemperature, 1 },
	{ &MC2M_TERA_InSideTemperature, &__init_value__MC2M_TERA_InSideTemperature, 1 },
	{ &MC2M_TERA_Icon_Status_L01, &__init_value__MC2M_TERA_Icon_Status_L01, 1 },
	{ &MC2M_TERA_Icon_Status_L02, &__init_value__MC2M_TERA_Icon_Status_L02, 1 },
	{ &MC2M_TERA_Icon_Status_L03, &__init_value__MC2M_TERA_Icon_Status_L03, 1 },
	{ &MC2M_TERA_Icon_Status_L04, &__init_value__MC2M_TERA_Icon_Status_L04, 1 },
	{ &MC2M_TERA_Icon_Status_L05, &__init_value__MC2M_TERA_Icon_Status_L05, 1 },
	{ &MC2M_TERA_Icon_Status_L06, &__init_value__MC2M_TERA_Icon_Status_L06, 1 },
	{ &MC2M_TERA_Icon_Status_L07, &__init_value__MC2M_TERA_Icon_Status_L07, 1 },
	{ &MC2M_TERA_Icon_Status_L08, &__init_value__MC2M_TERA_Icon_Status_L08, 1 },
	{ &MC2M_TERA_Icon_Status_L09, &__init_value__MC2M_TERA_Icon_Status_L09, 1 },
	{ &MC2M_TERA_Icon_Status_L10, &__init_value__MC2M_TERA_Icon_Status_L10, 1 },
	{ &MC2M_TERA_Icon_Status_L11, &__init_value__MC2M_TERA_Icon_Status_L11, 1 },
	{ &MC2M_TERA_Icon_Status_L12, &__init_value__MC2M_TERA_Icon_Status_L12, 1 },
	{ &MC2M_TERA_Icon_Status_L13, &__init_value__MC2M_TERA_Icon_Status_L13, 1 },
	{ &MC2M_TERA_Icon_Status_L14_1, &__init_value__MC2M_TERA_Icon_Status_L14_1, 1 },
	{ &MC2M_TERA_Icon_Status_L15, &__init_value__MC2M_TERA_Icon_Status_L15, 1 },
	{ &MC2M_TERA_Icon_Status_L16, &__init_value__MC2M_TERA_Icon_Status_L16, 1 },
	{ &MC2M_TERA_Icon_Status_L17, &__init_value__MC2M_TERA_Icon_Status_L17, 1 },
	{ &MC2M_TERA_Icon_Status_L18, &__init_value__MC2M_TERA_Icon_Status_L18, 1 },
	{ &MC2M_TERA_Icon_Status_L19, &__init_value__MC2M_TERA_Icon_Status_L19, 1 },
	{ &MC2M_TERA_Icon_Status_L20, &__init_value__MC2M_TERA_Icon_Status_L20, 1 },
	{ &MC2M_TERA_Icon_Status_L21, &__init_value__MC2M_TERA_Icon_Status_L21, 1 },
	{ &MC2M_TERA_Icon_Status_L22, &__init_value__MC2M_TERA_Icon_Status_L22, 1 },
	{ &MC2M_TERA_Icon_Status_L23, &__init_value__MC2M_TERA_Icon_Status_L23, 1 },
	{ &MC2M_TERA_Icon_Status_L24, &__init_value__MC2M_TERA_Icon_Status_L24, 1 },
	{ &MC2M_TERA_Icon_Status_L25, &__init_value__MC2M_TERA_Icon_Status_L25, 1 },
	{ &MC2M_TERA_Icon_Status_L26, &__init_value__MC2M_TERA_Icon_Status_L26, 1 },
	{ &MC2M_TERA_Icon_Status_L27, &__init_value__MC2M_TERA_Icon_Status_L27, 1 },
	{ &MC2M_TERA_Icon_Status_L28, &__init_value__MC2M_TERA_Icon_Status_L28, 1 },
	{ &MC2M_TERA_Icon_Status_L29, &__init_value__MC2M_TERA_Icon_Status_L29, 1 },
	{ &MC2M_TERA_Icon_Status_L30, &__init_value__MC2M_TERA_Icon_Status_L30, 1 },
	{ &MC2M_TERA_Icon_Status_L31, &__init_value__MC2M_TERA_Icon_Status_L31, 1 },
	{ &MC2M_TERA_Icon_Status_L32, &__init_value__MC2M_TERA_Icon_Status_L32, 1 },
	{ &MC2M_TERA_Icon_Status_L33, &__init_value__MC2M_TERA_Icon_Status_L33, 1 },
	{ &MC2M_TERA_Icon_Status_L34, &__init_value__MC2M_TERA_Icon_Status_L34, 1 },
	{ &MC2M_TERA_Icon_Status_L35, &__init_value__MC2M_TERA_Icon_Status_L35, 1 },
	{ &MC2M_TERA_Icon_Status_L36, &__init_value__MC2M_TERA_Icon_Status_L36, 1 },
	{ &MC2M_TERA_Icon_Status_L37, &__init_value__MC2M_TERA_Icon_Status_L37, 1 },
	{ &MC2M_TERA_Icon_Status_L38, &__init_value__MC2M_TERA_Icon_Status_L38, 1 },
	{ &MC2M_TERA_Icon_Status_L39, &__init_value__MC2M_TERA_Icon_Status_L39, 1 },
	{ &MC2M_TERA_Icon_Status_L40, &__init_value__MC2M_TERA_Icon_Status_L40, 1 },
	{ &MC2M_TERA_Icon_Status_L41, &__init_value__MC2M_TERA_Icon_Status_L41, 1 },
	{ &MC2M_TERA_Icon_Status_L42, &__init_value__MC2M_TERA_Icon_Status_L42, 1 },
	{ &MC2M_TERA_Icon_Status_L43, &__init_value__MC2M_TERA_Icon_Status_L43, 1 },
	{ &MC2M_TERA_Icon_Status_BO_S1, &__init_value__MC2M_TERA_Icon_Status_BO_S1, 1 },
	{ &MC2M_TERA_Icon_Status_BO_S2, &__init_value__MC2M_TERA_Icon_Status_BO_S2, 1 },
	{ &MC2M_TERA_Icon_Status_BO_S3, &__init_value__MC2M_TERA_Icon_Status_BO_S3, 1 },
	{ &MC2M_TERA_Icon_Status_GIGA_Bsy, &__init_value__MC2M_TERA_Icon_Status_GIGA_Bsy, 1 },
	{ &MC2M_TERA_Icon_Status_BO_1, &__init_value__MC2M_TERA_Icon_Status_BO_1, 1 },
	{ &MC2M_TERA_Icon_Status_BO_2, &__init_value__MC2M_TERA_Icon_Status_BO_2, 1 },
	{ &MC2M_TERA_Icon_Status_L14_2, &__init_value__MC2M_TERA_Icon_Status_L14_2, 1 },
	{ &MC2M_TERA_Icon_Status_L14_3, &__init_value__MC2M_TERA_Icon_Status_L14_3, 1 },
	{ &MC2M_TERA_Icon_Status_L14_4, &__init_value__MC2M_TERA_Icon_Status_L14_4, 1 },
	{ &MC2M_TERA_Icon_Status_L14_5, &__init_value__MC2M_TERA_Icon_Status_L14_5, 1 },
	{ &MC2M_TERA_Icon_Status_TankType, &__init_value__MC2M_TERA_Icon_Status_TankType, 1 },
	{ &MC2M_TERA_Icon_Status_BO_0, &__init_value__MC2M_TERA_Icon_Status_BO_0, 1 },
	{ &MC2M_TERA_LampAlarm_L01, &__init_value__MC2M_TERA_LampAlarm_L01, 1 },
	{ &MC2M_TERA_LampAlarm_L02, &__init_value__MC2M_TERA_LampAlarm_L02, 1 },
	{ &MC2M_TERA_LampAlarm_L03, &__init_value__MC2M_TERA_LampAlarm_L03, 1 },
	{ &MC2M_TERA_LampAlarm_L04, &__init_value__MC2M_TERA_LampAlarm_L04, 1 },
	{ &MC2M_TERA_LampAlarm_L05, &__init_value__MC2M_TERA_LampAlarm_L05, 1 },
	{ &MC2M_TERA_LampAlarm_L06, &__init_value__MC2M_TERA_LampAlarm_L06, 1 },
	{ &MC2M_TERA_LampAlarm_L07, &__init_value__MC2M_TERA_LampAlarm_L07, 1 },
	{ &MC2M_TERA_LampAlarm_L08, &__init_value__MC2M_TERA_LampAlarm_L08, 1 },
	{ &MC2M_TERA_LampAlarm_L09, &__init_value__MC2M_TERA_LampAlarm_L09, 1 },
	{ &MC2M_TERA_LampAlarm_L10, &__init_value__MC2M_TERA_LampAlarm_L10, 1 },
	{ &MC2M_TERA_LampAlarm_L11, &__init_value__MC2M_TERA_LampAlarm_L11, 1 },
	{ &MC2M_TERA_LampAlarm_L12, &__init_value__MC2M_TERA_LampAlarm_L12, 1 },
	{ &MC2M_TERA_LampAlarm_L13, &__init_value__MC2M_TERA_LampAlarm_L13, 1 },
	{ &MC2M_TERA_LampAlarm_L14, &__init_value__MC2M_TERA_LampAlarm_L14, 1 },
	{ &MC2M_TERA_LampAlarm_L15, &__init_value__MC2M_TERA_LampAlarm_L15, 1 },
	{ &MC2M_TERA_LampAlarm_L16, &__init_value__MC2M_TERA_LampAlarm_L16, 1 },
	{ &MC2M_TERA_LampAlarm_L17, &__init_value__MC2M_TERA_LampAlarm_L17, 1 },
	{ &MC2M_TERA_LampAlarm_L18, &__init_value__MC2M_TERA_LampAlarm_L18, 1 },
	{ &MC2M_TERA_LampAlarm_L19, &__init_value__MC2M_TERA_LampAlarm_L19, 1 },
	{ &MC2M_TERA_LampAlarm_L20, &__init_value__MC2M_TERA_LampAlarm_L20, 1 },
	{ &MC2M_TERA_LampAlarm_L21, &__init_value__MC2M_TERA_LampAlarm_L21, 1 },
	{ &MC2M_TERA_LampAlarm_L22, &__init_value__MC2M_TERA_LampAlarm_L22, 1 },
	{ &MC2M_TERA_LampAlarm_L23, &__init_value__MC2M_TERA_LampAlarm_L23, 1 },
	{ &MC2M_TERA_LampAlarm_L24, &__init_value__MC2M_TERA_LampAlarm_L24, 1 },
	{ &MC2M_TERA_LampAlarm_L25, &__init_value__MC2M_TERA_LampAlarm_L25, 1 },
	{ &MC2M_TERA_LampAlarm_L26, &__init_value__MC2M_TERA_LampAlarm_L26, 1 },
	{ &MC2M_TERA_LampAlarm_L27, &__init_value__MC2M_TERA_LampAlarm_L27, 1 },
	{ &MC2M_TERA_LampAlarm_L28, &__init_value__MC2M_TERA_LampAlarm_L28, 1 },
	{ &MC2M_TERA_LampAlarm_L29, &__init_value__MC2M_TERA_LampAlarm_L29, 1 },
	{ &MC2M_TERA_LampAlarm_L30, &__init_value__MC2M_TERA_LampAlarm_L30, 1 },
	{ &MC2M_TERA_LampAlarm_L31, &__init_value__MC2M_TERA_LampAlarm_L31, 1 },
	{ &MC2M_TERA_LampAlarm_L32, &__init_value__MC2M_TERA_LampAlarm_L32, 1 },
	{ &MC2M_TERA_LampAlarm_L33, &__init_value__MC2M_TERA_LampAlarm_L33, 1 },
	{ &MC2M_TERA_LampAlarm_L34, &__init_value__MC2M_TERA_LampAlarm_L34, 1 },
	{ &MC2M_TERA_LampAlarm_L35, &__init_value__MC2M_TERA_LampAlarm_L35, 1 },
	{ &MC2M_TERA_LampAlarm_L36, &__init_value__MC2M_TERA_LampAlarm_L36, 1 },
	{ &MC2M_TERA_AngleX    , &__init_value__MC2M_TERA_AngleX, 2 },
	{ &MC2M_TERA_AngleY    , &__init_value__MC2M_TERA_AngleY, 2 },
	{ &MC2M_TERA_FuelLevel_2, &__init_value__MC2M_TERA_FuelLevel_2, 1 },
	{ &MC2M_TERA_FuelTankSel1, &__init_value__MC2M_TERA_FuelTankSel1, 1 },
	{ &MC2M_TERA_FuelTankSel2, &__init_value__MC2M_TERA_FuelTankSel2, 1 },
	{ &MC2M_TERA_BackDoorTest_Buzzer, &__init_value__MC2M_TERA_BackDoorTest_Buzzer, 1 },
	{ &MC2M_TERA_SWConfig0 , &__init_value__MC2M_TERA_SWConfig0, 1 },
	{ &MC2M_TERA_SWConfig1 , &__init_value__MC2M_TERA_SWConfig1, 1 },
	{ &MC2M_TERA_SWVersions0, &__init_value__MC2M_TERA_SWVersions0, 1 },
	{ &MC2M_TERA_SWVersions1, &__init_value__MC2M_TERA_SWVersions1, 1 },
	{ &MC2M_TERA_SWVersions2, &__init_value__MC2M_TERA_SWVersions2, 1 },
	{ &MC2M_TERA_AuxPressureLow_Stat, &__init_value__MC2M_TERA_AuxPressureLow_Stat, 1 },
	{ &MC2M_TERA_Engine_Brake_Stat, &__init_value__MC2M_TERA_Engine_Brake_Stat, 1 },
	{ &MC2M_TERA_WaterInFuel_Stat, &__init_value__MC2M_TERA_WaterInFuel_Stat, 1 },
	{ &MC2M_TERA_BackDoorTest_Prd, &__init_value__MC2M_TERA_BackDoorTest_Prd, 2 },
	{ &MC2M_TERA_DIAG_INP45, &__init_value__MC2M_TERA_DIAG_INP45, 1 },
	{ &MC2M_TERA_DIAG_PresLevel_Normalized, &__init_value__MC2M_TERA_DIAG_PresLevel_Normalized, 2 },
	{ &MC2M_TERA_DIAG_HTempLevel_Normalized, &__init_value__MC2M_TERA_DIAG_HTempLevel_Normalized, 2 },
	{ &MC2M_TERA_DIAG_TotalEngineHours, &__init_value__MC2M_TERA_DIAG_TotalEngineHours, 4 },
	{ &MC2M_TERA_DIAG_Stat_4x4, &__init_value__MC2M_TERA_DIAG_Stat_4x4, 1 },
	{ &MC2M_TERA_TCM_SuspectParameterNumber, &__init_value__MC2M_TERA_TCM_SuspectParameterNumber, 4 },
	{ &MC2M_TERA_ECM_SuspectParameterNumber, &__init_value__MC2M_TERA_ECM_SuspectParameterNumber, 4 },
	{ &MC2M_TERA_EBS_SuspectParameterNumber, &__init_value__MC2M_TERA_EBS_SuspectParameterNumber, 4 },
	{ &MC2M_TERA_TCM_FailureModeIdentifier, &__init_value__MC2M_TERA_TCM_FailureModeIdentifier, 1 },
	{ &MC2M_TERA_ECM_FailureModeIdentifier, &__init_value__MC2M_TERA_ECM_FailureModeIdentifier, 1 },
	{ &MC2M_TERA_EBS_FailureModeIdentifier, &__init_value__MC2M_TERA_EBS_FailureModeIdentifier, 1 },
	{ &MC2M_TERA_TCM_OccurrenceCount, &__init_value__MC2M_TERA_TCM_OccurrenceCount, 1 },
	{ &MC2M_TERA_ECM_OccurrenceCount, &__init_value__MC2M_TERA_ECM_OccurrenceCount, 1 },
	{ &MC2M_TERA_EBS_OccurrenceCount, &__init_value__MC2M_TERA_EBS_OccurrenceCount, 1 },
	{ &MC2M_TERA_RadiatorTemp, &__init_value__MC2M_TERA_RadiatorTemp, 2 },
	{ &MC2M_TERA_HTempInputFiltered, &__init_value__MC2M_TERA_HTempInputFiltered, 2 },
	{ &MC2M_TERA_TripCounter, &__init_value__MC2M_TERA_TripCounter, 4 },
	{ &MC2M_TERA_TotalOdometer, &__init_value__MC2M_TERA_TotalOdometer, 4 },
	{ &MC2M_TERA_DIAG_TotalEngineHours_Old, &__init_value__MC2M_TERA_DIAG_TotalEngineHours_Old, 4 },
	{ &MC2M_TERA_DIAG_EngineCoolantLevel, &__init_value__MC2M_TERA_DIAG_EngineCoolantLevel, 1 },
	{ &MC2M_TERA_DIAG_VvrPump, &__init_value__MC2M_TERA_DIAG_VvrPump, 2 },
	{ &MC2M_TERA_DIAG_VVRPumpTrigger, &__init_value__MC2M_TERA_DIAG_VVRPumpTrigger, 1 },
	{ &MC2M_TERA_DIAG_CACTemp, &__init_value__MC2M_TERA_DIAG_CACTemp, 2 },
	{ &MC2M_TERA_DIAG_RadiatorTemp, &__init_value__MC2M_TERA_DIAG_RadiatorTemp, 2 },
	{ &MUX_KL15_Ignition   , &__init_value__MUX_KL15_Ignition, 1 },
	{ &IOMODE_2_DIGIN00_Winch_RC_Up, &__init_value__IOMODE_2_DIGIN00_Winch_RC_Up, 1 },
	{ &IOMODE_2_DIGIN29    , &__init_value__IOMODE_2_DIGIN29, 1 },
	{ &IOMODE_DIGIN29      , &__init_value__IOMODE_DIGIN29, 1 },
	{ &AMUCBO_AngleX       , &__init_value__AMUCBO_AngleX, 2 },
	{ &NMSGUI_MC2M_hydraulic_tank_pressure, &__init_value__NMSGUI_MC2M_hydraulic_tank_pressure, 1 },
	{ &NMSGUI_MC2M_hydraulic_tank_temp, &__init_value__NMSGUI_MC2M_hydraulic_tank_temp, 1 },
	{ &NMSGUI_MC2M_hydraulic_tank_pressure_touch, &__init_value__NMSGUI_MC2M_hydraulic_tank_pressure_touch, 1 },
	{ &NMSGUI_MC2M_hydraulic_tank_temp_touch, &__init_value__NMSGUI_MC2M_hydraulic_tank_temp_touch, 1 },
	{ &OMNIA_LEFT_Light_P1_Park, &__init_value__OMNIA_LEFT_Light_P1_Park, 1 },
	{ &OMNIA_RIGHT_WiperLOW, &__init_value__OMNIA_RIGHT_WiperLOW, 1 },
	{ &GIGA_MC2M_ResetTrip , &__init_value__GIGA_MC2M_ResetTrip, 1 },
	{ &GIGA_MC2M_GIGAOdometerBackup, &__init_value__GIGA_MC2M_GIGAOdometerBackup, 4 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanOpen[] */

/* transmit timers */
static WORD vt3_can_tx_timeout_CAN_713 = 0;


/******************************************************************************/
/* remote I/O devices */
/******************************************************************************/


/******************************************************************************/
/* functions */
/******************************************************************************/

/* CAN interface initialization function */
void vt3_can_CanOpen_init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize variables */
	for ( p = __init_table__CanOpen; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* reset alarms */
	vt3_can_alarm_busoff_CAN_Open = FALSE;
	vt3_can_alarm_CAN_151 = FALSE;
	vt3_can_alarm_CAN_152 = FALSE;
	vt3_can_alarm_CAN_153 = FALSE;
	vt3_can_alarm_CAN_154 = FALSE;
	vt3_can_alarm_CAN_155 = FALSE;
	vt3_can_alarm_CAN_156 = FALSE;
	vt3_can_alarm_CAN_157 = FALSE;
	vt3_can_alarm_CAN_162 = FALSE;
	vt3_can_alarm_CAN_163 = FALSE;
	vt3_can_alarm_CAN_164 = FALSE;
	vt3_can_alarm_CAN_165 = FALSE;
	vt3_can_alarm_CAN_166 = FALSE;
	vt3_can_alarm_CAN_168 = FALSE;
	vt3_can_alarm_CAN_169 = FALSE;
	vt3_can_alarm_CAN_181 = FALSE;
	vt3_can_alarm_CAN_186 = FALSE;
	vt3_can_alarm_CAN_187 = FALSE;
	vt3_can_alarm_CAN_18D = FALSE;
	vt3_can_alarm_CAN_792 = FALSE;
	vt3_can_alarm_CAN_793 = FALSE;
	vt3_can_alarm_CAN_Light_4E = FALSE;
	vt3_can_alarm_CAN_Wiper_4F = FALSE;

	/* initialize can TX value */
	vt3_can_period_CAN_713 = 100;
	vt3_can_trigger_CAN_713 = FALSE;

	/* reset timers */
	vt3_can_tx_timeout_CAN_713 = 0;

	/* initialize the interface */
	vt3_init_interface(0, 250, vt3_can_rx_init_CanOpen, 22);

	/******************************************************************************/
	/* initialization of remote I/O devices */
	/******************************************************************************/


}

/* CAN interface receive function */
void vt3_can_CanOpen_rx(void)
{
	CanRxObj * pmsg;  /* pointer to message record */

	/* check for BUSOFF errors */
	if ( vt3_can_check_busoff(0) )
	{
		vt3_can_alarm_busoff_CAN_Open = TRUE;
	}

	/* RX message: CAN_151 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_151);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_EngineSpeed = __init_value__MC2M_TERA_EngineSpeed;
		MC2M_TERA_VehicleSpeed = __init_value__MC2M_TERA_VehicleSpeed;
		MC2M_TERA_FuelLevel_1 = __init_value__MC2M_TERA_FuelLevel_1;
		MC2M_TERA_EngineTempValue = __init_value__MC2M_TERA_EngineTempValue;
		MC2M_TERA_BatteryLevel = __init_value__MC2M_TERA_BatteryLevel;
		MC2M_TERA_EngineOilPressure = __init_value__MC2M_TERA_EngineOilPressure;
	}
	vt3_can_alarm_CAN_151 = ! pmsg->RxOK;

	/* RX message: CAN_152 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_152);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_ParkingBrakePressure = __init_value__MC2M_TERA_ParkingBrakePressure;
		MC2M_TERA_ServiceBrake1 = __init_value__MC2M_TERA_ServiceBrake1;
		MC2M_TERA_ServiceBrake2 = __init_value__MC2M_TERA_ServiceBrake2;
		MC2M_TERA_AccessoryPressure = __init_value__MC2M_TERA_AccessoryPressure;
		MC2M_TERA_TransOilTemperature = __init_value__MC2M_TERA_TransOilTemperature;
		MC2M_TERA_CurrentGear = __init_value__MC2M_TERA_CurrentGear;
		MC2M_TERA_OutSideTemperature = __init_value__MC2M_TERA_OutSideTemperature;
		MC2M_TERA_InSideTemperature = __init_value__MC2M_TERA_InSideTemperature;
	}
	vt3_can_alarm_CAN_152 = ! pmsg->RxOK;

	/* RX message: CAN_153 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_153);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_Icon_Status_L01 = __init_value__MC2M_TERA_Icon_Status_L01;
		MC2M_TERA_Icon_Status_L02 = __init_value__MC2M_TERA_Icon_Status_L02;
		MC2M_TERA_Icon_Status_L03 = __init_value__MC2M_TERA_Icon_Status_L03;
		MC2M_TERA_Icon_Status_L04 = __init_value__MC2M_TERA_Icon_Status_L04;
		MC2M_TERA_Icon_Status_L05 = __init_value__MC2M_TERA_Icon_Status_L05;
		MC2M_TERA_Icon_Status_L06 = __init_value__MC2M_TERA_Icon_Status_L06;
		MC2M_TERA_Icon_Status_L07 = __init_value__MC2M_TERA_Icon_Status_L07;
		MC2M_TERA_Icon_Status_L08 = __init_value__MC2M_TERA_Icon_Status_L08;
		MC2M_TERA_Icon_Status_L09 = __init_value__MC2M_TERA_Icon_Status_L09;
		MC2M_TERA_Icon_Status_L10 = __init_value__MC2M_TERA_Icon_Status_L10;
		MC2M_TERA_Icon_Status_L11 = __init_value__MC2M_TERA_Icon_Status_L11;
		MC2M_TERA_Icon_Status_L12 = __init_value__MC2M_TERA_Icon_Status_L12;
		MC2M_TERA_Icon_Status_L13 = __init_value__MC2M_TERA_Icon_Status_L13;
		MC2M_TERA_Icon_Status_L14_1 = __init_value__MC2M_TERA_Icon_Status_L14_1;
		MC2M_TERA_Icon_Status_L15 = __init_value__MC2M_TERA_Icon_Status_L15;
		MC2M_TERA_Icon_Status_L16 = __init_value__MC2M_TERA_Icon_Status_L16;
		MC2M_TERA_Icon_Status_L17 = __init_value__MC2M_TERA_Icon_Status_L17;
		MC2M_TERA_Icon_Status_L18 = __init_value__MC2M_TERA_Icon_Status_L18;
		MC2M_TERA_Icon_Status_L19 = __init_value__MC2M_TERA_Icon_Status_L19;
		MC2M_TERA_Icon_Status_L20 = __init_value__MC2M_TERA_Icon_Status_L20;
		MC2M_TERA_Icon_Status_L21 = __init_value__MC2M_TERA_Icon_Status_L21;
		MC2M_TERA_Icon_Status_L22 = __init_value__MC2M_TERA_Icon_Status_L22;
		MC2M_TERA_Icon_Status_L23 = __init_value__MC2M_TERA_Icon_Status_L23;
		MC2M_TERA_Icon_Status_L24 = __init_value__MC2M_TERA_Icon_Status_L24;
		MC2M_TERA_Icon_Status_L25 = __init_value__MC2M_TERA_Icon_Status_L25;
		MC2M_TERA_Icon_Status_L26 = __init_value__MC2M_TERA_Icon_Status_L26;
		MC2M_TERA_Icon_Status_L27 = __init_value__MC2M_TERA_Icon_Status_L27;
		MC2M_TERA_Icon_Status_L28 = __init_value__MC2M_TERA_Icon_Status_L28;
		MC2M_TERA_Icon_Status_L29 = __init_value__MC2M_TERA_Icon_Status_L29;
		MC2M_TERA_Icon_Status_L30 = __init_value__MC2M_TERA_Icon_Status_L30;
		MC2M_TERA_Icon_Status_L31 = __init_value__MC2M_TERA_Icon_Status_L31;
		MC2M_TERA_Icon_Status_L32 = __init_value__MC2M_TERA_Icon_Status_L32;
		MC2M_TERA_Icon_Status_L33 = __init_value__MC2M_TERA_Icon_Status_L33;
		MC2M_TERA_Icon_Status_L34 = __init_value__MC2M_TERA_Icon_Status_L34;
		MC2M_TERA_Icon_Status_L35 = __init_value__MC2M_TERA_Icon_Status_L35;
		MC2M_TERA_Icon_Status_L36 = __init_value__MC2M_TERA_Icon_Status_L36;
		MC2M_TERA_Icon_Status_L37 = __init_value__MC2M_TERA_Icon_Status_L37;
		MC2M_TERA_Icon_Status_L38 = __init_value__MC2M_TERA_Icon_Status_L38;
		MC2M_TERA_Icon_Status_L39 = __init_value__MC2M_TERA_Icon_Status_L39;
		MC2M_TERA_Icon_Status_L40 = __init_value__MC2M_TERA_Icon_Status_L40;
		MC2M_TERA_Icon_Status_L41 = __init_value__MC2M_TERA_Icon_Status_L41;
		MC2M_TERA_Icon_Status_L42 = __init_value__MC2M_TERA_Icon_Status_L42;
		MC2M_TERA_Icon_Status_L43 = __init_value__MC2M_TERA_Icon_Status_L43;
		MC2M_TERA_Icon_Status_BO_S1 = __init_value__MC2M_TERA_Icon_Status_BO_S1;
		MC2M_TERA_Icon_Status_BO_S2 = __init_value__MC2M_TERA_Icon_Status_BO_S2;
		MC2M_TERA_Icon_Status_BO_S3 = __init_value__MC2M_TERA_Icon_Status_BO_S3;
		MC2M_TERA_Icon_Status_GIGA_Bsy = __init_value__MC2M_TERA_Icon_Status_GIGA_Bsy;
		MC2M_TERA_Icon_Status_BO_1 = __init_value__MC2M_TERA_Icon_Status_BO_1;
		MC2M_TERA_Icon_Status_BO_2 = __init_value__MC2M_TERA_Icon_Status_BO_2;
		MC2M_TERA_Icon_Status_L14_2 = __init_value__MC2M_TERA_Icon_Status_L14_2;
		MC2M_TERA_Icon_Status_L14_3 = __init_value__MC2M_TERA_Icon_Status_L14_3;
		MC2M_TERA_Icon_Status_L14_4 = __init_value__MC2M_TERA_Icon_Status_L14_4;
		MC2M_TERA_Icon_Status_L14_5 = __init_value__MC2M_TERA_Icon_Status_L14_5;
		MC2M_TERA_Icon_Status_TankType = __init_value__MC2M_TERA_Icon_Status_TankType;
		MC2M_TERA_Icon_Status_BO_0 = __init_value__MC2M_TERA_Icon_Status_BO_0;
	}
	vt3_can_alarm_CAN_153 = ! pmsg->RxOK;

	/* RX message: CAN_154 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_154);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_LampAlarm_L01 = __init_value__MC2M_TERA_LampAlarm_L01;
		MC2M_TERA_LampAlarm_L02 = __init_value__MC2M_TERA_LampAlarm_L02;
		MC2M_TERA_LampAlarm_L03 = __init_value__MC2M_TERA_LampAlarm_L03;
		MC2M_TERA_LampAlarm_L04 = __init_value__MC2M_TERA_LampAlarm_L04;
		MC2M_TERA_LampAlarm_L05 = __init_value__MC2M_TERA_LampAlarm_L05;
		MC2M_TERA_LampAlarm_L06 = __init_value__MC2M_TERA_LampAlarm_L06;
		MC2M_TERA_LampAlarm_L07 = __init_value__MC2M_TERA_LampAlarm_L07;
		MC2M_TERA_LampAlarm_L08 = __init_value__MC2M_TERA_LampAlarm_L08;
		MC2M_TERA_LampAlarm_L09 = __init_value__MC2M_TERA_LampAlarm_L09;
		MC2M_TERA_LampAlarm_L10 = __init_value__MC2M_TERA_LampAlarm_L10;
		MC2M_TERA_LampAlarm_L11 = __init_value__MC2M_TERA_LampAlarm_L11;
		MC2M_TERA_LampAlarm_L12 = __init_value__MC2M_TERA_LampAlarm_L12;
		MC2M_TERA_LampAlarm_L13 = __init_value__MC2M_TERA_LampAlarm_L13;
		MC2M_TERA_LampAlarm_L14 = __init_value__MC2M_TERA_LampAlarm_L14;
		MC2M_TERA_LampAlarm_L15 = __init_value__MC2M_TERA_LampAlarm_L15;
		MC2M_TERA_LampAlarm_L16 = __init_value__MC2M_TERA_LampAlarm_L16;
		MC2M_TERA_LampAlarm_L17 = __init_value__MC2M_TERA_LampAlarm_L17;
		MC2M_TERA_LampAlarm_L18 = __init_value__MC2M_TERA_LampAlarm_L18;
		MC2M_TERA_LampAlarm_L19 = __init_value__MC2M_TERA_LampAlarm_L19;
		MC2M_TERA_LampAlarm_L20 = __init_value__MC2M_TERA_LampAlarm_L20;
		MC2M_TERA_LampAlarm_L21 = __init_value__MC2M_TERA_LampAlarm_L21;
		MC2M_TERA_LampAlarm_L22 = __init_value__MC2M_TERA_LampAlarm_L22;
		MC2M_TERA_LampAlarm_L23 = __init_value__MC2M_TERA_LampAlarm_L23;
		MC2M_TERA_LampAlarm_L24 = __init_value__MC2M_TERA_LampAlarm_L24;
		MC2M_TERA_LampAlarm_L25 = __init_value__MC2M_TERA_LampAlarm_L25;
		MC2M_TERA_LampAlarm_L26 = __init_value__MC2M_TERA_LampAlarm_L26;
		MC2M_TERA_LampAlarm_L27 = __init_value__MC2M_TERA_LampAlarm_L27;
		MC2M_TERA_LampAlarm_L28 = __init_value__MC2M_TERA_LampAlarm_L28;
		MC2M_TERA_LampAlarm_L29 = __init_value__MC2M_TERA_LampAlarm_L29;
		MC2M_TERA_LampAlarm_L30 = __init_value__MC2M_TERA_LampAlarm_L30;
		MC2M_TERA_LampAlarm_L31 = __init_value__MC2M_TERA_LampAlarm_L31;
		MC2M_TERA_LampAlarm_L32 = __init_value__MC2M_TERA_LampAlarm_L32;
		MC2M_TERA_LampAlarm_L33 = __init_value__MC2M_TERA_LampAlarm_L33;
		MC2M_TERA_LampAlarm_L34 = __init_value__MC2M_TERA_LampAlarm_L34;
		MC2M_TERA_LampAlarm_L35 = __init_value__MC2M_TERA_LampAlarm_L35;
		MC2M_TERA_LampAlarm_L36 = __init_value__MC2M_TERA_LampAlarm_L36;
	}
	vt3_can_alarm_CAN_154 = ! pmsg->RxOK;

	/* RX message: CAN_155 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_155);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_AngleX = __init_value__MC2M_TERA_AngleX;
		MC2M_TERA_AngleY = __init_value__MC2M_TERA_AngleY;
		MC2M_TERA_FuelLevel_2 = __init_value__MC2M_TERA_FuelLevel_2;
		MC2M_TERA_FuelTankSel1 = __init_value__MC2M_TERA_FuelTankSel1;
		MC2M_TERA_FuelTankSel2 = __init_value__MC2M_TERA_FuelTankSel2;
		MC2M_TERA_BackDoorTest_Buzzer = __init_value__MC2M_TERA_BackDoorTest_Buzzer;
	}
	vt3_can_alarm_CAN_155 = ! pmsg->RxOK;

	/* RX message: CAN_156 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_156);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_SWConfig0 = __init_value__MC2M_TERA_SWConfig0;
		MC2M_TERA_SWConfig1 = __init_value__MC2M_TERA_SWConfig1;
		MC2M_TERA_SWVersions0 = __init_value__MC2M_TERA_SWVersions0;
		MC2M_TERA_SWVersions1 = __init_value__MC2M_TERA_SWVersions1;
		MC2M_TERA_SWVersions2 = __init_value__MC2M_TERA_SWVersions2;
		MC2M_TERA_AuxPressureLow_Stat = __init_value__MC2M_TERA_AuxPressureLow_Stat;
		MC2M_TERA_Engine_Brake_Stat = __init_value__MC2M_TERA_Engine_Brake_Stat;
		MC2M_TERA_WaterInFuel_Stat = __init_value__MC2M_TERA_WaterInFuel_Stat;
		MC2M_TERA_BackDoorTest_Prd = __init_value__MC2M_TERA_BackDoorTest_Prd;
	}
	vt3_can_alarm_CAN_156 = ! pmsg->RxOK;

	/* RX message: CAN_157 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_157);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_DIAG_INP45 = __init_value__MC2M_TERA_DIAG_INP45;
	}
	vt3_can_alarm_CAN_157 = ! pmsg->RxOK;

	/* RX message: CAN_162 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_162);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_DIAG_PresLevel_Normalized = __init_value__MC2M_TERA_DIAG_PresLevel_Normalized;
	}
	vt3_can_alarm_CAN_162 = ! pmsg->RxOK;

	/* RX message: CAN_163 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_163);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_DIAG_HTempLevel_Normalized = __init_value__MC2M_TERA_DIAG_HTempLevel_Normalized;
		MC2M_TERA_DIAG_TotalEngineHours = __init_value__MC2M_TERA_DIAG_TotalEngineHours;
		MC2M_TERA_DIAG_Stat_4x4 = __init_value__MC2M_TERA_DIAG_Stat_4x4;
	}
	vt3_can_alarm_CAN_163 = ! pmsg->RxOK;

	/* RX message: CAN_164 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_164);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_TCM_SuspectParameterNumber = __init_value__MC2M_TERA_TCM_SuspectParameterNumber;
		MC2M_TERA_ECM_SuspectParameterNumber = __init_value__MC2M_TERA_ECM_SuspectParameterNumber;
	}
	vt3_can_alarm_CAN_164 = ! pmsg->RxOK;

	/* RX message: CAN_165 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_165);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_EBS_SuspectParameterNumber = __init_value__MC2M_TERA_EBS_SuspectParameterNumber;
		MC2M_TERA_TCM_FailureModeIdentifier = __init_value__MC2M_TERA_TCM_FailureModeIdentifier;
		MC2M_TERA_ECM_FailureModeIdentifier = __init_value__MC2M_TERA_ECM_FailureModeIdentifier;
		MC2M_TERA_EBS_FailureModeIdentifier = __init_value__MC2M_TERA_EBS_FailureModeIdentifier;
		MC2M_TERA_TCM_OccurrenceCount = __init_value__MC2M_TERA_TCM_OccurrenceCount;
	}
	vt3_can_alarm_CAN_165 = ! pmsg->RxOK;

	/* RX message: CAN_166 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_166);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_ECM_OccurrenceCount = __init_value__MC2M_TERA_ECM_OccurrenceCount;
		MC2M_TERA_EBS_OccurrenceCount = __init_value__MC2M_TERA_EBS_OccurrenceCount;
		MC2M_TERA_RadiatorTemp = __init_value__MC2M_TERA_RadiatorTemp;
		MC2M_TERA_HTempInputFiltered = __init_value__MC2M_TERA_HTempInputFiltered;
	}
	vt3_can_alarm_CAN_166 = ! pmsg->RxOK;

	/* RX message: CAN_168 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_168);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_TripCounter = __init_value__MC2M_TERA_TripCounter;
		MC2M_TERA_TotalOdometer = __init_value__MC2M_TERA_TotalOdometer;
	}
	vt3_can_alarm_CAN_168 = ! pmsg->RxOK;

	/* RX message: CAN_169 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_169);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_TERA_DIAG_TotalEngineHours_Old = __init_value__MC2M_TERA_DIAG_TotalEngineHours_Old;
		MC2M_TERA_DIAG_EngineCoolantLevel = __init_value__MC2M_TERA_DIAG_EngineCoolantLevel;
		MC2M_TERA_DIAG_VvrPump = __init_value__MC2M_TERA_DIAG_VvrPump;
		MC2M_TERA_DIAG_VVRPumpTrigger = __init_value__MC2M_TERA_DIAG_VVRPumpTrigger;
		MC2M_TERA_DIAG_CACTemp = __init_value__MC2M_TERA_DIAG_CACTemp;
		MC2M_TERA_DIAG_RadiatorTemp = __init_value__MC2M_TERA_DIAG_RadiatorTemp;
	}
	vt3_can_alarm_CAN_169 = ! pmsg->RxOK;

	/* RX message: CAN_181 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_181);
	if ( ! pmsg->RxOK ) 
	{
		MUX_KL15_Ignition = __init_value__MUX_KL15_Ignition;
	}
	vt3_can_alarm_CAN_181 = ! pmsg->RxOK;

	/* RX message: CAN_186 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_186);
	if ( ! pmsg->RxOK ) 
	{
		IOMODE_2_DIGIN00_Winch_RC_Up = __init_value__IOMODE_2_DIGIN00_Winch_RC_Up;
		IOMODE_2_DIGIN29 = __init_value__IOMODE_2_DIGIN29;
	}
	vt3_can_alarm_CAN_186 = ! pmsg->RxOK;

	/* RX message: CAN_187 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_187);
	if ( ! pmsg->RxOK ) 
	{
		IOMODE_DIGIN29 = __init_value__IOMODE_DIGIN29;
	}
	vt3_can_alarm_CAN_187 = ! pmsg->RxOK;

	/* RX message: CAN_18D */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_18D);
	if ( ! pmsg->RxOK ) 
	{
		AMUCBO_AngleX = __init_value__AMUCBO_AngleX;
	}
	vt3_can_alarm_CAN_18D = ! pmsg->RxOK;

	/* RX message: CAN_792 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_792);
	if ( ! pmsg->RxOK ) 
	{
		NMSGUI_MC2M_hydraulic_tank_pressure = __init_value__NMSGUI_MC2M_hydraulic_tank_pressure;
		NMSGUI_MC2M_hydraulic_tank_temp = __init_value__NMSGUI_MC2M_hydraulic_tank_temp;
	}
	vt3_can_alarm_CAN_792 = ! pmsg->RxOK;

	/* RX message: CAN_793 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_793);
	if ( ! pmsg->RxOK ) 
	{
		NMSGUI_MC2M_hydraulic_tank_pressure_touch = __init_value__NMSGUI_MC2M_hydraulic_tank_pressure_touch;
		NMSGUI_MC2M_hydraulic_tank_temp_touch = __init_value__NMSGUI_MC2M_hydraulic_tank_temp_touch;
	}
	vt3_can_alarm_CAN_793 = ! pmsg->RxOK;

	/* RX message: CAN_Light_4E */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_LIGHT_4E);
	if ( ! pmsg->RxOK ) 
	{
		OMNIA_LEFT_Light_P1_Park = __init_value__OMNIA_LEFT_Light_P1_Park;
	}
	vt3_can_alarm_CAN_Light_4E = ! pmsg->RxOK;

	/* RX message: CAN_Wiper_4F */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_WIPER_4F);
	if ( ! pmsg->RxOK ) 
	{
		OMNIA_RIGHT_WiperLOW = __init_value__OMNIA_RIGHT_WiperLOW;
	}
	vt3_can_alarm_CAN_Wiper_4F = ! pmsg->RxOK;


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/


}

/* CAN interface transmit function */
void vt3_can_CanOpen_tx(void)
{
	BYTE txcounter = 0;
	BYTE db[8];

	/* TX message: CAN_713 */
	if ( (vt3_can_period_CAN_713 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_713)) ||
	     (vt3_can_period_CAN_713 == 0 && vt3_can_trigger_CAN_713 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((GIGA_MC2M_ResetTrip & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)((GIGA_MC2M_GIGAOdometerBackup & 0xFF));
 		db[2] |= (BYTE)(((GIGA_MC2M_GIGAOdometerBackup >> 8) & 0xFF));
 		db[3] |= (BYTE)(((GIGA_MC2M_GIGAOdometerBackup >> 16) & 0xFF));
 		db[4] |= (BYTE)(((GIGA_MC2M_GIGAOdometerBackup >> 24) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x713, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_713 = 0;
			vt3_can_tx_timeout_CAN_713 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_713);
		}
	}


	/******************************************************************************/
	/* transmit messages to remote I/O devices (only for master) */
	/******************************************************************************/

}

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANOPEN_C */

/* end of file */
