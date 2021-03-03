/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINOTHERFUNCTIONS_C
#define INCLUDE__VT3_POU__MAINOTHERFUNCTIONS_C

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
static const vt3_screen_initializer FAR __init_table__mainOtherFunctions[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainOtherFunctions[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainOtherFunctions_t FAR __const__mainOtherFunctions__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainOtherFunctions__param_init */

/* initialization of PROGRAM status */
void mainOtherFunctions__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainOtherFunctions; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainOtherFunctions, &__const__mainOtherFunctions__param_init, sizeof __const__mainOtherFunctions__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainOtherFunctions__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainOtherFunctions.ENO = mainOtherFunctions.EN;
	if ( ! mainOtherFunctions.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		Cmd_Bypass_Switch = (DIGIN_Bypass_Switch);

		Cmd_FireFighter = (IOMODE_DIGIN09_FireFighter);

		Cmd_interiorVentilation_1 = (IOMODE_DIGIN17_InteriorVentilation);

		Cmd_AlternatorFailure = (DIGIN_AlternatorFailure);

		Cmd_CentralLockSystem = (DIGIN_CentralLockSystemEnable);

		Cmd_MineLock = AND_BOOL((Stat_HydraulicDoorOpened),
			(Stat_HydraulicDoorClosed));

		Stat_FireFighter = (Cmd_FireFighter);

		Stat_interiorVentilation_1 = (Cmd_interiorVentilation_1);

		Stat_interiorVentilation_2 = (Cmd_interiorVentilation_2);

		Stat_CentralLockSystem = NOT_BOOL((Cmd_CentralLockSystem));

		Stat_Redresor = NOT_BOOL((Cmd_AlternatorFailure));

		Stat_MineLock = (Cmd_MineLock);

		Stat_InterBuzzer = AND_BOOL(OR_BOOL(OR_BOOL(OR_BOOL(OR_BOOL((Stat_EngineProtection),
							(Stat_DiffLock44)),
						(Stat_4x4_Buzzer)),
					(MC2M_TERA_WaterInFuel_Stat)),
				AND_BOOL((AlarmState_EngineOilPressure),
					GT_WORD_2((InputFiltered_Sensor1),
						((INT)400)))),
			NOT_BOOL((Stat_BlackOut)));

		DOUT_BatteryCharge = (Stat_Redresor);

		MC2M_MUX_DIGOUT10_Buzzer = (Stat_InterBuzzer);

		MC2M_MUX_DIGOUT27_BO_CTIS_FireFighter = (Stat_BlackOut_S3);

		Fan_TON.PT = (fanActiveDelay);

		Fan_TON.IN = (Stat_FireFighter);

		
		TON__call(&Fan_TON);

		stat_FireFighterActiveFan = (Fan_TON.Q);

		DOUT_InteriorVantilator = OR_BOOL((Stat_interiorVentilation_1),
			(stat_FireFighterActiveFan));

		if ( GE_DINT_2((EEC1_EngineSpeed),
			(engineSpeedRPMConstant)) ) {
			stat_VehicleOn = TRUE;
		} else if  ( TRUE ) {
			stat_VehicleOn = FALSE;
		}

		if ( LE_SINT_2((fuelTank_1_Temperature),
			(SINT)(((SINT)0))) ) {
			Cmd_T50FuelHeater = (WorkState_WebastoTankTemperature);
			Stat_FuelTemp = FALSE;
		} else if  ( LT_SINT_2((fuelTank_1_Temperature),
			(SINT)(((SINT)15))) ) {
			Cmd_T50FuelHeater = AND_BOOL((WorkState_WebastoTankTemperature),
				NOT_BOOL((Stat_FuelTemp)));
		} else if  ( GE_SINT_2((fuelTank_1_Temperature),
			(SINT)(((SINT)15))) ) {
			Cmd_T50FuelHeater = FALSE;
			Stat_FuelTemp = TRUE;
		}

		DOUT_T90Enable = TRUE;

		if ( LE_SINT_2((fuelTank_2_Temperature),
			(SINT)(((SINT)5))) ) {
			Cmd_T50TankResistance = TRUE;
			Stat_T50TankTemp = FALSE;
		} else if  ( LT_SINT_2((fuelTank_2_Temperature),
			(SINT)(((SINT)20))) ) {
			Cmd_T50TankResistance = NOT_BOOL((Stat_T50TankTemp));
		} else if  ( GE_SINT_2((fuelTank_2_Temperature),
			(SINT)(((SINT)20))) ) {
			Cmd_T50TankResistance = FALSE;
			Stat_T50TankTemp = TRUE;
		}

		WorkState_WebastoTankTemperature = GE_SINT_2((fuelTank_2_Temperature),
			(SINT)(((SINT)0)));

		Cmd_Horn = (Horn_Switch_On);

		if ( OR_BOOL(EQ_BYTE_2((Cmd_Horn),
				((INT)247)),
			EQ_BYTE_2((Cmd_Horn),
				((INT)251))) ) {
			Stat_Horn = TRUE;
		} else if  ( TRUE ) {
			Stat_Horn = FALSE;
		}

		

		MC2M_TERA_SWConfig0 = (USINT)(USINT)(((USINT)3U));

		MC2M_TERA_SWConfig1 = (USINT)(USINT)(((USINT)5U));

		MC2M_TERA_SWVersions0 = (USINT)(USINT)(((USINT)1U));

		MC2M_TERA_SWVersions1 = (USINT)(USINT)(((USINT)2U));

		MC2M_TERA_SWVersions2 = (USINT)(USINT)(((USINT)1U));

		if ( EQ_SINT_2((Cmd_4x4_Buzzer),
			((SINT)1)) ) {
			Cmd_4x4_Buzzer_Ctr1 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr1),
				((SINT)100));
		} else if  ( TRUE ) {
			Cmd_4x4_Buzzer_Ctr1 = (UDINT)((SINT)0);
			Stat_4x4_Buzzer1 = FALSE;
		}

		if ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)1)),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr1),
				((INT)5000))) ) {
			Stat_4x4_Buzzer1 = TRUE;
		} else if  ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)1)),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr1),
				((DINT)65000L))) ) {
			Stat_4x4_Buzzer1 = FALSE;
		} else if  ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)1)),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr1),
				((DINT)65000L))) ) {
			Cmd_4x4_Buzzer_Ctr1 = (UDINT)((SINT)0);
		}

		if ( EQ_SINT_2((Cmd_4x4_Buzzer),
			((SINT)2)) ) {
			Cmd_4x4_Buzzer_Ctr2 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr2),
				((SINT)100));
		} else if  ( TRUE ) {
			Cmd_4x4_Buzzer_Ctr2 = (UDINT)((SINT)0);
			Stat_4x4_Buzzer2 = FALSE;
		}

		if ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)2)),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr2),
				((INT)10000))) ) {
			Stat_4x4_Buzzer2 = TRUE;
		} else if  ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)2)),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr2),
				((DINT)70000L))) ) {
			Stat_4x4_Buzzer2 = FALSE;
		} else if  ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)2)),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr2),
				((DINT)70000L))) ) {
			Cmd_4x4_Buzzer_Ctr2 = (UDINT)((SINT)0);
		}

		if ( EQ_SINT_2((Cmd_4x4_Buzzer),
			((SINT)3)) ) {
			Cmd_4x4_Buzzer_Ctr3 = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr3),
				((SINT)100));
		} else if  ( TRUE ) {
			Cmd_4x4_Buzzer_Ctr3 = (UDINT)((SINT)0);
			Stat_4x4_Buzzer3 = FALSE;
		}

		if ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)3)),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr3),
				((INT)15000))) ) {
			Stat_4x4_Buzzer3 = TRUE;
		} else if  ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)3)),
			LT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr3),
				((DINT)75000L))) ) {
			Stat_4x4_Buzzer3 = FALSE;
		} else if  ( AND_BOOL(EQ_SINT_2((Cmd_4x4_Buzzer),
				((SINT)3)),
			GT_DWORD_2(VT3_ATOMIC_READ_UDINT(Cmd_4x4_Buzzer_Ctr3),
				((DINT)75000L))) ) {
			Cmd_4x4_Buzzer_Ctr3 = (UDINT)((SINT)0);
		}

		if ( EQ_SINT_2((Cmd_4x4_Buzzer),
			((SINT)4)) ) {
			Stat_4x4_Buzzer4 = TRUE;
		} else if  ( TRUE ) {
			Stat_4x4_Buzzer4 = FALSE;
		}

		Stat_4x4_Buzzer = OR_BOOL((Stat_4x4_Buzzer3),
			(Stat_4x4_Buzzer4));

		if ( GT_DWORD_2(VT3_ATOMIC_READ_UDINT(MainLoop),
			((SINT)0)) ) {
			if ( GT_REAL_2(VT3_ATOMIC_READ_UDINT(GIGA_MC2M_GIGAOdometerBackup),
				VT3_ATOMIC_READ_REAL(TotalOdometer)) ) {
				TotalOdometer = (REAL)VT3_ATOMIC_READ_UDINT(GIGA_MC2M_GIGAOdometerBackup);
				save_bytearray_R();
			}
			
			Odometer = (REAL)DIV_REAL(USINT_TO_REAL((MC2M_TERA_VehicleSpeed)),
				36.9);
			TotalOdometer100m = (REAL)ADD_REAL(VT3_ATOMIC_READ_REAL(TotalOdometer100m),
				VT3_ATOMIC_READ_REAL(Odometer));
			if ( GE_REAL_2(VT3_ATOMIC_READ_REAL(TotalOdometer100m),
				((SINT)100)) ) {
				TotalTripMeter = (REAL)ADD_REAL(VT3_ATOMIC_READ_REAL(TotalTripMeter),
					VT3_ATOMIC_READ_REAL(TotalOdometer100m));
				TotalOdometer100m = (REAL)0.0;
			}
			MC2M_TERA_TripCounter = (UDINT)REAL_TO_UDINT(VT3_ATOMIC_READ_REAL(TotalTripMeter));
			TotalOdometer1km = (REAL)ADD_REAL(VT3_ATOMIC_READ_REAL(TotalOdometer1km),
				VT3_ATOMIC_READ_REAL(Odometer));
			if ( GE_REAL_2(VT3_ATOMIC_READ_REAL(TotalOdometer1km),
				((INT)1000)) ) {
				TotalOdometer = (REAL)ADD_REAL(VT3_ATOMIC_READ_REAL(TotalOdometer),
					VT3_ATOMIC_READ_REAL(TotalOdometer1km));
				TotalOdometer1km = (REAL)0.0;
			}
			MC2M_TERA_TotalOdometer = (UDINT)REAL_TO_UDINT(VT3_ATOMIC_READ_REAL(TotalOdometer));
		}

		if ( (GIGA_MC2M_ResetTrip) ) {
			TotalTripMeter = (REAL)0.0;
			save_bytearray_R();
		}

		if ( AND_BOOL(GT_DWORD_2(VT3_ATOMIC_READ_UDINT(MainLoop),
				((SINT)0)),
			EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((SINT)100)),
				((SINT)0))) ) {
			save_bytearray_R();
		}

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

#endif /* INCLUDE__VT3_POU__MAINOTHERFUNCTIONS_C */

/* end of file */
