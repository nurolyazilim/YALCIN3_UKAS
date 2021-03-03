/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_CPP
#define INCLUDE__VT3_CAN__CANINTERFACE_CPP

#include <stdlib.h>
#include "vt3_runtime.h"
#include "vt3_canlib.h"
#include "vt3_POU_common.h"
#include "vt3_CAN__CanInterface.h"
#include "vt3_vars.h"



/* CAN-bus receive interrupt function */
/* message:  CAN_780 */
/* COB-ID:   0x00000780 */
/* CAN port: 0 */
static void canrx_0_00000780_CAN_780(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: service_brake_tank_1 */
	if ( dlc >= 2 )
	{
		MC2M_NMSGUI_service_brake_tank_1 = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: service_brake_tank_2 */
	if ( dlc >= 4 )
	{
		MC2M_NMSGUI_service_brake_tank_2 = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}
	/* extract variable: park_brake_tank */
	if ( dlc >= 6 )
	{
		MC2M_NMSGUI_park_brake_tank = (UINT)(((UINT)db[4] | ((UINT)db[5] << 8)));
	}
	/* extract variable: accessory_tank */
	if ( dlc >= 8 )
	{
		MC2M_NMSGUI_accessory_tank = (UINT)(((UINT)db[6] | ((UINT)db[7] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_781 */
/* COB-ID:   0x00000781 */
/* CAN port: 0 */
static void canrx_0_00000781_CAN_781(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: fuel_level_left */
	if ( dlc >= 2 )
	{
		MC2M_NMSGUI_fuel_level_left = (SINT)(((SINT)db[0] | ((SINT)db[1] << 8)));
	}
	/* extract variable: fuel_level_right */
	if ( dlc >= 4 )
	{
		MC2M_NMSGUI_fuel_level_right = (SINT)(((SINT)db[2] | ((SINT)db[3] << 8)));
	}
	/* extract variable: fuel_temp_left */
	if ( dlc >= 5 )
	{
		MC2M_NMSGUI_fuel_temp_left = (SINT)((SINT)db[4]);
	}
	/* extract variable: fuel_temp_right */
	if ( dlc >= 6 )
	{
		MC2M_NMSGUI_fuel_temp_right = (SINT)((SINT)db[5]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_782 */
/* COB-ID:   0x00000782 */
/* CAN port: 0 */
static void canrx_0_00000782_CAN_782(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: hydraulic_tank_pressure */
	if ( dlc >= 1 )
	{
		MC2M_NMSGUI_hydraulic_tank_pressure = (USINT)((USINT)db[0]);
	}
	/* extract variable: hydraulic_tank_temp */
	if ( dlc >= 2 )
	{
		MC2M_NMSGUI_hydraulic_tank_temp = (SINT)((SINT)db[1]);
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_783 */
/* COB-ID:   0x00000783 */
/* CAN port: 0 */
static void canrx_0_00000783_CAN_783(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: difflock_mid_fb */
	if ( dlc >= 1 )
	{
		MC2M_NMSGUI_difflock_mid_fb = (BOOL)(((BOOL)db[0] & 0x01));
	}
	/* extract variable: difflock_rear_fb */
	if ( dlc >= 1 )
	{
		MC2M_NMSGUI_difflock_rear_fb = (BOOL)((((BOOL)db[0] >> 1) & 0x01));
	}
	/* extract variable: difflock_front_fb */
	if ( dlc >= 1 )
	{
		MC2M_NMSGUI_difflock_front_fb = (BOOL)((((BOOL)db[0] >> 2) & 0x01));
	}
	/* extract variable: dropbox_h_fb */
	if ( dlc >= 1 )
	{
		MC2M_NMSGUI_dropbox_h_fb = (BOOL)((((BOOL)db[0] >> 3) & 0x01));
	}
	/* extract variable: dropbox_n_fb */
	if ( dlc >= 1 )
	{
		MC2M_NMSGUI_dropbox_n_fb = (BOOL)((((BOOL)db[0] >> 4) & 0x01));
	}
	/* extract variable: dropbox_l_fb */
	if ( dlc >= 1 )
	{
		MC2M_NMSGUI_dropbox_l_fb = (BOOL)((((BOOL)db[0] >> 5) & 0x01));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_784 */
/* COB-ID:   0x00000784 */
/* CAN port: 0 */
static void canrx_0_00000784_CAN_784(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: service_break_tank_1_raw_fb */
	if ( dlc >= 2 )
	{
		MC2M_NMSGUI_service_break_tank_1_raw_fb = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: service_break_tank_2_raw_fb */
	if ( dlc >= 4 )
	{
		MC2M_NMSGUI_service_break_tank_2_raw_fb = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}
	/* extract variable: accessory_tank_raw_fb */
	if ( dlc >= 6 )
	{
		MC2M_NMSGUI_accessory_tank_raw_fb = (UINT)(((UINT)db[4] | ((UINT)db[5] << 8)));
	}
	/* extract variable: park_break_tank_raw_fb */
	if ( dlc >= 8 )
	{
		MC2M_NMSGUI_park_break_tank_raw_fb = (UINT)(((UINT)db[6] | ((UINT)db[7] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_785 */
/* COB-ID:   0x00000785 */
/* CAN port: 0 */
static void canrx_0_00000785_CAN_785(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: fuel_level_left_raw_fb */
	if ( dlc >= 2 )
	{
		MC2M_NMSGUI_fuel_level_left_raw_fb = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: fuel_level_right_raw_fb */
	if ( dlc >= 4 )
	{
		MC2M_NMSGUI_fuel_level_right_raw_fb = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}
	/* extract variable: fuel_temp_left_raw_fb */
	if ( dlc >= 6 )
	{
		MC2M_NMSGUI_fuel_temp_left_raw_fb = (UINT)(((UINT)db[4] | ((UINT)db[5] << 8)));
	}
	/* extract variable: fuel_temp_right_raw_fb */
	if ( dlc >= 8 )
	{
		MC2M_NMSGUI_fuel_temp_right_raw_fb = (UINT)(((UINT)db[6] | ((UINT)db[7] << 8)));
	}

} /* CAN-bus receive end */

/* CAN-bus receive interrupt function */
/* message:  CAN_786 */
/* COB-ID:   0x00000786 */
/* CAN port: 0 */
static void canrx_0_00000786_CAN_786(const BYTE FARPTR db, UINT dlc)
{
	/* message received: clear busoff flag */
	vt3_can_alarm_busoff_CAN_interface = FALSE;

	/* extract variable: hydraulic_tank_pressure_raw_fb */
	if ( dlc >= 2 )
	{
		MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb = (UINT)(((UINT)db[0] | ((UINT)db[1] << 8)));
	}
	/* extract variable: hydraulic_tank_temp_raw_fb */
	if ( dlc >= 4 )
	{
		MC2M_NMSGUI_hydraulic_tank_temp_raw_fb = (UINT)(((UINT)db[2] | ((UINT)db[3] << 8)));
	}

} /* CAN-bus receive end */

/* table of received messages */
static const vt3_can_rx_init_t FAR vt3_can_rx_init_CanInterface[7] = {
	/*    cob-id    tout  alm  alm   mux   mux  call function                            */
	/*                    off   on   pos    id                                           */
	{ 0x00000780,    500,   3,   1,  255,    0, canrx_0_00000780_CAN_780                 },
	{ 0x00000781,    500,   3,   1,  255,    0, canrx_0_00000781_CAN_781                 },
	{ 0x00000782,    500,   3,   1,  255,    0, canrx_0_00000782_CAN_782                 },
	{ 0x00000783,    500,   3,   1,  255,    0, canrx_0_00000783_CAN_783                 },
	{ 0x00000784,    500,   3,   1,  255,    0, canrx_0_00000784_CAN_784                 },
	{ 0x00000785,    500,   3,   1,  255,    0, canrx_0_00000785_CAN_785                 },
	{ 0x00000786,   1500,   3,   1,  255,    0, canrx_0_00000786_CAN_786                 },
};

/* initializers for receive and transmit variables */
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

/* table of initializators */
static const vt3_screen_initializer FAR __init_table__CanInterface[] = {
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
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__CanInterface[] */

/* transmit timers */
static WORD vt3_can_tx_timeout_CAN_790 = 0;
static WORD vt3_can_tx_timeout_CAN_791 = 0;
static WORD vt3_can_tx_timeout_CAN_792 = 0;
static WORD vt3_can_tx_timeout_CAN_793 = 0;
static WORD vt3_can_tx_timeout_CAN_794 = 0;
static WORD vt3_can_tx_timeout_CAN_795 = 0;


/******************************************************************************/
/* remote I/O devices */
/******************************************************************************/


/******************************************************************************/
/* functions */
/******************************************************************************/

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize variables */
	for ( p = __init_table__CanInterface; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* reset alarms */
	vt3_can_alarm_busoff_CAN_interface = FALSE;
	vt3_can_alarm_CAN_780 = FALSE;
	vt3_can_alarm_CAN_781 = FALSE;
	vt3_can_alarm_CAN_782 = FALSE;
	vt3_can_alarm_CAN_783 = FALSE;
	vt3_can_alarm_CAN_784 = FALSE;
	vt3_can_alarm_CAN_785 = FALSE;
	vt3_can_alarm_CAN_786 = FALSE;

	/* initialize can TX value */
	vt3_can_period_CAN_790 = 100;
	vt3_can_trigger_CAN_790 = FALSE;
	vt3_can_period_CAN_791 = 100;
	vt3_can_trigger_CAN_791 = FALSE;
	vt3_can_period_CAN_792 = 100;
	vt3_can_trigger_CAN_792 = FALSE;
	vt3_can_period_CAN_793 = 100;
	vt3_can_trigger_CAN_793 = FALSE;
	vt3_can_period_CAN_794 = 100;
	vt3_can_trigger_CAN_794 = FALSE;
	vt3_can_period_CAN_795 = 100;
	vt3_can_trigger_CAN_795 = FALSE;

	/* reset timers */
	vt3_can_tx_timeout_CAN_790 = 0;
	vt3_can_tx_timeout_CAN_791 = 0;
	vt3_can_tx_timeout_CAN_792 = 0;
	vt3_can_tx_timeout_CAN_793 = 0;
	vt3_can_tx_timeout_CAN_794 = 0;
	vt3_can_tx_timeout_CAN_795 = 0;

	/* initialize the interface */
	vt3_init_interface(0, 250, vt3_can_rx_init_CanInterface, 7);

	/******************************************************************************/
	/* initialization of remote I/O devices */
	/******************************************************************************/


}

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void)
{
	CanRxObj * pmsg;  /* pointer to message record */

	/* check for BUSOFF errors */
	if ( vt3_can_check_busoff(0) )
	{
		vt3_can_alarm_busoff_CAN_interface = TRUE;
	}

	/* RX message: CAN_780 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_780);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_NMSGUI_service_brake_tank_1 = __init_value__MC2M_NMSGUI_service_brake_tank_1;
		MC2M_NMSGUI_service_brake_tank_2 = __init_value__MC2M_NMSGUI_service_brake_tank_2;
		MC2M_NMSGUI_park_brake_tank = __init_value__MC2M_NMSGUI_park_brake_tank;
		MC2M_NMSGUI_accessory_tank = __init_value__MC2M_NMSGUI_accessory_tank;
	}
	vt3_can_alarm_CAN_780 = ! pmsg->RxOK;

	/* RX message: CAN_781 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_781);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_NMSGUI_fuel_level_left = __init_value__MC2M_NMSGUI_fuel_level_left;
		MC2M_NMSGUI_fuel_level_right = __init_value__MC2M_NMSGUI_fuel_level_right;
		MC2M_NMSGUI_fuel_temp_left = __init_value__MC2M_NMSGUI_fuel_temp_left;
		MC2M_NMSGUI_fuel_temp_right = __init_value__MC2M_NMSGUI_fuel_temp_right;
	}
	vt3_can_alarm_CAN_781 = ! pmsg->RxOK;

	/* RX message: CAN_782 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_782);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_NMSGUI_hydraulic_tank_pressure = __init_value__MC2M_NMSGUI_hydraulic_tank_pressure;
		MC2M_NMSGUI_hydraulic_tank_temp = __init_value__MC2M_NMSGUI_hydraulic_tank_temp;
	}
	vt3_can_alarm_CAN_782 = ! pmsg->RxOK;

	/* RX message: CAN_783 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_783);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_NMSGUI_difflock_mid_fb = __init_value__MC2M_NMSGUI_difflock_mid_fb;
		MC2M_NMSGUI_difflock_rear_fb = __init_value__MC2M_NMSGUI_difflock_rear_fb;
		MC2M_NMSGUI_difflock_front_fb = __init_value__MC2M_NMSGUI_difflock_front_fb;
		MC2M_NMSGUI_dropbox_h_fb = __init_value__MC2M_NMSGUI_dropbox_h_fb;
		MC2M_NMSGUI_dropbox_n_fb = __init_value__MC2M_NMSGUI_dropbox_n_fb;
		MC2M_NMSGUI_dropbox_l_fb = __init_value__MC2M_NMSGUI_dropbox_l_fb;
	}
	vt3_can_alarm_CAN_783 = ! pmsg->RxOK;

	/* RX message: CAN_784 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_784);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_NMSGUI_service_break_tank_1_raw_fb = __init_value__MC2M_NMSGUI_service_break_tank_1_raw_fb;
		MC2M_NMSGUI_service_break_tank_2_raw_fb = __init_value__MC2M_NMSGUI_service_break_tank_2_raw_fb;
		MC2M_NMSGUI_accessory_tank_raw_fb = __init_value__MC2M_NMSGUI_accessory_tank_raw_fb;
		MC2M_NMSGUI_park_break_tank_raw_fb = __init_value__MC2M_NMSGUI_park_break_tank_raw_fb;
	}
	vt3_can_alarm_CAN_784 = ! pmsg->RxOK;

	/* RX message: CAN_785 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_785);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_NMSGUI_fuel_level_left_raw_fb = __init_value__MC2M_NMSGUI_fuel_level_left_raw_fb;
		MC2M_NMSGUI_fuel_level_right_raw_fb = __init_value__MC2M_NMSGUI_fuel_level_right_raw_fb;
		MC2M_NMSGUI_fuel_temp_left_raw_fb = __init_value__MC2M_NMSGUI_fuel_temp_left_raw_fb;
		MC2M_NMSGUI_fuel_temp_right_raw_fb = __init_value__MC2M_NMSGUI_fuel_temp_right_raw_fb;
	}
	vt3_can_alarm_CAN_785 = ! pmsg->RxOK;

	/* RX message: CAN_786 */
	pmsg = vt3_get_canmsg(0, VT3_RXMSG_CAN_786);
	if ( ! pmsg->RxOK ) 
	{
		MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb = __init_value__MC2M_NMSGUI_hydraulic_tank_pressure_raw_fb;
		MC2M_NMSGUI_hydraulic_tank_temp_raw_fb = __init_value__MC2M_NMSGUI_hydraulic_tank_temp_raw_fb;
	}
	vt3_can_alarm_CAN_786 = ! pmsg->RxOK;


	/******************************************************************************/
	/* receive messages from remote I/O devices */
	/******************************************************************************/


}

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void)
{
	BYTE txcounter = 0;
	BYTE db[8];

	/* TX message: CAN_790 */
	if ( (vt3_can_period_CAN_790 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_790)) ||
	     (vt3_can_period_CAN_790 == 0 && vt3_can_trigger_CAN_790 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((NMSGUI_MC2M_service_brake_tank_1 & 0xFF));
 		db[1] |= (BYTE)(((NMSGUI_MC2M_service_brake_tank_1 >> 8) & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((NMSGUI_MC2M_service_brake_tank_2 & 0xFF));
 		db[3] |= (BYTE)(((NMSGUI_MC2M_service_brake_tank_2 >> 8) & 0xFF));
 		/* little-endian */
 		db[4] |= (BYTE)((NMSGUI_MC2M_park_brake_tank & 0xFF));
 		db[5] |= (BYTE)(((NMSGUI_MC2M_park_brake_tank >> 8) & 0xFF));
 		/* little-endian */
 		db[6] |= (BYTE)((NMSGUI_MC2M_accessory_tank & 0xFF));
 		db[7] |= (BYTE)(((NMSGUI_MC2M_accessory_tank >> 8) & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x790, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_790 = 0;
			vt3_can_tx_timeout_CAN_790 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_790);
		}
	}

	/* TX message: CAN_791 */
	if ( (vt3_can_period_CAN_791 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_791)) ||
	     (vt3_can_period_CAN_791 == 0 && vt3_can_trigger_CAN_791 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((NMSGUI_MC2M_fuel_level_left & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((NMSGUI_MC2M_fuel_level_right & 0xFF));
 		/* little-endian */
 		db[2] |= (BYTE)((NMSGUI_MC2M_fuel_temp_left & 0xFF));
 		/* little-endian */
 		db[3] |= (BYTE)((NMSGUI_MC2M_fuel_temp_right & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x791, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_791 = 0;
			vt3_can_tx_timeout_CAN_791 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_791);
		}
	}

	/* TX message: CAN_792 */
	if ( (vt3_can_period_CAN_792 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_792)) ||
	     (vt3_can_period_CAN_792 == 0 && vt3_can_trigger_CAN_792 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((NMSGUI_MC2M_hydraulic_tank_pressure & 0xFF));
 		/* little-endian */
 		db[1] |= (BYTE)((NMSGUI_MC2M_hydraulic_tank_temp & 0xFF));

		/* send message */
		if ( vt3_send_canmsg(0, 0x792, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_792 = 0;
			vt3_can_tx_timeout_CAN_792 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_792);
		}
	}

	/* TX message: CAN_793 */
	if ( (vt3_can_period_CAN_793 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_793)) ||
	     (vt3_can_period_CAN_793 == 0 && vt3_can_trigger_CAN_793 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((NMSGUI_MC2M_service_brake_tank_1_touch & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_service_brake_tank_2_touch & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_park_brake_tank_touch & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_accessory_tank_touch & 0x01) << 3));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_hydraulic_tank_pressure_touch & 0x01) << 4));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_hydraulic_tank_temp_touch & 0x01) << 5));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_fuel_level_left_touch & 0x01) << 6));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_fuel_level_right_touch & 0x01) << 7));
 		/* little-endian */
 		db[1] |= (BYTE)((NMSGUI_MC2M_fuel_temp_left_touch & 0x01));
 		/* little-endian */
 		db[1] |= (BYTE)(((NMSGUI_MC2M_fuel_temp_right_touch & 0x01) << 1));

		/* send message */
		if ( vt3_send_canmsg(0, 0x793, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_793 = 0;
			vt3_can_tx_timeout_CAN_793 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_793);
		}
	}

	/* TX message: CAN_794 */
	if ( (vt3_can_period_CAN_794 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_794)) ||
	     (vt3_can_period_CAN_794 == 0 && vt3_can_trigger_CAN_794 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((NMSGUI_MC2M_dropbox_high_touch & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_dropbox_neutral_touch & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_dropbox_low_touch & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_dropbox_admin_touch & 0x01) << 3));

		/* send message */
		if ( vt3_send_canmsg(0, 0x794, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_794 = 0;
			vt3_can_tx_timeout_CAN_794 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_794);
		}
	}

	/* TX message: CAN_795 */
	if ( (vt3_can_period_CAN_795 != 0 && vt3_can_schedule(&txcounter, &vt3_can_tx_timeout_CAN_795)) ||
	     (vt3_can_period_CAN_795 == 0 && vt3_can_trigger_CAN_795 == 1) ) 
	{
		(void) memset(db, 0, sizeof db);
 		/* little-endian */
 		db[0] |= (BYTE)((NMSGUI_MC2M_difflock_mid_touch & 0x01));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_difflock_rear_touch & 0x01) << 1));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_difflock_front_touch & 0x01) << 2));
 		/* little-endian */
 		db[0] |= (BYTE)(((NMSGUI_MC2M_difflock_admin_touch & 0x01) << 3));

		/* send message */
		if ( vt3_send_canmsg(0, 0x795, 8, db) == ERR_OK )
		{
			vt3_can_trigger_CAN_795 = 0;
			vt3_can_tx_timeout_CAN_795 = TIME_TO_TICKS_CAN_TX(vt3_can_period_CAN_795);
		}
	}


	/******************************************************************************/
	/* transmit messages to remote I/O devices (only for master) */
	/******************************************************************************/

}


#endif /* INCLUDE__VT3_CAN__CANINTERFACE_CPP */

/* end of file */
