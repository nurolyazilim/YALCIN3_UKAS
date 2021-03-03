/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINNMSGUI_C
#define INCLUDE__VT3_POU__MAINNMSGUI_C

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
static const vt3_screen_initializer FAR __init_table__mainNMSGUI[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainNMSGUI[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainNMSGUI_t FAR __const__mainNMSGUI__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainNMSGUI__param_init */

/* initialization of PROGRAM status */
void mainNMSGUI__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainNMSGUI; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainNMSGUI, &__const__mainNMSGUI__param_init, sizeof __const__mainNMSGUI__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainNMSGUI__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainNMSGUI.ENO = mainNMSGUI.EN;
	if ( ! mainNMSGUI.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		MC2M_NMSGUI_accessory_tank = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalInput_Sensor4)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		MC2M_NMSGUI_fuel_level_left = (SINT)(FuelLevel_Normalized2_L);

		MC2M_NMSGUI_fuel_level_right = (SINT)(FuelLevel_Normalized2_R);

		MC2M_NMSGUI_fuel_temp_left = (SINT)INT_TO_SINT((TempLevel_Normalized_FuelT_L));

		MC2M_NMSGUI_fuel_temp_right = (SINT)INT_TO_SINT((TempLevel_Normalized_FuelT_R));

		MC2M_NMSGUI_hydraulic_tank_pressure = (USINT)INT_TO_USINT((PresLevel_Normalized));

		MC2M_NMSGUI_park_brake_tank = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalInput_Sensor1)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		MC2M_NMSGUI_service_brake_tank_1 = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalInput_Sensor2)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		MC2M_NMSGUI_service_brake_tank_2 = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalInput_Sensor3)),
				SINT_TO_REAL((SINT)(((SINT)100)))));

		MC2M_NMSGUI_difflock_mid_fb = (DIGIN_Feedback_4WD_DiffLock);

		MC2M_NMSGUI_difflock_rear_fb = (DIGIN_Feedback_RearAxle);

		MC2M_NMSGUI_difflock_front_fb = (IOMODE_DIGIN16_FeedBack_FrontAxle);

		MC2M_NMSGUI_dropbox_h_fb = (DIGIN_Feedback_DropboxHigh);

		MC2M_NMSGUI_dropbox_n_fb = (Stat_Dropbox_Neutral);

		MC2M_NMSGUI_dropbox_l_fb = (DIGIN_Feedback_DropboxLow);

		MC2M_NMSGUI_service_break_tank_1_raw_fb = (UINT)(AIN_FootBrakePressureSensor_1);

		MC2M_NMSGUI_service_break_tank_2_raw_fb = (UINT)(AIN_FootBrakePressureSensor_2);

		MC2M_NMSGUI_accessory_tank_raw_fb = (UINT)(AIN_AccessoryPressureSensor);

		MC2M_NMSGUI_park_break_tank_raw_fb = (UINT)(AIN_ParkBrakePressureSensor);

		MC2M_NMSGUI_fuel_level_left_raw_fb = (UINT)(AIN_Tank_Left_Level);

		MC2M_NMSGUI_fuel_level_right_raw_fb = (UINT)(AIN_Tank_Right_Level);

		MC2M_NMSGUI_fuel_temp_left_raw_fb = (UINT)(AIN_FuelTankLeft_Temp);

		MC2M_NMSGUI_fuel_temp_right_raw_fb = (UINT)(AIN_FuelTankRight_Temp);

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

#endif /* INCLUDE__VT3_POU__MAINNMSGUI_C */

/* end of file */
