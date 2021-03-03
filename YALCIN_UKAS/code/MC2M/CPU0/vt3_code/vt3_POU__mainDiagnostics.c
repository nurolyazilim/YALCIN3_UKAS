/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINDIAGNOSTICS_C
#define INCLUDE__VT3_POU__MAINDIAGNOSTICS_C

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
static const vt3_screen_initializer FAR __init_table__mainDiagnostics[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainDiagnostics[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainDiagnostics_t FAR __const__mainDiagnostics__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainDiagnostics__param_init */

/* initialization of PROGRAM status */
void mainDiagnostics__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainDiagnostics; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainDiagnostics, &__const__mainDiagnostics__param_init, sizeof __const__mainDiagnostics__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainDiagnostics__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainDiagnostics.ENO = mainDiagnostics.EN;
	if ( ! mainDiagnostics.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		AlarmState_EngineOilLevel = LT_BYTE_2((EFL_P1_EngineOilLevel),
			(USINT)(((USINT)5U)));

		AlarmState_Alternator = (DIGIN_AlternatorFailure);

		AlarmState_ECM_RedLamp = (Stat_RedLamp_fromECM);

		AlarmState_ECM_AmberLamp = (Stat_AmberLamp_fromECM);

		AlarmState_AirFilterClogged = (DIGIN_AirFilterClogged);

		AlarmState_DoorOpen_1 = AND_BOOL(NOT_BOOL((DIGIN_DoorOpenSwitch)),
			(DIGIN_Back_HydDoorClosed));

		AlarmState_DoorOpen_2 = (DIGIN_Back_HydDoorClosed);

		AlarmState_DoorOpen_3 = (Cmd_GunTowerDoor_1);

		AlarmState_DoorOpen_5 = (DIGIN_DoorOpenSwitch);

		AlarmState_CheckTransmission = (Stat_CheckTransLamp_fromTCM);

		AlarmState_SumpTemp = NOT_BOOL((IOMODE_DIGIN23_SumpTempAlarm));

		AlarmState_Battery = LT_WORD_2((BatteryLevel),
			((INT)220));

		AlarmState_TransOilTemperature = GE_INT_2((TransOilTemperature),
			(USINT)(((USINT)121U)));

		AlarmState_EngineOilPressure = LE_INT_2((EngineOilPressure),
			(SINT)(((SINT)10)));

		AlarmState_EngineOilTemperature = GE_INT_2((EngineTempValue),
			(SINT)(((SINT)102)));

		AlarmState_FuelLevelLow = LE_SINT_2((FuelLevel_Normalized_TR_TL),
			(SINT)(((SINT)12)));

		AlarmState_FuelLevelLow_T1 = LE_SINT_2((FuelLevel_Normalized_L),
			(SINT)(((SINT)12)));

		AlarmState_FuelLevelLow_T2 = LE_SINT_2((FuelLevel_Normalized_R),
			(SINT)(((SINT)12)));

		AlarmState_ParkBrakePressure = LT_WORD_2((InputFiltered_Sensor1),
			(USINT)(((USINT)50U)));

		AlarmState_ServiceBrake1Pressure = LT_WORD_2((InputFiltered_Sensor2),
			(USINT)(((USINT)50U)));

		AlarmState_ServiceBrake2Pressure = LT_WORD_2((InputFiltered_Sensor3),
			(USINT)(((USINT)50U)));

		AlarmState_AccessoryPressure = LT_WORD_2((InputFiltered_Sensor4),
			(USINT)(((USINT)50U)));

		AlarmState_EngineCoolantLevelLow = (DIGIN_EngineCoolantLevelLow);

		AlarmState_SteeringWheelRepPump = AND_BOOL(AND_BOOL((DIGIN_SteeringWheelRepPump),
				GT_BYTE_2((VehicleSpeed),
					((SINT)10))),
			NOT_BOOL((Cmd_ReverseGear)));

		AlarmState_OilFilterDirty_1 = (Stat_OilFilterDirtiness_1);

		AlarmState_OilFilterDirty_2 = NOT_BOOL((Stat_OilFilterDirtiness_2));

		AlarmState_HydrolicTankPressure = LT_INT_2((PresLevel_Normalized),
			(USINT)(((USINT)5U)));

		AlarmState_HydrolicTankTemp = GT_BYTE_2((HTempLevel_Normalized),
			(USINT)(((USINT)80U)));

		AlarmState_WeatherCold = LT_SINT_2((outSideTemperature),
			(SINT)(((SINT)0)));

		LampAlarm_L01_TON.PT = (INT)(((INT)2000));

		LampAlarm_L02_TON.PT = (INT)(((INT)2000));

		LampAlarm_L03_TON.PT = (INT)(((INT)2000));

		LampAlarm_L04_TON.PT = (INT)(((INT)2000));

		LampAlarm_L05_TON.PT = (INT)(((INT)2000));

		LampAlarm_L06_TON.PT = (INT)(((INT)2000));

		LampAlarm_L07_TON.PT = (INT)(((INT)2000));

		LampAlarm_L08_TON.PT = (INT)(((INT)2000));

		LampAlarm_L09_TON.PT = (INT)(((INT)2000));

		LampAlarm_L10_TON.PT = (INT)(((INT)2000));

		LampAlarm_L11_TON.PT = (INT)(((INT)2000));

		LampAlarm_L12_TON.PT = (INT)(((INT)2000));

		LampAlarm_L13_TON.PT = (INT)(((INT)2000));

		LampAlarm_L14_TON.PT = (INT)(((INT)2000));

		LampAlarm_L15_TON.PT = (INT)(((INT)2000));

		LampAlarm_L16_TON.PT = (INT)(((INT)2000));

		LampAlarm_L17_TON.PT = (INT)(((INT)2000));

		LampAlarm_L18_TON.PT = (INT)(((INT)2000));

		LampAlarm_L19_TON.PT = (INT)(((INT)2000));

		LampAlarm_L20_TON.PT = (INT)(((INT)2000));

		LampAlarm_L21_TON.PT = (INT)(((INT)2000));

		LampAlarm_L22_TON.PT = (INT)(((INT)2000));

		LampAlarm_L23_TON.PT = (INT)(((INT)2000));

		LampAlarm_L24_TON.PT = (INT)(((INT)2000));

		LampAlarm_L25_TON.PT = (INT)(((INT)2000));

		LampAlarm_L26_TON.PT = (INT)(((INT)2000));

		LampAlarm_L17_TON.IN = AND_BOOL((MC2M_MUX_DIGOUT01_LowBeam_R),
			EQ_BYTE_2((MUX_ISenseOut01),
				((SINT)0)));

		LampAlarm_L18_TON.IN = AND_BOOL((MC2M_MUX_DIGOUT02_LowBeam_L),
			EQ_BYTE_2((MUX_ISenseOut02),
				((SINT)0)));

		LampAlarm_L19_TON.IN = AND_BOOL((MC2M_MUX_DIGOUT15_ReverseGearLamp),
			EQ_BYTE_2((MUX_ISenseOut15),
				((SINT)0)));

		LampAlarm_L20_TON.IN = AND_BOOL((MC2M_MUX_DIGOUT14_RearFogLamp),
			EQ_BYTE_2((MUX_ISenseOut14),
				((SINT)0)));

		LampAlarm_L21_TON.IN = AND_BOOL((MC2M_MUX_DIGOUT23_Winch_Up),
			EQ_BYTE_2((MUX_ISenseOut23),
				((SINT)0)));

		LampAlarm_L22_TON.IN = AND_BOOL((MC2M_MUX_DIGOUT24_Winch_Down),
			EQ_BYTE_2((MUX_ISenseOut24),
				((SINT)0)));

		
		TON__call(&LampAlarm_L01_TON);

		
		TON__call(&LampAlarm_L02_TON);

		
		TON__call(&LampAlarm_L03_TON);

		
		TON__call(&LampAlarm_L04_TON);

		
		TON__call(&LampAlarm_L05_TON);

		
		TON__call(&LampAlarm_L06_TON);

		
		TON__call(&LampAlarm_L07_TON);

		
		TON__call(&LampAlarm_L08_TON);

		
		TON__call(&LampAlarm_L09_TON);

		
		TON__call(&LampAlarm_L10_TON);

		
		TON__call(&LampAlarm_L11_TON);

		
		TON__call(&LampAlarm_L12_TON);

		
		TON__call(&LampAlarm_L13_TON);

		
		TON__call(&LampAlarm_L14_TON);

		
		TON__call(&LampAlarm_L15_TON);

		
		TON__call(&LampAlarm_L16_TON);

		
		TON__call(&LampAlarm_L17_TON);

		
		TON__call(&LampAlarm_L18_TON);

		
		TON__call(&LampAlarm_L19_TON);

		
		TON__call(&LampAlarm_L20_TON);

		
		TON__call(&LampAlarm_L21_TON);

		
		TON__call(&LampAlarm_L22_TON);

		
		TON__call(&LampAlarm_L25_TON);

		
		TON__call(&LampAlarm_L26_TON);

		MC2M_TERA_LampAlarm_L01 = (LampAlarm_L01_TON.Q);

		MC2M_TERA_LampAlarm_L02 = (LampAlarm_L02_TON.Q);

		MC2M_TERA_LampAlarm_L03 = (LampAlarm_L03_TON.Q);

		MC2M_TERA_LampAlarm_L04 = (LampAlarm_L04_TON.Q);

		MC2M_TERA_LampAlarm_L05 = (LampAlarm_L05_TON.Q);

		MC2M_TERA_LampAlarm_L06 = (LampAlarm_L06_TON.Q);

		MC2M_TERA_LampAlarm_L07 = (LampAlarm_L07_TON.Q);

		MC2M_TERA_LampAlarm_L08 = (LampAlarm_L08_TON.Q);

		MC2M_TERA_LampAlarm_L09 = (LampAlarm_L09_TON.Q);

		MC2M_TERA_LampAlarm_L10 = (LampAlarm_L10_TON.Q);

		MC2M_TERA_LampAlarm_L11 = (LampAlarm_L11_TON.Q);

		MC2M_TERA_LampAlarm_L12 = (LampAlarm_L12_TON.Q);

		MC2M_TERA_LampAlarm_L13 = (LampAlarm_L13_TON.Q);

		MC2M_TERA_LampAlarm_L14 = (LampAlarm_L14_TON.Q);

		MC2M_TERA_LampAlarm_L15 = (LampAlarm_L15_TON.Q);

		MC2M_TERA_LampAlarm_L16 = (LampAlarm_L16_TON.Q);

		MC2M_TERA_LampAlarm_L17 = (LampAlarm_L17_TON.Q);

		MC2M_TERA_LampAlarm_L18 = (LampAlarm_L18_TON.Q);

		MC2M_TERA_LampAlarm_L19 = (LampAlarm_L19_TON.Q);

		MC2M_TERA_LampAlarm_L20 = (LampAlarm_L20_TON.Q);

		MC2M_TERA_LampAlarm_L21 = (LampAlarm_L21_TON.Q);

		MC2M_TERA_LampAlarm_L22 = (LampAlarm_L22_TON.Q);

		MC2M_TERA_LampAlarm_L25 = (LampAlarm_L25_TON.Q);

		MC2M_TERA_LampAlarm_L26 = (LampAlarm_L26_TON.Q);

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

#endif /* INCLUDE__VT3_POU__MAINDIAGNOSTICS_C */

/* end of file */
