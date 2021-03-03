/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINECM_TCM_ABS_DIAG_C
#define INCLUDE__VT3_POU__MAINECM_TCM_ABS_DIAG_C

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
static const vt3_screen_initializer FAR __init_table__mainECM_TCM_ABS_DIAG[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainECM_TCM_ABS_DIAG[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainECM_TCM_ABS_DIAG_t FAR __const__mainECM_TCM_ABS_DIAG__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
	/* i2                   */ ((SINT)0),
}; /* end of __const__mainECM_TCM_ABS_DIAG__param_init */

/* initialization of PROGRAM status */
void mainECM_TCM_ABS_DIAG__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainECM_TCM_ABS_DIAG; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainECM_TCM_ABS_DIAG, &__const__mainECM_TCM_ABS_DIAG__param_init, sizeof __const__mainECM_TCM_ABS_DIAG__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainECM_TCM_ABS_DIAG__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainECM_TCM_ABS_DIAG.ENO = mainECM_TCM_ABS_DIAG.EN;
	if ( ! mainECM_TCM_ABS_DIAG.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		ECM_TotalAlarm = (SINT)UDINT_TO_SINT(VT3_ATOMIC_READ_UDINT(ECM_dtcSpnEngine[vt3_check_array_boundary(((SINT)0), 101)]));

		if ( GT_SINT_2((ECM_TotalAlarm),
			((SINT)0)) ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((SINT)20)),
				((SINT)0)) ) {
				ECM_indexAlarm = (SINT)MOD_SINT(ADD_SINT((ECM_indexAlarm),
						((SINT)1)),
					(ECM_TotalAlarm));
				MC2M_TERA_ECM_SuspectParameterNumber = (UDINT)VT3_ATOMIC_READ_UDINT(ECM_dataMatrix[vt3_check_array_boundary((ECM_indexAlarm), 100)][vt3_check_array_boundary(((SINT)1), 3)]);
				MC2M_TERA_ECM_FailureModeIdentifier = (USINT)UDINT_TO_USINT(VT3_ATOMIC_READ_UDINT(ECM_dataMatrix[vt3_check_array_boundary((ECM_indexAlarm), 100)][vt3_check_array_boundary(((SINT)2), 3)]));
				MC2M_TERA_ECM_OccurrenceCount = (USINT)UDINT_TO_USINT(VT3_ATOMIC_READ_UDINT(ECM_dataMatrix[vt3_check_array_boundary((ECM_indexAlarm), 100)][vt3_check_array_boundary(((SINT)3), 3)]));
			}
		} else if  ( TRUE ) {
			MC2M_TERA_ECM_SuspectParameterNumber = (UDINT)((SINT)0);
			MC2M_TERA_ECM_FailureModeIdentifier = (USINT)((SINT)0);
			MC2M_TERA_ECM_OccurrenceCount = (USINT)((SINT)0);
			ECM_indexAlarm = (SINT)((SINT)0);
		}

		TCM_TotalAlarm = (SINT)UDINT_TO_SINT(VT3_ATOMIC_READ_UDINT(TCM_dtcSpnEngine[vt3_check_array_boundary(((SINT)0), 101)]));

		if ( GT_SINT_2((TCM_TotalAlarm),
			((SINT)0)) ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((SINT)20)),
				((SINT)0)) ) {
				TCM_indexAlarm = (SINT)MOD_SINT(ADD_SINT((TCM_indexAlarm),
						((SINT)1)),
					(TCM_TotalAlarm));
				MC2M_TERA_TCM_SuspectParameterNumber = (UDINT)VT3_ATOMIC_READ_UDINT(TCM_dataMatrix[vt3_check_array_boundary((TCM_indexAlarm), 100)][vt3_check_array_boundary(((SINT)1), 3)]);
				MC2M_TERA_TCM_FailureModeIdentifier = (USINT)UDINT_TO_USINT(VT3_ATOMIC_READ_UDINT(TCM_dataMatrix[vt3_check_array_boundary((TCM_indexAlarm), 100)][vt3_check_array_boundary(((SINT)2), 3)]));
				MC2M_TERA_TCM_OccurrenceCount = (USINT)UDINT_TO_USINT(VT3_ATOMIC_READ_UDINT(TCM_dataMatrix[vt3_check_array_boundary((TCM_indexAlarm), 100)][vt3_check_array_boundary(((SINT)3), 3)]));
			}
		} else if  ( TRUE ) {
			MC2M_TERA_TCM_SuspectParameterNumber = (UDINT)((SINT)0);
			MC2M_TERA_TCM_FailureModeIdentifier = (USINT)((SINT)0);
			MC2M_TERA_TCM_OccurrenceCount = (USINT)((SINT)0);
			TCM_indexAlarm = (SINT)((SINT)0);
		}

		EBS_TotalAlarm = (SINT)UDINT_TO_SINT(VT3_ATOMIC_READ_UDINT(EBS_dtcSpnEngine[vt3_check_array_boundary(((SINT)0), 101)]));

		if ( GT_SINT_2((EBS_TotalAlarm),
			((SINT)0)) ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((SINT)20)),
				((SINT)0)) ) {
				EBS_indexAlarm = (SINT)MOD_SINT(ADD_SINT((EBS_indexAlarm),
						((SINT)1)),
					(EBS_TotalAlarm));
				MC2M_TERA_EBS_SuspectParameterNumber = (UDINT)VT3_ATOMIC_READ_UDINT(EBS_dataMatrix[vt3_check_array_boundary((EBS_indexAlarm), 100)][vt3_check_array_boundary(((SINT)1), 3)]);
				MC2M_TERA_EBS_FailureModeIdentifier = (USINT)UDINT_TO_USINT(VT3_ATOMIC_READ_UDINT(EBS_dataMatrix[vt3_check_array_boundary((EBS_indexAlarm), 100)][vt3_check_array_boundary(((SINT)2), 3)]));
				MC2M_TERA_EBS_OccurrenceCount = (USINT)UDINT_TO_USINT(VT3_ATOMIC_READ_UDINT(EBS_dataMatrix[vt3_check_array_boundary((EBS_indexAlarm), 100)][vt3_check_array_boundary(((SINT)3), 3)]));
			}
		} else if  ( TRUE ) {
			MC2M_TERA_EBS_SuspectParameterNumber = (UDINT)((SINT)0);
			MC2M_TERA_EBS_FailureModeIdentifier = (USINT)((SINT)0);
			MC2M_TERA_EBS_OccurrenceCount = (USINT)((SINT)0);
			EBS_indexAlarm = (SINT)((SINT)0);
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

#endif /* INCLUDE__VT3_POU__MAINECM_TCM_ABS_DIAG_C */

/* end of file */
