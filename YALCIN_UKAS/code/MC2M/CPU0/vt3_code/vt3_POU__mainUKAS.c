/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINUKAS_C
#define INCLUDE__VT3_POU__MAINUKAS_C

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
static const vt3_screen_initializer FAR __init_table__mainUKAS[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainUKAS[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainUKAS_t FAR __const__mainUKAS__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainUKAS__param_init */

/* initialization of PROGRAM status */
void mainUKAS__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainUKAS; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainUKAS, &__const__mainUKAS__param_init, sizeof __const__mainUKAS__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainUKAS__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainUKAS.ENO = mainUKAS.EN;
	if ( ! mainUKAS.EN )
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

		if ( (ASLSN_IKA_TCM_ShiftSelector_Button_D) ) {
			gear = (USINT)((INT)252);
		} else if  ( (ASLSN_IKA_TCM_ShiftSelector_Button_N) ) {
			gear = (USINT)((SINT)125);
		} else if  ( (ASLSN_IKA_TCM_ShiftSelector_Button_R) ) {
			gear = (USINT)((INT)223);
		} else if  ( TRUE ) {
			gear = (USINT)((INT)224);
		}

		TC1_1_TransmissionGearShiftInhbtRq = (INT)(3);

		TC1_1_TrnsmTrqCnvLockupDisableRq = (INT)(3);

		TC1_1_DisengageDrivelineRequest = (INT)(3);

		TC1_1_TrnsmReverseGearShftInhbtRq = (INT)(3);

		TC1_1_RequestedPercentClutchSlip = (USINT)((INT)255);

		TC1_1_TransmissionRequestedGear = (USINT)(gear);

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

		TC1_2_TransmissionRequestedGear = (USINT)(gear);

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

		Cummins_GasPedal = (USINT)(ASLSN_IKA_ECM_Remote_Accelerator);

		if ( (ASLSN_IKA_REM_ECM_Remote_Accelerator_Switch) ) {
			Cummins_GasPedalEnable = (INT)(1);
		} else if  ( TRUE ) {
			Cummins_GasPedalEnable = (INT)(0);
		}

		if ( (ASLSN_IKA_ECM_RemoteCruiseEnable_Switch) ) {
			Cummins_CruiseControlEnableSwitch = (INT)(1);
		} else if  ( TRUE ) {
			Cummins_CruiseControlEnableSwitch = (INT)(0);
		}

		if ( (ASLSN_IKA_ECM_RemoteCruiseSet_Switch) ) {
			Cummins_CruiseControlSetSwitch = (INT)(1);
		} else if  ( TRUE ) {
			Cummins_CruiseControlSetSwitch = (INT)(0);
		}

		if ( (ASLSN_IKA_ECM_RemoteCruiseResume_Switch) ) {
			Cummins_CruiseControlResumeSwitch = (INT)(1);
		} else if  ( TRUE ) {
			Cummins_CruiseControlResumeSwitch = (INT)(0);
		}

		MC2M_MURPHY_ServiceBrakeActivated = (ServiceBrakeActivated);

		RemAcceleratorPedalPosition1 = (USINT)(EEC2_AcceleratorPedalPosition1);

		MC2M_MURPHY_RemAcceleratorPedalPosition1 = (USINT)(EEC2_AcceleratorPedalPosition1);

		if ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(0)) ) {
			CruiseControlStates = (USINT)((SINT)0);
		} else if  ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(1)) ) {
			CruiseControlStates = (USINT)((SINT)1);
		} else if  ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(2)) ) {
			CruiseControlStates = (USINT)((SINT)2);
		} else if  ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(3)) ) {
			CruiseControlStates = (USINT)((SINT)3);
		} else if  ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(4)) ) {
			CruiseControlStates = (USINT)((SINT)4);
		} else if  ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(5)) ) {
			CruiseControlStates = (USINT)((SINT)5);
		} else if  ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(6)) ) {
			CruiseControlStates = (USINT)((SINT)6);
		} else if  ( EQ_INT_2((CCVS_CruiseControlStates),
			(INT)(7)) ) {
			CruiseControlStates = (USINT)((SINT)7);
		}

		MC2M_MURPHY_RemCruiseControlStates = (USINT)(CruiseControlStates);

		CruiseControlSetSpeed = (USINT)(CCVS_CruiseControlSetSpeed);

		MC2M_MURPHY_RemCruiseControlSetSpeed = (USINT)(CruiseControlSetSpeed);

		MC2M_MURPHY_Hour = (SINT)INT_TO_SINT(TOD_TO_HOUR(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)));

		MC2M_MURPHY_Minute = (SINT)INT_TO_SINT(TOD_TO_MINUTE(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)));

		MC2M_MURPHY_Second = (SINT)INT_TO_SINT(TOD_TO_SECOND(VT3_ATOMIC_READ_TIME_OF_DAY(TimeNow)));

		MC2M_MURPHY_EngineSpeed = (UINT)(EEC1_EngineSpeed);

		MC2M_MURPHY_VehicleSpeed = (USINT)(VehicleSpeed);

		MC2M_MURPHY_CurrentGear = (SINT)(CurrentGear);

		MC2M_MURPHY_ParkingBrakeActivated = (DIGIN_HandBrakeActivated);

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

#endif /* INCLUDE__VT3_POU__MAINUKAS_C */

/* end of file */
