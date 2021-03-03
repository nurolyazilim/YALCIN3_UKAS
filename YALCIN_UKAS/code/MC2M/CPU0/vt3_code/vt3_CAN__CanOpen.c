/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
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
/* message:  CAN_81 */
/* COB-ID:   0x00000081 */
/* CAN port: 0 */
static void canrx_0_00000081_CAN_81(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: AlarmStatusOutput01 */
	if ( dlc >= 1 )
	{
		MUX_AlarmStatusOutput01 = (SINT)(((SINT)db[0] & 0x03));
	}
	/* extract variable: AlarmStatusOutput02 */
	if ( dlc >= 1 )
	{
		MUX_AlarmStatusOutput02 = (SINT)((((SINT)db[0] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusOutput03 */
	if ( dlc >= 1 )
	{
		MUX_AlarmStatusOutput03 = (SINT)((((SINT)db[0] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusOutput04 */
	if ( dlc >= 1 )
	{
		MUX_AlarmStatusOutput04 = (SINT)((((SINT)db[0] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusOutput05 */
	if ( dlc >= 2 )
	{
		MUX_AlarmStatusOutput05 = (SINT)(((SINT)db[1] & 0x03));
	}
	/* extract variable: AlarmStatusOutput06 */
	if ( dlc >= 2 )
	{
		MUX_AlarmStatusOutput06 = (SINT)((((SINT)db[1] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusOutput07 */
	if ( dlc >= 2 )
	{
		MUX_AlarmStatusOutput07 = (SINT)((((SINT)db[1] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusOutput08 */
	if ( dlc >= 2 )
	{
		MUX_AlarmStatusOutput08 = (SINT)((((SINT)db[1] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusOutput09 */
	if ( dlc >= 3 )
	{
		MUX_AlarmStatusOutput09 = (SINT)(((SINT)db[2] & 0x03));
	}
	/* extract variable: AlarmStatusOutput10 */
	if ( dlc >= 3 )
	{
		MUX_AlarmStatusOutput10 = (SINT)((((SINT)db[2] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusOutput11 */
	if ( dlc >= 3 )
	{
		MUX_AlarmStatusOutput11 = (SINT)((((SINT)db[2] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusOutput12 */
	if ( dlc >= 3 )
	{
		MUX_AlarmStatusOutput12 = (SINT)((((SINT)db[2] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusOutput13 */
	if ( dlc >= 4 )
	{
		MUX_AlarmStatusOutput13 = (SINT)(((SINT)db[3] & 0x03));
	}
	/* extract variable: AlarmStatusOutput14 */
	if ( dlc >= 4 )
	{
		MUX_AlarmStatusOutput14 = (SINT)((((SINT)db[3] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusOutput15 */
	if ( dlc >= 4 )
	{
		MUX_AlarmStatusOutput15 = (SINT)((((SINT)db[3] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusOutput16 */
	if ( dlc >= 4 )
	{
		MUX_AlarmStatusOutput16 = (SINT)((((SINT)db[3] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusOutput17 */
	if ( dlc >= 5 )
	{
		MUX_AlarmStatusOutput17 = (SINT)(((SINT)db[4] & 0x03));
	}
	/* extract variable: AlarmStatusOutput19 */
	if ( dlc >= 5 )
	{
		MUX_AlarmStatusOutput19 = (SINT)((((SINT)db[4] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusOutput21 */
	if ( dlc >= 5 )
	{
		MUX_AlarmStatusOutput21 = (SINT)((((SINT)db[4] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusOutput22 */
	if ( dlc >= 5 )
	{
		MUX_AlarmStatusOutput22 = (SINT)((((SINT)db[4] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusOutput23 */
	if ( dlc >= 6 )
	{
		MUX_AlarmStatusOutput23 = (SINT)(((SINT)db[5] & 0x03));
	}
	/* extract variable: AlarmStatusOutput24 */
	if ( dlc >= 6 )
	{
		MUX_AlarmStatusOutput24 = (SINT)((((SINT)db[5] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusOutput25 */
	if ( dlc >= 6 )
	{
		MUX_AlarmStatusOutput25 = (SINT)((((SINT)db[5] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusOutput26 */
	if ( dlc >= 6 )
	{
		MUX_AlarmStatusOutput26 = (SINT)((((SINT)db[5] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusOutput27 */
	if ( dlc >= 7 )
	{
		MUX_AlarmStatusOutput27 = (SINT)(((SINT)db[6] & 0x03));
	}
	/* extract variable: AlarmStatusOutput18 */
	if ( dlc >= 7 )
	{
		MUX_AlarmStatusOutput18 = (BOOL)((((BOOL)db[6] >> 2) & 0x01));
	}
	/* extract variable: AlarmStatusOutput20 */
	if ( dlc >= 7 )
	{
		MUX_AlarmStatusOutput20 = (BOOL)((((BOOL)db[6] >> 3) & 0x01));
	}
	/* extract variable: Alarm_CAN_LowSpeed */
	if ( dlc >= 7 )
	{
		MUX_Alarm_CAN_LowSpeed = (BOOL)((((BOOL)db[6] >> 4) & 0x01));
	}
	/* extract variable: Alarm_EEPROM */
	if ( dlc >= 7 )
	{
		MUX_Alarm_EEPROM = (BOOL)((((BOOL)db[6] >> 5) & 0x01));
	}
	/* extract variable: Alarm_FrontWiper */
	if ( dlc >= 7 )
	{
		MUX_Alarm_FrontWiper = (BOOL)((((BOOL)db[6] >> 6) & 0x01));
	}
	/* extract variable: Alarm_ReasWiper */
	if ( dlc >= 7 )
	{
		MUX_Alarm_ReasWiper = (BOOL)((((BOOL)db[6] >> 7) & 0x01));
	}
	/* extract variable: AlarmSectionA */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionA = (BOOL)(((BOOL)db[7] & 0x01));
	}
	/* extract variable: AlarmSectionB */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionB = (BOOL)((((BOOL)db[7] >> 1) & 0x01));
	}
	/* extract variable: AlarmSectionC */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionC = (BOOL)((((BOOL)db[7] >> 2) & 0x01));
	}
	/* extract variable: AlarmSectionD */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionD = (BOOL)((((BOOL)db[7] >> 3) & 0x01));
	}
	/* extract variable: AlarmSectionE */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionE = (BOOL)((((BOOL)db[7] >> 4) & 0x01));
	}
	/* extract variable: AlarmSectionF */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionF = (BOOL)((((BOOL)db[7] >> 5) & 0x01));
	}
	/* extract variable: AlarmSectionG */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionG = (BOOL)((((BOOL)db[7] >> 6) & 0x01));
	}
	/* extract variable: AlarmSectionH */
	if ( dlc >= 8 )
	{
		MUX_AlarmSectionH = (BOOL)((((BOOL)db[7] >> 7) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_86 */
/* COB-ID:   0x00000086 */
/* CAN port: 0 */
static void canrx_0_00000086_CAN_86(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: AlarmStatusDOUT00 */
	if ( dlc >= 1 )
	{
		IOMODE_2_AlarmStatusDOUT00 = (SINT)(((SINT)db[0] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT01 */
	if ( dlc >= 1 )
	{
		IOMODE_2_AlarmStatusDOUT01 = (SINT)((((SINT)db[0] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT02 */
	if ( dlc >= 1 )
	{
		IOMODE_2_AlarmStatusDOUT02 = (SINT)((((SINT)db[0] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT03 */
	if ( dlc >= 1 )
	{
		IOMODE_2_AlarmStatusDOUT03 = (SINT)((((SINT)db[0] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT04 */
	if ( dlc >= 2 )
	{
		IOMODE_2_AlarmStatusDOUT04 = (SINT)(((SINT)db[1] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT05 */
	if ( dlc >= 2 )
	{
		IOMODE_2_AlarmStatusDOUT05 = (SINT)((((SINT)db[1] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT06 */
	if ( dlc >= 2 )
	{
		IOMODE_2_AlarmStatusDOUT06 = (SINT)((((SINT)db[1] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT07 */
	if ( dlc >= 2 )
	{
		IOMODE_2_AlarmStatusDOUT07 = (SINT)((((SINT)db[1] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT08 */
	if ( dlc >= 3 )
	{
		IOMODE_2_AlarmStatusDOUT08 = (SINT)(((SINT)db[2] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT09 */
	if ( dlc >= 3 )
	{
		IOMODE_2_AlarmStatusDOUT09 = (SINT)((((SINT)db[2] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT10 */
	if ( dlc >= 3 )
	{
		IOMODE_2_AlarmStatusDOUT10 = (SINT)((((SINT)db[2] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT11 */
	if ( dlc >= 3 )
	{
		IOMODE_2_AlarmStatusDOUT11 = (SINT)((((SINT)db[2] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT12 */
	if ( dlc >= 4 )
	{
		IOMODE_2_AlarmStatusDOUT12 = (SINT)(((SINT)db[3] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT13 */
	if ( dlc >= 4 )
	{
		IOMODE_2_AlarmStatusDOUT13 = (SINT)((((SINT)db[3] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT14 */
	if ( dlc >= 4 )
	{
		IOMODE_2_AlarmStatusDOUT14 = (SINT)((((SINT)db[3] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT15 */
	if ( dlc >= 4 )
	{
		IOMODE_2_AlarmStatusDOUT15 = (SINT)((((SINT)db[3] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT16 */
	if ( dlc >= 5 )
	{
		IOMODE_2_AlarmStatusDOUT16 = (SINT)(((SINT)db[4] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT17 */
	if ( dlc >= 5 )
	{
		IOMODE_2_AlarmStatusDOUT17 = (SINT)((((SINT)db[4] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT18 */
	if ( dlc >= 5 )
	{
		IOMODE_2_AlarmStatusDOUT18 = (SINT)((((SINT)db[4] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT19 */
	if ( dlc >= 5 )
	{
		IOMODE_2_AlarmStatusDOUT19 = (SINT)((((SINT)db[4] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT20 */
	if ( dlc >= 6 )
	{
		IOMODE_2_AlarmStatusDOUT20 = (SINT)(((SINT)db[5] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT21 */
	if ( dlc >= 6 )
	{
		IOMODE_2_AlarmStatusDOUT21 = (SINT)((((SINT)db[5] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT22 */
	if ( dlc >= 6 )
	{
		IOMODE_2_AlarmStatusDOUT22 = (SINT)((((SINT)db[5] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT23 */
	if ( dlc >= 6 )
	{
		IOMODE_2_AlarmStatusDOUT23 = (SINT)((((SINT)db[5] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT24 */
	if ( dlc >= 7 )
	{
		IOMODE_2_AlarmStatusDOUT24 = (SINT)(((SINT)db[6] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT25 */
	if ( dlc >= 7 )
	{
		IOMODE_2_AlarmStatusDOUT25 = (SINT)((((SINT)db[6] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT26 */
	if ( dlc >= 7 )
	{
		IOMODE_2_AlarmStatusDOUT26 = (SINT)((((SINT)db[6] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT27 */
	if ( dlc >= 7 )
	{
		IOMODE_2_AlarmStatusDOUT27 = (SINT)((((SINT)db[6] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT28 */
	if ( dlc >= 8 )
	{
		IOMODE_2_AlarmStatusDOUT28 = (SINT)(((SINT)db[7] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT29 */
	if ( dlc >= 8 )
	{
		IOMODE_2_AlarmStatusDOUT29 = (SINT)((((SINT)db[7] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT30 */
	if ( dlc >= 8 )
	{
		IOMODE_2_AlarmStatusDOUT30 = (SINT)((((SINT)db[7] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT31 */
	if ( dlc >= 8 )
	{
		IOMODE_2_AlarmStatusDOUT31 = (SINT)((((SINT)db[7] >> 6) & 0x03));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_87 */
/* COB-ID:   0x00000087 */
/* CAN port: 0 */
static void canrx_0_00000087_CAN_87(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: AlarmStatusDOUT00 */
	if ( dlc >= 1 )
	{
		IOMODE_AlarmStatusDOUT00 = (SINT)(((SINT)db[0] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT01 */
	if ( dlc >= 1 )
	{
		IOMODE_AlarmStatusDOUT01 = (SINT)((((SINT)db[0] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT02 */
	if ( dlc >= 1 )
	{
		IOMODE_AlarmStatusDOUT02 = (SINT)((((SINT)db[0] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT03 */
	if ( dlc >= 1 )
	{
		IOMODE_AlarmStatusDOUT03 = (SINT)((((SINT)db[0] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT04 */
	if ( dlc >= 2 )
	{
		IOMODE_AlarmStatusDOUT04 = (SINT)(((SINT)db[1] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT05 */
	if ( dlc >= 2 )
	{
		IOMODE_AlarmStatusDOUT05 = (SINT)((((SINT)db[1] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT06 */
	if ( dlc >= 2 )
	{
		IOMODE_AlarmStatusDOUT06 = (SINT)((((SINT)db[1] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT07 */
	if ( dlc >= 2 )
	{
		IOMODE_AlarmStatusDOUT07 = (SINT)((((SINT)db[1] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT08 */
	if ( dlc >= 3 )
	{
		IOMODE_AlarmStatusDOUT08 = (SINT)(((SINT)db[2] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT09 */
	if ( dlc >= 3 )
	{
		IOMODE_AlarmStatusDOUT09 = (SINT)((((SINT)db[2] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT10 */
	if ( dlc >= 3 )
	{
		IOMODE_AlarmStatusDOUT10 = (SINT)((((SINT)db[2] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT11 */
	if ( dlc >= 3 )
	{
		IOMODE_AlarmStatusDOUT11 = (SINT)((((SINT)db[2] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT12 */
	if ( dlc >= 4 )
	{
		IOMODE_AlarmStatusDOUT12 = (SINT)(((SINT)db[3] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT13 */
	if ( dlc >= 4 )
	{
		IOMODE_AlarmStatusDOUT13 = (SINT)((((SINT)db[3] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT14 */
	if ( dlc >= 4 )
	{
		IOMODE_AlarmStatusDOUT14 = (SINT)((((SINT)db[3] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT15 */
	if ( dlc >= 4 )
	{
		IOMODE_AlarmStatusDOUT15 = (SINT)((((SINT)db[3] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT16 */
	if ( dlc >= 5 )
	{
		IOMODE_AlarmStatusDOUT16 = (SINT)(((SINT)db[4] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT17 */
	if ( dlc >= 5 )
	{
		IOMODE_AlarmStatusDOUT17 = (SINT)((((SINT)db[4] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT18 */
	if ( dlc >= 5 )
	{
		IOMODE_AlarmStatusDOUT18 = (SINT)((((SINT)db[4] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT19 */
	if ( dlc >= 5 )
	{
		IOMODE_AlarmStatusDOUT19 = (SINT)((((SINT)db[4] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT20 */
	if ( dlc >= 6 )
	{
		IOMODE_AlarmStatusDOUT20 = (SINT)(((SINT)db[5] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT21 */
	if ( dlc >= 6 )
	{
		IOMODE_AlarmStatusDOUT21 = (SINT)((((SINT)db[5] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT22 */
	if ( dlc >= 6 )
	{
		IOMODE_AlarmStatusDOUT22 = (SINT)((((SINT)db[5] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT23 */
	if ( dlc >= 6 )
	{
		IOMODE_AlarmStatusDOUT23 = (SINT)((((SINT)db[5] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT24 */
	if ( dlc >= 7 )
	{
		IOMODE_AlarmStatusDOUT24 = (SINT)(((SINT)db[6] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT25 */
	if ( dlc >= 7 )
	{
		IOMODE_AlarmStatusDOUT25 = (SINT)((((SINT)db[6] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT26 */
	if ( dlc >= 7 )
	{
		IOMODE_AlarmStatusDOUT26 = (SINT)((((SINT)db[6] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT27 */
	if ( dlc >= 7 )
	{
		IOMODE_AlarmStatusDOUT27 = (SINT)((((SINT)db[6] >> 6) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT28 */
	if ( dlc >= 8 )
	{
		IOMODE_AlarmStatusDOUT28 = (SINT)(((SINT)db[7] & 0x03));
	}
	/* extract variable: AlarmStatusDOUT29 */
	if ( dlc >= 8 )
	{
		IOMODE_AlarmStatusDOUT29 = (SINT)((((SINT)db[7] >> 2) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT30 */
	if ( dlc >= 8 )
	{
		IOMODE_AlarmStatusDOUT30 = (SINT)((((SINT)db[7] >> 4) & 0x03));
	}
	/* extract variable: AlarmStatusDOUT31 */
	if ( dlc >= 8 )
	{
		IOMODE_AlarmStatusDOUT31 = (SINT)((((SINT)db[7] >> 6) & 0x03));
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
	/* extract variable: RearWiperPark_HiSide */
	if ( dlc >= 1 )
	{
		MUX_RearWiperPark_HiSide = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: FrontWiperPark_HiSide */
	if ( dlc >= 1 )
	{
		MUX_FrontWiperPark_HiSide = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: RearWiperPark_LowSide */
	if ( dlc >= 1 )
	{
		MUX_RearWiperPark_LowSide = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: FrontWiperPark_LowSide */
	if ( dlc >= 1 )
	{
		MUX_FrontWiperPark_LowSide = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: HazardButton */
	if ( dlc >= 1 )
	{
		MUX_HazardButton = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: OpenLoad01 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad01 = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: OpenLoad02 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad02 = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}
	/* extract variable: OpenLoad03 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad03 = (BOOL)((((BOOL)db[1] >> 2) & 0x01));
	}
	/* extract variable: OpenLoad04 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad04 = (BOOL)((((BOOL)db[1] >> 3) & 0x01));
	}
	/* extract variable: OpenLoad05 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad05 = (BOOL)((((BOOL)db[1] >> 4) & 0x01));
	}
	/* extract variable: OpenLoad06 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad06 = (BOOL)((((BOOL)db[1] >> 5) & 0x01));
	}
	/* extract variable: OpenLoad07 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad07 = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: OpenLoad08 */
	if ( dlc >= 2 )
	{
		MUX_OpenLoad08 = (BOOL)((((BOOL)db[1] >> 7) & 0x01));
	}
	/* extract variable: OpenLoad09 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad09 = (BOOL)(((BOOL)db[2] & 0x01));
	}
	/* extract variable: OpenLoad10 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad10 = (BOOL)((((BOOL)db[2] >> 1) & 0x01));
	}
	/* extract variable: OpenLoad11 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad11 = (BOOL)((((BOOL)db[2] >> 2) & 0x01));
	}
	/* extract variable: OpenLoad12 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad12 = (BOOL)((((BOOL)db[2] >> 3) & 0x01));
	}
	/* extract variable: OpenLoad13 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad13 = (BOOL)((((BOOL)db[2] >> 4) & 0x01));
	}
	/* extract variable: OpenLoad14 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad14 = (BOOL)((((BOOL)db[2] >> 5) & 0x01));
	}
	/* extract variable: OpenLoad15 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad15 = (BOOL)((((BOOL)db[2] >> 6) & 0x01));
	}
	/* extract variable: OpenLoad16 */
	if ( dlc >= 3 )
	{
		MUX_OpenLoad16 = (BOOL)((((BOOL)db[2] >> 7) & 0x01));
	}
	/* extract variable: OpenLoad17 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad17 = (BOOL)(((BOOL)db[3] & 0x01));
	}
	/* extract variable: OpenLoad18 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad18 = (BOOL)((((BOOL)db[3] >> 1) & 0x01));
	}
	/* extract variable: OpenLoad19 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad19 = (BOOL)((((BOOL)db[3] >> 2) & 0x01));
	}
	/* extract variable: OpenLoad20 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad20 = (BOOL)((((BOOL)db[3] >> 3) & 0x01));
	}
	/* extract variable: OpenLoad21 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad21 = (BOOL)((((BOOL)db[3] >> 4) & 0x01));
	}
	/* extract variable: OpenLoad22 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad22 = (BOOL)((((BOOL)db[3] >> 5) & 0x01));
	}
	/* extract variable: OpenLoad23 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad23 = (BOOL)((((BOOL)db[3] >> 6) & 0x01));
	}
	/* extract variable: OpenLoad24 */
	if ( dlc >= 4 )
	{
		MUX_OpenLoad24 = (BOOL)((((BOOL)db[3] >> 7) & 0x01));
	}
	/* extract variable: OpenLoad25 */
	if ( dlc >= 5 )
	{
		MUX_OpenLoad25 = (BOOL)(((BOOL)db[4] & 0x01));
	}
	/* extract variable: LastFaultOutputNo */
	if ( dlc >= 7 )
	{
		MUX_LastFaultOutputNo = (USINT)((USINT)db[6]);
	}
	/* extract variable: EmergencyState */
	if ( dlc >= 8 )
	{
		MUX_EmergencyState = (USINT)((USINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_182 */
/* COB-ID:   0x00000182 */
/* CAN port: 0 */
static void canrx_0_00000182_CAN_182(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: DIGIN01 */
	if ( dlc >= 1 )
	{
		MUX_DIGIN01 = (SINT)(((SINT)db[0] & 0x03));
	}
	/* extract variable: DIGIN02 */
	if ( dlc >= 1 )
	{
		MUX_DIGIN02 = (SINT)((((SINT)db[0] >> 2) & 0x03));
	}
	/* extract variable: DIGIN03 */
	if ( dlc >= 1 )
	{
		MUX_DIGIN03 = (SINT)((((SINT)db[0] >> 4) & 0x03));
	}
	/* extract variable: DIGIN04 */
	if ( dlc >= 1 )
	{
		MUX_DIGIN04 = (SINT)((((SINT)db[0] >> 6) & 0x03));
	}
	/* extract variable: DIGIN05 */
	if ( dlc >= 2 )
	{
		MUX_DIGIN05 = (SINT)(((SINT)db[1] & 0x03));
	}
	/* extract variable: DIGIN06 */
	if ( dlc >= 2 )
	{
		MUX_DIGIN06 = (SINT)((((SINT)db[1] >> 2) & 0x03));
	}
	/* extract variable: DIGIN07 */
	if ( dlc >= 2 )
	{
		MUX_DIGIN07 = (SINT)((((SINT)db[1] >> 4) & 0x03));
	}
	/* extract variable: DIGIN08 */
	if ( dlc >= 2 )
	{
		MUX_DIGIN08 = (SINT)((((SINT)db[1] >> 6) & 0x03));
	}
	/* extract variable: DIGIN09 */
	if ( dlc >= 3 )
	{
		MUX_DIGIN09 = (SINT)(((SINT)db[2] & 0x03));
	}
	/* extract variable: DIGIN10 */
	if ( dlc >= 3 )
	{
		MUX_DIGIN10 = (SINT)((((SINT)db[2] >> 2) & 0x03));
	}
	/* extract variable: DIGIN11 */
	if ( dlc >= 3 )
	{
		MUX_DIGIN11 = (SINT)((((SINT)db[2] >> 4) & 0x03));
	}
	/* extract variable: DIGIN12 */
	if ( dlc >= 3 )
	{
		MUX_DIGIN12 = (SINT)((((SINT)db[2] >> 6) & 0x03));
	}
	/* extract variable: DIGIN13 */
	if ( dlc >= 4 )
	{
		MUX_DIGIN13 = (SINT)(((SINT)db[3] & 0x03));
	}
	/* extract variable: DIGIN14 */
	if ( dlc >= 4 )
	{
		MUX_DIGIN14 = (SINT)((((SINT)db[3] >> 2) & 0x03));
	}
	/* extract variable: DIGIN15 */
	if ( dlc >= 4 )
	{
		MUX_DIGIN15 = (SINT)((((SINT)db[3] >> 4) & 0x03));
	}
	/* extract variable: DIGIN16 */
	if ( dlc >= 4 )
	{
		MUX_DIGIN16 = (SINT)((((SINT)db[3] >> 6) & 0x03));
	}
	/* extract variable: DIGIN17 */
	if ( dlc >= 5 )
	{
		MUX_DIGIN17 = (SINT)(((SINT)db[4] & 0x03));
	}
	/* extract variable: DIGIN18 */
	if ( dlc >= 5 )
	{
		MUX_DIGIN18 = (SINT)((((SINT)db[4] >> 2) & 0x03));
	}
	/* extract variable: DIGIN19 */
	if ( dlc >= 5 )
	{
		MUX_DIGIN19 = (SINT)((((SINT)db[4] >> 4) & 0x03));
	}
	/* extract variable: DIGIN20 */
	if ( dlc >= 5 )
	{
		MUX_DIGIN20 = (SINT)((((SINT)db[4] >> 6) & 0x03));
	}
	/* extract variable: DIGIN21 */
	if ( dlc >= 6 )
	{
		MUX_DIGIN21 = (SINT)(((SINT)db[5] & 0x03));
	}
	/* extract variable: DIGIN22 */
	if ( dlc >= 6 )
	{
		MUX_DIGIN22 = (SINT)((((SINT)db[5] >> 2) & 0x03));
	}
	/* extract variable: DIGIN23 */
	if ( dlc >= 6 )
	{
		MUX_DIGIN23 = (SINT)((((SINT)db[5] >> 4) & 0x03));
	}
	/* extract variable: DIGIN24 */
	if ( dlc >= 6 )
	{
		MUX_DIGIN24 = (SINT)((((SINT)db[5] >> 6) & 0x03));
	}
	/* extract variable: DIGIN25 */
	if ( dlc >= 7 )
	{
		MUX_DIGIN25 = (SINT)(((SINT)db[6] & 0x03));
	}
	/* extract variable: DIGIN26 */
	if ( dlc >= 7 )
	{
		MUX_DIGIN26 = (SINT)((((SINT)db[6] >> 2) & 0x03));
	}
	/* extract variable: DIGIN27 */
	if ( dlc >= 7 )
	{
		MUX_DIGIN27 = (SINT)((((SINT)db[6] >> 4) & 0x03));
	}
	/* extract variable: DIGIN28 */
	if ( dlc >= 7 )
	{
		MUX_DIGIN28 = (SINT)((((SINT)db[6] >> 6) & 0x03));
	}
	/* extract variable: DIGIN29 */
	if ( dlc >= 8 )
	{
		MUX_DIGIN29 = (SINT)(((SINT)db[7] & 0x03));
	}
	/* extract variable: DIGIN30 */
	if ( dlc >= 8 )
	{
		MUX_DIGIN30 = (SINT)((((SINT)db[7] >> 2) & 0x03));
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
	/* extract variable: DIGIN01 */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN01 = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: DIGIN02_Winch_RC_Down */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN02_Winch_RC_Down = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: DIGIN03_FrontAxleDiffLock */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN03_FrontAxleDiffLock = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: DIGIN04 */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN04 = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: DIGIN05 */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN05 = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: DIGIN06_EndOfRope */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN06_EndOfRope = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: DIGIN07 */
	if ( dlc >= 1 )
	{
		IOMODE_2_DIGIN07 = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: DIGIN08_Winch_RS_Clutch */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGIN08_Winch_RS_Clutch = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: DIGIN09_Winch_RS_Down */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGIN09_Winch_RS_Down = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}
	/* extract variable: DIGIN10_Winch_RC_Clutch */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGIN10_Winch_RC_Clutch = (BOOL)((((BOOL)db[1] >> 2) & 0x01));
	}
	/* extract variable: DIGIN11_Winch_RS_Up */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGIN11_Winch_RS_Up = (BOOL)((((BOOL)db[1] >> 3) & 0x01));
	}
	/* extract variable: DIGOUT12 */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGOUT12 = (BOOL)((((BOOL)db[1] >> 4) & 0x01));
	}
	/* extract variable: DIGOUT13_RearAxleDiffLock */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGOUT13_RearAxleDiffLock = (BOOL)((((BOOL)db[1] >> 5) & 0x01));
	}
	/* extract variable: DIGOUT14 */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGOUT14 = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: DIGIN15_FeedBack_FrontAxle */
	if ( dlc >= 2 )
	{
		IOMODE_2_DIGIN15_FeedBack_FrontAxle = (BOOL)((((BOOL)db[1] >> 7) & 0x01));
	}
	/* extract variable: DIGIN16 */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN16 = (BOOL)(((BOOL)db[2] & 0x01));
	}
	/* extract variable: DIGIN17 */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN17 = (BOOL)((((BOOL)db[2] >> 1) & 0x01));
	}
	/* extract variable: DIGIN18 */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN18 = (BOOL)((((BOOL)db[2] >> 2) & 0x01));
	}
	/* extract variable: DIGIN19_InteriorLamps */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN19_InteriorLamps = (BOOL)((((BOOL)db[2] >> 3) & 0x01));
	}
	/* extract variable: DIGIN20_centralLockSystem */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN20_centralLockSystem = (BOOL)((((BOOL)db[2] >> 4) & 0x01));
	}
	/* extract variable: DIGIN21 */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN21 = (BOOL)((((BOOL)db[2] >> 5) & 0x01));
	}
	/* extract variable: DIGIN22 */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN22 = (BOOL)((((BOOL)db[2] >> 6) & 0x01));
	}
	/* extract variable: DIGIN23_DIGIN_FireFighter */
	if ( dlc >= 3 )
	{
		IOMODE_2_DIGIN23_DIGIN_FireFighter = (BOOL)((((BOOL)db[2] >> 7) & 0x01));
	}
	/* extract variable: DIGIN24_Back_HydDoorOpened */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN24_Back_HydDoorOpened = (BOOL)(((BOOL)db[3] & 0x01));
	}
	/* extract variable: DIGIN25_InteriorVentilation_1 */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN25_InteriorVentilation_1 = (BOOL)((((BOOL)db[3] >> 1) & 0x01));
	}
	/* extract variable: DIGIN26_InteriorVentilation_2 */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN26_InteriorVentilation_2 = (BOOL)((((BOOL)db[3] >> 2) & 0x01));
	}
	/* extract variable: DIGIN27_FootBrakeMicro */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN27_FootBrakeMicro = (BOOL)((((BOOL)db[3] >> 3) & 0x01));
	}
	/* extract variable: DIGIN28 */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN28 = (BOOL)((((BOOL)db[3] >> 4) & 0x01));
	}
	/* extract variable: DIGIN29 */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN29 = (BOOL)((((BOOL)db[3] >> 5) & 0x01));
	}
	/* extract variable: DIGIN30 */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN30 = (BOOL)((((BOOL)db[3] >> 6) & 0x01));
	}
	/* extract variable: DIGIN31 */
	if ( dlc >= 4 )
	{
		IOMODE_2_DIGIN31 = (BOOL)((((BOOL)db[3] >> 7) & 0x01));
	}
	/* extract variable: LastFaultOutputNo */
	if ( dlc >= 7 )
	{
		IOMODE_2_LastFaultOutputNo = (USINT)((USINT)db[6]);
	}
	/* extract variable: AlarmCode */
	if ( dlc >= 8 )
	{
		IOMODE_2_AlarmCode = (USINT)((USINT)db[7]);
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

	/* extract variable: DIGIN00_CentralLockSystemDisable */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN00_CentralLockSystemDisable = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: DIGIN01 */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN01 = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: DIGIN02 */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN02 = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: DIGIN03 */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN03 = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: DIGIN04 */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN04 = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: DIGIN05 */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN05 = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: DIGIN06 */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN06 = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: DIGIN07_EngineProtection */
	if ( dlc >= 1 )
	{
		IOMODE_DIGIN07_EngineProtection = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: DIGIN08_TankSelect_Right */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN08_TankSelect_Right = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: DIGIN09_FireFighter */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN09_FireFighter = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}
	/* extract variable: DIGIN10_TankSelect_Left */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN10_TankSelect_Left = (BOOL)((((BOOL)db[1] >> 2) & 0x01));
	}
	/* extract variable: DIGIN11 */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN11 = (BOOL)((((BOOL)db[1] >> 3) & 0x01));
	}
	/* extract variable: DIGIN12_DropBoxHigh */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN12_DropBoxHigh = (BOOL)((((BOOL)db[1] >> 4) & 0x01));
	}
	/* extract variable: DIGIN13 */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN13 = (BOOL)((((BOOL)db[1] >> 5) & 0x01));
	}
	/* extract variable: DIGIN14_DropBoxLow */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN14_DropBoxLow = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: DIGIN15_Park_Sensor_En */
	if ( dlc >= 2 )
	{
		IOMODE_DIGIN15_Park_Sensor_En = (BOOL)((((BOOL)db[1] >> 7) & 0x01));
	}
	/* extract variable: DIGIN16_FeedBack_FrontAxle */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN16_FeedBack_FrontAxle = (BOOL)(((BOOL)db[2] & 0x01));
	}
	/* extract variable: DIGIN17_InteriorVentilation */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN17_InteriorVentilation = (BOOL)((((BOOL)db[2] >> 1) & 0x01));
	}
	/* extract variable: DIGIN18_MirrorWindowResistance */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN18_MirrorWindowResistance = (BOOL)((((BOOL)db[2] >> 2) & 0x01));
	}
	/* extract variable: DIGIN19 */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN19 = (BOOL)((((BOOL)db[2] >> 3) & 0x01));
	}
	/* extract variable: DIGIN20 */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN20 = (BOOL)((((BOOL)db[2] >> 4) & 0x01));
	}
	/* extract variable: DIGIN21 */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN21 = (BOOL)((((BOOL)db[2] >> 5) & 0x01));
	}
	/* extract variable: DIGIN22_DopBoxNeutral */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN22_DopBoxNeutral = (BOOL)((((BOOL)db[2] >> 6) & 0x01));
	}
	/* extract variable: DIGIN23_SumpTempAlarm */
	if ( dlc >= 3 )
	{
		IOMODE_DIGIN23_SumpTempAlarm = (BOOL)((((BOOL)db[2] >> 7) & 0x01));
	}
	/* extract variable: DIGIN24 */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN24 = (BOOL)(((BOOL)db[3] & 0x01));
	}
	/* extract variable: DIGIN25_ABSoffRoad */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN25_ABSoffRoad = (BOOL)((((BOOL)db[3] >> 1) & 0x01));
	}
	/* extract variable: DIGIN26_RearFog */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN26_RearFog = (BOOL)((((BOOL)db[3] >> 2) & 0x01));
	}
	/* extract variable: DIGIN27_DiffLock */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN27_DiffLock = (BOOL)((((BOOL)db[3] >> 3) & 0x01));
	}
	/* extract variable: DIGIN28 */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN28 = (BOOL)((((BOOL)db[3] >> 4) & 0x01));
	}
	/* extract variable: DIGIN29 */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN29 = (BOOL)((((BOOL)db[3] >> 5) & 0x01));
	}
	/* extract variable: DIGIN30_FrontFog */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN30_FrontFog = (BOOL)((((BOOL)db[3] >> 6) & 0x01));
	}
	/* extract variable: DIGIN31 */
	if ( dlc >= 4 )
	{
		IOMODE_DIGIN31 = (BOOL)((((BOOL)db[3] >> 7) & 0x01));
	}
	/* extract variable: LastFaultOutputNo */
	if ( dlc >= 7 )
	{
		IOMODE_LastFaultOutputNo = (USINT)((USINT)db[6]);
	}
	/* extract variable: AlarmCode */
	if ( dlc >= 8 )
	{
		IOMODE_AlarmCode = (USINT)((USINT)db[7]);
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
	/* extract variable: AngleY */
	if ( dlc >= 4 )
	{
		AMUCBO_AngleY = (INT)(((INT)db[2] | ((INT)db[3] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_18E */
/* COB-ID:   0x0000018E */
/* CAN port: 0 */
static void canrx_0_0000018E_CAN_18E(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ReservedINT01 */
	if ( dlc >= 2 )
	{
		ASLSN_SURVEILReservedINT01 = (INT)(((INT)db[0] | ((INT)db[1] << 8)));
	}
	/* extract variable: ReservedINT02 */
	if ( dlc >= 4 )
	{
		ASLSN_SURVEILReservedINT02 = (INT)(((INT)db[2] | ((INT)db[3] << 8)));
	}
	/* extract variable: ReservedINT03 */
	if ( dlc >= 6 )
	{
		ASLSN_SURVEILReservedINT03 = (INT)(((INT)db[4] | ((INT)db[5] << 8)));
	}
	/* extract variable: ReservedINT04 */
	if ( dlc >= 8 )
	{
		ASLSN_SURVEILReservedINT04 = (INT)(((INT)db[6] | ((INT)db[7] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_18F */
/* COB-ID:   0x0000018F */
/* CAN port: 0 */
static void canrx_0_0000018F_CAN_18F(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ReservedSINT01 */
	if ( dlc >= 1 )
	{
		ASEL_SURVEILReservedSINT01 = (SINT)((SINT)db[0]);
	}
	/* extract variable: ReservedSINT02 */
	if ( dlc >= 2 )
	{
		ASEL_SURVEILReservedSINT02 = (BYTE)((BYTE)db[1]);
	}
	/* extract variable: ReservedSINT03 */
	if ( dlc >= 3 )
	{
		ASEL_SURVEILReservedSINT03 = (BYTE)((BYTE)db[2]);
	}
	/* extract variable: ReservedSINT04 */
	if ( dlc >= 4 )
	{
		ASEL_SURVEILReservedSINT04 = (BYTE)((BYTE)db[3]);
	}
	/* extract variable: ReservedSINT05 */
	if ( dlc >= 5 )
	{
		ASEL_SURVEILReservedSINT05 = (BYTE)((BYTE)db[4]);
	}
	/* extract variable: ReservedSINT06 */
	if ( dlc >= 6 )
	{
		ASEL_SURVEILReservedSINT06 = (BYTE)((BYTE)db[5]);
	}
	/* extract variable: ReservedSINT07 */
	if ( dlc >= 7 )
	{
		ASEL_SURVEILReservedSINT07 = (BYTE)((BYTE)db[6]);
	}
	/* extract variable: ReservedSINT08 */
	if ( dlc >= 8 )
	{
		ASEL_SURVEILReservedSINT08 = (BYTE)((BYTE)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_190 */
/* COB-ID:   0x00000190 */
/* CAN port: 0 */
static void canrx_0_00000190_CAN_190(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ReservedDINT01 */
	if ( dlc >= 4 )
	{
		ASEL_SURVEILReservedDINT01 = (DINT)(((((DINT)db[0] | ((DINT)db[1] << 8)) | ((DINT)db[2] << 16)) | ((DINT)db[3] << 24)));
	}
	/* extract variable: ReservedDINT02 */
	if ( dlc >= 8 )
	{
		ASEL_SURVEILReservedDINT02 = (DINT)(((((DINT)db[4] | ((DINT)db[5] << 8)) | ((DINT)db[6] << 16)) | ((DINT)db[7] << 24)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_200 */
/* COB-ID:   0x00000200 */
/* CAN port: 0 */
static void canrx_0_00000200_CAN_200(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: DebugActive */
	if ( dlc >= 1 )
	{
		GUI_MC2M_DebugActive = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: Selenoid1_Draw */
	if ( dlc >= 1 )
	{
		GUI_MC2M_Selenoid1_Draw = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: Selenoid1_Return */
	if ( dlc >= 1 )
	{
		GUI_MC2M_Selenoid1_Return = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: Selenoid2_Draw */
	if ( dlc >= 1 )
	{
		GUI_MC2M_Selenoid2_Draw = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: Selenoid2_Return */
	if ( dlc >= 1 )
	{
		GUI_MC2M_Selenoid2_Return = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: ParkerPumpActive */
	if ( dlc >= 1 )
	{
		GUI_MC2M_ParkerPumpActive = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: EvacuationValveActive */
	if ( dlc >= 1 )
	{
		GUI_MC2M_EvacuationValveActive = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: ParkerPumpRPM_Manuel */
	if ( dlc >= 1 )
	{
		GUI_MC2M_ParkerPumpRPM_Manuel = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: ParkerPumpRPM_Sel */
	if ( dlc >= 2 )
	{
		GUI_MC2M_ParkerPumpRPM_Sel = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: ParkerPumpRPM_Min */
	if ( dlc >= 4 )
	{
		GUI_MC2M_ParkerPumpRPM_Min = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}
	/* extract variable: ParkerPumpRPM_Max */
	if ( dlc >= 6 )
	{
		GUI_MC2M_ParkerPumpRPM_Max = (UINT)(((UINT)db[4] | ((UINT)db[5] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_281 */
/* COB-ID:   0x00000281 */
/* CAN port: 0 */
static void canrx_0_00000281_CAN_281(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ISenseOut01 */
	if ( dlc >= 1 )
	{
		MUX_ISenseOut01 = (USINT)((USINT)db[0]);
	}
	/* extract variable: ISenseOut02 */
	if ( dlc >= 2 )
	{
		MUX_ISenseOut02 = (USINT)((USINT)db[1]);
	}
	/* extract variable: ISenseOut03 */
	if ( dlc >= 3 )
	{
		MUX_ISenseOut03 = (USINT)((USINT)db[2]);
	}
	/* extract variable: ISenseOut04 */
	if ( dlc >= 4 )
	{
		MUX_ISenseOut04 = (USINT)((USINT)db[3]);
	}
	/* extract variable: ISenseOut05 */
	if ( dlc >= 5 )
	{
		MUX_ISenseOut05 = (USINT)((USINT)db[4]);
	}
	/* extract variable: ISenseOut06 */
	if ( dlc >= 6 )
	{
		MUX_ISenseOut06 = (USINT)((USINT)db[5]);
	}
	/* extract variable: ISenseOut07 */
	if ( dlc >= 7 )
	{
		MUX_ISenseOut07 = (USINT)((USINT)db[6]);
	}
	/* extract variable: ISenseOut08 */
	if ( dlc >= 8 )
	{
		MUX_ISenseOut08 = (USINT)((USINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_282 */
/* COB-ID:   0x00000282 */
/* CAN port: 0 */
static void canrx_0_00000282_CAN_282(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ISenseOut09 */
	if ( dlc >= 1 )
	{
		MUX_ISenseOut09 = (USINT)((USINT)db[0]);
	}
	/* extract variable: ISenseOut10 */
	if ( dlc >= 2 )
	{
		MUX_ISenseOut10 = (USINT)((USINT)db[1]);
	}
	/* extract variable: ISenseOut11 */
	if ( dlc >= 3 )
	{
		MUX_ISenseOut11 = (USINT)((USINT)db[2]);
	}
	/* extract variable: ISenseOut12 */
	if ( dlc >= 4 )
	{
		MUX_ISenseOut12 = (USINT)((USINT)db[3]);
	}
	/* extract variable: ISenseOut13 */
	if ( dlc >= 5 )
	{
		MUX_ISenseOut13 = (USINT)((USINT)db[4]);
	}
	/* extract variable: ISenseOut14 */
	if ( dlc >= 6 )
	{
		MUX_ISenseOut14 = (USINT)((USINT)db[5]);
	}
	/* extract variable: ISenseOut15 */
	if ( dlc >= 7 )
	{
		MUX_ISenseOut15 = (USINT)((USINT)db[6]);
	}
	/* extract variable: ISenseOut16 */
	if ( dlc >= 8 )
	{
		MUX_ISenseOut16 = (USINT)((USINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_381 */
/* COB-ID:   0x00000381 */
/* CAN port: 0 */
static void canrx_0_00000381_CAN_381(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ISenseOut17 */
	if ( dlc >= 1 )
	{
		MUX_ISenseOut17 = (USINT)((USINT)db[0]);
	}
	/* extract variable: ISenseOut19 */
	if ( dlc >= 2 )
	{
		MUX_ISenseOut19 = (USINT)((USINT)db[1]);
	}
	/* extract variable: ISenseOut21 */
	if ( dlc >= 3 )
	{
		MUX_ISenseOut21 = (USINT)((USINT)db[2]);
	}
	/* extract variable: ISenseOut22 */
	if ( dlc >= 4 )
	{
		MUX_ISenseOut22 = (USINT)((USINT)db[3]);
	}
	/* extract variable: ISenseOut23 */
	if ( dlc >= 5 )
	{
		MUX_ISenseOut23 = (USINT)((USINT)db[4]);
	}
	/* extract variable: ISenseOut24 */
	if ( dlc >= 6 )
	{
		MUX_ISenseOut24 = (USINT)((USINT)db[5]);
	}
	/* extract variable: ISenseOut25 */
	if ( dlc >= 7 )
	{
		MUX_ISenseOut25 = (USINT)((USINT)db[6]);
	}
	/* extract variable: ISenseOut26 */
	if ( dlc >= 8 )
	{
		MUX_ISenseOut26 = (USINT)((USINT)db[7]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_382 */
/* COB-ID:   0x00000382 */
/* CAN port: 0 */
static void canrx_0_00000382_CAN_382(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ISenseOut27 */
	if ( dlc >= 1 )
	{
		MUX_ISenseOut27 = (USINT)((USINT)db[0]);
	}
	/* extract variable: AnalogVoltBattery */
	if ( dlc >= 3 )
	{
		MUX_AnalogVoltBattery = (UINT)(((UINT)db[1] | ((UINT)db[2] << 8)));
	}
	/* extract variable: AnalogVoltBatteryDiv2 */
	if ( dlc >= 5 )
	{
		MUX_AnalogVoltBatteryDiv2 = (UINT)(((UINT)db[3] | ((UINT)db[4] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_713 */
/* COB-ID:   0x00000713 */
/* CAN port: 0 */
static void canrx_0_00000713_CAN_713(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: ResetTrip */
	if ( dlc >= 1 )
	{
		GIGA_MC2M_ResetTrip = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: GIGAOdometerBackup */
	if ( dlc >= 5 )
	{
		GIGA_MC2M_GIGAOdometerBackup = (UDINT)(((((UDINT)db[1] | ((UDINT)db[2] << 8)) | ((UDINT)db[3] << 16)) | ((UDINT)db[4] << 24)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_790 */
/* COB-ID:   0x00000790 */
/* CAN port: 0 */
static void canrx_0_00000790_CAN_790(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: service_brake_tank_1 */
	if ( dlc >= 2 )
	{
		NMSGUI_MC2M_service_brake_tank_1 = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: service_brake_tank_2 */
	if ( dlc >= 4 )
	{
		NMSGUI_MC2M_service_brake_tank_2 = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}
	/* extract variable: park_brake_tank */
	if ( dlc >= 6 )
	{
		NMSGUI_MC2M_park_brake_tank = (UINT)(((UINT)db[4] | ((UINT)db[5] << 8)));
	}
	/* extract variable: accessory_tank */
	if ( dlc >= 8 )
	{
		NMSGUI_MC2M_accessory_tank = (UINT)(((UINT)db[6] | ((UINT)db[7] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_791 */
/* COB-ID:   0x00000791 */
/* CAN port: 0 */
static void canrx_0_00000791_CAN_791(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: fuel_level_left */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_fuel_level_left = (SINT)((SINT)db[0]);
	}
	/* extract variable: fuel_level_right */
	if ( dlc >= 2 )
	{
		NMSGUI_MC2M_fuel_level_right = (SINT)((SINT)db[1]);
	}
	/* extract variable: fuel_temp_left */
	if ( dlc >= 3 )
	{
		NMSGUI_MC2M_fuel_temp_left = (SINT)((SINT)db[2]);
	}
	/* extract variable: fuel_temp_right */
	if ( dlc >= 4 )
	{
		NMSGUI_MC2M_fuel_temp_right = (SINT)((SINT)db[3]);
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

	/* extract variable: service_brake_tank_1_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_service_brake_tank_1_touch = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: service_brake_tank_2_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_service_brake_tank_2_touch = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: park_brake_tank_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_park_brake_tank_touch = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: accessory_tank_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_accessory_tank_touch = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
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
	/* extract variable: fuel_level_left_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_fuel_level_left_touch = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: fuel_level_right_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_fuel_level_right_touch = (BOOL)((((BOOL)db[0] >> 7) & 0x01));
	}
	/* extract variable: fuel_temp_left_touch */
	if ( dlc >= 2 )
	{
		NMSGUI_MC2M_fuel_temp_left_touch = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: fuel_temp_right_touch */
	if ( dlc >= 2 )
	{
		NMSGUI_MC2M_fuel_temp_right_touch = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_794 */
/* COB-ID:   0x00000794 */
/* CAN port: 0 */
static void canrx_0_00000794_CAN_794(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: dropbox_high_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_dropbox_high_touch = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: dropbox_neutral_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_dropbox_neutral_touch = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: dropbox_low_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_dropbox_low_touch = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: dropbox_admin_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_dropbox_admin_touch = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_795 */
/* COB-ID:   0x00000795 */
/* CAN port: 0 */
static void canrx_0_00000795_CAN_795(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: difflock_mid_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_difflock_mid_touch = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: difflock_rear_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_difflock_rear_touch = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: difflock_front_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_difflock_front_touch = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: difflock_admin_touch */
	if ( dlc >= 1 )
	{
		NMSGUI_MC2M_difflock_admin_touch = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_799 */
/* COB-ID:   0x00000799 */
/* CAN port: 0 */
static void canrx_0_00000799_CAN_799(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: RemoteGasEnable */
	if ( dlc >= 1 )
	{
		TEST_MC2M_RemoteGasEnable = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: RemoteGasRatio */
	if ( dlc >= 2 )
	{
		TEST_MC2M_RemoteGasRatio = (UINT)((UINT)db[1]);
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
	/* extract variable: LowBeamStatus */
	if ( dlc >= 1 )
	{
		OMNIA_LEFT_LowBeamStatus = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: LowBeam2Status */
	if ( dlc >= 1 )
	{
		OMNIA_LEFT_LowBeam2Status = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: TurnLeftSignal */
	if ( dlc >= 2 )
	{
		OMNIA_LEFT_TurnLeftSignal = (BOOL)(((BOOL)db[1] & 0x01));
	}
	/* extract variable: TurnRightSignal */
	if ( dlc >= 2 )
	{
		OMNIA_LEFT_TurnRightSignal = (BOOL)((((BOOL)db[1] >> 1) & 0x01));
	}
	/* extract variable: HighBeamStatus */
	if ( dlc >= 2 )
	{
		OMNIA_LEFT_HighBeamStatus = (BOOL)((((BOOL)db[1] >> 6) & 0x01));
	}
	/* extract variable: HighBeamFlashStatus */
	if ( dlc >= 2 )
	{
		OMNIA_LEFT_HighBeamFlashStatus = (BOOL)((((BOOL)db[1] >> 7) & 0x01));
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
	/* extract variable: WiperHIGH */
	if ( dlc >= 1 )
	{
		OMNIA_RIGHT_WiperHIGH = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}
	/* extract variable: WiperSelection */
	if ( dlc >= 1 )
	{
		OMNIA_RIGHT_WiperSelection = (BOOL)((((BOOL)db[0] >> 6) & 0x01));
	}
	/* extract variable: Washer */
	if ( dlc >= 6 )
	{
		OMNIA_RIGHT_Washer = (BOOL)((((BOOL)db[5] >> 5) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_Horn */
/* COB-ID:   0x38FFFF4E */
/* CAN port: 0 */
static void canrx_0_38FFFF4E_CAN_Horn(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_Open = FALSE;

	/* extract variable: Horn_Switch_On */
	if ( dlc >= 6 )
	{
		Horn_Switch_On = (BYTE)((BYTE)db[5]);
	}

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanOpen[27] = {
	/*    cob-id    tout  alm  alm   mux   mux  call function                            */
	/*                    off   on   pos    id                                           */
	{ 0x00000081,    150,   3,   1,  255,    0, canrx_0_00000081_CAN_81                  },
	{ 0x00000086,    150,   3,   1,  255,    0, canrx_0_00000086_CAN_86                  },
	{ 0x00000087,    150,   3,   1,  255,    0, canrx_0_00000087_CAN_87                  },
	{ 0x00000181,   1500,   3,   1,  255,    0, canrx_0_00000181_CAN_181                 },
	{ 0x00000182,    150,   3,   1,  255,    0, canrx_0_00000182_CAN_182                 },
	{ 0x00000186,    150,   3,   1,  255,    0, canrx_0_00000186_CAN_186                 },
	{ 0x00000187,    150,   3,   1,  255,    0, canrx_0_00000187_CAN_187                 },
	{ 0x0000018D,    500,   3,   1,  255,    0, canrx_0_0000018D_CAN_18D                 },
	{ 0x0000018E,    500,   3,   1,  255,    0, canrx_0_0000018E_CAN_18E                 },
	{ 0x0000018F,    500,   3,   1,  255,    0, canrx_0_0000018F_CAN_18F                 },
	{ 0x00000190,    500,   3,   1,  255,    0, canrx_0_00000190_CAN_190                 },
	{ 0x00000200,   1500,   3,   1,  255,    0, canrx_0_00000200_CAN_200                 },
	{ 0x00000281,    150,   3,   1,  255,    0, canrx_0_00000281_CAN_281                 },
	{ 0x00000282,    150,   3,   1,  255,    0, canrx_0_00000282_CAN_282                 },
	{ 0x00000381,    150,   3,   1,  255,    0, canrx_0_00000381_CAN_381                 },
	{ 0x00000382,    150,   3,   1,  255,    0, canrx_0_00000382_CAN_382                 },
	{ 0x00000713,   1500,   3,   1,  255,    0, canrx_0_00000713_CAN_713                 },
	{ 0x00000790,    500,   3,   1,  255,    0, canrx_0_00000790_CAN_790                 },
	{ 0x00000791,    500,   3,   1,  255,    0, canrx_0_00000791_CAN_791                 },
	{ 0x00000792,    500,   3,   1,  255,    0, canrx_0_00000792_CAN_792                 },
	{ 0x00000793,    500,   3,   1,  255,    0, canrx_0_00000793_CAN_793                 },
	{ 0x00000794,    500,   3,   1,  255,    0, canrx_0_00000794_CAN_794                 },
	{ 0x00000795,    500,   3,   1,  255,    0, canrx_0_00000795_CAN_795                 },
	{ 0x00000799,    150,   3,   1,  255,    0, canrx_0_00000799_CAN_799                 },
	{ 0x0CFDCC4E,   1500,   1,   1,  255,    0, canrx_0_2CFDCC4E_CAN_Light_4E            },
	{ 0x18FDCD4F,   1500,   1,   1,  255,    0, canrx_0_38FDCD4F_CAN_Wiper_4F            },
	{ 0x18FFFF4E,   1500,   3,   1,  255,    0, canrx_0_38FFFF4E_CAN_Horn                },
};

/* initializers for receive and transmit variables */
static const SINT FAR __init_value__MUX_AlarmStatusOutput01 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput02 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput03 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput04 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput05 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput06 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput07 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput08 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput09 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput10 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput11 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput12 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput13 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput14 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput15 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput16 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput17 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput19 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput21 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput22 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput23 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput24 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput25 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput26 = ((SINT)0);
static const SINT FAR __init_value__MUX_AlarmStatusOutput27 = ((SINT)0);
static const BOOL FAR __init_value__MUX_AlarmStatusOutput18 = FALSE;
static const BOOL FAR __init_value__MUX_AlarmStatusOutput20 = FALSE;
static const BOOL FAR __init_value__MUX_Alarm_CAN_LowSpeed = FALSE;
static const BOOL FAR __init_value__MUX_Alarm_EEPROM = FALSE;
static const BOOL FAR __init_value__MUX_Alarm_FrontWiper = FALSE;
static const BOOL FAR __init_value__MUX_Alarm_ReasWiper = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionA = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionB = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionC = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionD = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionE = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionF = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionG = FALSE;
static const BOOL FAR __init_value__MUX_AlarmSectionH = FALSE;
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT00 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT01 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT02 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT03 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT04 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT05 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT06 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT07 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT08 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT09 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT10 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT11 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT12 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT13 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT14 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT15 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT16 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT17 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT18 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT19 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT20 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT21 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT22 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT23 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT24 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT25 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT26 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT27 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT28 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT29 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT30 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_2_AlarmStatusDOUT31 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT00 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT01 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT02 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT03 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT04 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT05 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT06 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT07 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT08 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT09 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT10 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT11 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT12 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT13 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT14 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT15 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT16 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT17 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT18 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT19 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT20 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT21 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT22 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT23 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT24 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT25 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT26 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT27 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT28 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT29 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT30 = ((SINT)0);
static const SINT FAR __init_value__IOMODE_AlarmStatusDOUT31 = ((SINT)0);
static const BOOL FAR __init_value__MUX_KL15_Ignition = FALSE;
static const BOOL FAR __init_value__MUX_RearWiperPark_HiSide = FALSE;
static const BOOL FAR __init_value__MUX_FrontWiperPark_HiSide = FALSE;
static const BOOL FAR __init_value__MUX_RearWiperPark_LowSide = FALSE;
static const BOOL FAR __init_value__MUX_FrontWiperPark_LowSide = FALSE;
static const BOOL FAR __init_value__MUX_HazardButton = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad01 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad02 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad03 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad04 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad05 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad06 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad07 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad08 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad09 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad10 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad11 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad12 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad13 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad14 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad15 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad16 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad17 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad18 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad19 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad20 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad21 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad22 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad23 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad24 = FALSE;
static const BOOL FAR __init_value__MUX_OpenLoad25 = FALSE;
static const USINT FAR __init_value__MUX_LastFaultOutputNo = ((USINT)0U);
static const USINT FAR __init_value__MUX_EmergencyState = ((USINT)0U);
static const SINT FAR __init_value__MUX_DIGIN01 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN02 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN03 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN04 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN05 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN06 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN07 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN08 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN09 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN10 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN11 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN12 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN13 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN14 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN15 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN16 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN17 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN18 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN19 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN20 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN21 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN22 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN23 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN24 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN25 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN26 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN27 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN28 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN29 = ((SINT)0);
static const SINT FAR __init_value__MUX_DIGIN30 = ((SINT)0);
static const BOOL FAR __init_value__IOMODE_2_DIGIN00_Winch_RC_Up = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN01 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN02_Winch_RC_Down = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN03_FrontAxleDiffLock = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN04 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN05 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN06_EndOfRope = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN07 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN08_Winch_RS_Clutch = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN09_Winch_RS_Down = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN10_Winch_RC_Clutch = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN11_Winch_RS_Up = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGOUT12 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGOUT13_RearAxleDiffLock = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGOUT14 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN15_FeedBack_FrontAxle = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN16 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN17 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN18 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN19_InteriorLamps = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN20_centralLockSystem = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN21 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN22 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN23_DIGIN_FireFighter = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN24_Back_HydDoorOpened = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN25_InteriorVentilation_1 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN26_InteriorVentilation_2 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN27_FootBrakeMicro = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN28 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN29 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN30 = FALSE;
static const BOOL FAR __init_value__IOMODE_2_DIGIN31 = FALSE;
static const USINT FAR __init_value__IOMODE_2_LastFaultOutputNo = ((USINT)0U);
static const USINT FAR __init_value__IOMODE_2_AlarmCode = ((USINT)0U);
static const BOOL FAR __init_value__IOMODE_DIGIN00_CentralLockSystemDisable = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN01 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN02 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN03 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN04 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN05 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN06 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN07_EngineProtection = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN08_TankSelect_Right = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN09_FireFighter = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN10_TankSelect_Left = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN11 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN12_DropBoxHigh = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN13 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN14_DropBoxLow = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN15_Park_Sensor_En = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN16_FeedBack_FrontAxle = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN17_InteriorVentilation = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN18_MirrorWindowResistance = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN19 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN20 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN21 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN22_DopBoxNeutral = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN23_SumpTempAlarm = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN24 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN25_ABSoffRoad = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN26_RearFog = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN27_DiffLock = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN28 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN29 = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN30_FrontFog = FALSE;
static const BOOL FAR __init_value__IOMODE_DIGIN31 = FALSE;
static const USINT FAR __init_value__IOMODE_LastFaultOutputNo = ((USINT)0U);
static const USINT FAR __init_value__IOMODE_AlarmCode = ((USINT)0U);
static const INT FAR __init_value__AMUCBO_AngleX = ((INT)0);
static const INT FAR __init_value__AMUCBO_AngleY = ((INT)0);
static const INT FAR __init_value__ASLSN_SURVEILReservedINT01 = ((INT)0);
static const INT FAR __init_value__ASLSN_SURVEILReservedINT02 = ((INT)0);
static const INT FAR __init_value__ASLSN_SURVEILReservedINT03 = ((INT)0);
static const INT FAR __init_value__ASLSN_SURVEILReservedINT04 = ((INT)0);
static const SINT FAR __init_value__ASEL_SURVEILReservedSINT01 = ((SINT)0);
static const BYTE FAR __init_value__ASEL_SURVEILReservedSINT02 = ((BYTE)0x0U);
static const BYTE FAR __init_value__ASEL_SURVEILReservedSINT03 = ((BYTE)0x0U);
static const BYTE FAR __init_value__ASEL_SURVEILReservedSINT04 = ((BYTE)0x0U);
static const BYTE FAR __init_value__ASEL_SURVEILReservedSINT05 = ((BYTE)0x0U);
static const BYTE FAR __init_value__ASEL_SURVEILReservedSINT06 = ((BYTE)0x0U);
static const BYTE FAR __init_value__ASEL_SURVEILReservedSINT07 = ((BYTE)0x0U);
static const BYTE FAR __init_value__ASEL_SURVEILReservedSINT08 = ((BYTE)0x0U);
static const DINT FAR __init_value__ASEL_SURVEILReservedDINT01 = ((DINT)0L);
static const DINT FAR __init_value__ASEL_SURVEILReservedDINT02 = ((DINT)0L);
static const BOOL FAR __init_value__GUI_MC2M_DebugActive = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_Selenoid1_Draw = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_Selenoid1_Return = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_Selenoid2_Draw = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_Selenoid2_Return = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_ParkerPumpActive = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_EvacuationValveActive = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_ParkerPumpRPM_Manuel = FALSE;
static const BOOL FAR __init_value__GUI_MC2M_ParkerPumpRPM_Sel = FALSE;
static const UINT FAR __init_value__GUI_MC2M_ParkerPumpRPM_Min = ((UINT)0U);
static const UINT FAR __init_value__GUI_MC2M_ParkerPumpRPM_Max = ((UINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut01 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut02 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut03 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut04 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut05 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut06 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut07 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut08 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut09 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut10 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut11 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut12 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut13 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut14 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut15 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut16 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut17 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut19 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut21 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut22 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut23 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut24 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut25 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut26 = ((USINT)0U);
static const USINT FAR __init_value__MUX_ISenseOut27 = ((USINT)0U);
static const UINT FAR __init_value__MUX_AnalogVoltBattery = ((UINT)0U);
static const UINT FAR __init_value__MUX_AnalogVoltBatteryDiv2 = ((UINT)0U);
static const BOOL FAR __init_value__GIGA_MC2M_ResetTrip = FALSE;
static const UDINT FAR __init_value__GIGA_MC2M_GIGAOdometerBackup = ((UDINT)0UL);
static const UINT FAR __init_value__NMSGUI_MC2M_service_brake_tank_1 = ((UINT)0U);
static const UINT FAR __init_value__NMSGUI_MC2M_service_brake_tank_2 = ((UINT)0U);
static const UINT FAR __init_value__NMSGUI_MC2M_park_brake_tank = ((UINT)0U);
static const UINT FAR __init_value__NMSGUI_MC2M_accessory_tank = ((UINT)0U);
static const SINT FAR __init_value__NMSGUI_MC2M_fuel_level_left = ((SINT)0);
static const SINT FAR __init_value__NMSGUI_MC2M_fuel_level_right = ((SINT)0);
static const SINT FAR __init_value__NMSGUI_MC2M_fuel_temp_left = ((SINT)0);
static const SINT FAR __init_value__NMSGUI_MC2M_fuel_temp_right = ((SINT)0);
static const USINT FAR __init_value__NMSGUI_MC2M_hydraulic_tank_pressure = ((USINT)0U);
static const SINT FAR __init_value__NMSGUI_MC2M_hydraulic_tank_temp = ((SINT)0);
static const BOOL FAR __init_value__NMSGUI_MC2M_service_brake_tank_1_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_service_brake_tank_2_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_park_brake_tank_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_accessory_tank_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_hydraulic_tank_pressure_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_hydraulic_tank_temp_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_fuel_level_left_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_fuel_level_right_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_fuel_temp_left_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_fuel_temp_right_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_dropbox_high_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_dropbox_neutral_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_dropbox_low_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_dropbox_admin_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_difflock_mid_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_difflock_rear_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_difflock_front_touch = FALSE;
static const BOOL FAR __init_value__NMSGUI_MC2M_difflock_admin_touch = FALSE;
static const BOOL FAR __init_value__TEST_MC2M_RemoteGasEnable = FALSE;
static const UINT FAR __init_value__TEST_MC2M_RemoteGasRatio = ((UINT)0U);
static const BOOL FAR __init_value__OMNIA_LEFT_Light_P1_Park = FALSE;
static const BOOL FAR __init_value__OMNIA_LEFT_LowBeamStatus = FALSE;
static const BOOL FAR __init_value__OMNIA_LEFT_LowBeam2Status = FALSE;
static const BOOL FAR __init_value__OMNIA_LEFT_TurnLeftSignal = FALSE;
static const BOOL FAR __init_value__OMNIA_LEFT_TurnRightSignal = FALSE;
static const BOOL FAR __init_value__OMNIA_LEFT_HighBeamStatus = FALSE;
static const BOOL FAR __init_value__OMNIA_LEFT_HighBeamFlashStatus = FALSE;
static const BOOL FAR __init_value__OMNIA_RIGHT_WiperLOW = FALSE;
static const BOOL FAR __init_value__OMNIA_RIGHT_WiperHIGH = FALSE;
static const BOOL FAR __init_value__OMNIA_RIGHT_WiperSelection = FALSE;
static const BOOL FAR __init_value__OMNIA_RIGHT_Washer = FALSE;
static const BYTE FAR __init_value__Horn_Switch_On = ((BYTE)0x0U);
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT01_LowBeam_R = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT02_LowBeam_L = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT03_InteriorVantilator_1 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT04_InteriorVantilator_2 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT05_FollowLight = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT06 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT07_FrontAxleDiffLock = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT08_ResistancesFront = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT09_StopLamps = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT10_Buzzer = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT11 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT12_Park_Sensor_Control = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT13_HighBeam_Left = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT14_RearFogLamp = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT15_ReverseGearLamp = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT16_Tank_1_SupplyValf = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT17_Tank_1_ReturnValf = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT18 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT19_Tank_2_SupplyValf = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT20 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT21_Backup_Alarm = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT22_Tank_2_ReturnValf = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT23_Winch_Up = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT24_Winch_Down = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT25_Winch_Clutch = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT26 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_LED1 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_LED2 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_LED3 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_LED4 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_FrontWiperSLOW = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_FrontWiperFAST = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_FrontWiperINT1 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_FrontWiperINT2 = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_RearWiperSLOW = FALSE;
static const BOOL FAR __init_value__MC2M_MUX_RearWiperINT = FALSE;
static const USINT FAR __init_value__MC2M_MUX_Delay_INT1 = ((USINT)250U);
static const USINT FAR __init_value__MC2M_MUX_Delay_INT2 = ((USINT)250U);
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT00 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT01 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT02 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT03 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT04 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT05 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT06 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT07 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT08 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT09 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT10 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT11 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT13 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT14 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT15 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT16_Tank_1_ActivatedLamp = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT17_Tank_2_ActivatedLamp = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT18_KeyLedOnOff = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT19 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT20 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT21 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT22 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT23 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT24 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT25 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT26 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT27 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT28 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT29 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT30 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_2_DOUT31 = FALSE;
static const UINT FAR __init_value__MC2M_IOMODE_2_PWM00_Tanks_Gauge = ((UINT)0U);
static const UINT FAR __init_value__MC2M_IOMODE_2_PWM01 = ((UINT)0U);
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT00_ABS_IndicatorLamp = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT01_EngineProtection = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT02_ParkSensorControl = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT03 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT04 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT06 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT07 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT08 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT09 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT10 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT11_EngineBrakeActivation = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT12 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT13 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT14 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT15 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT16 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT17 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT18 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT19 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT20 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT21 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT22 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT23 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT24 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT25 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT26 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT27 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT28 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT29 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT30 = FALSE;
static const BOOL FAR __init_value__MC2M_IOMODE_DOUT31 = FALSE;
static const UINT FAR __init_value__MC2M_IOMODE_PWM00_SpeedGauge = ((UINT)0U);
static const UINT FAR __init_value__MC2M_IOMODE_PWM01_TempGauge = ((UINT)0U);
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
static const UINT FAR __init_value__MC2M_IOMODE_PWM03 = ((UINT)0U);
static const Enum358 FAR __init_value__CCVS_2_TwoSpeedAxleSwitch = 0;
static const Enum359 FAR __init_value__CCVS_2_ParkingBrakeSwitch = 0;
static const Enum360 FAR __init_value__CCVS_2_CruiseControlPauseSwitch = 0;
static const Enum361 FAR __init_value__CCVS_2_ParkBrakeReleaseInhibitRequest = 0;
static const Enum362 FAR __init_value__CCVS_2_CruiseControlActive = 0;
static const Enum363 FAR __init_value__CCVS_2_CruiseControlEnableSwitch = 0;
static const Enum364 FAR __init_value__CCVS_2_BrakeSwitch = 0;
static const Enum365 FAR __init_value__CCVS_2_ClutchSwitch = 0;
static const Enum366 FAR __init_value__CCVS_2_CruiseControlSetSwitch = 0;
static const Enum367 FAR __init_value__CCVS_2_CruiseControlCoastSwitch = 0;
static const Enum368 FAR __init_value__CCVS_2_CruiseControlResumeSwitch = 0;
static const Enum369 FAR __init_value__CCVS_2_CruiseControlAccelerateSwitch = 0;
static const USINT FAR __init_value__CCVS_2_CruiseControlSetSpeed = ((USINT)0U);
static const Enum370 FAR __init_value__CCVS_2_CruiseControlStates = 0;
static const Enum71 FAR __init_value__CCVS_2_EngineIdleIncrementSwitch = 0;
static const Enum71 FAR __init_value__CCVS_2_EngineIdleDecrementSwitch = 0;
static const Enum71 FAR __init_value__CCVS_2_EngineTestModeSwitch = 0;
static const Enum71 FAR __init_value__CCVS_2_EngineShutdownOverrideSwitch = 0;
static const UINT FAR __init_value__CCVS_2_WheelBasedVehicleSpeed = ((UINT)0U);
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP00 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP01 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP02 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP03 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP04 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP05 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP06 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP07 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP08 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP09 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP10 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP11 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP12 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP13 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP14 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP15 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP16 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP17 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP18 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP19 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP20 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP21 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP22 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP23 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP24 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP25 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP26 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP27 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP28 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP29 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP30 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP31 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP32 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP33 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP34 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP35 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP36 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP37 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP38 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP39 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP40 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP41 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP42 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP43 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP44 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP45 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP46 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP47 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP48 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP49 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP50 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP51 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT00 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT01 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT02 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT03 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT04 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT05 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT06 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT07 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT08 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT09 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT10 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT11 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT12 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT13 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT14 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT15 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT16 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT17 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT18 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT19 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT20 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT21 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT22 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT23 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT24 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT25 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT26 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT27 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT28 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT29 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT30 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT31 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT32 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT33 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT34 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT35 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT36 = FALSE;
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP10AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP12AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP13AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP14AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP22AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP25AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP30AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP31AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP32AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP33AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_INP35AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_OUT05AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_OUT10AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_OUT14AN = ((UINT)0U);
static const UINT FAR __init_value__MC2M_TERA_DIAG_OUT21AN = ((UINT)0U);
static const INT FAR __init_value__MC2M_TERA_DIAG_fuelTank_1_Temperature = ((INT)0);
static const INT FAR __init_value__MC2M_TERA_DIAG_PresLevel_Normalized = ((INT)1);
static const INT FAR __init_value__MC2M_TERA_DIAG_HTempLevel_Normalized_2 = ((INT)1);
static const INT FAR __init_value__MC2M_TERA_DIAG_HTempLevel_Normalized = ((INT)0);
static const UDINT FAR __init_value__MC2M_TERA_DIAG_TotalEngineHours = ((UDINT)0UL);
static const SINT FAR __init_value__MC2M_TERA_DIAG_Stat_4x4 = ((SINT)0);
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP52 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP53 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP54 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_INP55 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT37 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT38 = FALSE;
static const BOOL FAR __init_value__MC2M_TERA_DIAG_OUT39 = FALSE;
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
static const BOOL FAR __init_value__MC2M_GUI_DebugActive_Fb = FALSE;
static const BOOL FAR __init_value__MC2M_GUI_Selenoid1_Draw_Fb = FALSE;
static const BOOL FAR __init_value__MC2M_GUI_Selenoid1_Return_Fb = FALSE;
static const BOOL FAR __init_value__MC2M_GUI_Selenoid2_Draw_Fb = FALSE;
static const BOOL FAR __init_value__MC2M_GUI_Selenoid2_Return_Fb = FALSE;
static const BOOL FAR __init_value__MC2M_GUI_EvacuationValveActive_Fb = FALSE;
static const BOOL FAR __init_value__MC2M_GUI_ParkerPumpStatus = FALSE;
static const BOOL FAR __init_value__MC2M_GUI_FuelWaterDetect = FALSE;
static const SINT FAR __init_value__MC2M_GUI_FuelTankLevel1 = ((SINT)0);
static const SINT FAR __init_value__MC2M_GUI_FuelTankLevel2 = ((SINT)0);
static const UINT FAR __init_value__MC2M_GUI_FuelLevelSensorVal_L = ((UINT)0U);
static const UINT FAR __init_value__MC2M_GUI_FuelLevelSensorVal_R = ((UINT)0U);
static const BYTE FAR __init_value__MC2M_GUI_EvacuationValveState_Fb = ((BYTE)0x0U);
static const USINT FAR __init_value__MC2M_PARKERPUMP_Proprieatary_Byte = ((USINT)100U);
static const USINT FAR __init_value__MC2M_PARKERPUMP_Proprieatary_Byte2 = ((USINT)28U);
static const USINT FAR __init_value__MC2M_PARKERPUMP_Speed_Command = ((USINT)250U);
static const Enum_ParkerCommands FAR __init_value__MC2M_PARKERPUMP_Command = 0;
static const USINT FAR __init_value__MC2M_PARKERPUMP_Spare_Bits = ((USINT)0U);
static const BOOL FAR __init_value__MC2M_MOBILEYE2_RightSignal = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE2_LeftSignal = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE2_HighBeam = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE2_LowBeam = FALSE;
static const BOOL FAR __init_value__MC2M_MOBILEYE2_BrakePedal = FALSE;
static const USINT FAR __init_value__MC2M_MOBILEYE2_VehicleSpeed = ((USINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_service_brake_tank_1 = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_service_brake_tank_2 = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_park_brake_tank = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_accessory_tank = ((UINT)0U);
static const SINT FAR __init_value__MC2M_NMSGUI_fuel_level_left = ((SINT)0);
static const SINT FAR __init_value__MC2M_NMSGUI_fuel_level_right = ((SINT)0);
static const SINT FAR __init_value__MC2M_NMSGUI_fuel_temp_left = ((SINT)0);
static const SINT FAR __init_value__MC2M_NMSGUI_fuel_temp_right = ((SINT)0);
static const USINT FAR __init_value__MC2M_NMSGUI_hydraulic_tank_pressure = ((USINT)0U);
static const SINT FAR __init_value__MC2M_NMSGUI_hydraulic_tank_temp = ((SINT)0);
static const BOOL FAR __init_value__MC2M_NMSGUI_difflock_mid_fb = FALSE;
static const BOOL FAR __init_value__MC2M_NMSGUI_difflock_rear_fb = FALSE;
static const BOOL FAR __init_value__MC2M_NMSGUI_difflock_front_fb = FALSE;
static const BOOL FAR __init_value__MC2M_NMSGUI_dropbox_h_fb = FALSE;
static const BOOL FAR __init_value__MC2M_NMSGUI_dropbox_n_fb = FALSE;
static const BOOL FAR __init_value__MC2M_NMSGUI_dropbox_l_fb = FALSE;
static const UINT FAR __init_value__MC2M_NMSGUI_service_break_tank_1_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_service_break_tank_2_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_accessory_tank_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_park_break_tank_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_fuel_level_left_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_fuel_level_right_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_fuel_temp_left_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_fuel_temp_right_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb = ((UINT)0U);
static const UINT FAR __init_value__MC2M_NMSGUI_hydraulic_tank_temp_raw_fb = ((UINT)0U);

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanOpen[] = {
	{ &MUX_AlarmStatusOutput01, &__init_value__MUX_AlarmStatusOutput01, 1 },
	{ &MUX_AlarmStatusOutput02, &__init_value__MUX_AlarmStatusOutput02, 1 },
	{ &MUX_AlarmStatusOutput03, &__init_value__MUX_AlarmStatusOutput03, 1 },
	{ &MUX_AlarmStatusOutput04, &__init_value__MUX_AlarmStatusOutput04, 1 },
	{ &MUX_AlarmStatusOutput05, &__init_value__MUX_AlarmStatusOutput05, 1 },
	{ &MUX_AlarmStatusOutput06, &__init_value__MUX_AlarmStatusOutput06, 1 },
	{ &MUX_AlarmStatusOutput07, &__init_value__MUX_AlarmStatusOutput07, 1 },
	{ &MUX_AlarmStatusOutput08, &__init_value__MUX_AlarmStatusOutput08, 1 },
	{ &MUX_AlarmStatusOutput09, &__init_value__MUX_AlarmStatusOutput09, 1 },
	{ &MUX_AlarmStatusOutput10, &__init_value__MUX_AlarmStatusOutput10, 1 },
	{ &MUX_AlarmStatusOutput11, &__init_value__MUX_AlarmStatusOutput11, 1 },
	{ &MUX_AlarmStatusOutput12, &__init_value__MUX_AlarmStatusOutput12, 1 },
	{ &MUX_AlarmStatusOutput13, &__init_value__MUX_AlarmStatusOutput13, 1 },
	{ &MUX_AlarmStatusOutput14, &__init_value__MUX_AlarmStatusOutput14, 1 },
	{ &MUX_AlarmStatusOutput15, &__init_value__MUX_AlarmStatusOutput15, 1 },
	{ &MUX_AlarmStatusOutput16, &__init_value__MUX_AlarmStatusOutput16, 1 },
	{ &MUX_AlarmStatusOutput17, &__init_value__MUX_AlarmStatusOutput17, 1 },
	{ &MUX_AlarmStatusOutput19, &__init_value__MUX_AlarmStatusOutput19, 1 },
	{ &MUX_AlarmStatusOutput21, &__init_value__MUX_AlarmStatusOutput21, 1 },
	{ &MUX_AlarmStatusOutput22, &__init_value__MUX_AlarmStatusOutput22, 1 },
	{ &MUX_AlarmStatusOutput23, &__init_value__MUX_AlarmStatusOutput23, 1 },
	{ &MUX_AlarmStatusOutput24, &__init_value__MUX_AlarmStatusOutput24, 1 },
	{ &MUX_AlarmStatusOutput25, &__init_value__MUX_AlarmStatusOutput25, 1 },
	{ &MUX_AlarmStatusOutput26, &__init_value__MUX_AlarmStatusOutput26, 1 },
	{ &MUX_AlarmStatusOutput27, &__init_value__MUX_AlarmStatusOutput27, 1 },
	{ &MUX_AlarmStatusOutput18, &__init_value__MUX_AlarmStatusOutput18, 1 },
	{ &MUX_AlarmStatusOutput20, &__init_value__MUX_AlarmStatusOutput20, 1 },
	{ &MUX_Alarm_CAN_LowSpeed, &__init_value__MUX_Alarm_CAN_LowSpeed, 1 },
	{ &MUX_Alarm_EEPROM    , &__init_value__MUX_Alarm_EEPROM, 1 },
	{ &MUX_Alarm_FrontWiper, &__init_value__MUX_Alarm_FrontWiper, 1 },
	{ &MUX_Alarm_ReasWiper , &__init_value__MUX_Alarm_ReasWiper, 1 },
	{ &MUX_AlarmSectionA   , &__init_value__MUX_AlarmSectionA, 1 },
	{ &MUX_AlarmSectionB   , &__init_value__MUX_AlarmSectionB, 1 },
	{ &MUX_AlarmSectionC   , &__init_value__MUX_AlarmSectionC, 1 },
	{ &MUX_AlarmSectionD   , &__init_value__MUX_AlarmSectionD, 1 },
	{ &MUX_AlarmSectionE   , &__init_value__MUX_AlarmSectionE, 1 },
	{ &MUX_AlarmSectionF   , &__init_value__MUX_AlarmSectionF, 1 },
	{ &MUX_AlarmSectionG   , &__init_value__MUX_AlarmSectionG, 1 },
	{ &MUX_AlarmSectionH   , &__init_value__MUX_AlarmSectionH, 1 },
	{ &IOMODE_2_AlarmStatusDOUT00, &__init_value__IOMODE_2_AlarmStatusDOUT00, 1 },
	{ &IOMODE_2_AlarmStatusDOUT01, &__init_value__IOMODE_2_AlarmStatusDOUT01, 1 },
	{ &IOMODE_2_AlarmStatusDOUT02, &__init_value__IOMODE_2_AlarmStatusDOUT02, 1 },
	{ &IOMODE_2_AlarmStatusDOUT03, &__init_value__IOMODE_2_AlarmStatusDOUT03, 1 },
	{ &IOMODE_2_AlarmStatusDOUT04, &__init_value__IOMODE_2_AlarmStatusDOUT04, 1 },
	{ &IOMODE_2_AlarmStatusDOUT05, &__init_value__IOMODE_2_AlarmStatusDOUT05, 1 },
	{ &IOMODE_2_AlarmStatusDOUT06, &__init_value__IOMODE_2_AlarmStatusDOUT06, 1 },
	{ &IOMODE_2_AlarmStatusDOUT07, &__init_value__IOMODE_2_AlarmStatusDOUT07, 1 },
	{ &IOMODE_2_AlarmStatusDOUT08, &__init_value__IOMODE_2_AlarmStatusDOUT08, 1 },
	{ &IOMODE_2_AlarmStatusDOUT09, &__init_value__IOMODE_2_AlarmStatusDOUT09, 1 },
	{ &IOMODE_2_AlarmStatusDOUT10, &__init_value__IOMODE_2_AlarmStatusDOUT10, 1 },
	{ &IOMODE_2_AlarmStatusDOUT11, &__init_value__IOMODE_2_AlarmStatusDOUT11, 1 },
	{ &IOMODE_2_AlarmStatusDOUT12, &__init_value__IOMODE_2_AlarmStatusDOUT12, 1 },
	{ &IOMODE_2_AlarmStatusDOUT13, &__init_value__IOMODE_2_AlarmStatusDOUT13, 1 },
	{ &IOMODE_2_AlarmStatusDOUT14, &__init_value__IOMODE_2_AlarmStatusDOUT14, 1 },
	{ &IOMODE_2_AlarmStatusDOUT15, &__init_value__IOMODE_2_AlarmStatusDOUT15, 1 },
	{ &IOMODE_2_AlarmStatusDOUT16, &__init_value__IOMODE_2_AlarmStatusDOUT16, 1 },
	{ &IOMODE_2_AlarmStatusDOUT17, &__init_value__IOMODE_2_AlarmStatusDOUT17, 1 },
	{ &IOMODE_2_AlarmStatusDOUT18, &__init_value__IOMODE_2_AlarmStatusDOUT18, 1 },
	{ &IOMODE_2_AlarmStatusDOUT19, &__init_value__IOMODE_2_AlarmStatusDOUT19, 1 },
	{ &IOMODE_2_AlarmStatusDOUT20, &__init_value__IOMODE_2_AlarmStatusDOUT20, 1 },
	{ &IOMODE_2_AlarmStatusDOUT21, &__init_value__IOMODE_2_AlarmStatusDOUT21, 1 },
	{ &IOMODE_2_AlarmStatusDOUT22, &__init_value__IOMODE_2_AlarmStatusDOUT22, 1 },
	{ &IOMODE_2_AlarmStatusDOUT23, &__init_value__IOMODE_2_AlarmStatusDOUT23, 1 },
	{ &IOMODE_2_AlarmStatusDOUT24, &__init_value__IOMODE_2_AlarmStatusDOUT24, 1 },
	{ &IOMODE_2_AlarmStatusDOUT25, &__init_value__IOMODE_2_AlarmStatusDOUT25, 1 },
	{ &IOMODE_2_AlarmStatusDOUT26, &__init_value__IOMODE_2_AlarmStatusDOUT26, 1 },
	{ &IOMODE_2_AlarmStatusDOUT27, &__init_value__IOMODE_2_AlarmStatusDOUT27, 1 },
	{ &IOMODE_2_AlarmStatusDOUT28, &__init_value__IOMODE_2_AlarmStatusDOUT28, 1 },
	{ &IOMODE_2_AlarmStatusDOUT29, &__init_value__IOMODE_2_AlarmStatusDOUT29, 1 },
	{ &IOMODE_2_AlarmStatusDOUT30, &__init_value__IOMODE_2_AlarmStatusDOUT30, 1 },
	{ &IOMODE_2_AlarmStatusDOUT31, &__init_value__IOMODE_2_AlarmStatusDOUT31, 1 },
	{ &IOMODE_AlarmStatusDOUT00, &__init_value__IOMODE_AlarmStatusDOUT00, 1 },
	{ &IOMODE_AlarmStatusDOUT01, &__init_value__IOMODE_AlarmStatusDOUT01, 1 },
	{ &IOMODE_AlarmStatusDOUT02, &__init_value__IOMODE_AlarmStatusDOUT02, 1 },
	{ &IOMODE_AlarmStatusDOUT03, &__init_value__IOMODE_AlarmStatusDOUT03, 1 },
	{ &IOMODE_AlarmStatusDOUT04, &__init_value__IOMODE_AlarmStatusDOUT04, 1 },
	{ &IOMODE_AlarmStatusDOUT05, &__init_value__IOMODE_AlarmStatusDOUT05, 1 },
	{ &IOMODE_AlarmStatusDOUT06, &__init_value__IOMODE_AlarmStatusDOUT06, 1 },
	{ &IOMODE_AlarmStatusDOUT07, &__init_value__IOMODE_AlarmStatusDOUT07, 1 },
	{ &IOMODE_AlarmStatusDOUT08, &__init_value__IOMODE_AlarmStatusDOUT08, 1 },
	{ &IOMODE_AlarmStatusDOUT09, &__init_value__IOMODE_AlarmStatusDOUT09, 1 },
	{ &IOMODE_AlarmStatusDOUT10, &__init_value__IOMODE_AlarmStatusDOUT10, 1 },
	{ &IOMODE_AlarmStatusDOUT11, &__init_value__IOMODE_AlarmStatusDOUT11, 1 },
	{ &IOMODE_AlarmStatusDOUT12, &__init_value__IOMODE_AlarmStatusDOUT12, 1 },
	{ &IOMODE_AlarmStatusDOUT13, &__init_value__IOMODE_AlarmStatusDOUT13, 1 },
	{ &IOMODE_AlarmStatusDOUT14, &__init_value__IOMODE_AlarmStatusDOUT14, 1 },
	{ &IOMODE_AlarmStatusDOUT15, &__init_value__IOMODE_AlarmStatusDOUT15, 1 },
	{ &IOMODE_AlarmStatusDOUT16, &__init_value__IOMODE_AlarmStatusDOUT16, 1 },
	{ &IOMODE_AlarmStatusDOUT17, &__init_value__IOMODE_AlarmStatusDOUT17, 1 },
	{ &IOMODE_AlarmStatusDOUT18, &__init_value__IOMODE_AlarmStatusDOUT18, 1 },
	{ &IOMODE_AlarmStatusDOUT19, &__init_value__IOMODE_AlarmStatusDOUT19, 1 },
	{ &IOMODE_AlarmStatusDOUT20, &__init_value__IOMODE_AlarmStatusDOUT20, 1 },
	{ &IOMODE_AlarmStatusDOUT21, &__init_value__IOMODE_AlarmStatusDOUT21, 1 },
	{ &IOMODE_AlarmStatusDOUT22, &__init_value__IOMODE_AlarmStatusDOUT22, 1 },
	{ &IOMODE_AlarmStatusDOUT23, &__init_value__IOMODE_AlarmStatusDOUT23, 1 },
	{ &IOMODE_AlarmStatusDOUT24, &__init_value__IOMODE_AlarmStatusDOUT24, 1 },
	{ &IOMODE_AlarmStatusDOUT25, &__init_value__IOMODE_AlarmStatusDOUT25, 1 },
	{ &IOMODE_AlarmStatusDOUT26, &__init_value__IOMODE_AlarmStatusDOUT26, 1 },
	{ &IOMODE_AlarmStatusDOUT27, &__init_value__IOMODE_AlarmStatusDOUT27, 1 },
	{ &IOMODE_AlarmStatusDOUT28, &__init_value__IOMODE_AlarmStatusDOUT28, 1 },
	{ &IOMODE_AlarmStatusDOUT29, &__init_value__IOMODE_AlarmStatusDOUT29, 1 },
	{ &IOMODE_AlarmStatusDOUT30, &__init_value__IOMODE_AlarmStatusDOUT30, 1 },
	{ &IOMODE_AlarmStatusDOUT31, &__init_value__IOMODE_AlarmStatusDOUT31, 1 },
	{ &MUX_KL15_Ignition   , &__init_value__MUX_KL15_Ignition, 1 },
	{ &MUX_RearWiperPark_HiSide, &__init_value__MUX_RearWiperPark_HiSide, 1 },
	{ &MUX_FrontWiperPark_HiSide, &__init_value__MUX_FrontWiperPark_HiSide, 1 },
	{ &MUX_RearWiperPark_LowSide, &__init_value__MUX_RearWiperPark_LowSide, 1 },
	{ &MUX_FrontWiperPark_LowSide, &__init_value__MUX_FrontWiperPark_LowSide, 1 },
	{ &MUX_HazardButton    , &__init_value__MUX_HazardButton, 1 },
	{ &MUX_OpenLoad01      , &__init_value__MUX_OpenLoad01, 1 },
	{ &MUX_OpenLoad02      , &__init_value__MUX_OpenLoad02, 1 },
	{ &MUX_OpenLoad03      , &__init_value__MUX_OpenLoad03, 1 },
	{ &MUX_OpenLoad04      , &__init_value__MUX_OpenLoad04, 1 },
	{ &MUX_OpenLoad05      , &__init_value__MUX_OpenLoad05, 1 },
	{ &MUX_OpenLoad06      , &__init_value__MUX_OpenLoad06, 1 },
	{ &MUX_OpenLoad07      , &__init_value__MUX_OpenLoad07, 1 },
	{ &MUX_OpenLoad08      , &__init_value__MUX_OpenLoad08, 1 },
	{ &MUX_OpenLoad09      , &__init_value__MUX_OpenLoad09, 1 },
	{ &MUX_OpenLoad10      , &__init_value__MUX_OpenLoad10, 1 },
	{ &MUX_OpenLoad11      , &__init_value__MUX_OpenLoad11, 1 },
	{ &MUX_OpenLoad12      , &__init_value__MUX_OpenLoad12, 1 },
	{ &MUX_OpenLoad13      , &__init_value__MUX_OpenLoad13, 1 },
	{ &MUX_OpenLoad14      , &__init_value__MUX_OpenLoad14, 1 },
	{ &MUX_OpenLoad15      , &__init_value__MUX_OpenLoad15, 1 },
	{ &MUX_OpenLoad16      , &__init_value__MUX_OpenLoad16, 1 },
	{ &MUX_OpenLoad17      , &__init_value__MUX_OpenLoad17, 1 },
	{ &MUX_OpenLoad18      , &__init_value__MUX_OpenLoad18, 1 },
	{ &MUX_OpenLoad19      , &__init_value__MUX_OpenLoad19, 1 },
	{ &MUX_OpenLoad20      , &__init_value__MUX_OpenLoad20, 1 },
	{ &MUX_OpenLoad21      , &__init_value__MUX_OpenLoad21, 1 },
	{ &MUX_OpenLoad22      , &__init_value__MUX_OpenLoad22, 1 },
	{ &MUX_OpenLoad23      , &__init_value__MUX_OpenLoad23, 1 },
	{ &MUX_OpenLoad24      , &__init_value__MUX_OpenLoad24, 1 },
	{ &MUX_OpenLoad25      , &__init_value__MUX_OpenLoad25, 1 },
	{ &MUX_LastFaultOutputNo, &__init_value__MUX_LastFaultOutputNo, 1 },
	{ &MUX_EmergencyState  , &__init_value__MUX_EmergencyState, 1 },
	{ &MUX_DIGIN01         , &__init_value__MUX_DIGIN01, 1 },
	{ &MUX_DIGIN02         , &__init_value__MUX_DIGIN02, 1 },
	{ &MUX_DIGIN03         , &__init_value__MUX_DIGIN03, 1 },
	{ &MUX_DIGIN04         , &__init_value__MUX_DIGIN04, 1 },
	{ &MUX_DIGIN05         , &__init_value__MUX_DIGIN05, 1 },
	{ &MUX_DIGIN06         , &__init_value__MUX_DIGIN06, 1 },
	{ &MUX_DIGIN07         , &__init_value__MUX_DIGIN07, 1 },
	{ &MUX_DIGIN08         , &__init_value__MUX_DIGIN08, 1 },
	{ &MUX_DIGIN09         , &__init_value__MUX_DIGIN09, 1 },
	{ &MUX_DIGIN10         , &__init_value__MUX_DIGIN10, 1 },
	{ &MUX_DIGIN11         , &__init_value__MUX_DIGIN11, 1 },
	{ &MUX_DIGIN12         , &__init_value__MUX_DIGIN12, 1 },
	{ &MUX_DIGIN13         , &__init_value__MUX_DIGIN13, 1 },
	{ &MUX_DIGIN14         , &__init_value__MUX_DIGIN14, 1 },
	{ &MUX_DIGIN15         , &__init_value__MUX_DIGIN15, 1 },
	{ &MUX_DIGIN16         , &__init_value__MUX_DIGIN16, 1 },
	{ &MUX_DIGIN17         , &__init_value__MUX_DIGIN17, 1 },
	{ &MUX_DIGIN18         , &__init_value__MUX_DIGIN18, 1 },
	{ &MUX_DIGIN19         , &__init_value__MUX_DIGIN19, 1 },
	{ &MUX_DIGIN20         , &__init_value__MUX_DIGIN20, 1 },
	{ &MUX_DIGIN21         , &__init_value__MUX_DIGIN21, 1 },
	{ &MUX_DIGIN22         , &__init_value__MUX_DIGIN22, 1 },
	{ &MUX_DIGIN23         , &__init_value__MUX_DIGIN23, 1 },
	{ &MUX_DIGIN24         , &__init_value__MUX_DIGIN24, 1 },
	{ &MUX_DIGIN25         , &__init_value__MUX_DIGIN25, 1 },
	{ &MUX_DIGIN26         , &__init_value__MUX_DIGIN26, 1 },
	{ &MUX_DIGIN27         , &__init_value__MUX_DIGIN27, 1 },
	{ &MUX_DIGIN28         , &__init_value__MUX_DIGIN28, 1 },
	{ &MUX_DIGIN29         , &__init_value__MUX_DIGIN29, 1 },
	{ &MUX_DIGIN30         , &__init_value__MUX_DIGIN30, 1 },
	{ &IOMODE_2_DIGIN00_Winch_RC_Up, &__init_value__IOMODE_2_DIGIN00_Winch_RC_Up, 1 },
	{ &IOMODE_2_DIGIN01    , &__init_value__IOMODE_2_DIGIN01, 1 },
	{ &IOMODE_2_DIGIN02_Winch_RC_Down, &__init_value__IOMODE_2_DIGIN02_Winch_RC_Down, 1 },
	{ &IOMODE_2_DIGIN03_FrontAxleDiffLock, &__init_value__IOMODE_2_DIGIN03_FrontAxleDiffLock, 1 },
	{ &IOMODE_2_DIGIN04    , &__init_value__IOMODE_2_DIGIN04, 1 },
	{ &IOMODE_2_DIGIN05    , &__init_value__IOMODE_2_DIGIN05, 1 },
	{ &IOMODE_2_DIGIN06_EndOfRope, &__init_value__IOMODE_2_DIGIN06_EndOfRope, 1 },
	{ &IOMODE_2_DIGIN07    , &__init_value__IOMODE_2_DIGIN07, 1 },
	{ &IOMODE_2_DIGIN08_Winch_RS_Clutch, &__init_value__IOMODE_2_DIGIN08_Winch_RS_Clutch, 1 },
	{ &IOMODE_2_DIGIN09_Winch_RS_Down, &__init_value__IOMODE_2_DIGIN09_Winch_RS_Down, 1 },
	{ &IOMODE_2_DIGIN10_Winch_RC_Clutch, &__init_value__IOMODE_2_DIGIN10_Winch_RC_Clutch, 1 },
	{ &IOMODE_2_DIGIN11_Winch_RS_Up, &__init_value__IOMODE_2_DIGIN11_Winch_RS_Up, 1 },
	{ &IOMODE_2_DIGOUT12   , &__init_value__IOMODE_2_DIGOUT12, 1 },
	{ &IOMODE_2_DIGOUT13_RearAxleDiffLock, &__init_value__IOMODE_2_DIGOUT13_RearAxleDiffLock, 1 },
	{ &IOMODE_2_DIGOUT14   , &__init_value__IOMODE_2_DIGOUT14, 1 },
	{ &IOMODE_2_DIGIN15_FeedBack_FrontAxle, &__init_value__IOMODE_2_DIGIN15_FeedBack_FrontAxle, 1 },
	{ &IOMODE_2_DIGIN16    , &__init_value__IOMODE_2_DIGIN16, 1 },
	{ &IOMODE_2_DIGIN17    , &__init_value__IOMODE_2_DIGIN17, 1 },
	{ &IOMODE_2_DIGIN18    , &__init_value__IOMODE_2_DIGIN18, 1 },
	{ &IOMODE_2_DIGIN19_InteriorLamps, &__init_value__IOMODE_2_DIGIN19_InteriorLamps, 1 },
	{ &IOMODE_2_DIGIN20_centralLockSystem, &__init_value__IOMODE_2_DIGIN20_centralLockSystem, 1 },
	{ &IOMODE_2_DIGIN21    , &__init_value__IOMODE_2_DIGIN21, 1 },
	{ &IOMODE_2_DIGIN22    , &__init_value__IOMODE_2_DIGIN22, 1 },
	{ &IOMODE_2_DIGIN23_DIGIN_FireFighter, &__init_value__IOMODE_2_DIGIN23_DIGIN_FireFighter, 1 },
	{ &IOMODE_2_DIGIN24_Back_HydDoorOpened, &__init_value__IOMODE_2_DIGIN24_Back_HydDoorOpened, 1 },
	{ &IOMODE_2_DIGIN25_InteriorVentilation_1, &__init_value__IOMODE_2_DIGIN25_InteriorVentilation_1, 1 },
	{ &IOMODE_2_DIGIN26_InteriorVentilation_2, &__init_value__IOMODE_2_DIGIN26_InteriorVentilation_2, 1 },
	{ &IOMODE_2_DIGIN27_FootBrakeMicro, &__init_value__IOMODE_2_DIGIN27_FootBrakeMicro, 1 },
	{ &IOMODE_2_DIGIN28    , &__init_value__IOMODE_2_DIGIN28, 1 },
	{ &IOMODE_2_DIGIN29    , &__init_value__IOMODE_2_DIGIN29, 1 },
	{ &IOMODE_2_DIGIN30    , &__init_value__IOMODE_2_DIGIN30, 1 },
	{ &IOMODE_2_DIGIN31    , &__init_value__IOMODE_2_DIGIN31, 1 },
	{ &IOMODE_2_LastFaultOutputNo, &__init_value__IOMODE_2_LastFaultOutputNo, 1 },
	{ &IOMODE_2_AlarmCode  , &__init_value__IOMODE_2_AlarmCode, 1 },
	{ &IOMODE_DIGIN00_CentralLockSystemDisable, &__init_value__IOMODE_DIGIN00_CentralLockSystemDisable, 1 },
	{ &IOMODE_DIGIN01      , &__init_value__IOMODE_DIGIN01, 1 },
	{ &IOMODE_DIGIN02      , &__init_value__IOMODE_DIGIN02, 1 },
	{ &IOMODE_DIGIN03      , &__init_value__IOMODE_DIGIN03, 1 },
	{ &IOMODE_DIGIN04      , &__init_value__IOMODE_DIGIN04, 1 },
	{ &IOMODE_DIGIN05      , &__init_value__IOMODE_DIGIN05, 1 },
	{ &IOMODE_DIGIN06      , &__init_value__IOMODE_DIGIN06, 1 },
	{ &IOMODE_DIGIN07_EngineProtection, &__init_value__IOMODE_DIGIN07_EngineProtection, 1 },
	{ &IOMODE_DIGIN08_TankSelect_Right, &__init_value__IOMODE_DIGIN08_TankSelect_Right, 1 },
	{ &IOMODE_DIGIN09_FireFighter, &__init_value__IOMODE_DIGIN09_FireFighter, 1 },
	{ &IOMODE_DIGIN10_TankSelect_Left, &__init_value__IOMODE_DIGIN10_TankSelect_Left, 1 },
	{ &IOMODE_DIGIN11      , &__init_value__IOMODE_DIGIN11, 1 },
	{ &IOMODE_DIGIN12_DropBoxHigh, &__init_value__IOMODE_DIGIN12_DropBoxHigh, 1 },
	{ &IOMODE_DIGIN13      , &__init_value__IOMODE_DIGIN13, 1 },
	{ &IOMODE_DIGIN14_DropBoxLow, &__init_value__IOMODE_DIGIN14_DropBoxLow, 1 },
	{ &IOMODE_DIGIN15_Park_Sensor_En, &__init_value__IOMODE_DIGIN15_Park_Sensor_En, 1 },
	{ &IOMODE_DIGIN16_FeedBack_FrontAxle, &__init_value__IOMODE_DIGIN16_FeedBack_FrontAxle, 1 },
	{ &IOMODE_DIGIN17_InteriorVentilation, &__init_value__IOMODE_DIGIN17_InteriorVentilation, 1 },
	{ &IOMODE_DIGIN18_MirrorWindowResistance, &__init_value__IOMODE_DIGIN18_MirrorWindowResistance, 1 },
	{ &IOMODE_DIGIN19      , &__init_value__IOMODE_DIGIN19, 1 },
	{ &IOMODE_DIGIN20      , &__init_value__IOMODE_DIGIN20, 1 },
	{ &IOMODE_DIGIN21      , &__init_value__IOMODE_DIGIN21, 1 },
	{ &IOMODE_DIGIN22_DopBoxNeutral, &__init_value__IOMODE_DIGIN22_DopBoxNeutral, 1 },
	{ &IOMODE_DIGIN23_SumpTempAlarm, &__init_value__IOMODE_DIGIN23_SumpTempAlarm, 1 },
	{ &IOMODE_DIGIN24      , &__init_value__IOMODE_DIGIN24, 1 },
	{ &IOMODE_DIGIN25_ABSoffRoad, &__init_value__IOMODE_DIGIN25_ABSoffRoad, 1 },
	{ &IOMODE_DIGIN26_RearFog, &__init_value__IOMODE_DIGIN26_RearFog, 1 },
	{ &IOMODE_DIGIN27_DiffLock, &__init_value__IOMODE_DIGIN27_DiffLock, 1 },
	{ &IOMODE_DIGIN28      , &__init_value__IOMODE_DIGIN28, 1 },
	{ &IOMODE_DIGIN29      , &__init_value__IOMODE_DIGIN29, 1 },
	{ &IOMODE_DIGIN30_FrontFog, &__init_value__IOMODE_DIGIN30_FrontFog, 1 },
	{ &IOMODE_DIGIN31      , &__init_value__IOMODE_DIGIN31, 1 },
	{ &IOMODE_LastFaultOutputNo, &__init_value__IOMODE_LastFaultOutputNo, 1 },
	{ &IOMODE_AlarmCode    , &__init_value__IOMODE_AlarmCode, 1 },
	{ &AMUCBO_AngleX       , &__init_value__AMUCBO_AngleX, 2 },
	{ &AMUCBO_AngleY       , &__init_value__AMUCBO_AngleY, 2 },
	{ &ASLSN_SURVEILReservedINT01, &__init_value__ASLSN_SURVEILReservedINT01, 2 },
	{ &ASLSN_SURVEILReservedINT02, &__init_value__ASLSN_SURVEILReservedINT02, 2 },
	{ &ASLSN_SURVEILReservedINT03, &__init_value__ASLSN_SURVEILReservedINT03, 2 },
	{ &ASLSN_SURVEILReservedINT04, &__init_value__ASLSN_SURVEILReservedINT04, 2 },
	{ &ASEL_SURVEILReservedSINT01, &__init_value__ASEL_SURVEILReservedSINT01, 1 },
	{ &ASEL_SURVEILReservedSINT02, &__init_value__ASEL_SURVEILReservedSINT02, 1 },
	{ &ASEL_SURVEILReservedSINT03, &__init_value__ASEL_SURVEILReservedSINT03, 1 },
	{ &ASEL_SURVEILReservedSINT04, &__init_value__ASEL_SURVEILReservedSINT04, 1 },
	{ &ASEL_SURVEILReservedSINT05, &__init_value__ASEL_SURVEILReservedSINT05, 1 },
	{ &ASEL_SURVEILReservedSINT06, &__init_value__ASEL_SURVEILReservedSINT06, 1 },
	{ &ASEL_SURVEILReservedSINT07, &__init_value__ASEL_SURVEILReservedSINT07, 1 },
	{ &ASEL_SURVEILReservedSINT08, &__init_value__ASEL_SURVEILReservedSINT08, 1 },
	{ &ASEL_SURVEILReservedDINT01, &__init_value__ASEL_SURVEILReservedDINT01, 4 },
	{ &ASEL_SURVEILReservedDINT02, &__init_value__ASEL_SURVEILReservedDINT02, 4 },
	{ &GUI_MC2M_DebugActive, &__init_value__GUI_MC2M_DebugActive, 1 },
	{ &GUI_MC2M_Selenoid1_Draw, &__init_value__GUI_MC2M_Selenoid1_Draw, 1 },
	{ &GUI_MC2M_Selenoid1_Return, &__init_value__GUI_MC2M_Selenoid1_Return, 1 },
	{ &GUI_MC2M_Selenoid2_Draw, &__init_value__GUI_MC2M_Selenoid2_Draw, 1 },
	{ &GUI_MC2M_Selenoid2_Return, &__init_value__GUI_MC2M_Selenoid2_Return, 1 },
	{ &GUI_MC2M_ParkerPumpActive, &__init_value__GUI_MC2M_ParkerPumpActive, 1 },
	{ &GUI_MC2M_EvacuationValveActive, &__init_value__GUI_MC2M_EvacuationValveActive, 1 },
	{ &GUI_MC2M_ParkerPumpRPM_Manuel, &__init_value__GUI_MC2M_ParkerPumpRPM_Manuel, 1 },
	{ &GUI_MC2M_ParkerPumpRPM_Sel, &__init_value__GUI_MC2M_ParkerPumpRPM_Sel, 1 },
	{ &GUI_MC2M_ParkerPumpRPM_Min, &__init_value__GUI_MC2M_ParkerPumpRPM_Min, 2 },
	{ &GUI_MC2M_ParkerPumpRPM_Max, &__init_value__GUI_MC2M_ParkerPumpRPM_Max, 2 },
	{ &MUX_ISenseOut01     , &__init_value__MUX_ISenseOut01, 1 },
	{ &MUX_ISenseOut02     , &__init_value__MUX_ISenseOut02, 1 },
	{ &MUX_ISenseOut03     , &__init_value__MUX_ISenseOut03, 1 },
	{ &MUX_ISenseOut04     , &__init_value__MUX_ISenseOut04, 1 },
	{ &MUX_ISenseOut05     , &__init_value__MUX_ISenseOut05, 1 },
	{ &MUX_ISenseOut06     , &__init_value__MUX_ISenseOut06, 1 },
	{ &MUX_ISenseOut07     , &__init_value__MUX_ISenseOut07, 1 },
	{ &MUX_ISenseOut08     , &__init_value__MUX_ISenseOut08, 1 },
	{ &MUX_ISenseOut09     , &__init_value__MUX_ISenseOut09, 1 },
	{ &MUX_ISenseOut10     , &__init_value__MUX_ISenseOut10, 1 },
	{ &MUX_ISenseOut11     , &__init_value__MUX_ISenseOut11, 1 },
	{ &MUX_ISenseOut12     , &__init_value__MUX_ISenseOut12, 1 },
	{ &MUX_ISenseOut13     , &__init_value__MUX_ISenseOut13, 1 },
	{ &MUX_ISenseOut14     , &__init_value__MUX_ISenseOut14, 1 },
	{ &MUX_ISenseOut15     , &__init_value__MUX_ISenseOut15, 1 },
	{ &MUX_ISenseOut16     , &__init_value__MUX_ISenseOut16, 1 },
	{ &MUX_ISenseOut17     , &__init_value__MUX_ISenseOut17, 1 },
	{ &MUX_ISenseOut19     , &__init_value__MUX_ISenseOut19, 1 },
	{ &MUX_ISenseOut21     , &__init_value__MUX_ISenseOut21, 1 },
	{ &MUX_ISenseOut22     , &__init_value__MUX_ISenseOut22, 1 },
	{ &MUX_ISenseOut23     , &__init_value__MUX_ISenseOut23, 1 },
	{ &MUX_ISenseOut24     , &__init_value__MUX_ISenseOut24, 1 },
	{ &MUX_ISenseOut25     , &__init_value__MUX_ISenseOut25, 1 },
	{ &MUX_ISenseOut26     , &__init_value__MUX_ISenseOut26, 1 },
	{ &MUX_ISenseOut27     , &__init_value__MUX_ISenseOut27, 1 },
	{ &MUX_AnalogVoltBattery, &__init_value__MUX_AnalogVoltBattery, 2 },
	{ &MUX_AnalogVoltBatteryDiv2, &__init_value__MUX_AnalogVoltBatteryDiv2, 2 },
	{ &GIGA_MC2M_ResetTrip , &__init_value__GIGA_MC2M_ResetTrip, 1 },
	{ &GIGA_MC2M_GIGAOdometerBackup, &__init_value__GIGA_MC2M_GIGAOdometerBackup, 4 },
	{ &NMSGUI_MC2M_service_brake_tank_1, &__init_value__NMSGUI_MC2M_service_brake_tank_1, 2 },
	{ &NMSGUI_MC2M_service_brake_tank_2, &__init_value__NMSGUI_MC2M_service_brake_tank_2, 2 },
	{ &NMSGUI_MC2M_park_brake_tank, &__init_value__NMSGUI_MC2M_park_brake_tank, 2 },
	{ &NMSGUI_MC2M_accessory_tank, &__init_value__NMSGUI_MC2M_accessory_tank, 2 },
	{ &NMSGUI_MC2M_fuel_level_left, &__init_value__NMSGUI_MC2M_fuel_level_left, 1 },
	{ &NMSGUI_MC2M_fuel_level_right, &__init_value__NMSGUI_MC2M_fuel_level_right, 1 },
	{ &NMSGUI_MC2M_fuel_temp_left, &__init_value__NMSGUI_MC2M_fuel_temp_left, 1 },
	{ &NMSGUI_MC2M_fuel_temp_right, &__init_value__NMSGUI_MC2M_fuel_temp_right, 1 },
	{ &NMSGUI_MC2M_hydraulic_tank_pressure, &__init_value__NMSGUI_MC2M_hydraulic_tank_pressure, 1 },
	{ &NMSGUI_MC2M_hydraulic_tank_temp, &__init_value__NMSGUI_MC2M_hydraulic_tank_temp, 1 },
	{ &NMSGUI_MC2M_service_brake_tank_1_touch, &__init_value__NMSGUI_MC2M_service_brake_tank_1_touch, 1 },
	{ &NMSGUI_MC2M_service_brake_tank_2_touch, &__init_value__NMSGUI_MC2M_service_brake_tank_2_touch, 1 },
	{ &NMSGUI_MC2M_park_brake_tank_touch, &__init_value__NMSGUI_MC2M_park_brake_tank_touch, 1 },
	{ &NMSGUI_MC2M_accessory_tank_touch, &__init_value__NMSGUI_MC2M_accessory_tank_touch, 1 },
	{ &NMSGUI_MC2M_hydraulic_tank_pressure_touch, &__init_value__NMSGUI_MC2M_hydraulic_tank_pressure_touch, 1 },
	{ &NMSGUI_MC2M_hydraulic_tank_temp_touch, &__init_value__NMSGUI_MC2M_hydraulic_tank_temp_touch, 1 },
	{ &NMSGUI_MC2M_fuel_level_left_touch, &__init_value__NMSGUI_MC2M_fuel_level_left_touch, 1 },
	{ &NMSGUI_MC2M_fuel_level_right_touch, &__init_value__NMSGUI_MC2M_fuel_level_right_touch, 1 },
	{ &NMSGUI_MC2M_fuel_temp_left_touch, &__init_value__NMSGUI_MC2M_fuel_temp_left_touch, 1 },
	{ &NMSGUI_MC2M_fuel_temp_right_touch, &__init_value__NMSGUI_MC2M_fuel_temp_right_touch, 1 },
	{ &NMSGUI_MC2M_dropbox_high_touch, &__init_value__NMSGUI_MC2M_dropbox_high_touch, 1 },
	{ &NMSGUI_MC2M_dropbox_neutral_touch, &__init_value__NMSGUI_MC2M_dropbox_neutral_touch, 1 },
	{ &NMSGUI_MC2M_dropbox_low_touch, &__init_value__NMSGUI_MC2M_dropbox_low_touch, 1 },
	{ &NMSGUI_MC2M_dropbox_admin_touch, &__init_value__NMSGUI_MC2M_dropbox_admin_touch, 1 },
	{ &NMSGUI_MC2M_difflock_mid_touch, &__init_value__NMSGUI_MC2M_difflock_mid_touch, 1 },
	{ &NMSGUI_MC2M_difflock_rear_touch, &__init_value__NMSGUI_MC2M_difflock_rear_touch, 1 },
	{ &NMSGUI_MC2M_difflock_front_touch, &__init_value__NMSGUI_MC2M_difflock_front_touch, 1 },
	{ &NMSGUI_MC2M_difflock_admin_touch, &__init_value__NMSGUI_MC2M_difflock_admin_touch, 1 },
	{ &TEST_MC2M_RemoteGasEnable, &__init_value__TEST_MC2M_RemoteGasEnable, 1 },
	{ &TEST_MC2M_RemoteGasRatio, &__init_value__TEST_MC2M_RemoteGasRatio, 2 },
	{ &OMNIA_LEFT_Light_P1_Park, &__init_value__OMNIA_LEFT_Light_P1_Park, 1 },
	{ &OMNIA_LEFT_LowBeamStatus, &__init_value__OMNIA_LEFT_LowBeamStatus, 1 },
	{ &OMNIA_LEFT_LowBeam2Status, &__init_value__OMNIA_LEFT_LowBeam2Status, 1 },
	{ &OMNIA_LEFT_TurnLeftSignal, &__init_value__OMNIA_LEFT_TurnLeftSignal, 1 },
	{ &OMNIA_LEFT_TurnRightSignal, &__init_value__OMNIA_LEFT_TurnRightSignal, 1 },
	{ &OMNIA_LEFT_HighBeamStatus, &__init_value__OMNIA_LEFT_HighBeamStatus, 1 },
	{ &OMNIA_LEFT_HighBeamFlashStatus, &__init_value__OMNIA_LEFT_HighBeamFlashStatus, 1 },
	{ &OMNIA_RIGHT_WiperLOW, &__init_value__OMNIA_RIGHT_WiperLOW, 1 },
	{ &OMNIA_RIGHT_WiperHIGH, &__init_value__OMNIA_RIGHT_WiperHIGH, 1 },
	{ &OMNIA_RIGHT_WiperSelection, &__init_value__OMNIA_RIGHT_WiperSelection, 1 },
	{ &OMNIA_RIGHT_Washer  , &__init_value__OMNIA_RIGHT_Washer, 1 },
	{ &Horn_Switch_On      , &__init_value__Horn_Switch_On, 1 },
	{ &MC2M_MUX_DIGOUT01_LowBeam_R, &__init_value__MC2M_MUX_DIGOUT01_LowBeam_R, 1 },
	{ &MC2M_MUX_DIGOUT02_LowBeam_L, &__init_value__MC2M_MUX_DIGOUT02_LowBeam_L, 1 },
	{ &MC2M_MUX_DIGOUT03_InteriorVantilator_1, &__init_value__MC2M_MUX_DIGOUT03_InteriorVantilator_1, 1 },
	{ &MC2M_MUX_DIGOUT04_InteriorVantilator_2, &__init_value__MC2M_MUX_DIGOUT04_InteriorVantilator_2, 1 },
	{ &MC2M_MUX_DIGOUT05_FollowLight, &__init_value__MC2M_MUX_DIGOUT05_FollowLight, 1 },
	{ &MC2M_MUX_DIGOUT06   , &__init_value__MC2M_MUX_DIGOUT06, 1 },
	{ &MC2M_MUX_DIGOUT07_FrontAxleDiffLock, &__init_value__MC2M_MUX_DIGOUT07_FrontAxleDiffLock, 1 },
	{ &MC2M_MUX_DIGOUT08_ResistancesFront, &__init_value__MC2M_MUX_DIGOUT08_ResistancesFront, 1 },
	{ &MC2M_MUX_DIGOUT09_StopLamps, &__init_value__MC2M_MUX_DIGOUT09_StopLamps, 1 },
	{ &MC2M_MUX_DIGOUT10_Buzzer, &__init_value__MC2M_MUX_DIGOUT10_Buzzer, 1 },
	{ &MC2M_MUX_DIGOUT11   , &__init_value__MC2M_MUX_DIGOUT11, 1 },
	{ &MC2M_MUX_DIGOUT12_Park_Sensor_Control, &__init_value__MC2M_MUX_DIGOUT12_Park_Sensor_Control, 1 },
	{ &MC2M_MUX_DIGOUT13_HighBeam_Left, &__init_value__MC2M_MUX_DIGOUT13_HighBeam_Left, 1 },
	{ &MC2M_MUX_DIGOUT14_RearFogLamp, &__init_value__MC2M_MUX_DIGOUT14_RearFogLamp, 1 },
	{ &MC2M_MUX_DIGOUT15_ReverseGearLamp, &__init_value__MC2M_MUX_DIGOUT15_ReverseGearLamp, 1 },
	{ &MC2M_MUX_DIGOUT16_Tank_1_SupplyValf, &__init_value__MC2M_MUX_DIGOUT16_Tank_1_SupplyValf, 1 },
	{ &MC2M_MUX_DIGOUT17_Tank_1_ReturnValf, &__init_value__MC2M_MUX_DIGOUT17_Tank_1_ReturnValf, 1 },
	{ &MC2M_MUX_DIGOUT18   , &__init_value__MC2M_MUX_DIGOUT18, 1 },
	{ &MC2M_MUX_DIGOUT19_Tank_2_SupplyValf, &__init_value__MC2M_MUX_DIGOUT19_Tank_2_SupplyValf, 1 },
	{ &MC2M_MUX_DIGOUT20   , &__init_value__MC2M_MUX_DIGOUT20, 1 },
	{ &MC2M_MUX_DIGOUT21_Backup_Alarm, &__init_value__MC2M_MUX_DIGOUT21_Backup_Alarm, 1 },
	{ &MC2M_MUX_DIGOUT22_Tank_2_ReturnValf, &__init_value__MC2M_MUX_DIGOUT22_Tank_2_ReturnValf, 1 },
	{ &MC2M_MUX_DIGOUT23_Winch_Up, &__init_value__MC2M_MUX_DIGOUT23_Winch_Up, 1 },
	{ &MC2M_MUX_DIGOUT24_Winch_Down, &__init_value__MC2M_MUX_DIGOUT24_Winch_Down, 1 },
	{ &MC2M_MUX_DIGOUT25_Winch_Clutch, &__init_value__MC2M_MUX_DIGOUT25_Winch_Clutch, 1 },
	{ &MC2M_MUX_DIGOUT26   , &__init_value__MC2M_MUX_DIGOUT26, 1 },
	{ &MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter, &__init_value__MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter, 1 },
	{ &MC2M_MUX_LED1       , &__init_value__MC2M_MUX_LED1, 1 },
	{ &MC2M_MUX_LED2       , &__init_value__MC2M_MUX_LED2, 1 },
	{ &MC2M_MUX_LED3       , &__init_value__MC2M_MUX_LED3, 1 },
	{ &MC2M_MUX_LED4       , &__init_value__MC2M_MUX_LED4, 1 },
	{ &MC2M_MUX_FrontWiperSLOW, &__init_value__MC2M_MUX_FrontWiperSLOW, 1 },
	{ &MC2M_MUX_FrontWiperFAST, &__init_value__MC2M_MUX_FrontWiperFAST, 1 },
	{ &MC2M_MUX_FrontWiperINT1, &__init_value__MC2M_MUX_FrontWiperINT1, 1 },
	{ &MC2M_MUX_FrontWiperINT2, &__init_value__MC2M_MUX_FrontWiperINT2, 1 },
	{ &MC2M_MUX_RearWiperSLOW, &__init_value__MC2M_MUX_RearWiperSLOW, 1 },
	{ &MC2M_MUX_RearWiperINT, &__init_value__MC2M_MUX_RearWiperINT, 1 },
	{ &MC2M_MUX_Delay_INT1 , &__init_value__MC2M_MUX_Delay_INT1, 1 },
	{ &MC2M_MUX_Delay_INT2 , &__init_value__MC2M_MUX_Delay_INT2, 1 },
	{ &MC2M_IOMODE_2_DOUT00, &__init_value__MC2M_IOMODE_2_DOUT00, 1 },
	{ &MC2M_IOMODE_2_DOUT01, &__init_value__MC2M_IOMODE_2_DOUT01, 1 },
	{ &MC2M_IOMODE_2_DOUT02, &__init_value__MC2M_IOMODE_2_DOUT02, 1 },
	{ &MC2M_IOMODE_2_DOUT03, &__init_value__MC2M_IOMODE_2_DOUT03, 1 },
	{ &MC2M_IOMODE_2_DOUT04, &__init_value__MC2M_IOMODE_2_DOUT04, 1 },
	{ &MC2M_IOMODE_2_DOUT05, &__init_value__MC2M_IOMODE_2_DOUT05, 1 },
	{ &MC2M_IOMODE_2_DOUT06, &__init_value__MC2M_IOMODE_2_DOUT06, 1 },
	{ &MC2M_IOMODE_2_DOUT07, &__init_value__MC2M_IOMODE_2_DOUT07, 1 },
	{ &MC2M_IOMODE_2_DOUT08, &__init_value__MC2M_IOMODE_2_DOUT08, 1 },
	{ &MC2M_IOMODE_2_DOUT09, &__init_value__MC2M_IOMODE_2_DOUT09, 1 },
	{ &MC2M_IOMODE_2_DOUT10, &__init_value__MC2M_IOMODE_2_DOUT10, 1 },
	{ &MC2M_IOMODE_2_DOUT11, &__init_value__MC2M_IOMODE_2_DOUT11, 1 },
	{ &MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps, &__init_value__MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps, 1 },
	{ &MC2M_IOMODE_2_DOUT13, &__init_value__MC2M_IOMODE_2_DOUT13, 1 },
	{ &MC2M_IOMODE_2_DOUT14, &__init_value__MC2M_IOMODE_2_DOUT14, 1 },
	{ &MC2M_IOMODE_2_DOUT15, &__init_value__MC2M_IOMODE_2_DOUT15, 1 },
	{ &MC2M_IOMODE_2_DOUT16_Tank_1_ActivatedLamp, &__init_value__MC2M_IOMODE_2_DOUT16_Tank_1_ActivatedLamp, 1 },
	{ &MC2M_IOMODE_2_DOUT17_Tank_2_ActivatedLamp, &__init_value__MC2M_IOMODE_2_DOUT17_Tank_2_ActivatedLamp, 1 },
	{ &MC2M_IOMODE_2_DOUT18_KeyLedOnOff, &__init_value__MC2M_IOMODE_2_DOUT18_KeyLedOnOff, 1 },
	{ &MC2M_IOMODE_2_DOUT19, &__init_value__MC2M_IOMODE_2_DOUT19, 1 },
	{ &MC2M_IOMODE_2_DOUT20, &__init_value__MC2M_IOMODE_2_DOUT20, 1 },
	{ &MC2M_IOMODE_2_DOUT21, &__init_value__MC2M_IOMODE_2_DOUT21, 1 },
	{ &MC2M_IOMODE_2_DOUT22, &__init_value__MC2M_IOMODE_2_DOUT22, 1 },
	{ &MC2M_IOMODE_2_DOUT23, &__init_value__MC2M_IOMODE_2_DOUT23, 1 },
	{ &MC2M_IOMODE_2_DOUT24, &__init_value__MC2M_IOMODE_2_DOUT24, 1 },
	{ &MC2M_IOMODE_2_DOUT25, &__init_value__MC2M_IOMODE_2_DOUT25, 1 },
	{ &MC2M_IOMODE_2_DOUT26, &__init_value__MC2M_IOMODE_2_DOUT26, 1 },
	{ &MC2M_IOMODE_2_DOUT27, &__init_value__MC2M_IOMODE_2_DOUT27, 1 },
	{ &MC2M_IOMODE_2_DOUT28, &__init_value__MC2M_IOMODE_2_DOUT28, 1 },
	{ &MC2M_IOMODE_2_DOUT29, &__init_value__MC2M_IOMODE_2_DOUT29, 1 },
	{ &MC2M_IOMODE_2_DOUT30, &__init_value__MC2M_IOMODE_2_DOUT30, 1 },
	{ &MC2M_IOMODE_2_DOUT31, &__init_value__MC2M_IOMODE_2_DOUT31, 1 },
	{ &MC2M_IOMODE_2_PWM00_Tanks_Gauge, &__init_value__MC2M_IOMODE_2_PWM00_Tanks_Gauge, 2 },
	{ &MC2M_IOMODE_2_PWM01 , &__init_value__MC2M_IOMODE_2_PWM01, 2 },
	{ &MC2M_IOMODE_DOUT00_ABS_IndicatorLamp, &__init_value__MC2M_IOMODE_DOUT00_ABS_IndicatorLamp, 1 },
	{ &MC2M_IOMODE_DOUT01_EngineProtection, &__init_value__MC2M_IOMODE_DOUT01_EngineProtection, 1 },
	{ &MC2M_IOMODE_DOUT02_ParkSensorControl, &__init_value__MC2M_IOMODE_DOUT02_ParkSensorControl, 1 },
	{ &MC2M_IOMODE_DOUT03  , &__init_value__MC2M_IOMODE_DOUT03, 1 },
	{ &MC2M_IOMODE_DOUT04  , &__init_value__MC2M_IOMODE_DOUT04, 1 },
	{ &MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps, &__init_value__MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps, 1 },
	{ &MC2M_IOMODE_DOUT06  , &__init_value__MC2M_IOMODE_DOUT06, 1 },
	{ &MC2M_IOMODE_DOUT07  , &__init_value__MC2M_IOMODE_DOUT07, 1 },
	{ &MC2M_IOMODE_DOUT08  , &__init_value__MC2M_IOMODE_DOUT08, 1 },
	{ &MC2M_IOMODE_DOUT09  , &__init_value__MC2M_IOMODE_DOUT09, 1 },
	{ &MC2M_IOMODE_DOUT10  , &__init_value__MC2M_IOMODE_DOUT10, 1 },
	{ &MC2M_IOMODE_DOUT11_EngineBrakeActivation, &__init_value__MC2M_IOMODE_DOUT11_EngineBrakeActivation, 1 },
	{ &MC2M_IOMODE_DOUT12  , &__init_value__MC2M_IOMODE_DOUT12, 1 },
	{ &MC2M_IOMODE_DOUT13  , &__init_value__MC2M_IOMODE_DOUT13, 1 },
	{ &MC2M_IOMODE_DOUT14  , &__init_value__MC2M_IOMODE_DOUT14, 1 },
	{ &MC2M_IOMODE_DOUT15  , &__init_value__MC2M_IOMODE_DOUT15, 1 },
	{ &MC2M_IOMODE_DOUT16  , &__init_value__MC2M_IOMODE_DOUT16, 1 },
	{ &MC2M_IOMODE_DOUT17  , &__init_value__MC2M_IOMODE_DOUT17, 1 },
	{ &MC2M_IOMODE_DOUT18  , &__init_value__MC2M_IOMODE_DOUT18, 1 },
	{ &MC2M_IOMODE_DOUT19  , &__init_value__MC2M_IOMODE_DOUT19, 1 },
	{ &MC2M_IOMODE_DOUT20  , &__init_value__MC2M_IOMODE_DOUT20, 1 },
	{ &MC2M_IOMODE_DOUT21  , &__init_value__MC2M_IOMODE_DOUT21, 1 },
	{ &MC2M_IOMODE_DOUT22  , &__init_value__MC2M_IOMODE_DOUT22, 1 },
	{ &MC2M_IOMODE_DOUT23  , &__init_value__MC2M_IOMODE_DOUT23, 1 },
	{ &MC2M_IOMODE_DOUT24  , &__init_value__MC2M_IOMODE_DOUT24, 1 },
	{ &MC2M_IOMODE_DOUT25  , &__init_value__MC2M_IOMODE_DOUT25, 1 },
	{ &MC2M_IOMODE_DOUT26  , &__init_value__MC2M_IOMODE_DOUT26, 1 },
	{ &MC2M_IOMODE_DOUT27  , &__init_value__MC2M_IOMODE_DOUT27, 1 },
	{ &MC2M_IOMODE_DOUT28  , &__init_value__MC2M_IOMODE_DOUT28, 1 },
	{ &MC2M_IOMODE_DOUT29  , &__init_value__MC2M_IOMODE_DOUT29, 1 },
	{ &MC2M_IOMODE_DOUT30  , &__init_value__MC2M_IOMODE_DOUT30, 1 },
	{ &MC2M_IOMODE_DOUT31  , &__init_value__MC2M_IOMODE_DOUT31, 1 },
	{ &MC2M_IOMODE_PWM00_SpeedGauge, &__init_value__MC2M_IOMODE_PWM00_SpeedGauge, 2 },
	{ &MC2M_IOMODE_PWM01_TempGauge, &__init_value__MC2M_IOMODE_PWM01_TempGauge, 2 },
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
	{ &MC2M_IOMODE_PWM03   , &__init_value__MC2M_IOMODE_PWM03, 2 },
	{ &CCVS_2_TwoSpeedAxleSwitch, &__init_value__CCVS_2_TwoSpeedAxleSwitch, 2 },
	{ &CCVS_2_ParkingBrakeSwitch, &__init_value__CCVS_2_ParkingBrakeSwitch, 2 },
	{ &CCVS_2_CruiseControlPauseSwitch, &__init_value__CCVS_2_CruiseControlPauseSwitch, 2 },
	{ &CCVS_2_ParkBrakeReleaseInhibitRequest, &__init_value__CCVS_2_ParkBrakeReleaseInhibitRequest, 2 },
	{ &CCVS_2_CruiseControlActive, &__init_value__CCVS_2_CruiseControlActive, 2 },
	{ &CCVS_2_CruiseControlEnableSwitch, &__init_value__CCVS_2_CruiseControlEnableSwitch, 2 },
	{ &CCVS_2_BrakeSwitch  , &__init_value__CCVS_2_BrakeSwitch, 2 },
	{ &CCVS_2_ClutchSwitch , &__init_value__CCVS_2_ClutchSwitch, 2 },
	{ &CCVS_2_CruiseControlSetSwitch, &__init_value__CCVS_2_CruiseControlSetSwitch, 2 },
	{ &CCVS_2_CruiseControlCoastSwitch, &__init_value__CCVS_2_CruiseControlCoastSwitch, 2 },
	{ &CCVS_2_CruiseControlResumeSwitch, &__init_value__CCVS_2_CruiseControlResumeSwitch, 2 },
	{ &CCVS_2_CruiseControlAccelerateSwitch, &__init_value__CCVS_2_CruiseControlAccelerateSwitch, 2 },
	{ &CCVS_2_CruiseControlSetSpeed, &__init_value__CCVS_2_CruiseControlSetSpeed, 1 },
	{ &CCVS_2_CruiseControlStates, &__init_value__CCVS_2_CruiseControlStates, 2 },
	{ &CCVS_2_EngineIdleIncrementSwitch, &__init_value__CCVS_2_EngineIdleIncrementSwitch, 2 },
	{ &CCVS_2_EngineIdleDecrementSwitch, &__init_value__CCVS_2_EngineIdleDecrementSwitch, 2 },
	{ &CCVS_2_EngineTestModeSwitch, &__init_value__CCVS_2_EngineTestModeSwitch, 2 },
	{ &CCVS_2_EngineShutdownOverrideSwitch, &__init_value__CCVS_2_EngineShutdownOverrideSwitch, 2 },
	{ &CCVS_2_WheelBasedVehicleSpeed, &__init_value__CCVS_2_WheelBasedVehicleSpeed, 2 },
	{ &MC2M_TERA_DIAG_INP00, &__init_value__MC2M_TERA_DIAG_INP00, 1 },
	{ &MC2M_TERA_DIAG_INP01, &__init_value__MC2M_TERA_DIAG_INP01, 1 },
	{ &MC2M_TERA_DIAG_INP02, &__init_value__MC2M_TERA_DIAG_INP02, 1 },
	{ &MC2M_TERA_DIAG_INP03, &__init_value__MC2M_TERA_DIAG_INP03, 1 },
	{ &MC2M_TERA_DIAG_INP04, &__init_value__MC2M_TERA_DIAG_INP04, 1 },
	{ &MC2M_TERA_DIAG_INP05, &__init_value__MC2M_TERA_DIAG_INP05, 1 },
	{ &MC2M_TERA_DIAG_INP06, &__init_value__MC2M_TERA_DIAG_INP06, 1 },
	{ &MC2M_TERA_DIAG_INP07, &__init_value__MC2M_TERA_DIAG_INP07, 1 },
	{ &MC2M_TERA_DIAG_INP08, &__init_value__MC2M_TERA_DIAG_INP08, 1 },
	{ &MC2M_TERA_DIAG_INP09, &__init_value__MC2M_TERA_DIAG_INP09, 1 },
	{ &MC2M_TERA_DIAG_INP10, &__init_value__MC2M_TERA_DIAG_INP10, 1 },
	{ &MC2M_TERA_DIAG_INP11, &__init_value__MC2M_TERA_DIAG_INP11, 1 },
	{ &MC2M_TERA_DIAG_INP12, &__init_value__MC2M_TERA_DIAG_INP12, 1 },
	{ &MC2M_TERA_DIAG_INP13, &__init_value__MC2M_TERA_DIAG_INP13, 1 },
	{ &MC2M_TERA_DIAG_INP14, &__init_value__MC2M_TERA_DIAG_INP14, 1 },
	{ &MC2M_TERA_DIAG_INP15, &__init_value__MC2M_TERA_DIAG_INP15, 1 },
	{ &MC2M_TERA_DIAG_INP16, &__init_value__MC2M_TERA_DIAG_INP16, 1 },
	{ &MC2M_TERA_DIAG_INP17, &__init_value__MC2M_TERA_DIAG_INP17, 1 },
	{ &MC2M_TERA_DIAG_INP18, &__init_value__MC2M_TERA_DIAG_INP18, 1 },
	{ &MC2M_TERA_DIAG_INP19, &__init_value__MC2M_TERA_DIAG_INP19, 1 },
	{ &MC2M_TERA_DIAG_INP20, &__init_value__MC2M_TERA_DIAG_INP20, 1 },
	{ &MC2M_TERA_DIAG_INP21, &__init_value__MC2M_TERA_DIAG_INP21, 1 },
	{ &MC2M_TERA_DIAG_INP22, &__init_value__MC2M_TERA_DIAG_INP22, 1 },
	{ &MC2M_TERA_DIAG_INP23, &__init_value__MC2M_TERA_DIAG_INP23, 1 },
	{ &MC2M_TERA_DIAG_INP24, &__init_value__MC2M_TERA_DIAG_INP24, 1 },
	{ &MC2M_TERA_DIAG_INP25, &__init_value__MC2M_TERA_DIAG_INP25, 1 },
	{ &MC2M_TERA_DIAG_INP26, &__init_value__MC2M_TERA_DIAG_INP26, 1 },
	{ &MC2M_TERA_DIAG_INP27, &__init_value__MC2M_TERA_DIAG_INP27, 1 },
	{ &MC2M_TERA_DIAG_INP28, &__init_value__MC2M_TERA_DIAG_INP28, 1 },
	{ &MC2M_TERA_DIAG_INP29, &__init_value__MC2M_TERA_DIAG_INP29, 1 },
	{ &MC2M_TERA_DIAG_INP30, &__init_value__MC2M_TERA_DIAG_INP30, 1 },
	{ &MC2M_TERA_DIAG_INP31, &__init_value__MC2M_TERA_DIAG_INP31, 1 },
	{ &MC2M_TERA_DIAG_INP32, &__init_value__MC2M_TERA_DIAG_INP32, 1 },
	{ &MC2M_TERA_DIAG_INP33, &__init_value__MC2M_TERA_DIAG_INP33, 1 },
	{ &MC2M_TERA_DIAG_INP34, &__init_value__MC2M_TERA_DIAG_INP34, 1 },
	{ &MC2M_TERA_DIAG_INP35, &__init_value__MC2M_TERA_DIAG_INP35, 1 },
	{ &MC2M_TERA_DIAG_INP36, &__init_value__MC2M_TERA_DIAG_INP36, 1 },
	{ &MC2M_TERA_DIAG_INP37, &__init_value__MC2M_TERA_DIAG_INP37, 1 },
	{ &MC2M_TERA_DIAG_INP38, &__init_value__MC2M_TERA_DIAG_INP38, 1 },
	{ &MC2M_TERA_DIAG_INP39, &__init_value__MC2M_TERA_DIAG_INP39, 1 },
	{ &MC2M_TERA_DIAG_INP40, &__init_value__MC2M_TERA_DIAG_INP40, 1 },
	{ &MC2M_TERA_DIAG_INP41, &__init_value__MC2M_TERA_DIAG_INP41, 1 },
	{ &MC2M_TERA_DIAG_INP42, &__init_value__MC2M_TERA_DIAG_INP42, 1 },
	{ &MC2M_TERA_DIAG_INP43, &__init_value__MC2M_TERA_DIAG_INP43, 1 },
	{ &MC2M_TERA_DIAG_INP44, &__init_value__MC2M_TERA_DIAG_INP44, 1 },
	{ &MC2M_TERA_DIAG_INP45, &__init_value__MC2M_TERA_DIAG_INP45, 1 },
	{ &MC2M_TERA_DIAG_INP46, &__init_value__MC2M_TERA_DIAG_INP46, 1 },
	{ &MC2M_TERA_DIAG_INP47, &__init_value__MC2M_TERA_DIAG_INP47, 1 },
	{ &MC2M_TERA_DIAG_INP48, &__init_value__MC2M_TERA_DIAG_INP48, 1 },
	{ &MC2M_TERA_DIAG_INP49, &__init_value__MC2M_TERA_DIAG_INP49, 1 },
	{ &MC2M_TERA_DIAG_INP50, &__init_value__MC2M_TERA_DIAG_INP50, 1 },
	{ &MC2M_TERA_DIAG_INP51, &__init_value__MC2M_TERA_DIAG_INP51, 1 },
	{ &MC2M_TERA_DIAG_OUT00, &__init_value__MC2M_TERA_DIAG_OUT00, 1 },
	{ &MC2M_TERA_DIAG_OUT01, &__init_value__MC2M_TERA_DIAG_OUT01, 1 },
	{ &MC2M_TERA_DIAG_OUT02, &__init_value__MC2M_TERA_DIAG_OUT02, 1 },
	{ &MC2M_TERA_DIAG_OUT03, &__init_value__MC2M_TERA_DIAG_OUT03, 1 },
	{ &MC2M_TERA_DIAG_OUT04, &__init_value__MC2M_TERA_DIAG_OUT04, 1 },
	{ &MC2M_TERA_DIAG_OUT05, &__init_value__MC2M_TERA_DIAG_OUT05, 1 },
	{ &MC2M_TERA_DIAG_OUT06, &__init_value__MC2M_TERA_DIAG_OUT06, 1 },
	{ &MC2M_TERA_DIAG_OUT07, &__init_value__MC2M_TERA_DIAG_OUT07, 1 },
	{ &MC2M_TERA_DIAG_OUT08, &__init_value__MC2M_TERA_DIAG_OUT08, 1 },
	{ &MC2M_TERA_DIAG_OUT09, &__init_value__MC2M_TERA_DIAG_OUT09, 1 },
	{ &MC2M_TERA_DIAG_OUT10, &__init_value__MC2M_TERA_DIAG_OUT10, 1 },
	{ &MC2M_TERA_DIAG_OUT11, &__init_value__MC2M_TERA_DIAG_OUT11, 1 },
	{ &MC2M_TERA_DIAG_OUT12, &__init_value__MC2M_TERA_DIAG_OUT12, 1 },
	{ &MC2M_TERA_DIAG_OUT13, &__init_value__MC2M_TERA_DIAG_OUT13, 1 },
	{ &MC2M_TERA_DIAG_OUT14, &__init_value__MC2M_TERA_DIAG_OUT14, 1 },
	{ &MC2M_TERA_DIAG_OUT15, &__init_value__MC2M_TERA_DIAG_OUT15, 1 },
	{ &MC2M_TERA_DIAG_OUT16, &__init_value__MC2M_TERA_DIAG_OUT16, 1 },
	{ &MC2M_TERA_DIAG_OUT17, &__init_value__MC2M_TERA_DIAG_OUT17, 1 },
	{ &MC2M_TERA_DIAG_OUT18, &__init_value__MC2M_TERA_DIAG_OUT18, 1 },
	{ &MC2M_TERA_DIAG_OUT19, &__init_value__MC2M_TERA_DIAG_OUT19, 1 },
	{ &MC2M_TERA_DIAG_OUT20, &__init_value__MC2M_TERA_DIAG_OUT20, 1 },
	{ &MC2M_TERA_DIAG_OUT21, &__init_value__MC2M_TERA_DIAG_OUT21, 1 },
	{ &MC2M_TERA_DIAG_OUT22, &__init_value__MC2M_TERA_DIAG_OUT22, 1 },
	{ &MC2M_TERA_DIAG_OUT23, &__init_value__MC2M_TERA_DIAG_OUT23, 1 },
	{ &MC2M_TERA_DIAG_OUT24, &__init_value__MC2M_TERA_DIAG_OUT24, 1 },
	{ &MC2M_TERA_DIAG_OUT25, &__init_value__MC2M_TERA_DIAG_OUT25, 1 },
	{ &MC2M_TERA_DIAG_OUT26, &__init_value__MC2M_TERA_DIAG_OUT26, 1 },
	{ &MC2M_TERA_DIAG_OUT27, &__init_value__MC2M_TERA_DIAG_OUT27, 1 },
	{ &MC2M_TERA_DIAG_OUT28, &__init_value__MC2M_TERA_DIAG_OUT28, 1 },
	{ &MC2M_TERA_DIAG_OUT29, &__init_value__MC2M_TERA_DIAG_OUT29, 1 },
	{ &MC2M_TERA_DIAG_OUT30, &__init_value__MC2M_TERA_DIAG_OUT30, 1 },
	{ &MC2M_TERA_DIAG_OUT31, &__init_value__MC2M_TERA_DIAG_OUT31, 1 },
	{ &MC2M_TERA_DIAG_OUT32, &__init_value__MC2M_TERA_DIAG_OUT32, 1 },
	{ &MC2M_TERA_DIAG_OUT33, &__init_value__MC2M_TERA_DIAG_OUT33, 1 },
	{ &MC2M_TERA_DIAG_OUT34, &__init_value__MC2M_TERA_DIAG_OUT34, 1 },
	{ &MC2M_TERA_DIAG_OUT35, &__init_value__MC2M_TERA_DIAG_OUT35, 1 },
	{ &MC2M_TERA_DIAG_OUT36, &__init_value__MC2M_TERA_DIAG_OUT36, 1 },
	{ &MC2M_TERA_DIAG_INP10AN, &__init_value__MC2M_TERA_DIAG_INP10AN, 2 },
	{ &MC2M_TERA_DIAG_INP12AN, &__init_value__MC2M_TERA_DIAG_INP12AN, 2 },
	{ &MC2M_TERA_DIAG_INP13AN, &__init_value__MC2M_TERA_DIAG_INP13AN, 2 },
	{ &MC2M_TERA_DIAG_INP14AN, &__init_value__MC2M_TERA_DIAG_INP14AN, 2 },
	{ &MC2M_TERA_DIAG_INP22AN, &__init_value__MC2M_TERA_DIAG_INP22AN, 2 },
	{ &MC2M_TERA_DIAG_INP25AN, &__init_value__MC2M_TERA_DIAG_INP25AN, 2 },
	{ &MC2M_TERA_DIAG_INP30AN, &__init_value__MC2M_TERA_DIAG_INP30AN, 2 },
	{ &MC2M_TERA_DIAG_INP31AN, &__init_value__MC2M_TERA_DIAG_INP31AN, 2 },
	{ &MC2M_TERA_DIAG_INP32AN, &__init_value__MC2M_TERA_DIAG_INP32AN, 2 },
	{ &MC2M_TERA_DIAG_INP33AN, &__init_value__MC2M_TERA_DIAG_INP33AN, 2 },
	{ &MC2M_TERA_DIAG_INP35AN, &__init_value__MC2M_TERA_DIAG_INP35AN, 2 },
	{ &MC2M_TERA_DIAG_OUT05AN, &__init_value__MC2M_TERA_DIAG_OUT05AN, 2 },
	{ &MC2M_TERA_DIAG_OUT10AN, &__init_value__MC2M_TERA_DIAG_OUT10AN, 2 },
	{ &MC2M_TERA_DIAG_OUT14AN, &__init_value__MC2M_TERA_DIAG_OUT14AN, 2 },
	{ &MC2M_TERA_DIAG_OUT21AN, &__init_value__MC2M_TERA_DIAG_OUT21AN, 2 },
	{ &MC2M_TERA_DIAG_fuelTank_1_Temperature, &__init_value__MC2M_TERA_DIAG_fuelTank_1_Temperature, 2 },
	{ &MC2M_TERA_DIAG_PresLevel_Normalized, &__init_value__MC2M_TERA_DIAG_PresLevel_Normalized, 2 },
	{ &MC2M_TERA_DIAG_HTempLevel_Normalized_2, &__init_value__MC2M_TERA_DIAG_HTempLevel_Normalized_2, 2 },
	{ &MC2M_TERA_DIAG_HTempLevel_Normalized, &__init_value__MC2M_TERA_DIAG_HTempLevel_Normalized, 2 },
	{ &MC2M_TERA_DIAG_TotalEngineHours, &__init_value__MC2M_TERA_DIAG_TotalEngineHours, 4 },
	{ &MC2M_TERA_DIAG_Stat_4x4, &__init_value__MC2M_TERA_DIAG_Stat_4x4, 1 },
	{ &MC2M_TERA_DIAG_INP52, &__init_value__MC2M_TERA_DIAG_INP52, 1 },
	{ &MC2M_TERA_DIAG_INP53, &__init_value__MC2M_TERA_DIAG_INP53, 1 },
	{ &MC2M_TERA_DIAG_INP54, &__init_value__MC2M_TERA_DIAG_INP54, 1 },
	{ &MC2M_TERA_DIAG_INP55, &__init_value__MC2M_TERA_DIAG_INP55, 1 },
	{ &MC2M_TERA_DIAG_OUT37, &__init_value__MC2M_TERA_DIAG_OUT37, 1 },
	{ &MC2M_TERA_DIAG_OUT38, &__init_value__MC2M_TERA_DIAG_OUT38, 1 },
	{ &MC2M_TERA_DIAG_OUT39, &__init_value__MC2M_TERA_DIAG_OUT39, 1 },
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
	{ &MC2M_GUI_DebugActive_Fb, &__init_value__MC2M_GUI_DebugActive_Fb, 1 },
	{ &MC2M_GUI_Selenoid1_Draw_Fb, &__init_value__MC2M_GUI_Selenoid1_Draw_Fb, 1 },
	{ &MC2M_GUI_Selenoid1_Return_Fb, &__init_value__MC2M_GUI_Selenoid1_Return_Fb, 1 },
	{ &MC2M_GUI_Selenoid2_Draw_Fb, &__init_value__MC2M_GUI_Selenoid2_Draw_Fb, 1 },
	{ &MC2M_GUI_Selenoid2_Return_Fb, &__init_value__MC2M_GUI_Selenoid2_Return_Fb, 1 },
	{ &MC2M_GUI_EvacuationValveActive_Fb, &__init_value__MC2M_GUI_EvacuationValveActive_Fb, 1 },
	{ &MC2M_GUI_ParkerPumpStatus, &__init_value__MC2M_GUI_ParkerPumpStatus, 1 },
	{ &MC2M_GUI_FuelWaterDetect, &__init_value__MC2M_GUI_FuelWaterDetect, 1 },
	{ &MC2M_GUI_FuelTankLevel1, &__init_value__MC2M_GUI_FuelTankLevel1, 1 },
	{ &MC2M_GUI_FuelTankLevel2, &__init_value__MC2M_GUI_FuelTankLevel2, 1 },
	{ &MC2M_GUI_FuelLevelSensorVal_L, &__init_value__MC2M_GUI_FuelLevelSensorVal_L, 2 },
	{ &MC2M_GUI_FuelLevelSensorVal_R, &__init_value__MC2M_GUI_FuelLevelSensorVal_R, 2 },
	{ &MC2M_GUI_EvacuationValveState_Fb, &__init_value__MC2M_GUI_EvacuationValveState_Fb, 1 },
	{ &MC2M_PARKERPUMP_Proprieatary_Byte, &__init_value__MC2M_PARKERPUMP_Proprieatary_Byte, 1 },
	{ &MC2M_PARKERPUMP_Proprieatary_Byte2, &__init_value__MC2M_PARKERPUMP_Proprieatary_Byte2, 1 },
	{ &MC2M_PARKERPUMP_Speed_Command, &__init_value__MC2M_PARKERPUMP_Speed_Command, 1 },
	{ &MC2M_PARKERPUMP_Command, &__init_value__MC2M_PARKERPUMP_Command, 2 },
	{ &MC2M_PARKERPUMP_Spare_Bits, &__init_value__MC2M_PARKERPUMP_Spare_Bits, 1 },
	{ &MC2M_MOBILEYE2_RightSignal, &__init_value__MC2M_MOBILEYE2_RightSignal, 1 },
	{ &MC2M_MOBILEYE2_LeftSignal, &__init_value__MC2M_MOBILEYE2_LeftSignal, 1 },
	{ &MC2M_MOBILEYE2_HighBeam, &__init_value__MC2M_MOBILEYE2_HighBeam, 1 },
	{ &MC2M_MOBILEYE2_LowBeam, &__init_value__MC2M_MOBILEYE2_LowBeam, 1 },
	{ &MC2M_MOBILEYE2_BrakePedal, &__init_value__MC2M_MOBILEYE2_BrakePedal, 1 },
	{ &MC2M_MOBILEYE2_VehicleSpeed, &__init_value__MC2M_MOBILEYE2_VehicleSpeed, 1 },
	{ &MC2M_NMSGUI_service_brake_tank_1, &__init_value__MC2M_NMSGUI_service_brake_tank_1, 2 },
	{ &MC2M_NMSGUI_service_brake_tank_2, &__init_value__MC2M_NMSGUI_service_brake_tank_2, 2 },
	{ &MC2M_NMSGUI_park_brake_tank, &__init_value__MC2M_NMSGUI_park_brake_tank, 2 },
	{ &MC2M_NMSGUI_accessory_tank, &__init_value__MC2M_NMSGUI_accessory_tank, 2 },
	{ &MC2M_NMSGUI_fuel_level_left, &__init_value__MC2M_NMSGUI_fuel_level_left, 1 },
	{ &MC2M_NMSGUI_fuel_level_right, &__init_value__MC2M_NMSGUI_fuel_level_right, 1 },
	{ &MC2M_NMSGUI_fuel_temp_left, &__init_value__MC2M_NMSGUI_fuel_temp_left, 1 },
	{ &MC2M_NMSGUI_fuel_temp_right, &__init_value__MC2M_NMSGUI_fuel_temp_right, 1 },
	{ &MC2M_NMSGUI_hydraulic_tank_pressure, &__init_value__MC2M_NMSGUI_hydraulic_tank_pressure, 1 },
	{ &MC2M_NMSGUI_hydraulic_tank_temp, &__init_value__MC2M_NMSGUI_hydraulic_tank_temp, 1 },
	{ &MC2M_NMSGUI_difflock_mid_fb, &__init_value__MC2M_NMSGUI_difflock_mid_fb, 1 },
	{ &MC2M_NMSGUI_difflock_rear_fb, &__init_value__MC2M_NMSGUI_difflock_rear_fb, 1 },
	{ &MC2M_NMSGUI_difflock_front_fb, &__init_value__MC2M_NMSGUI_difflock_front_fb, 1 },
	{ &MC2M_NMSGUI_dropbox_h_fb, &__init_value__MC2M_NMSGUI_dropbox_h_fb, 1 },
	{ &MC2M_NMSGUI_dropbox_n_fb, &__init_value__MC2M_NMSGUI_dropbox_n_fb, 1 },
	{ &MC2M_NMSGUI_dropbox_l_fb, &__init_value__MC2M_NMSGUI_dropbox_l_fb, 1 },
	{ &MC2M_NMSGUI_service_break_tank_1_raw_fb, &__init_value__MC2M_NMSGUI_service_break_tank_1_raw_fb, 2 },
	{ &MC2M_NMSGUI_service_break_tank_2_raw_fb, &__init_value__MC2M_NMSGUI_service_break_tank_2_raw_fb, 2 },
	{ &MC2M_NMSGUI_accessory_tank_raw_fb, &__init_value__MC2M_NMSGUI_accessory_tank_raw_fb, 2 },
	{ &MC2M_NMSGUI_park_break_tank_raw_fb, &__init_value__MC2M_NMSGUI_park_break_tank_raw_fb, 2 },
	{ &MC2M_NMSGUI_fuel_level_left_raw_fb, &__init_value__MC2M_NMSGUI_fuel_level_left_raw_fb, 2 },
	{ &MC2M_NMSGUI_fuel_level_right_raw_fb, &__init_value__MC2M_NMSGUI_fuel_level_right_raw_fb, 2 },
	{ &MC2M_NMSGUI_fuel_temp_left_raw_fb, &__init_value__MC2M_NMSGUI_fuel_temp_left_raw_fb, 2 },
	{ &MC2M_NMSGUI_fuel_temp_right_raw_fb, &__init_value__MC2M_NMSGUI_fuel_temp_right_raw_fb, 2 },
	{ &MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb, &__init_value__MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb, 2 },
	{ &MC2M_NMSGUI_hydraulic_tank_temp_raw_fb, &__init_value__MC2M_NMSGUI_hydraulic_tank_temp_raw_fb, 2 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanOpen[] */

/* transmit timers */
static WORD vt3_can_tx_timeout_CAN_101 = 0;
static WORD vt3_can_tx_timeout_CAN_106 = 0;
static WORD vt3_can_tx_timeout_CAN_107 = 0;
static WORD vt3_can_tx_timeout_CAN_151 = 0;
static WORD vt3_can_tx_timeout_CAN_152 = 0;
static WORD vt3_can_tx_timeout_CAN_153 = 0;
static WORD vt3_can_tx_timeout_CAN_154 = 0;
static WORD vt3_can_tx_timeout_CAN_155 = 0;
static WORD vt3_can_tx_timeout_CAN_156 = 0;
static WORD vt3_can_tx_timeout_CAN_207 = 0;
static WORD vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed_2 = 0;
static WORD vt3_can_tx_timeout_CAN_157 = 0;
static WORD vt3_can_tx_timeout_CAN_158 = 0;
static WORD vt3_can_tx_timeout_CAN_159 = 0;
static WORD vt3_can_tx_timeout_CAN_160 = 0;
static WORD vt3_can_tx_timeout_CAN_161 = 0;
static WORD vt3_can_tx_timeout_CAN_162 = 0;
static WORD vt3_can_tx_timeout_CAN_163 = 0;
static WORD vt3_can_tx_timeout_CAN_164 = 0;
static WORD vt3_can_tx_timeout_CAN_165 = 0;
static WORD vt3_can_tx_timeout_CAN_166 = 0;
static WORD vt3_can_tx_timeout_CAN_168 = 0;
static WORD vt3_can_tx_timeout_CAN_169 = 0;
static WORD vt3_can_tx_timeout_CAN_230 = 0;
static WORD vt3_can_tx_timeout_PRK_Parker_Transfer_Pump = 0;
static WORD vt3_can_tx_timeout_CAN_171_MobileyeA = 0;
static WORD vt3_can_tx_timeout_CAN_780 = 0;
static WORD vt3_can_tx_timeout_CAN_781 = 0;
static WORD vt3_can_tx_timeout_CAN_782 = 0;
static WORD vt3_can_tx_timeout_CAN_783 = 0;
static WORD vt3_can_tx_timeout_CAN_784 = 0;
static WORD vt3_can_tx_timeout_CAN_785 = 0;
static WORD vt3_can_tx_timeout_CAN_786 = 0;


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
	vt3_can_alarm_CAN_81 = FALSE;
	vt3_can_alarm_CAN_86 = FALSE;
	vt3_can_alarm_CAN_87 = FALSE;
	vt3_can_alarm_CAN_181 = FALSE;
	vt3_can_alarm_CAN_182 = FALSE;
	vt3_can_alarm_CAN_186 = FALSE;
	vt3_can_alarm_CAN_187 = FALSE;
	vt3_can_alarm_CAN_18D = FALSE;
	vt3_can_alarm_CAN_18E = FALSE;
	vt3_can_alarm_CAN_18F = FALSE;
	vt3_can_alarm_CAN_190 = FALSE;
	vt3_can_alarm_CAN_200 = FALSE;
	vt3_can_alarm_CAN_281 = FALSE;
	vt3_can_alarm_CAN_282 = FALSE;
	vt3_can_alarm_CAN_381 = FALSE;
	vt3_can_alarm_CAN_382 = FALSE;
	vt3_can_alarm_CAN_713 = FALSE;
	vt3_can_alarm_CAN_790 = FALSE;
	vt3_can_alarm_CAN_791 = FALSE;
	vt3_can_alarm_CAN_792 = FALSE;
	vt3_can_alarm_CAN_793 = FALSE;
	vt3_can_alarm_CAN_794 = FALSE;
	vt3_can_alarm_CAN_795 = FALSE;
	vt3_can_alarm_CAN_799 = FALSE;
	vt3_can_alarm_CAN_Light_4E = FALSE;
	vt3_can_alarm_CAN_Wiper_4F = FALSE;
	vt3_can_alarm_CAN_Horn = FALSE;

	/* initialize can TX value */
	vt3_can_period_CAN_101 = 100;
	vt3_can_trigger_CAN_101 = FALSE;
	vt3_can_period_CAN_106 = 100;
	vt3_can_trigger_CAN_106 = FALSE;
	vt3_can_period_CAN_107 = 100;
	vt3_can_trigger_CAN_107 = FALSE;
	vt3_can_period_CAN_151 = 100;
	vt3_can_trigger_CAN_151 = FALSE;
	vt3_can_period_CAN_152 = 100;
	vt3_can_trigger_CAN_152 = FALSE;
	vt3_can_period_CAN_153 = 100;
	vt3_can_trigger_CAN_153 = FALSE;
	vt3_can_period_CAN_154 = 100;
	vt3_can_trigger_CAN_154 = FALSE;
	vt3_can_period_CAN_155 = 100;
	vt3_can_trigger_CAN_155 = FALSE;
	vt3_can_period_CAN_156 = 1000;
	vt3_can_trigger_CAN_156 = FALSE;
	vt3_can_period_CAN_207 = 100;
	vt3_can_trigger_CAN_207 = FALSE;
	vt3_can_period_CCVS_Cruise_ControlVehicle_Speed_2 = 100;
	vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed_2 = FALSE;
	vt3_can_period_CAN_157 = 100;
	vt3_can_trigger_CAN_157 = FALSE;
	vt3_can_period_CAN_158 = 100;
	vt3_can_trigger_CAN_158 = FALSE;
	vt3_can_period_CAN_159 = 100;
	vt3_can_trigger_CAN_159 = FALSE;
	vt3_can_period_CAN_160 = 100;
	vt3_can_trigger_CAN_160 = FALSE;
	vt3_can_period_CAN_161 = 100;
	vt3_can_trigger_CAN_161 = FALSE;
	vt3_can_period_CAN_162 = 100;
	vt3_can_trigger_CAN_162 = FALSE;
	vt3_can_period_CAN_163 = 100;
	vt3_can_trigger_CAN_163 = FALSE;
	vt3_can_period_CAN_164 = 100;
	vt3_can_trigger_CAN_164 = FALSE;
	vt3_can_period_CAN_165 = 100;
	vt3_can_trigger_CAN_165 = FALSE;
	vt3_can_period_CAN_166 = 100;
	vt3_can_trigger_CAN_166 = FALSE;
	vt3_can_period_CAN_168 = 100;
	vt3_can_trigger_CAN_168 = FALSE;
	vt3_can_period_CAN_169 = 100;
	vt3_can_trigger_CAN_169 = FALSE;
	vt3_can_period_CAN_230 = 100;
	vt3_can_trigger_CAN_230 = FALSE;
	vt3_can_period_PRK_Parker_Transfer_Pump = 200;
	vt3_can_trigger_PRK_Parker_Transfer_Pump = FALSE;
	vt3_can_period_CAN_171_MobileyeA = 100;
	vt3_can_trigger_CAN_171_MobileyeA = FALSE;
	vt3_can_period_CAN_780 = 100;
	vt3_can_trigger_CAN_780 = FALSE;
	vt3_can_period_CAN_781 = 100;
	vt3_can_trigger_CAN_781 = FALSE;
	vt3_can_period_CAN_782 = 100;
	vt3_can_trigger_CAN_782 = FALSE;
	vt3_can_period_CAN_783 = 100;
	vt3_can_trigger_CAN_783 = FALSE;
	vt3_can_period_CAN_784 = 100;
	vt3_can_trigger_CAN_784 = FALSE;
	vt3_can_period_CAN_785 = 100;
	vt3_can_trigger_CAN_785 = FALSE;
	vt3_can_period_CAN_786 = 1000;
	vt3_can_trigger_CAN_786 = FALSE;

	/* reset timers */
	vt3_can_tx_timeout_CAN_101 = 0;
	vt3_can_tx_timeout_CAN_106 = 0;
	vt3_can_tx_timeout_CAN_107 = 0;
	vt3_can_tx_timeout_CAN_151 = 0;
	vt3_can_tx_timeout_CAN_152 = 0;
	vt3_can_tx_timeout_CAN_153 = 0;
	vt3_can_tx_timeout_CAN_154 = 0;
	vt3_can_tx_timeout_CAN_155 = 0;
	vt3_can_tx_timeout_CAN_156 = 0;
	vt3_can_tx_timeout_CAN_207 = 0;
	vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed_2 = 0;
	vt3_can_tx_timeout_CAN_157 = 0;
	vt3_can_tx_timeout_CAN_158 = 0;
	vt3_can_tx_timeout_CAN_159 = 0;
	vt3_can_tx_timeout_CAN_160 = 0;
	vt3_can_tx_timeout_CAN_161 = 0;
	vt3_can_tx_timeout_CAN_162 = 0;
	vt3_can_tx_timeout_CAN_163 = 0;
	vt3_can_tx_timeout_CAN_164 = 0;
	vt3_can_tx_timeout_CAN_165 = 0;
	vt3_can_tx_timeout_CAN_166 = 0;
	vt3_can_tx_timeout_CAN_168 = 0;
	vt3_can_tx_timeout_CAN_169 = 0;
	vt3_can_tx_timeout_CAN_230 = 0;
	vt3_can_tx_timeout_PRK_Parker_Transfer_Pump = 0;
	vt3_can_tx_timeout_CAN_171_MobileyeA = 0;
	vt3_can_tx_timeout_CAN_780 = 0;
	vt3_can_tx_timeout_CAN_781 = 0;
	vt3_can_tx_timeout_CAN_782 = 0;
	vt3_can_tx_timeout_CAN_783 = 0;
	vt3_can_tx_timeout_CAN_784 = 0;
	vt3_can_tx_timeout_CAN_785 = 0;
	vt3_can_tx_timeout_CAN_786 = 0;

	/* initialize the interface */
	vt3_init_interface(0, 250, vt3_can_rx_init_CanOpen, 27);

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

	/* RX message: CAN_81 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_81);
	if ( ! pmsg->RxOK ) 
	{
		MUX_AlarmStatusOutput01 = __init_value__MUX_AlarmStatusOutput01;
		MUX_AlarmStatusOutput02 = __init_value__MUX_AlarmStatusOutput02;
		MUX_AlarmStatusOutput03 = __init_value__MUX_AlarmStatusOutput03;
		MUX_AlarmStatusOutput04 = __init_value__MUX_AlarmStatusOutput04;
		MUX_AlarmStatusOutput05 = __init_value__MUX_AlarmStatusOutput05;
		MUX_AlarmStatusOutput06 = __init_value__MUX_AlarmStatusOutput06;
		MUX_AlarmStatusOutput07 = __init_value__MUX_AlarmStatusOutput07;
		MUX_AlarmStatusOutput08 = __init_value__MUX_AlarmStatusOutput08;
		MUX_AlarmStatusOutput09 = __init_value__MUX_AlarmStatusOutput09;
		MUX_AlarmStatusOutput10 = __init_value__MUX_AlarmStatusOutput10;
		MUX_AlarmStatusOutput11 = __init_value__MUX_AlarmStatusOutput11;
		MUX_AlarmStatusOutput12 = __init_value__MUX_AlarmStatusOutput12;
		MUX_AlarmStatusOutput13 = __init_value__MUX_AlarmStatusOutput13;
		MUX_AlarmStatusOutput14 = __init_value__MUX_AlarmStatusOutput14;
		MUX_AlarmStatusOutput15 = __init_value__MUX_AlarmStatusOutput15;
		MUX_AlarmStatusOutput16 = __init_value__MUX_AlarmStatusOutput16;
		MUX_AlarmStatusOutput17 = __init_value__MUX_AlarmStatusOutput17;
		MUX_AlarmStatusOutput19 = __init_value__MUX_AlarmStatusOutput19;
		MUX_AlarmStatusOutput21 = __init_value__MUX_AlarmStatusOutput21;
		MUX_AlarmStatusOutput22 = __init_value__MUX_AlarmStatusOutput22;
		MUX_AlarmStatusOutput23 = __init_value__MUX_AlarmStatusOutput23;
		MUX_AlarmStatusOutput24 = __init_value__MUX_AlarmStatusOutput24;
		MUX_AlarmStatusOutput25 = __init_value__MUX_AlarmStatusOutput25;
		MUX_AlarmStatusOutput26 = __init_value__MUX_AlarmStatusOutput26;
		MUX_AlarmStatusOutput27 = __init_value__MUX_AlarmStatusOutput27;
		MUX_AlarmStatusOutput18 = __init_value__MUX_AlarmStatusOutput18;
		MUX_AlarmStatusOutput20 = __init_value__MUX_AlarmStatusOutput20;
		MUX_Alarm_CAN_LowSpeed = __init_value__MUX_Alarm_CAN_LowSpeed;
		MUX_Alarm_EEPROM = __init_value__MUX_Alarm_EEPROM;
		MUX_Alarm_FrontWiper = __init_value__MUX_Alarm_FrontWiper;
		MUX_Alarm_ReasWiper = __init_value__MUX_Alarm_ReasWiper;
		MUX_AlarmSectionA = __init_value__MUX_AlarmSectionA;
		MUX_AlarmSectionB = __init_value__MUX_AlarmSectionB;
		MUX_AlarmSectionC = __init_value__MUX_AlarmSectionC;
		MUX_AlarmSectionD = __init_value__MUX_AlarmSectionD;
		MUX_AlarmSectionE = __init_value__MUX_AlarmSectionE;
		MUX_AlarmSectionF = __init_value__MUX_AlarmSectionF;
		MUX_AlarmSectionG = __init_value__MUX_AlarmSectionG;
		MUX_AlarmSectionH = __init_value__MUX_AlarmSectionH;
	}
	vt3_can_alarm_CAN_81 = ! pmsg->RxOK;

	/* RX message: CAN_86 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_86);
	if ( ! pmsg->RxOK ) 
	{
		IOMODE_2_AlarmStatusDOUT00 = __init_value__IOMODE_2_AlarmStatusDOUT00;
		IOMODE_2_AlarmStatusDOUT01 = __init_value__IOMODE_2_AlarmStatusDOUT01;
		IOMODE_2_AlarmStatusDOUT02 = __init_value__IOMODE_2_AlarmStatusDOUT02;
		IOMODE_2_AlarmStatusDOUT03 = __init_value__IOMODE_2_AlarmStatusDOUT03;
		IOMODE_2_AlarmStatusDOUT04 = __init_value__IOMODE_2_AlarmStatusDOUT04;
		IOMODE_2_AlarmStatusDOUT05 = __init_value__IOMODE_2_AlarmStatusDOUT05;
		IOMODE_2_AlarmStatusDOUT06 = __init_value__IOMODE_2_AlarmStatusDOUT06;
		IOMODE_2_AlarmStatusDOUT07 = __init_value__IOMODE_2_AlarmStatusDOUT07;
		IOMODE_2_AlarmStatusDOUT08 = __init_value__IOMODE_2_AlarmStatusDOUT08;
		IOMODE_2_AlarmStatusDOUT09 = __init_value__IOMODE_2_AlarmStatusDOUT09;
		IOMODE_2_AlarmStatusDOUT10 = __init_value__IOMODE_2_AlarmStatusDOUT10;
		IOMODE_2_AlarmStatusDOUT11 = __init_value__IOMODE_2_AlarmStatusDOUT11;
		IOMODE_2_AlarmStatusDOUT12 = __init_value__IOMODE_2_AlarmStatusDOUT12;
		IOMODE_2_AlarmStatusDOUT13 = __init_value__IOMODE_2_AlarmStatusDOUT13;
		IOMODE_2_AlarmStatusDOUT14 = __init_value__IOMODE_2_AlarmStatusDOUT14;
		IOMODE_2_AlarmStatusDOUT15 = __init_value__IOMODE_2_AlarmStatusDOUT15;
		IOMODE_2_AlarmStatusDOUT16 = __init_value__IOMODE_2_AlarmStatusDOUT16;
		IOMODE_2_AlarmStatusDOUT17 = __init_value__IOMODE_2_AlarmStatusDOUT17;
		IOMODE_2_AlarmStatusDOUT18 = __init_value__IOMODE_2_AlarmStatusDOUT18;
		IOMODE_2_AlarmStatusDOUT19 = __init_value__IOMODE_2_AlarmStatusDOUT19;
		IOMODE_2_AlarmStatusDOUT20 = __init_value__IOMODE_2_AlarmStatusDOUT20;
		IOMODE_2_AlarmStatusDOUT21 = __init_value__IOMODE_2_AlarmStatusDOUT21;
		IOMODE_2_AlarmStatusDOUT22 = __init_value__IOMODE_2_AlarmStatusDOUT22;
		IOMODE_2_AlarmStatusDOUT23 = __init_value__IOMODE_2_AlarmStatusDOUT23;
		IOMODE_2_AlarmStatusDOUT24 = __init_value__IOMODE_2_AlarmStatusDOUT24;
		IOMODE_2_AlarmStatusDOUT25 = __init_value__IOMODE_2_AlarmStatusDOUT25;
		IOMODE_2_AlarmStatusDOUT26 = __init_value__IOMODE_2_AlarmStatusDOUT26;
		IOMODE_2_AlarmStatusDOUT27 = __init_value__IOMODE_2_AlarmStatusDOUT27;
		IOMODE_2_AlarmStatusDOUT28 = __init_value__IOMODE_2_AlarmStatusDOUT28;
		IOMODE_2_AlarmStatusDOUT29 = __init_value__IOMODE_2_AlarmStatusDOUT29;
		IOMODE_2_AlarmStatusDOUT30 = __init_value__IOMODE_2_AlarmStatusDOUT30;
		IOMODE_2_AlarmStatusDOUT31 = __init_value__IOMODE_2_AlarmStatusDOUT31;
	}
	vt3_can_alarm_CAN_86 = ! pmsg->RxOK;

	/* RX message: CAN_87 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_87);
	if ( ! pmsg->RxOK ) 
	{
		IOMODE_AlarmStatusDOUT00 = __init_value__IOMODE_AlarmStatusDOUT00;
		IOMODE_AlarmStatusDOUT01 = __init_value__IOMODE_AlarmStatusDOUT01;
		IOMODE_AlarmStatusDOUT02 = __init_value__IOMODE_AlarmStatusDOUT02;
		IOMODE_AlarmStatusDOUT03 = __init_value__IOMODE_AlarmStatusDOUT03;
		IOMODE_AlarmStatusDOUT04 = __init_value__IOMODE_AlarmStatusDOUT04;
		IOMODE_AlarmStatusDOUT05 = __init_value__IOMODE_AlarmStatusDOUT05;
		IOMODE_AlarmStatusDOUT06 = __init_value__IOMODE_AlarmStatusDOUT06;
		IOMODE_AlarmStatusDOUT07 = __init_value__IOMODE_AlarmStatusDOUT07;
		IOMODE_AlarmStatusDOUT08 = __init_value__IOMODE_AlarmStatusDOUT08;
		IOMODE_AlarmStatusDOUT09 = __init_value__IOMODE_AlarmStatusDOUT09;
		IOMODE_AlarmStatusDOUT10 = __init_value__IOMODE_AlarmStatusDOUT10;
		IOMODE_AlarmStatusDOUT11 = __init_value__IOMODE_AlarmStatusDOUT11;
		IOMODE_AlarmStatusDOUT12 = __init_value__IOMODE_AlarmStatusDOUT12;
		IOMODE_AlarmStatusDOUT13 = __init_value__IOMODE_AlarmStatusDOUT13;
		IOMODE_AlarmStatusDOUT14 = __init_value__IOMODE_AlarmStatusDOUT14;
		IOMODE_AlarmStatusDOUT15 = __init_value__IOMODE_AlarmStatusDOUT15;
		IOMODE_AlarmStatusDOUT16 = __init_value__IOMODE_AlarmStatusDOUT16;
		IOMODE_AlarmStatusDOUT17 = __init_value__IOMODE_AlarmStatusDOUT17;
		IOMODE_AlarmStatusDOUT18 = __init_value__IOMODE_AlarmStatusDOUT18;
		IOMODE_AlarmStatusDOUT19 = __init_value__IOMODE_AlarmStatusDOUT19;
		IOMODE_AlarmStatusDOUT20 = __init_value__IOMODE_AlarmStatusDOUT20;
		IOMODE_AlarmStatusDOUT21 = __init_value__IOMODE_AlarmStatusDOUT21;
		IOMODE_AlarmStatusDOUT22 = __init_value__IOMODE_AlarmStatusDOUT22;
		IOMODE_AlarmStatusDOUT23 = __init_value__IOMODE_AlarmStatusDOUT23;
		IOMODE_AlarmStatusDOUT24 = __init_value__IOMODE_AlarmStatusDOUT24;
		IOMODE_AlarmStatusDOUT25 = __init_value__IOMODE_AlarmStatusDOUT25;
		IOMODE_AlarmStatusDOUT26 = __init_value__IOMODE_AlarmStatusDOUT26;
		IOMODE_AlarmStatusDOUT27 = __init_value__IOMODE_AlarmStatusDOUT27;
		IOMODE_AlarmStatusDOUT28 = __init_value__IOMODE_AlarmStatusDOUT28;
		IOMODE_AlarmStatusDOUT29 = __init_value__IOMODE_AlarmStatusDOUT29;
		IOMODE_AlarmStatusDOUT30 = __init_value__IOMODE_AlarmStatusDOUT30;
		IOMODE_AlarmStatusDOUT31 = __init_value__IOMODE_AlarmStatusDOUT31;
	}
	vt3_can_alarm_CAN_87 = ! pmsg->RxOK;

	/* RX message: CAN_181 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_181);
	if ( ! pmsg->RxOK ) 
	{
		MUX_KL15_Ignition = __init_value__MUX_KL15_Ignition;
		MUX_RearWiperPark_HiSide = __init_value__MUX_RearWiperPark_HiSide;
		MUX_FrontWiperPark_HiSide = __init_value__MUX_FrontWiperPark_HiSide;
		MUX_RearWiperPark_LowSide = __init_value__MUX_RearWiperPark_LowSide;
		MUX_FrontWiperPark_LowSide = __init_value__MUX_FrontWiperPark_LowSide;
		MUX_HazardButton = __init_value__MUX_HazardButton;
		MUX_OpenLoad01 = __init_value__MUX_OpenLoad01;
		MUX_OpenLoad02 = __init_value__MUX_OpenLoad02;
		MUX_OpenLoad03 = __init_value__MUX_OpenLoad03;
		MUX_OpenLoad04 = __init_value__MUX_OpenLoad04;
		MUX_OpenLoad05 = __init_value__MUX_OpenLoad05;
		MUX_OpenLoad06 = __init_value__MUX_OpenLoad06;
		MUX_OpenLoad07 = __init_value__MUX_OpenLoad07;
		MUX_OpenLoad08 = __init_value__MUX_OpenLoad08;
		MUX_OpenLoad09 = __init_value__MUX_OpenLoad09;
		MUX_OpenLoad10 = __init_value__MUX_OpenLoad10;
		MUX_OpenLoad11 = __init_value__MUX_OpenLoad11;
		MUX_OpenLoad12 = __init_value__MUX_OpenLoad12;
		MUX_OpenLoad13 = __init_value__MUX_OpenLoad13;
		MUX_OpenLoad14 = __init_value__MUX_OpenLoad14;
		MUX_OpenLoad15 = __init_value__MUX_OpenLoad15;
		MUX_OpenLoad16 = __init_value__MUX_OpenLoad16;
		MUX_OpenLoad17 = __init_value__MUX_OpenLoad17;
		MUX_OpenLoad18 = __init_value__MUX_OpenLoad18;
		MUX_OpenLoad19 = __init_value__MUX_OpenLoad19;
		MUX_OpenLoad20 = __init_value__MUX_OpenLoad20;
		MUX_OpenLoad21 = __init_value__MUX_OpenLoad21;
		MUX_OpenLoad22 = __init_value__MUX_OpenLoad22;
		MUX_OpenLoad23 = __init_value__MUX_OpenLoad23;
		MUX_OpenLoad24 = __init_value__MUX_OpenLoad24;
		MUX_OpenLoad25 = __init_value__MUX_OpenLoad25;
		MUX_LastFaultOutputNo = __init_value__MUX_LastFaultOutputNo;
		MUX_EmergencyState = __init_value__MUX_EmergencyState;
	}
	vt3_can_alarm_CAN_181 = ! pmsg->RxOK;

	/* RX message: CAN_182 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_182);
	if ( ! pmsg->RxOK ) 
	{
		MUX_DIGIN01 = __init_value__MUX_DIGIN01;
		MUX_DIGIN02 = __init_value__MUX_DIGIN02;
		MUX_DIGIN03 = __init_value__MUX_DIGIN03;
		MUX_DIGIN04 = __init_value__MUX_DIGIN04;
		MUX_DIGIN05 = __init_value__MUX_DIGIN05;
		MUX_DIGIN06 = __init_value__MUX_DIGIN06;
		MUX_DIGIN07 = __init_value__MUX_DIGIN07;
		MUX_DIGIN08 = __init_value__MUX_DIGIN08;
		MUX_DIGIN09 = __init_value__MUX_DIGIN09;
		MUX_DIGIN10 = __init_value__MUX_DIGIN10;
		MUX_DIGIN11 = __init_value__MUX_DIGIN11;
		MUX_DIGIN12 = __init_value__MUX_DIGIN12;
		MUX_DIGIN13 = __init_value__MUX_DIGIN13;
		MUX_DIGIN14 = __init_value__MUX_DIGIN14;
		MUX_DIGIN15 = __init_value__MUX_DIGIN15;
		MUX_DIGIN16 = __init_value__MUX_DIGIN16;
		MUX_DIGIN17 = __init_value__MUX_DIGIN17;
		MUX_DIGIN18 = __init_value__MUX_DIGIN18;
		MUX_DIGIN19 = __init_value__MUX_DIGIN19;
		MUX_DIGIN20 = __init_value__MUX_DIGIN20;
		MUX_DIGIN21 = __init_value__MUX_DIGIN21;
		MUX_DIGIN22 = __init_value__MUX_DIGIN22;
		MUX_DIGIN23 = __init_value__MUX_DIGIN23;
		MUX_DIGIN24 = __init_value__MUX_DIGIN24;
		MUX_DIGIN25 = __init_value__MUX_DIGIN25;
		MUX_DIGIN26 = __init_value__MUX_DIGIN26;
		MUX_DIGIN27 = __init_value__MUX_DIGIN27;
		MUX_DIGIN28 = __init_value__MUX_DIGIN28;
		MUX_DIGIN29 = __init_value__MUX_DIGIN29;
		MUX_DIGIN30 = __init_value__MUX_DIGIN30;
	}
	vt3_can_alarm_CAN_182 = ! pmsg->RxOK;

	/* RX message: CAN_186 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_186);
	if ( ! pmsg->RxOK ) 
	{
		IOMODE_2_DIGIN00_Winch_RC_Up = __init_value__IOMODE_2_DIGIN00_Winch_RC_Up;
		IOMODE_2_DIGIN01 = __init_value__IOMODE_2_DIGIN01;
		IOMODE_2_DIGIN02_Winch_RC_Down = __init_value__IOMODE_2_DIGIN02_Winch_RC_Down;
		IOMODE_2_DIGIN03_FrontAxleDiffLock = __init_value__IOMODE_2_DIGIN03_FrontAxleDiffLock;
		IOMODE_2_DIGIN04 = __init_value__IOMODE_2_DIGIN04;
		IOMODE_2_DIGIN05 = __init_value__IOMODE_2_DIGIN05;
		IOMODE_2_DIGIN06_EndOfRope = __init_value__IOMODE_2_DIGIN06_EndOfRope;
		IOMODE_2_DIGIN07 = __init_value__IOMODE_2_DIGIN07;
		IOMODE_2_DIGIN08_Winch_RS_Clutch = __init_value__IOMODE_2_DIGIN08_Winch_RS_Clutch;
		IOMODE_2_DIGIN09_Winch_RS_Down = __init_value__IOMODE_2_DIGIN09_Winch_RS_Down;
		IOMODE_2_DIGIN10_Winch_RC_Clutch = __init_value__IOMODE_2_DIGIN10_Winch_RC_Clutch;
		IOMODE_2_DIGIN11_Winch_RS_Up = __init_value__IOMODE_2_DIGIN11_Winch_RS_Up;
		IOMODE_2_DIGOUT12 = __init_value__IOMODE_2_DIGOUT12;
		IOMODE_2_DIGOUT13_RearAxleDiffLock = __init_value__IOMODE_2_DIGOUT13_RearAxleDiffLock;
		IOMODE_2_DIGOUT14 = __init_value__IOMODE_2_DIGOUT14;
		IOMODE_2_DIGIN15_FeedBack_FrontAxle = __init_value__IOMODE_2_DIGIN15_FeedBack_FrontAxle;
		IOMODE_2_DIGIN16 = __init_value__IOMODE_2_DIGIN16;
		IOMODE_2_DIGIN17 = __init_value__IOMODE_2_DIGIN17;
		IOMODE_2_DIGIN18 = __init_value__IOMODE_2_DIGIN18;
		IOMODE_2_DIGIN19_InteriorLamps = __init_value__IOMODE_2_DIGIN19_InteriorLamps;
		IOMODE_2_DIGIN20_centralLockSystem = __init_value__IOMODE_2_DIGIN20_centralLockSystem;
		IOMODE_2_DIGIN21 = __init_value__IOMODE_2_DIGIN21;
		IOMODE_2_DIGIN22 = __init_value__IOMODE_2_DIGIN22;
		IOMODE_2_DIGIN23_DIGIN_FireFighter = __init_value__IOMODE_2_DIGIN23_DIGIN_FireFighter;
		IOMODE_2_DIGIN24_Back_HydDoorOpened = __init_value__IOMODE_2_DIGIN24_Back_HydDoorOpened;
		IOMODE_2_DIGIN25_InteriorVentilation_1 = __init_value__IOMODE_2_DIGIN25_InteriorVentilation_1;
		IOMODE_2_DIGIN26_InteriorVentilation_2 = __init_value__IOMODE_2_DIGIN26_InteriorVentilation_2;
		IOMODE_2_DIGIN27_FootBrakeMicro = __init_value__IOMODE_2_DIGIN27_FootBrakeMicro;
		IOMODE_2_DIGIN28 = __init_value__IOMODE_2_DIGIN28;
		IOMODE_2_DIGIN29 = __init_value__IOMODE_2_DIGIN29;
		IOMODE_2_DIGIN30 = __init_value__IOMODE_2_DIGIN30;
		IOMODE_2_DIGIN31 = __init_value__IOMODE_2_DIGIN31;
		IOMODE_2_LastFaultOutputNo = __init_value__IOMODE_2_LastFaultOutputNo;
		IOMODE_2_AlarmCode = __init_value__IOMODE_2_AlarmCode;
	}
	vt3_can_alarm_CAN_186 = ! pmsg->RxOK;

	/* RX message: CAN_187 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_187);
	if ( ! pmsg->RxOK ) 
	{
		IOMODE_DIGIN00_CentralLockSystemDisable = __init_value__IOMODE_DIGIN00_CentralLockSystemDisable;
		IOMODE_DIGIN01 = __init_value__IOMODE_DIGIN01;
		IOMODE_DIGIN02 = __init_value__IOMODE_DIGIN02;
		IOMODE_DIGIN03 = __init_value__IOMODE_DIGIN03;
		IOMODE_DIGIN04 = __init_value__IOMODE_DIGIN04;
		IOMODE_DIGIN05 = __init_value__IOMODE_DIGIN05;
		IOMODE_DIGIN06 = __init_value__IOMODE_DIGIN06;
		IOMODE_DIGIN07_EngineProtection = __init_value__IOMODE_DIGIN07_EngineProtection;
		IOMODE_DIGIN08_TankSelect_Right = __init_value__IOMODE_DIGIN08_TankSelect_Right;
		IOMODE_DIGIN09_FireFighter = __init_value__IOMODE_DIGIN09_FireFighter;
		IOMODE_DIGIN10_TankSelect_Left = __init_value__IOMODE_DIGIN10_TankSelect_Left;
		IOMODE_DIGIN11 = __init_value__IOMODE_DIGIN11;
		IOMODE_DIGIN12_DropBoxHigh = __init_value__IOMODE_DIGIN12_DropBoxHigh;
		IOMODE_DIGIN13 = __init_value__IOMODE_DIGIN13;
		IOMODE_DIGIN14_DropBoxLow = __init_value__IOMODE_DIGIN14_DropBoxLow;
		IOMODE_DIGIN15_Park_Sensor_En = __init_value__IOMODE_DIGIN15_Park_Sensor_En;
		IOMODE_DIGIN16_FeedBack_FrontAxle = __init_value__IOMODE_DIGIN16_FeedBack_FrontAxle;
		IOMODE_DIGIN17_InteriorVentilation = __init_value__IOMODE_DIGIN17_InteriorVentilation;
		IOMODE_DIGIN18_MirrorWindowResistance = __init_value__IOMODE_DIGIN18_MirrorWindowResistance;
		IOMODE_DIGIN19 = __init_value__IOMODE_DIGIN19;
		IOMODE_DIGIN20 = __init_value__IOMODE_DIGIN20;
		IOMODE_DIGIN21 = __init_value__IOMODE_DIGIN21;
		IOMODE_DIGIN22_DopBoxNeutral = __init_value__IOMODE_DIGIN22_DopBoxNeutral;
		IOMODE_DIGIN23_SumpTempAlarm = __init_value__IOMODE_DIGIN23_SumpTempAlarm;
		IOMODE_DIGIN24 = __init_value__IOMODE_DIGIN24;
		IOMODE_DIGIN25_ABSoffRoad = __init_value__IOMODE_DIGIN25_ABSoffRoad;
		IOMODE_DIGIN26_RearFog = __init_value__IOMODE_DIGIN26_RearFog;
		IOMODE_DIGIN27_DiffLock = __init_value__IOMODE_DIGIN27_DiffLock;
		IOMODE_DIGIN28 = __init_value__IOMODE_DIGIN28;
		IOMODE_DIGIN29 = __init_value__IOMODE_DIGIN29;
		IOMODE_DIGIN30_FrontFog = __init_value__IOMODE_DIGIN30_FrontFog;
		IOMODE_DIGIN31 = __init_value__IOMODE_DIGIN31;
		IOMODE_LastFaultOutputNo = __init_value__IOMODE_LastFaultOutputNo;
		IOMODE_AlarmCode = __init_value__IOMODE_AlarmCode;
	}
	vt3_can_alarm_CAN_187 = ! pmsg->RxOK;

	/* RX message: CAN_18D */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_18D);
	if ( ! pmsg->RxOK ) 
	{
		AMUCBO_AngleX = __init_value__AMUCBO_AngleX;
		AMUCBO_AngleY = __init_value__AMUCBO_AngleY;
	}
	vt3_can_alarm_CAN_18D = ! pmsg->RxOK;

	/* RX message: CAN_18E */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_18E);
	if ( ! pmsg->RxOK ) 
	{
		ASLSN_SURVEILReservedINT01 = __init_value__ASLSN_SURVEILReservedINT01;
		ASLSN_SURVEILReservedINT02 = __init_value__ASLSN_SURVEILReservedINT02;
		ASLSN_SURVEILReservedINT03 = __init_value__ASLSN_SURVEILReservedINT03;
		ASLSN_SURVEILReservedINT04 = __init_value__ASLSN_SURVEILReservedINT04;
	}
	vt3_can_alarm_CAN_18E = ! pmsg->RxOK;

	/* RX message: CAN_18F */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_18F);
	if ( ! pmsg->RxOK ) 
	{
		ASEL_SURVEILReservedSINT01 = __init_value__ASEL_SURVEILReservedSINT01;
		ASEL_SURVEILReservedSINT02 = __init_value__ASEL_SURVEILReservedSINT02;
		ASEL_SURVEILReservedSINT03 = __init_value__ASEL_SURVEILReservedSINT03;
		ASEL_SURVEILReservedSINT04 = __init_value__ASEL_SURVEILReservedSINT04;
		ASEL_SURVEILReservedSINT05 = __init_value__ASEL_SURVEILReservedSINT05;
		ASEL_SURVEILReservedSINT06 = __init_value__ASEL_SURVEILReservedSINT06;
		ASEL_SURVEILReservedSINT07 = __init_value__ASEL_SURVEILReservedSINT07;
		ASEL_SURVEILReservedSINT08 = __init_value__ASEL_SURVEILReservedSINT08;
	}
	vt3_can_alarm_CAN_18F = ! pmsg->RxOK;

	/* RX message: CAN_190 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_190);
	if ( ! pmsg->RxOK ) 
	{
		ASEL_SURVEILReservedDINT01 = __init_value__ASEL_SURVEILReservedDINT01;
		ASEL_SURVEILReservedDINT02 = __init_value__ASEL_SURVEILReservedDINT02;
	}
	vt3_can_alarm_CAN_190 = ! pmsg->RxOK;

	/* RX message: CAN_200 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_200);
	if ( ! pmsg->RxOK ) 
	{
		GUI_MC2M_DebugActive = __init_value__GUI_MC2M_DebugActive;
		GUI_MC2M_Selenoid1_Draw = __init_value__GUI_MC2M_Selenoid1_Draw;
		GUI_MC2M_Selenoid1_Return = __init_value__GUI_MC2M_Selenoid1_Return;
		GUI_MC2M_Selenoid2_Draw = __init_value__GUI_MC2M_Selenoid2_Draw;
		GUI_MC2M_Selenoid2_Return = __init_value__GUI_MC2M_Selenoid2_Return;
		GUI_MC2M_ParkerPumpActive = __init_value__GUI_MC2M_ParkerPumpActive;
		GUI_MC2M_EvacuationValveActive = __init_value__GUI_MC2M_EvacuationValveActive;
		GUI_MC2M_ParkerPumpRPM_Manuel = __init_value__GUI_MC2M_ParkerPumpRPM_Manuel;
		GUI_MC2M_ParkerPumpRPM_Sel = __init_value__GUI_MC2M_ParkerPumpRPM_Sel;
		GUI_MC2M_ParkerPumpRPM_Min = __init_value__GUI_MC2M_ParkerPumpRPM_Min;
		GUI_MC2M_ParkerPumpRPM_Max = __init_value__GUI_MC2M_ParkerPumpRPM_Max;
	}
	vt3_can_alarm_CAN_200 = ! pmsg->RxOK;

	/* RX message: CAN_281 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_281);
	if ( ! pmsg->RxOK ) 
	{
		MUX_ISenseOut01 = __init_value__MUX_ISenseOut01;
		MUX_ISenseOut02 = __init_value__MUX_ISenseOut02;
		MUX_ISenseOut03 = __init_value__MUX_ISenseOut03;
		MUX_ISenseOut04 = __init_value__MUX_ISenseOut04;
		MUX_ISenseOut05 = __init_value__MUX_ISenseOut05;
		MUX_ISenseOut06 = __init_value__MUX_ISenseOut06;
		MUX_ISenseOut07 = __init_value__MUX_ISenseOut07;
		MUX_ISenseOut08 = __init_value__MUX_ISenseOut08;
	}
	vt3_can_alarm_CAN_281 = ! pmsg->RxOK;

	/* RX message: CAN_282 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_282);
	if ( ! pmsg->RxOK ) 
	{
		MUX_ISenseOut09 = __init_value__MUX_ISenseOut09;
		MUX_ISenseOut10 = __init_value__MUX_ISenseOut10;
		MUX_ISenseOut11 = __init_value__MUX_ISenseOut11;
		MUX_ISenseOut12 = __init_value__MUX_ISenseOut12;
		MUX_ISenseOut13 = __init_value__MUX_ISenseOut13;
		MUX_ISenseOut14 = __init_value__MUX_ISenseOut14;
		MUX_ISenseOut15 = __init_value__MUX_ISenseOut15;
		MUX_ISenseOut16 = __init_value__MUX_ISenseOut16;
	}
	vt3_can_alarm_CAN_282 = ! pmsg->RxOK;

	/* RX message: CAN_381 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_381);
	if ( ! pmsg->RxOK ) 
	{
		MUX_ISenseOut17 = __init_value__MUX_ISenseOut17;
		MUX_ISenseOut19 = __init_value__MUX_ISenseOut19;
		MUX_ISenseOut21 = __init_value__MUX_ISenseOut21;
		MUX_ISenseOut22 = __init_value__MUX_ISenseOut22;
		MUX_ISenseOut23 = __init_value__MUX_ISenseOut23;
		MUX_ISenseOut24 = __init_value__MUX_ISenseOut24;
		MUX_ISenseOut25 = __init_value__MUX_ISenseOut25;
		MUX_ISenseOut26 = __init_value__MUX_ISenseOut26;
	}
	vt3_can_alarm_CAN_381 = ! pmsg->RxOK;

	/* RX message: CAN_382 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_382);
	if ( ! pmsg->RxOK ) 
	{
		MUX_ISenseOut27 = __init_value__MUX_ISenseOut27;
		MUX_AnalogVoltBattery = __init_value__MUX_AnalogVoltBattery;
		MUX_AnalogVoltBatteryDiv2 = __init_value__MUX_AnalogVoltBatteryDiv2;
	}
	vt3_can_alarm_CAN_382 = ! pmsg->RxOK;

	/* RX message: CAN_713 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_713);
	if ( ! pmsg->RxOK ) 
	{
		GIGA_MC2M_ResetTrip = __init_value__GIGA_MC2M_ResetTrip;
		GIGA_MC2M_GIGAOdometerBackup = __init_value__GIGA_MC2M_GIGAOdometerBackup;
	}
	vt3_can_alarm_CAN_713 = ! pmsg->RxOK;

	/* RX message: CAN_790 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_790);
	if ( ! pmsg->RxOK ) 
	{
		NMSGUI_MC2M_service_brake_tank_1 = __init_value__NMSGUI_MC2M_service_brake_tank_1;
		NMSGUI_MC2M_service_brake_tank_2 = __init_value__NMSGUI_MC2M_service_brake_tank_2;
		NMSGUI_MC2M_park_brake_tank = __init_value__NMSGUI_MC2M_park_brake_tank;
		NMSGUI_MC2M_accessory_tank = __init_value__NMSGUI_MC2M_accessory_tank;
	}
	vt3_can_alarm_CAN_790 = ! pmsg->RxOK;

	/* RX message: CAN_791 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_791);
	if ( ! pmsg->RxOK ) 
	{
		NMSGUI_MC2M_fuel_level_left = __init_value__NMSGUI_MC2M_fuel_level_left;
		NMSGUI_MC2M_fuel_level_right = __init_value__NMSGUI_MC2M_fuel_level_right;
		NMSGUI_MC2M_fuel_temp_left = __init_value__NMSGUI_MC2M_fuel_temp_left;
		NMSGUI_MC2M_fuel_temp_right = __init_value__NMSGUI_MC2M_fuel_temp_right;
	}
	vt3_can_alarm_CAN_791 = ! pmsg->RxOK;

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
		NMSGUI_MC2M_service_brake_tank_1_touch = __init_value__NMSGUI_MC2M_service_brake_tank_1_touch;
		NMSGUI_MC2M_service_brake_tank_2_touch = __init_value__NMSGUI_MC2M_service_brake_tank_2_touch;
		NMSGUI_MC2M_park_brake_tank_touch = __init_value__NMSGUI_MC2M_park_brake_tank_touch;
		NMSGUI_MC2M_accessory_tank_touch = __init_value__NMSGUI_MC2M_accessory_tank_touch;
		NMSGUI_MC2M_hydraulic_tank_pressure_touch = __init_value__NMSGUI_MC2M_hydraulic_tank_pressure_touch;
		NMSGUI_MC2M_hydraulic_tank_temp_touch = __init_value__NMSGUI_MC2M_hydraulic_tank_temp_touch;
		NMSGUI_MC2M_fuel_level_left_touch = __init_value__NMSGUI_MC2M_fuel_level_left_touch;
		NMSGUI_MC2M_fuel_level_right_touch = __init_value__NMSGUI_MC2M_fuel_level_right_touch;
		NMSGUI_MC2M_fuel_temp_left_touch = __init_value__NMSGUI_MC2M_fuel_temp_left_touch;
		NMSGUI_MC2M_fuel_temp_right_touch = __init_value__NMSGUI_MC2M_fuel_temp_right_touch;
	}
	vt3_can_alarm_CAN_793 = ! pmsg->RxOK;

	/* RX message: CAN_794 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_794);
	if ( ! pmsg->RxOK ) 
	{
		NMSGUI_MC2M_dropbox_high_touch = __init_value__NMSGUI_MC2M_dropbox_high_touch;
		NMSGUI_MC2M_dropbox_neutral_touch = __init_value__NMSGUI_MC2M_dropbox_neutral_touch;
		NMSGUI_MC2M_dropbox_low_touch = __init_value__NMSGUI_MC2M_dropbox_low_touch;
		NMSGUI_MC2M_dropbox_admin_touch = __init_value__NMSGUI_MC2M_dropbox_admin_touch;
	}
	vt3_can_alarm_CAN_794 = ! pmsg->RxOK;

	/* RX message: CAN_795 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_795);
	if ( ! pmsg->RxOK ) 
	{
		NMSGUI_MC2M_difflock_mid_touch = __init_value__NMSGUI_MC2M_difflock_mid_touch;
		NMSGUI_MC2M_difflock_rear_touch = __init_value__NMSGUI_MC2M_difflock_rear_touch;
		NMSGUI_MC2M_difflock_front_touch = __init_value__NMSGUI_MC2M_difflock_front_touch;
		NMSGUI_MC2M_difflock_admin_touch = __init_value__NMSGUI_MC2M_difflock_admin_touch;
	}
	vt3_can_alarm_CAN_795 = ! pmsg->RxOK;

	/* RX message: CAN_799 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_799);
	if ( ! pmsg->RxOK ) 
	{
		TEST_MC2M_RemoteGasEnable = __init_value__TEST_MC2M_RemoteGasEnable;
		TEST_MC2M_RemoteGasRatio = __init_value__TEST_MC2M_RemoteGasRatio;
	}
	vt3_can_alarm_CAN_799 = ! pmsg->RxOK;

	/* RX message: CAN_Light_4E */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_LIGHT_4E);
	if ( ! pmsg->RxOK ) 
	{
		OMNIA_LEFT_Light_P1_Park = __init_value__OMNIA_LEFT_Light_P1_Park;
		OMNIA_LEFT_LowBeamStatus = __init_value__OMNIA_LEFT_LowBeamStatus;
		OMNIA_LEFT_LowBeam2Status = __init_value__OMNIA_LEFT_LowBeam2Status;
		OMNIA_LEFT_TurnLeftSignal = __init_value__OMNIA_LEFT_TurnLeftSignal;
		OMNIA_LEFT_TurnRightSignal = __init_value__OMNIA_LEFT_TurnRightSignal;
		OMNIA_LEFT_HighBeamStatus = __init_value__OMNIA_LEFT_HighBeamStatus;
		OMNIA_LEFT_HighBeamFlashStatus = __init_value__OMNIA_LEFT_HighBeamFlashStatus;
	}
	vt3_can_alarm_CAN_Light_4E = ! pmsg->RxOK;

	/* RX message: CAN_Wiper_4F */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_WIPER_4F);
	if ( ! pmsg->RxOK ) 
	{
		OMNIA_RIGHT_WiperLOW = __init_value__OMNIA_RIGHT_WiperLOW;
		OMNIA_RIGHT_WiperHIGH = __init_value__OMNIA_RIGHT_WiperHIGH;
		OMNIA_RIGHT_WiperSelection = __init_value__OMNIA_RIGHT_WiperSelection;
		OMNIA_RIGHT_Washer = __init_value__OMNIA_RIGHT_Washer;
	}
	vt3_can_alarm_CAN_Wiper_4F = ! pmsg->RxOK;

	/* RX message: CAN_Horn */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_HORN);
	if ( ! pmsg->RxOK ) 
	{
		Horn_Switch_On = __init_value__Horn_Switch_On;
	}
	vt3_can_alarm_CAN_Horn = ! pmsg->RxOK;


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/


}

/* CAN interface transmit function */
void vt3_can_CanOpen_tx(void)
{
	BYTE txcounter = 0;
	BYTE db[8];
	DINT tmp;

	/* TX message: CAN_101 */
	if ( (vt3_can_period_CAN_101 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_101)) ||
	     (vt3_can_period_CAN_101 == 0 && vt3_can_trigger_CAN_101 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MUX_DIGOUT01_LowBeam_R & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_MUX_DIGOUT02_LowBeam_L & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_MUX_DIGOUT03_InteriorVantilator_1 & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_MUX_DIGOUT04_InteriorVantilator_2 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_MUX_DIGOUT05_FollowLight & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_MUX_DIGOUT06 & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_MUX_DIGOUT07_FrontAxleDiffLock & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_MUX_DIGOUT08_ResistancesFront & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_MUX_DIGOUT09_StopLamps & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_MUX_DIGOUT10_Buzzer & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_MUX_DIGOUT11 & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_MUX_DIGOUT12_Park_Sensor_Control & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_MUX_DIGOUT13_HighBeam_Left & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_MUX_DIGOUT14_RearFogLamp & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_MUX_DIGOUT15_ReverseGearLamp & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_MUX_DIGOUT16_Tank_1_SupplyValf & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_MUX_DIGOUT17_Tank_1_ReturnValf & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MUX_DIGOUT18 & 0x01) << 1));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MUX_DIGOUT19_Tank_2_SupplyValf & 0x01) << 2));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MUX_DIGOUT20 & 0x01) << 3));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MUX_DIGOUT21_Backup_Alarm & 0x01) << 4));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MUX_DIGOUT22_Tank_2_ReturnValf & 0x01) << 5));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MUX_DIGOUT23_Winch_Up & 0x01) << 6));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MUX_DIGOUT24_Winch_Down & 0x01) << 7));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_MUX_DIGOUT25_Winch_Clutch & 0x01));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_MUX_DIGOUT26 & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter & 0x01) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_MUX_LED1 & 0x01) << 3));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_MUX_LED2 & 0x01) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_MUX_LED3 & 0x01) << 5));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_MUX_LED4 & 0x01) << 6));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MUX_FrontWiperSLOW & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_MUX_FrontWiperFAST & 0x01) << 1));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_MUX_FrontWiperINT1 & 0x01) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_MUX_FrontWiperINT2 & 0x01) << 3));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_MUX_RearWiperSLOW & 0x01) << 4));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_MUX_RearWiperINT & 0x01) << 5));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_MUX_Delay_INT1 & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_MUX_Delay_INT2 & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x101, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_101 = 0;
			vt3_can_tx_timeout_CAN_101 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_101);
		}
	}

	/* TX message: CAN_106 */
	if ( (vt3_can_period_CAN_106 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_106)) ||
	     (vt3_can_period_CAN_106 == 0 && vt3_can_trigger_CAN_106 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_IOMODE_2_DOUT00 & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_2_DOUT01 & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_2_DOUT02 & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_2_DOUT03 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_2_DOUT04 & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_2_DOUT05 & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_2_DOUT06 & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_2_DOUT07 & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_IOMODE_2_DOUT08 & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_2_DOUT09 & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_2_DOUT10 & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_2_DOUT11 & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_2_DOUT12_BrakeAirTanksWarningLamps & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_2_DOUT13 & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_2_DOUT14 & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_2_DOUT15 & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_IOMODE_2_DOUT16_Tank_1_ActivatedLamp & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_2_DOUT17_Tank_2_ActivatedLamp & 0x01) << 1));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_2_DOUT18_KeyLedOnOff & 0x01) << 2));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_2_DOUT19 & 0x01) << 3));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_2_DOUT20 & 0x01) << 4));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_2_DOUT21 & 0x01) << 5));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_2_DOUT22 & 0x01) << 6));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_2_DOUT23 & 0x01) << 7));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_IOMODE_2_DOUT24 & 0x01));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_2_DOUT25 & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_2_DOUT26 & 0x01) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_2_DOUT27 & 0x01) << 3));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_2_DOUT28 & 0x01) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_2_DOUT29 & 0x01) << 5));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_2_DOUT30 & 0x01) << 6));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_2_DOUT31 & 0x01) << 7));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_IOMODE_2_PWM00_Tanks_Gauge & 0xFF));
 		db[5] |= (BYTE)(((MC2M_IOMODE_2_PWM00_Tanks_Gauge >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_IOMODE_2_PWM01 & 0xFF));
 		db[7] |= (BYTE)(((MC2M_IOMODE_2_PWM01 >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x106, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_106 = 0;
			vt3_can_tx_timeout_CAN_106 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_106);
		}
	}

	/* TX message: CAN_107 */
	if ( (vt3_can_period_CAN_107 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_107)) ||
	     (vt3_can_period_CAN_107 == 0 && vt3_can_trigger_CAN_107 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_IOMODE_DOUT00_ABS_IndicatorLamp & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_DOUT01_EngineProtection & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_DOUT02_ParkSensorControl & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_DOUT03 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_DOUT04 & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_DOUT05_BrakeAirTanksWarningLamps & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_DOUT06 & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_IOMODE_DOUT07 & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_IOMODE_DOUT08 & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_DOUT09 & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_DOUT10 & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_DOUT11_EngineBrakeActivation & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_DOUT12 & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_DOUT13 & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_DOUT14 & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_IOMODE_DOUT15 & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_IOMODE_DOUT16 & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_DOUT17 & 0x01) << 1));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_DOUT18 & 0x01) << 2));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_DOUT19 & 0x01) << 3));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_DOUT20 & 0x01) << 4));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_DOUT21 & 0x01) << 5));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_DOUT22 & 0x01) << 6));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_IOMODE_DOUT23 & 0x01) << 7));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_IOMODE_DOUT24 & 0x01));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_DOUT25 & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_DOUT26 & 0x01) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_DOUT27 & 0x01) << 3));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_DOUT28 & 0x01) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_DOUT29 & 0x01) << 5));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_DOUT30 & 0x01) << 6));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_IOMODE_DOUT31 & 0x01) << 7));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_IOMODE_PWM00_SpeedGauge & 0xFF));
 		db[5] |= (BYTE)(((MC2M_IOMODE_PWM00_SpeedGauge >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_IOMODE_PWM01_TempGauge & 0xFF));
 		db[7] |= (BYTE)(((MC2M_IOMODE_PWM01_TempGauge >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x107, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_107 = 0;
			vt3_can_tx_timeout_CAN_107 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_107);
		}
	}

	/* TX message: CAN_151 */
	if ( (vt3_can_period_CAN_151 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_151)) ||
	     (vt3_can_period_CAN_151 == 0 && vt3_can_trigger_CAN_151 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_EngineSpeed & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_EngineSpeed >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_VehicleSpeed & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_FuelLevel_1 & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_EngineTempValue & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_BatteryLevel & 0xFF));
 		db[6] |= (BYTE)(((MC2M_TERA_BatteryLevel >> 8) & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_TERA_EngineOilPressure & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x151, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_151 = 0;
			vt3_can_tx_timeout_CAN_151 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_151);
		}
	}

	/* TX message: CAN_152 */
	if ( (vt3_can_period_CAN_152 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_152)) ||
	     (vt3_can_period_CAN_152 == 0 && vt3_can_trigger_CAN_152 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_ParkingBrakePressure & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_TERA_ServiceBrake1 & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_ServiceBrake2 & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_AccessoryPressure & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_TransOilTemperature & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_CurrentGear & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_OutSideTemperature & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_TERA_InSideTemperature & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x152, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_152 = 0;
			vt3_can_tx_timeout_CAN_152 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_152);
		}
	}

	/* TX message: CAN_153 */
	if ( (vt3_can_period_CAN_153 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_153)) ||
	     (vt3_can_period_CAN_153 == 0 && vt3_can_trigger_CAN_153 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_Icon_Status_L01 & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_Icon_Status_L02 & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_Icon_Status_L03 & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_Icon_Status_L04 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_Icon_Status_L05 & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_Icon_Status_L06 & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_Icon_Status_L07 & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_Icon_Status_L08 & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_TERA_Icon_Status_L09 & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_Icon_Status_L10 & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_Icon_Status_L11 & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_Icon_Status_L12 & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_Icon_Status_L13 & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_Icon_Status_L14_1 & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_Icon_Status_L15 & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_Icon_Status_L16 & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_Icon_Status_L17 & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_Icon_Status_L18 & 0x01) << 1));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_Icon_Status_L19 & 0x01) << 2));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_Icon_Status_L20 & 0x01) << 3));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_Icon_Status_L21 & 0x01) << 4));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_Icon_Status_L22 & 0x01) << 5));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_Icon_Status_L23 & 0x01) << 6));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_Icon_Status_L24 & 0x01) << 7));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_Icon_Status_L25 & 0x01));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_Icon_Status_L26 & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_Icon_Status_L27 & 0x01) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_Icon_Status_L28 & 0x01) << 3));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_Icon_Status_L29 & 0x01) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_Icon_Status_L30 & 0x01) << 5));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_Icon_Status_L31 & 0x01) << 6));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_Icon_Status_L32 & 0x01) << 7));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_Icon_Status_L33 & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_Icon_Status_L34 & 0x01) << 1));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_Icon_Status_L35 & 0x01) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_Icon_Status_L36 & 0x01) << 3));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_Icon_Status_L37 & 0x01) << 4));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_Icon_Status_L38 & 0x01) << 5));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_Icon_Status_L39 & 0x01) << 6));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_Icon_Status_L40 & 0x01) << 7));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_Icon_Status_L41 & 0x01));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Icon_Status_L42 & 0x01) << 1));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Icon_Status_L43 & 0x01) << 2));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Icon_Status_BO_S1 & 0x01) << 3));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Icon_Status_BO_S2 & 0x01) << 4));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Icon_Status_BO_S3 & 0x01) << 5));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Icon_Status_GIGA_Bsy & 0x01) << 6));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Icon_Status_BO_1 & 0x01) << 7));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_Icon_Status_BO_2 & 0x01));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_Icon_Status_L14_2 & 0x01) << 2));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_Icon_Status_L14_3 & 0x01) << 3));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_Icon_Status_L14_4 & 0x01) << 4));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_Icon_Status_L14_5 & 0x01) << 5));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_Icon_Status_TankType & 0x03) << 6));
 		db[7] |= (BYTE)(((MC2M_TERA_Icon_Status_TankType >> 2) & 0x3F));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_Icon_Status_BO_0 & 0x01) << 6));

		/* send message */
		if ( vt3_send_canmsg(0, 0x153, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_153 = 0;
			vt3_can_tx_timeout_CAN_153 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_153);
		}
	}

	/* TX message: CAN_154 */
	if ( (vt3_can_period_CAN_154 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_154)) ||
	     (vt3_can_period_CAN_154 == 0 && vt3_can_trigger_CAN_154 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_LampAlarm_L01 & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_LampAlarm_L02 & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_LampAlarm_L03 & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_LampAlarm_L04 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_LampAlarm_L05 & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_LampAlarm_L06 & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_LampAlarm_L07 & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_LampAlarm_L08 & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_TERA_LampAlarm_L09 & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_LampAlarm_L10 & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_LampAlarm_L11 & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_LampAlarm_L12 & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_LampAlarm_L13 & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_LampAlarm_L14 & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_LampAlarm_L15 & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_LampAlarm_L16 & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_LampAlarm_L17 & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_LampAlarm_L18 & 0x01) << 1));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_LampAlarm_L19 & 0x01) << 2));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_LampAlarm_L20 & 0x01) << 3));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_LampAlarm_L21 & 0x01) << 4));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_LampAlarm_L22 & 0x01) << 5));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_LampAlarm_L23 & 0x01) << 6));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_LampAlarm_L24 & 0x01) << 7));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_LampAlarm_L25 & 0x01));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_LampAlarm_L26 & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_LampAlarm_L27 & 0x01) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_LampAlarm_L28 & 0x01) << 3));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_LampAlarm_L29 & 0x01) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_LampAlarm_L30 & 0x01) << 5));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_LampAlarm_L31 & 0x01) << 6));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_LampAlarm_L32 & 0x01) << 7));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_LampAlarm_L33 & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_LampAlarm_L34 & 0x01) << 1));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_LampAlarm_L35 & 0x01) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_LampAlarm_L36 & 0x01) << 3));

		/* send message */
		if ( vt3_send_canmsg(0, 0x154, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_154 = 0;
			vt3_can_tx_timeout_CAN_154 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_154);
		}
	}

	/* TX message: CAN_155 */
	if ( (vt3_can_period_CAN_155 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_155)) ||
	     (vt3_can_period_CAN_155 == 0 && vt3_can_trigger_CAN_155 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_AngleX & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_AngleX >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_AngleY & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_AngleY >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_FuelLevel_2 & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_FuelTankSel1 & 0x07));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_FuelTankSel2 & 0x07) << 3));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_BackDoorTest_Buzzer & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x155, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_155 = 0;
			vt3_can_tx_timeout_CAN_155 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_155);
		}
	}

	/* TX message: CAN_156 */
	if ( (vt3_can_period_CAN_156 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_156)) ||
	     (vt3_can_period_CAN_156 == 0 && vt3_can_trigger_CAN_156 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_SWConfig0 & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_TERA_SWConfig1 & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_SWVersions0 & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_SWVersions1 & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_SWVersions2 & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_AuxPressureLow_Stat & 0x01));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_Engine_Brake_Stat & 0x01) << 1));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_WaterInFuel_Stat & 0x01) << 2));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_BackDoorTest_Prd & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_BackDoorTest_Prd >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x156, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_156 = 0;
			vt3_can_tx_timeout_CAN_156 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_156);
		}
	}

	/* TX message: CAN_207 */
	if ( (vt3_can_period_CAN_207 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_207)) ||
	     (vt3_can_period_CAN_207 == 0 && vt3_can_trigger_CAN_207 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_IOMODE_PWM03 & 0xFF));
 		db[3] |= (BYTE)(((MC2M_IOMODE_PWM03 >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x207, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_207 = 0;
			vt3_can_tx_timeout_CAN_207 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_207);
		}
	}

	/* TX message: CCVS_Cruise_ControlVehicle_Speed_2 */
	if ( (vt3_can_period_CCVS_Cruise_ControlVehicle_Speed_2 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed_2)) ||
	     (vt3_can_period_CCVS_Cruise_ControlVehicle_Speed_2 == 0 && vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed_2 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((CCVS_2_TwoSpeedAxleSwitch & 0x03));
 		/* little-endian */
 		db[0] |= (BYTE)(((CCVS_2_ParkingBrakeSwitch & 0x03) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((CCVS_2_CruiseControlPauseSwitch & 0x03) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((CCVS_2_ParkBrakeReleaseInhibitRequest & 0x03) << 6));
 		/* little-endian */
 		db[3] |= (BYTE)((CCVS_2_CruiseControlActive & 0x03));
 		/* little-endian */
 		db[3] |= (BYTE)(((CCVS_2_CruiseControlEnableSwitch & 0x03) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((CCVS_2_BrakeSwitch & 0x03) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((CCVS_2_ClutchSwitch & 0x03) << 6));
 		/* little-endian */
 		db[4] |= (BYTE)((CCVS_2_CruiseControlSetSwitch & 0x03));
 		/* little-endian */
 		db[4] |= (BYTE)(((CCVS_2_CruiseControlCoastSwitch & 0x03) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((CCVS_2_CruiseControlResumeSwitch & 0x03) << 4));
 		/* little-endian */
 		db[4] |= (BYTE)(((CCVS_2_CruiseControlAccelerateSwitch & 0x03) << 6));
 		/* little-endian */
 		db[5] |= (BYTE)((CCVS_2_CruiseControlSetSpeed & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)(((CCVS_2_CruiseControlStates & 0x07) << 5));
 		/* little-endian */
 		db[7] |= (BYTE)((CCVS_2_EngineIdleIncrementSwitch & 0x03));
 		/* little-endian */
 		db[7] |= (BYTE)(((CCVS_2_EngineIdleDecrementSwitch & 0x03) << 2));
 		/* little-endian */
 		db[7] |= (BYTE)(((CCVS_2_EngineTestModeSwitch & 0x03) << 4));
 		/* little-endian */
 		db[7] |= (BYTE)(((CCVS_2_EngineShutdownOverrideSwitch & 0x03) << 6));
 		tmp = ((DINT)CCVS_2_WheelBasedVehicleSpeed) * 256;
 		/* little-endian */
 		db[1] |= (BYTE)((tmp & 0xFF));
 		db[2] |= (BYTE)(((tmp >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x38FEF100, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CCVS_Cruise_ControlVehicle_Speed_2 = 0;
			vt3_can_tx_timeout_CCVS_Cruise_ControlVehicle_Speed_2 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CCVS_Cruise_ControlVehicle_Speed_2);
		}
	}

	/* TX message: CAN_157 */
	if ( (vt3_can_period_CAN_157 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_157)) ||
	     (vt3_can_period_CAN_157 == 0 && vt3_can_trigger_CAN_157 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_INP00 & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_INP01 & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_INP02 & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_INP03 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_INP04 & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_INP05 & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_INP06 & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_INP07 & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_TERA_DIAG_INP08 & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP09 & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP10 & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP11 & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP12 & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP13 & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP14 & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP15 & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_DIAG_INP16 & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_INP17 & 0x01) << 1));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_INP18 & 0x01) << 2));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_INP19 & 0x01) << 3));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_INP20 & 0x01) << 4));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_INP21 & 0x01) << 5));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_INP22 & 0x01) << 6));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_INP23 & 0x01) << 7));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_DIAG_INP24 & 0x01));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP25 & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP26 & 0x01) << 2));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP27 & 0x01) << 3));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP28 & 0x01) << 4));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP29 & 0x01) << 5));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP30 & 0x01) << 6));
 		/* little-endian */
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP31 & 0x01) << 7));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_DIAG_INP32 & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_INP33 & 0x01) << 1));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_INP34 & 0x01) << 2));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_INP35 & 0x01) << 3));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_INP36 & 0x01) << 4));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_INP37 & 0x01) << 5));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_INP38 & 0x01) << 6));
 		/* little-endian */
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_INP39 & 0x01) << 7));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_DIAG_INP40 & 0x01));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP41 & 0x01) << 1));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP42 & 0x01) << 2));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP43 & 0x01) << 3));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP44 & 0x01) << 4));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP45 & 0x01) << 5));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP46 & 0x01) << 6));
 		/* little-endian */
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP47 & 0x01) << 7));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_INP48 & 0x01));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_INP49 & 0x01) << 1));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_INP50 & 0x01) << 2));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_INP51 & 0x01) << 3));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_OUT00 & 0x01) << 4));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_OUT01 & 0x01) << 5));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_OUT02 & 0x01) << 6));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_OUT03 & 0x01) << 7));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_TERA_DIAG_OUT04 & 0x01));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT05 & 0x01) << 1));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT06 & 0x01) << 2));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT07 & 0x01) << 3));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT08 & 0x01) << 4));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT09 & 0x01) << 5));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT10 & 0x01) << 6));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT11 & 0x01) << 7));

		/* send message */
		if ( vt3_send_canmsg(0, 0x157, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_157 = 0;
			vt3_can_tx_timeout_CAN_157 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_157);
		}
	}

	/* TX message: CAN_158 */
	if ( (vt3_can_period_CAN_158 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_158)) ||
	     (vt3_can_period_CAN_158 == 0 && vt3_can_trigger_CAN_158 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_OUT12 & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_OUT13 & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_OUT14 & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_OUT15 & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_OUT16 & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_OUT17 & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_OUT18 & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_TERA_DIAG_OUT19 & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_TERA_DIAG_OUT20 & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT21 & 0x01) << 1));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT22 & 0x01) << 2));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT23 & 0x01) << 3));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT24 & 0x01) << 4));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT25 & 0x01) << 5));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT26 & 0x01) << 6));
 		/* little-endian */
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT27 & 0x01) << 7));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_DIAG_OUT28 & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_OUT29 & 0x01) << 1));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_OUT30 & 0x01) << 2));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_OUT31 & 0x01) << 3));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_OUT32 & 0x01) << 4));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_OUT33 & 0x01) << 5));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_OUT34 & 0x01) << 6));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_OUT35 & 0x01) << 7));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_DIAG_OUT36 & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_DIAG_INP10AN & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP10AN >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_INP12AN & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_INP12AN >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x158, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_158 = 0;
			vt3_can_tx_timeout_CAN_158 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_158);
		}
	}

	/* TX message: CAN_159 */
	if ( (vt3_can_period_CAN_159 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_159)) ||
	     (vt3_can_period_CAN_159 == 0 && vt3_can_trigger_CAN_159 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_INP13AN & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP13AN >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_DIAG_INP14AN & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP14AN >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_DIAG_INP22AN & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP22AN >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_INP25AN & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_INP25AN >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x159, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_159 = 0;
			vt3_can_tx_timeout_CAN_159 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_159);
		}
	}

	/* TX message: CAN_160 */
	if ( (vt3_can_period_CAN_160 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_160)) ||
	     (vt3_can_period_CAN_160 == 0 && vt3_can_trigger_CAN_160 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_INP30AN & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP30AN >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_DIAG_INP31AN & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_INP31AN >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_DIAG_INP32AN & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_INP32AN >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_INP33AN & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_INP33AN >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x160, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_160 = 0;
			vt3_can_tx_timeout_CAN_160 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_160);
		}
	}

	/* TX message: CAN_161 */
	if ( (vt3_can_period_CAN_161 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_161)) ||
	     (vt3_can_period_CAN_161 == 0 && vt3_can_trigger_CAN_161 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_INP35AN & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_INP35AN >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_DIAG_OUT05AN & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_OUT05AN >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_DIAG_OUT10AN & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_OUT10AN >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_OUT14AN & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT14AN >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x161, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_161 = 0;
			vt3_can_tx_timeout_CAN_161 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_161);
		}
	}

	/* TX message: CAN_162 */
	if ( (vt3_can_period_CAN_162 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_162)) ||
	     (vt3_can_period_CAN_162 == 0 && vt3_can_trigger_CAN_162 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_OUT21AN & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_OUT21AN >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_DIAG_fuelTank_1_Temperature & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_fuelTank_1_Temperature >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_DIAG_PresLevel_Normalized & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_PresLevel_Normalized >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_HTempLevel_Normalized_2 & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_HTempLevel_Normalized_2 >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x162, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_162 = 0;
			vt3_can_tx_timeout_CAN_162 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_162);
		}
	}

	/* TX message: CAN_163 */
	if ( (vt3_can_period_CAN_163 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_163)) ||
	     (vt3_can_period_CAN_163 == 0 && vt3_can_trigger_CAN_163 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_HTempLevel_Normalized & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_HTempLevel_Normalized >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_DIAG_TotalEngineHours & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_TotalEngineHours >> 8) & 0xFF));
 		db[4] |= (BYTE)(((MC2M_TERA_DIAG_TotalEngineHours >> 16) & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_DIAG_TotalEngineHours >> 24) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_Stat_4x4 & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_INP52 & 0x01) << 1));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_INP53 & 0x01) << 2));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_INP54 & 0x01) << 3));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_INP55 & 0x01) << 4));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT37 & 0x01) << 5));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT38 & 0x01) << 6));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_OUT39 & 0x01) << 7));

		/* send message */
		if ( vt3_send_canmsg(0, 0x163, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_163 = 0;
			vt3_can_tx_timeout_CAN_163 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_163);
		}
	}

	/* TX message: CAN_164 */
	if ( (vt3_can_period_CAN_164 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_164)) ||
	     (vt3_can_period_CAN_164 == 0 && vt3_can_trigger_CAN_164 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_TCM_SuspectParameterNumber & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_TCM_SuspectParameterNumber >> 8) & 0xFF));
 		db[2] |= (BYTE)(((MC2M_TERA_TCM_SuspectParameterNumber >> 16) & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_TCM_SuspectParameterNumber >> 24) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_ECM_SuspectParameterNumber & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_ECM_SuspectParameterNumber >> 8) & 0xFF));
 		db[6] |= (BYTE)(((MC2M_TERA_ECM_SuspectParameterNumber >> 16) & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_ECM_SuspectParameterNumber >> 24) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x164, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_164 = 0;
			vt3_can_tx_timeout_CAN_164 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_164);
		}
	}

	/* TX message: CAN_165 */
	if ( (vt3_can_period_CAN_165 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_165)) ||
	     (vt3_can_period_CAN_165 == 0 && vt3_can_trigger_CAN_165 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_EBS_SuspectParameterNumber & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_EBS_SuspectParameterNumber >> 8) & 0xFF));
 		db[2] |= (BYTE)(((MC2M_TERA_EBS_SuspectParameterNumber >> 16) & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_EBS_SuspectParameterNumber >> 24) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_TCM_FailureModeIdentifier & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_ECM_FailureModeIdentifier & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_EBS_FailureModeIdentifier & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_TERA_TCM_OccurrenceCount & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x165, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_165 = 0;
			vt3_can_tx_timeout_CAN_165 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_165);
		}
	}

	/* TX message: CAN_166 */
	if ( (vt3_can_period_CAN_166 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_166)) ||
	     (vt3_can_period_CAN_166 == 0 && vt3_can_trigger_CAN_166 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_ECM_OccurrenceCount & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_TERA_EBS_OccurrenceCount & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_TERA_RadiatorTemp & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_TERA_HTempInputFiltered & 0xFF));
 		db[4] |= (BYTE)(((MC2M_TERA_HTempInputFiltered >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x166, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_166 = 0;
			vt3_can_tx_timeout_CAN_166 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_166);
		}
	}

	/* TX message: CAN_168 */
	if ( (vt3_can_period_CAN_168 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_168)) ||
	     (vt3_can_period_CAN_168 == 0 && vt3_can_trigger_CAN_168 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_TripCounter & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_TripCounter >> 8) & 0xFF));
 		db[2] |= (BYTE)(((MC2M_TERA_TripCounter >> 16) & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_TripCounter >> 24) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_TotalOdometer & 0xFF));
 		db[5] |= (BYTE)(((MC2M_TERA_TotalOdometer >> 8) & 0xFF));
 		db[6] |= (BYTE)(((MC2M_TERA_TotalOdometer >> 16) & 0xFF));
 		db[7] |= (BYTE)(((MC2M_TERA_TotalOdometer >> 24) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x168, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_168 = 0;
			vt3_can_tx_timeout_CAN_168 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_168);
		}
	}

	/* TX message: CAN_169 */
	if ( (vt3_can_period_CAN_169 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_169)) ||
	     (vt3_can_period_CAN_169 == 0 && vt3_can_trigger_CAN_169 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_TERA_DIAG_TotalEngineHours_Old & 0xFF));
 		db[1] |= (BYTE)(((MC2M_TERA_DIAG_TotalEngineHours_Old >> 8) & 0xFF));
 		db[2] |= (BYTE)(((MC2M_TERA_DIAG_TotalEngineHours_Old >> 16) & 0xFF));
 		db[3] |= (BYTE)(((MC2M_TERA_DIAG_TotalEngineHours_Old >> 24) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_TERA_DIAG_EngineCoolantLevel & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_TERA_DIAG_VvrPump & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_TERA_DIAG_VVRPumpTrigger & 0x0F));
 		/* little-endian */
 		db[6] |= (BYTE)(((MC2M_TERA_DIAG_CACTemp & 0x0F) << 4));
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_CACTemp >> 4) & 0x0F));
 		/* little-endian */
 		db[7] |= (BYTE)(((MC2M_TERA_DIAG_RadiatorTemp & 0x0F) << 4));

		/* send message */
		if ( vt3_send_canmsg(0, 0x169, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_169 = 0;
			vt3_can_tx_timeout_CAN_169 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_169);
		}
	}

	/* TX message: CAN_230 */
	if ( (vt3_can_period_CAN_230 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_230)) ||
	     (vt3_can_period_CAN_230 == 0 && vt3_can_trigger_CAN_230 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_GUI_DebugActive_Fb & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_GUI_Selenoid1_Draw_Fb & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_GUI_Selenoid1_Return_Fb & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_GUI_Selenoid2_Draw_Fb & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_GUI_Selenoid2_Return_Fb & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_GUI_EvacuationValveActive_Fb & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_GUI_ParkerPumpStatus & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_GUI_FuelWaterDetect & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_GUI_FuelTankLevel1 & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_GUI_FuelTankLevel2 & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_GUI_FuelLevelSensorVal_L & 0xFF));
 		db[4] |= (BYTE)(((MC2M_GUI_FuelLevelSensorVal_L >> 8) & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_GUI_FuelLevelSensorVal_R & 0xFF));
 		db[6] |= (BYTE)(((MC2M_GUI_FuelLevelSensorVal_R >> 8) & 0xFF));
 		/* little-endian */
 		db[7] |= (BYTE)((MC2M_GUI_EvacuationValveState_Fb & 0x01));

		/* send message */
		if ( vt3_send_canmsg(0, 0x230, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_230 = 0;
			vt3_can_tx_timeout_CAN_230 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_230);
		}
	}

	/* TX message: PRK_Parker_Transfer_Pump */
	if ( (vt3_can_period_PRK_Parker_Transfer_Pump != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_PRK_Parker_Transfer_Pump)) ||
	     (vt3_can_period_PRK_Parker_Transfer_Pump == 0 && vt3_can_trigger_PRK_Parker_Transfer_Pump == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_PARKERPUMP_Proprieatary_Byte & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_PARKERPUMP_Proprieatary_Byte2 & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_PARKERPUMP_Speed_Command & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_PARKERPUMP_Command & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_PARKERPUMP_Spare_Bits & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x30EF1200, 8, db) == ERR_OK )
		{
			vt3_can_trigger_PRK_Parker_Transfer_Pump = 0;
			vt3_can_tx_timeout_PRK_Parker_Transfer_Pump = TIME_TO_TICKS_CAN_TX(vt3_can_period_PRK_Parker_Transfer_Pump);
		}
	}

	/* TX message: CAN_171_MobileyeA */
	if ( (vt3_can_period_CAN_171_MobileyeA != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_171_MobileyeA)) ||
	     (vt3_can_period_CAN_171_MobileyeA == 0 && vt3_can_trigger_CAN_171_MobileyeA == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_MOBILEYE2_RightSignal & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_MOBILEYE2_LeftSignal & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_MOBILEYE2_HighBeam & 0x01));
 		/* little-endian */
 		db[2] |= (BYTE)(((MC2M_MOBILEYE2_LowBeam & 0x01) << 1));
 		/* little-endian */
 		db[3] |= (BYTE)((MC2M_MOBILEYE2_BrakePedal & 0x01));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_MOBILEYE2_VehicleSpeed & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x171, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_171_MobileyeA = 0;
			vt3_can_tx_timeout_CAN_171_MobileyeA = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_171_MobileyeA);
		}
	}

	/* TX message: CAN_780 */
	if ( (vt3_can_period_CAN_780 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_780)) ||
	     (vt3_can_period_CAN_780 == 0 && vt3_can_trigger_CAN_780 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_NMSGUI_service_brake_tank_1 & 0xFF));
 		db[1] |= (BYTE)(((MC2M_NMSGUI_service_brake_tank_1 >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_NMSGUI_service_brake_tank_2 & 0xFF));
 		db[3] |= (BYTE)(((MC2M_NMSGUI_service_brake_tank_2 >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_NMSGUI_park_brake_tank & 0xFF));
 		db[5] |= (BYTE)(((MC2M_NMSGUI_park_brake_tank >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_NMSGUI_accessory_tank & 0xFF));
 		db[7] |= (BYTE)(((MC2M_NMSGUI_accessory_tank >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x780, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_780 = 0;
			vt3_can_tx_timeout_CAN_780 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_780);
		}
	}

	/* TX message: CAN_781 */
	if ( (vt3_can_period_CAN_781 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_781)) ||
	     (vt3_can_period_CAN_781 == 0 && vt3_can_trigger_CAN_781 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_NMSGUI_fuel_level_left & 0xFF));
 		db[1] |= (BYTE)(((MC2M_NMSGUI_fuel_level_left >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_NMSGUI_fuel_level_right & 0xFF));
 		db[3] |= (BYTE)(((MC2M_NMSGUI_fuel_level_right >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_NMSGUI_fuel_temp_left & 0xFF));
 		/* little-endian */
 		db[5] |= (BYTE)((MC2M_NMSGUI_fuel_temp_right & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x781, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_781 = 0;
			vt3_can_tx_timeout_CAN_781 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_781);
		}
	}

	/* TX message: CAN_782 */
	if ( (vt3_can_period_CAN_782 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_782)) ||
	     (vt3_can_period_CAN_782 == 0 && vt3_can_trigger_CAN_782 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_NMSGUI_hydraulic_tank_pressure & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((MC2M_NMSGUI_hydraulic_tank_temp & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x782, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_782 = 0;
			vt3_can_tx_timeout_CAN_782 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_782);
		}
	}

	/* TX message: CAN_783 */
	if ( (vt3_can_period_CAN_783 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_783)) ||
	     (vt3_can_period_CAN_783 == 0 && vt3_can_trigger_CAN_783 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_NMSGUI_difflock_mid_fb & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_NMSGUI_difflock_rear_fb & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_NMSGUI_difflock_front_fb & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_NMSGUI_dropbox_h_fb & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_NMSGUI_dropbox_n_fb & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((MC2M_NMSGUI_dropbox_l_fb & 0x01) << 5));

		/* send message */
		if ( vt3_send_canmsg(0, 0x783, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_783 = 0;
			vt3_can_tx_timeout_CAN_783 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_783);
		}
	}

	/* TX message: CAN_784 */
	if ( (vt3_can_period_CAN_784 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_784)) ||
	     (vt3_can_period_CAN_784 == 0 && vt3_can_trigger_CAN_784 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_NMSGUI_service_break_tank_1_raw_fb & 0xFF));
 		db[1] |= (BYTE)(((MC2M_NMSGUI_service_break_tank_1_raw_fb >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_NMSGUI_service_break_tank_2_raw_fb & 0xFF));
 		db[3] |= (BYTE)(((MC2M_NMSGUI_service_break_tank_2_raw_fb >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_NMSGUI_accessory_tank_raw_fb & 0xFF));
 		db[5] |= (BYTE)(((MC2M_NMSGUI_accessory_tank_raw_fb >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_NMSGUI_park_break_tank_raw_fb & 0xFF));
 		db[7] |= (BYTE)(((MC2M_NMSGUI_park_break_tank_raw_fb >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x784, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_784 = 0;
			vt3_can_tx_timeout_CAN_784 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_784);
		}
	}

	/* TX message: CAN_785 */
	if ( (vt3_can_period_CAN_785 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_785)) ||
	     (vt3_can_period_CAN_785 == 0 && vt3_can_trigger_CAN_785 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_NMSGUI_fuel_level_left_raw_fb & 0xFF));
 		db[1] |= (BYTE)(((MC2M_NMSGUI_fuel_level_left_raw_fb >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_NMSGUI_fuel_level_right_raw_fb & 0xFF));
 		db[3] |= (BYTE)(((MC2M_NMSGUI_fuel_level_right_raw_fb >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((MC2M_NMSGUI_fuel_temp_left_raw_fb & 0xFF));
 		db[5] |= (BYTE)(((MC2M_NMSGUI_fuel_temp_left_raw_fb >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((MC2M_NMSGUI_fuel_temp_right_raw_fb & 0xFF));
 		db[7] |= (BYTE)(((MC2M_NMSGUI_fuel_temp_right_raw_fb >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x785, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_785 = 0;
			vt3_can_tx_timeout_CAN_785 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_785);
		}
	}

	/* TX message: CAN_786 */
	if ( (vt3_can_period_CAN_786 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_786)) ||
	     (vt3_can_period_CAN_786 == 0 && vt3_can_trigger_CAN_786 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb & 0xFF));
 		db[1] |= (BYTE)(((MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((MC2M_NMSGUI_hydraulic_tank_temp_raw_fb & 0xFF));
 		db[3] |= (BYTE)(((MC2M_NMSGUI_hydraulic_tank_temp_raw_fb >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x786, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_786 = 0;
			vt3_can_tx_timeout_CAN_786 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_786);
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
