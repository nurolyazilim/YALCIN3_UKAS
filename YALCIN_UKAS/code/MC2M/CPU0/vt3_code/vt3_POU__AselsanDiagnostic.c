/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__ASELSANDIAGNOSTIC_C
#define INCLUDE__VT3_POU__ASELSANDIAGNOSTIC_C

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
static const vt3_screen_initializer FAR __init_table__AselsanDiagnostic[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__AselsanDiagnostic[] */

/* initializers of in_out parameters */

/* POU constants */
static const UINT             FAR __const__highVoltageThreshold = ((UINT)282U);        /* Yuksek Voltaj  uyarısı için Threshold    */
/* end of POU constants */

/* initialize values for POU status */
static const AselsanDiagnostic_t FAR __const__AselsanDiagnostic__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__AselsanDiagnostic__param_init */

/* initialization of PROGRAM status */
void AselsanDiagnostic__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__AselsanDiagnostic; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&AselsanDiagnostic, &__const__AselsanDiagnostic__param_init, sizeof __const__AselsanDiagnostic__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void AselsanDiagnostic__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	AselsanDiagnostic.ENO = AselsanDiagnostic.EN;
	if ( ! AselsanDiagnostic.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		MC2M_ASELSAN_Hydrolic_Pressure_Warning = (AlarmState_HydrolicTankPressure);

		MC2M_ASELSAN_Hydrolic_Temperature_Warning = (AlarmState_HydrolicTankTemp);

		MC2M_ASELSAN_Alternator_Warning = (AlarmState_Alternator);

		MC2M_ASELSAN_Low_Fuel_Warning_T1 = (AlarmState_FuelLevelLow_T1);

		MC2M_ASELSAN_Low_Fuel_Warning_T2 = (AlarmState_FuelLevelLow_T2);

		MC2M_ASELSAN_Water_In_Fuel_Warning = (WFI_WaterInFuelIndicator);

		MC2M_ASELSAN_Fire_Warning = (Stat_FireFighter);

		MC2M_ASELSAN_Transmission_Oil_Level_Warning = NE_SINT((TRF1_TransmissionOilLevelHighLow),
			((SINT)0));

		MC2M_ASELSAN_Transmission_Oil_Fiter_Warning = NE_INT((TRF2_Transmission_Oil_Filter_Restriction_Switch),
			(INT)(0));

		MC2M_ASELSAN_Transmission_Oil_Temp_Warning = (AlarmState_TransOilTemperature);

		MC2M_ASELSAN_Air_Filter_Clogged_Warning = (AlarmState_AirFilterClogged);

		MC2M_ASELSAN_Engine_Intake_Manifold_Temp = (SINT)(IC1_EngineIntakeManifold1Temperature);

		MC2M_ASELSAN_Engine_Oil_Pressure_Warning = (AlarmState_EngineOilPressure);

		MC2M_ASELSAN_EngineOilTemperature_Warning = (AlarmState_EngineOilTemperature);

		MC2M_ASELSAN_HighWoltage_Warning = GT_WORD_2((BatteryLevel),
			(UINT)(((UINT)282U)));

		MC2M_ASELSAN_Vehicle_Speed = (USINT)(VehicleSpeed);

		MC2M_ASELSAN_BlackOut_Mode = (Stat_BlackOut);

		MC2M_ASELSAN_FuelLevel_T1 = (SINT)(FuelLevel_Normalized_L);

		MC2M_ASELSAN_FuelLevel_T2 = (SINT)(FuelLevel_Normalized2_L);

		MC2M_ASELSAN_Transmission_Oil_Temperature = (INT)(TransOilTemperature);

		MC2M_ASELSAN2_Transmission_Current_Gear = (USINT)SINT_TO_USINT(ADD_SINT((CurrentGear),
				((SINT)1)));

		MC2M_ASELSAN2_Engine_Speed = (UINT)(EEC1_EngineSpeed);

		MC2M_ASELSAN2_Engine_Temp = (USINT)(EngineTempValue);

		MC2M_ASELSAN2_Engine_Oil_Press = (USINT)(EngineOilPressure);

		MC2M_ASELSAN2_Engine_Coolant_Level = (USINT)(EFL_P1_EngineCoolantLevel);

		MC2M_ASELSAN2_Critic_ECM_Error = EQ_INT_2((DM01_ECM_RedStopLamp),
			(INT)(1));

		MC2M_ASELSAN2_Motor_Control_Error = EQ_INT_2((DM01_ECM_AmberWarningLamp),
			(INT)(1));

		MC2M_ASELSAN2_Critic_TCM_Error = EQ_INT_2((DM01_TCM_RedStopLamp),
			(INT)(1));

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

#endif /* INCLUDE__VT3_POU__ASELSANDIAGNOSTIC_C */

/* end of file */
