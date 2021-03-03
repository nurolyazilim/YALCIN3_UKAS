/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MSGRCVRUKAS_C
#define INCLUDE__VT3_POU__MSGRCVRUKAS_C

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
static const vt3_screen_initializer FAR __init_table__msgRcvrUKAS[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__msgRcvrUKAS[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const msgRcvrUKAS_t FAR __const__msgRcvrUKAS__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__msgRcvrUKAS__param_init */

/* initialization of PROGRAM status */
void msgRcvrUKAS__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__msgRcvrUKAS; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&msgRcvrUKAS, &__const__msgRcvrUKAS__param_init, sizeof __const__msgRcvrUKAS__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void msgRcvrUKAS__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	msgRcvrUKAS.ENO = msgRcvrUKAS.EN;
	if ( ! msgRcvrUKAS.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( NOT_BOOL((vt3_can_alarm_CAN_188_3)) ) {
			ASLSN_IKA_ECM_Remote_Accelerator_Switch = (ASLSN_IKA_REM_ECM_Remote_Accelerator_Switch);
			ASLSN_IKA_ECM_Remote_Accelerator = (USINT)(ASLSN_IKA_REM_ECM_Remote_Accelerator);
			ASLSN_IKA_TCM_ShiftSelector_Button_R = (ASLSN_IKA_REM_TCM_ShiftSelector_Button_R);
			ASLSN_IKA_TCM_ShiftSelector_Button_N = (ASLSN_IKA_REM_TCM_ShiftSelector_Button_N);
			ASLSN_IKA_TCM_ShiftSelector_Button_D = (ASLSN_IKA_REM_TCM_ShiftSelector_Button_D);
		} else if  ( TRUE ) {
			ASLSN_IKA_WiperLOW = (OMNIA_RIGHT_WiperLOW);
			ASLSN_IKA_WiperHIGH = (OMNIA_RIGHT_WiperHIGH);
			ASLSN_IKA_WiperSelection = (OMNIA_RIGHT_WiperSelection);
			ASLSN_IKA_Washer = (OMNIA_RIGHT_Washer);
			ASLSN_IKA_Horn_switch_On = (USINT)(Horn_Switch_On);
			ASLSN_IKA_Light_P1_Park = (OMNIA_LEFT_Light_P1_Park);
			ASLSN_IKA_LowBeamStatus = (OMNIA_LEFT_LowBeamStatus);
			ASLSN_IKA_LowBeam2Status = (OMNIA_LEFT_LowBeam2Status);
			ASLSN_IKA_TurnLeftSignal = (OMNIA_LEFT_TurnLeftSignal);
			ASLSN_IKA_TurnRightSignal = (OMNIA_LEFT_TurnRightSignal);
			ASLSN_IKA_HighBeamStatus = (OMNIA_LEFT_HighBeamStatus);
			ASLSN_IKA_HighBeamFlashStatus = (OMNIA_LEFT_HighBeamFlashStatus);
			ASLSN_IKA_DIGIN19_InteriorLamps = (IOMODE_2_DIGIN19_InteriorLamps);
			ASLSN_IKA_DIGIN25_InteriorVentilation_1 = (IOMODE_2_DIGIN25_InteriorVentilation_1);
			ASLSN_IKA_DIGIN26_InteriorVentilation_2 = (IOMODE_2_DIGIN26_InteriorVentilation_2);
			ASLSN_IKA_DIGIN07_EngineProtection = (IOMODE_DIGIN07_EngineProtection);
			ASLSN_IKA_DIGIN12_DropBoxHigh = (IOMODE_DIGIN12_DropBoxHigh);
			ASLSN_IKA_DIGIN14_DropBoxLow = (IOMODE_DIGIN14_DropBoxLow);
			ASLSN_IKA_DIGIN18_MirrorWindowResistance = (IOMODE_DIGIN18_MirrorWindowResistance);
			ASLSN_IKA_DIGIN22_DropBoxNeutral = (IOMODE_DIGIN22_DopBoxNeutral);
			ASLSN_IKA_DIGIN25_ABSoffRoad = (IOMODE_DIGIN25_ABSoffRoad);
			ASLSN_IKA_DIGIN26_RearFog = (IOMODE_DIGIN26_RearFog);
			ASLSN_IKA_DIGIN27_DiffLock = (IOMODE_DIGIN27_DiffLock);
			ASLSN_IKA_DIGIN30_FrontFog = (IOMODE_DIGIN30_FrontFog);
			ASLSN_IKA_ECM_Remote_Accelerator_Switch = FALSE;
			ASLSN_IKA_ECM_Remote_Accelerator = (USINT)((SINT)0);
			ASLSN_IKA_TCM_ShiftSelector_Button_R = FALSE;
			ASLSN_IKA_TCM_ShiftSelector_Button_N = FALSE;
			ASLSN_IKA_TCM_ShiftSelector_Button_D = FALSE;
			ASLSN_IKA_ECM_RemoteCruiseEnable_Switch = FALSE;
			ASLSN_IKA_ECM_RemoteCruiseSet_Switch = FALSE;
			ASLSN_IKA_ECM_RemoteCruiseResume_Switch = FALSE;
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

#endif /* INCLUDE__VT3_POU__MSGRCVRUKAS_C */

/* end of file */
