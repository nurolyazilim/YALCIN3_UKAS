/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__FUELTANKCONTROL_C
#define INCLUDE__VT3_POU__FUELTANKCONTROL_C

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
static const vt3_screen_initializer FAR __init_table__FuelTankControl[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__FuelTankControl[] */

/* initializers of in_out parameters */

/* POU constants */
static const INT              FAR __const__TANK_SEL_DELAY       = ((INT)100);          /*                                          */
static const INT              FAR __const__FUELWATER_TOUT       = ((INT)200);          /*                                          */
static const USINT            FAR __const__TANKSELECTTOUT_VAL   = ((USINT)20U);        /*                                          */
/* end of POU constants */

/* initialize values for POU status */
static const FuelTankControl_t FAR __const__FuelTankControl__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* FuelTankSelection_Tout */ ((INT)0),
	/* FuelWaterTout        */ ((INT)0),
	/* FuelLevelState       */ ((USINT)0U),
	/* Req_Tank1_Valve_Draw */ FALSE,
	/* Req_Tank1_Valve_Return */ FALSE,
	/* Req_Tank2_Valve_Draw */ FALSE,
	/* Req_Tank2_Valve_Return */ FALSE,
	/* Buf_Tank1_Valve_Draw */ FALSE,
	/* Buf_Tank1_Valve_Return */ FALSE,
	/* Buf_Tank2_Valve_Draw */ FALSE,
	/* Buf_Tank2_Valve_Return */ FALSE,
	/* Req_Pump_Speed_Command */ ((USINT)0U),
	/* Req_Pump_Command     */ FALSE,
	/* Req_FuelWater_Evacuation */ FALSE,
	/* TankControlState     */ ((USINT)255U),
	/* TankControlTout      */ ((USINT)50U),
	/* State_TankSelect_Left */ FALSE,
	/* State_TankSelect_Right */ FALSE,
	/* TankSelectTout       */ ((USINT)0U),
	/* EvacuationValve_state */ ((USINT)0U),
	/* EvacuationValve_tout */ ((UINT)0U),
	/* EvacuationValve_prd  */ ((UINT)0U),
	/* Is_WFI_WaterInFuelIndicator */ FALSE,
}; /* end of __const__FuelTankControl__param_init */

/* initialization of PROGRAM status */
void FuelTankControl__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__FuelTankControl; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&FuelTankControl, &__const__FuelTankControl__param_init, sizeof __const__FuelTankControl__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void FuelTankControl__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	FuelTankControl.ENO = FuelTankControl.EN;
	if ( ! FuelTankControl.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		
		main_FuelLevel_Left__call();

		
		main_FuelLevel_Right__call();

		if ( AND_BOOL(GT_SINT_2((FuelLevel_Normalized2_L),
				((SINT)100)),
			GT_SINT_2((FuelLevel_Normalized2_R),
				((SINT)100))) ) {
			FuelLevel_Normalized_TR_TL = (SINT)((SINT)0);
			MC2M_TERA_FuelTankSel1 = (SINT)MUL_SINT(((SINT)3),
				(Blink05));
			MC2M_TERA_FuelTankSel2 = (SINT)MUL_SINT(((SINT)3),
				(Blink05));
		} else if  ( GT_SINT_2((FuelLevel_Normalized2_L),
			((SINT)100)) ) {
			FuelLevel_Normalized_TR_TL = (SINT)(FuelLevel_Normalized2_R);
			MC2M_TERA_FuelTankSel1 = (SINT)MUL_SINT(((SINT)3),
				(Blink05));
			MC2M_TERA_FuelTankSel2 = (SINT)((SINT)1);
		} else if  ( GT_SINT_2((FuelLevel_Normalized2_R),
			((SINT)100)) ) {
			FuelLevel_Normalized_TR_TL = (SINT)(FuelLevel_Normalized2_L);
			MC2M_TERA_FuelTankSel1 = (SINT)((SINT)1);
			MC2M_TERA_FuelTankSel2 = (SINT)MUL_SINT(((SINT)3),
				(Blink05));
		} else if  ( TRUE ) {
			FuelLevel_Normalized_TR_TL = (SINT)ADD_SINT(DIV_SINT((FuelLevel_Normalized2_R),
					((SINT)2)),
				DIV_SINT((FuelLevel_Normalized2_L),
					((SINT)2)));
			MC2M_TERA_FuelTankSel1 = (SINT)((SINT)1);
			MC2M_TERA_FuelTankSel2 = (SINT)((SINT)1);
		}

		MC2M_GUI_FuelTankLevel1 = (SINT)(FuelLevel_Normalized2_L);

		MC2M_GUI_FuelTankLevel2 = (SINT)(FuelLevel_Normalized2_R);

		MC2M_GUI_FuelLevelSensorVal_L = (UINT)(FuelInputFiltered_L);

		MC2M_GUI_FuelLevelSensorVal_R = (UINT)(FuelInputFiltered_R);

		MC2M_GUI_FuelWaterDetect = EQ_INT_2((WFI_WaterInFuelIndicator),
			(INT)(1));

		MC2M_TERA_WaterInFuel_Stat = EQ_INT_2((WFI_WaterInFuelIndicator),
			(INT)(1));

		MC2M_TERA_FuelLevel_1 = (SINT)(FuelLevel_Normalized_TR_TL);

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

#endif /* INCLUDE__VT3_POU__FUELTANKCONTROL_C */

/* end of file */
