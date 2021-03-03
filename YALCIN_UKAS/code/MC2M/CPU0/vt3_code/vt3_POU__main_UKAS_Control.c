/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAIN_UKAS_CONTROL_C
#define INCLUDE__VT3_POU__MAIN_UKAS_CONTROL_C

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
static const vt3_screen_initializer FAR __init_table__main_UKAS_Control[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__main_UKAS_Control[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const main_UKAS_Control_t FAR __const__main_UKAS_Control__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__main_UKAS_Control__param_init */

/* initialization of PROGRAM status */
void main_UKAS_Control__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__main_UKAS_Control; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&main_UKAS_Control, &__const__main_UKAS_Control__param_init, sizeof __const__main_UKAS_Control__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void main_UKAS_Control__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	main_UKAS_Control.ENO = main_UKAS_Control.EN;
	if ( ! main_UKAS_Control.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( EQ_INT_2((ETC7_ActiveShiftConsoleIndicator),
			(INT)(0)) ) {
			vt3_can_period_TC1_SHIFT_SELECTOR1 = (UINT)((SINT)50);
			vt3_can_period_TC1_SHIFT_SELECTOR2 = (UINT)((INT)500);
		} else if  ( EQ_INT_2((ETC7_ActiveShiftConsoleIndicator),
			(INT)(1)) ) {
			vt3_can_period_TC1_SHIFT_SELECTOR1 = (UINT)((INT)500);
			vt3_can_period_TC1_SHIFT_SELECTOR2 = (UINT)((SINT)50);
		}

		if ( (UKAS_TCM_ShiftSelector_Button_D) ) {
			gear_selected = (USINT)((INT)252);
		} else if  ( (UKAS_TCM_ShiftSelector_Button_N) ) {
			gear_selected = (USINT)((SINT)125);
		} else if  ( (UKAS_TCM_ShiftSelector_Button_R) ) {
			gear_selected = (USINT)((INT)223);
		} else if  ( TRUE ) {
			gear_selected = (USINT)((INT)224);
		}

		TC1_1_TransmissionGearShiftInhbtRq = (INT)(3);

		TC1_1_TrnsmTrqCnvLockupDisableRq = (INT)(3);

		TC1_1_DisengageDrivelineRequest = (INT)(3);

		TC1_1_TrnsmReverseGearShftInhbtRq = (INT)(3);

		TC1_1_RequestedPercentClutchSlip = (USINT)((INT)255);

		TC1_1_TransmissionRequestedGear = (USINT)(gear_selected);

		TC1_1_DisengiffLockRequestFrontAxl1 = (INT)(3);

		TC1_1_DisengiffLockRequestFrontAxl2 = (INT)(3);

		TC1_1_DisengageDiffLockRequestRearAxl1 = (INT)(3);

		TC1_1_DisengageDiffLockRequestRearAxl2 = (INT)(3);

		TC1_1_DisengageDiffLockRequestCentral = (INT)(3);

		TC1_1_DisengiffLockRequestCentralFront = (INT)(3);

		TC1_1_DisengiffLockRequestCentralRear = (INT)(3);

		TC1_1_TransmissionMode1 = (INT)(3);

		TC1_1_TransmissionMode2 = (INT)(3);

		TC1_1_TransmissionMode3 = (INT)(3);

		TC1_1_TransmissionMode4 = (INT)(0);

		TC1_1_TransmissionRequestedLaunchGear = (INT)(15);

		TC1_1_TrnsmShftSlctorDisplayMdeSw = (INT)(3);

		TC1_1_TransmissionMode5 = (INT)(3);

		TC1_1_TransmissionMode6 = (INT)(3);

		TC1_1_TransmissionMode7 = (INT)(3);

		TC1_1_TransmissionMode8 = (INT)(3);

		TC1_1_TransmissionRequestedLaunchGear_res = (INT)(3);

		TC1_2_TransmissionGearShiftInhbtRq = (INT)(3);

		TC1_2_TrnsmTrqCnvLockupDisableRq = (INT)(3);

		TC1_2_DisengageDrivelineRequest = (INT)(3);

		TC1_2_TrnsmReverseGearShftInhbtRq = (INT)(3);

		TC1_2_RequestedPercentClutchSlip = (USINT)((INT)255);

		TC1_2_TransmissionRequestedGear = (USINT)(gear_selected);

		TC1_2_DisengiffLockRequestFrontAxl1 = (INT)(3);

		TC1_2_DisengiffLockRequestFrontAxl2 = (INT)(3);

		TC1_2_DisengageDiffLockRequestRearAxl1 = (INT)(3);

		TC1_2_DisengageDiffLockRequestRearAxl2 = (INT)(3);

		TC1_2_DisengageDiffLockRequestCentral = (INT)(3);

		TC1_2_DisengiffLockRequestCentralFront = (INT)(3);

		TC1_2_DisengiffLockRequestCentralRear = (INT)(3);

		TC1_2_TransmissionMode1 = (INT)(3);

		TC1_2_TransmissionMode2 = (INT)(3);

		TC1_2_TransmissionMode3 = (INT)(3);

		TC1_2_TransmissionMode4 = (INT)(0);

		TC1_2_TransmissionRequestedLaunchGear = (INT)(15);

		TC1_2_TrnsmShftSlctorDisplayMdeSw = (INT)(3);

		TC1_2_TransmissionMode5 = (INT)(3);

		TC1_2_TransmissionMode6 = (INT)(3);

		TC1_2_TransmissionMode7 = (INT)(3);

		TC1_2_TransmissionMode8 = (INT)(3);

		TC1_2_TransmissionRequestedLaunchGear_res = (INT)(3);

		EEC2_GasPedal = (USINT)(UKAS_ECM_Remote_Accelerator);

		if ( (MURPHY_MC2M_ECM_Remote_Accelerator_Switch) ) {
			EBC1_GasPedalEnable = (INT)(1);
		} else if  ( TRUE ) {
			EBC1_GasPedalEnable = (INT)(0);
		}

		MC2M_MURPHY_ServiceBrakeActivated = (ServiceBrakeActivated);

		RemoteAcceleratorPedalPosition1 = (USINT)(EEC2_AcceleratorPedalPosition1);

		MC2M_MURPHY_RemoteAcceleratorPedalPosition1 = (USINT)(EEC2_AcceleratorPedalPosition1);

		MC2M_MURPHY_Hour = (SINT)INT_TO_SINT(TOD_TO_HOUR(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)));

		MC2M_MURPHY_Minute = (SINT)INT_TO_SINT(TOD_TO_MINUTE(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)));

		MC2M_MURPHY_Second = (SINT)INT_TO_SINT(TOD_TO_SECOND(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)));

		MC2M_MURPHY_EngineSpeed = (UINT)(EEC1_EngineSpeed);

		MC2M_MURPHY_VehicleSpeed = (USINT)(VehicleSpeed);

		if ( EQ_SINT_2((CurrentGear),
			((SINT)-1)) ) {
			MC2M_MURPHY_CurrentGear = (SINT)((SINT)8);
		} else if  ( TRUE ) {
			MC2M_MURPHY_CurrentGear = (SINT)ADD_SINT((CurrentGear),
				((SINT)1));
		}

		MC2M_MURPHY_FuelLevel_1 = (SINT)(FuelLevel_Normalized_TR_TL);

		MC2M_MURPHY_EngineTempValue = (USINT)(EngineTempValue);

		MC2M_MURPHY_BatteryLevel = (UINT)(BatteryLevel);

		MC2M_MURPHY_EngineOilPressure = (USINT)(EngineOilPressure);

		MC2M_MURPHY_ParkingBrakePressure = (USINT)(MC2M_TERA_ParkingBrakePressure);

		MC2M_MURPHY_ServiceBrake1 = (USINT)(MC2M_TERA_ServiceBrake1);

		MC2M_MURPHY_ServiceBrake2 = (USINT)(MC2M_TERA_ServiceBrake2);

		MC2M_MURPHY_AccessoryPressure = (USINT)(MC2M_TERA_AccessoryPressure);

		MC2M_MURPHY_TransOilTemperature = (USINT)(MC2M_TERA_TransOilTemperature);

		MC2M_MURPHY_ParkingBrakeActivated = (DIGIN_HandBrakeActivated);

		MC2M_MURPHY_TCM_SuspectParameterNumber = (UDINT)VT3_ATOMIC_READ_UDINT(MC2M_TERA_TCM_SuspectParameterNumber);

		MC2M_MURPHY_ECM_SuspectParameterNumber = (UDINT)VT3_ATOMIC_READ_UDINT(MC2M_TERA_ECM_SuspectParameterNumber);

		MC2M_MURPHY_EBS_SuspectParameterNumber = (UDINT)VT3_ATOMIC_READ_UDINT(MC2M_TERA_EBS_SuspectParameterNumber);

		MC2M_MURPHY_TCM_FailureModeIdentifier = (USINT)(MC2M_TERA_TCM_FailureModeIdentifier);

		MC2M_MURPHY_ECM_FailureModeIdentifier = (USINT)(MC2M_TERA_ECM_FailureModeIdentifier);

		MC2M_MURPHY_EBS_FailureModeIdentifier = (USINT)(MC2M_TERA_EBS_FailureModeIdentifier);

		MC2M_MURPHY_TCM_OccurrenceCount = (USINT)(MC2M_TERA_TCM_OccurrenceCount);

		MC2M_MURPHY_ECM_OccurrenceCount = (USINT)(MC2M_TERA_ECM_OccurrenceCount);

		MC2M_MURPHY_EBS_OccurrenceCount = (USINT)(MC2M_TERA_EBS_OccurrenceCount);

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

#endif /* INCLUDE__VT3_POU__MAIN_UKAS_CONTROL_C */

/* end of file */
