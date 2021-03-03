/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__LAMPALARM_C
#define INCLUDE__VT3_POU__LAMPALARM_C

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
static const vt3_screen_initializer FAR __init_table__LampAlarm[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__LampAlarm[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const LampAlarm_t FAR __const__LampAlarm__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* i                    */ ((SINT)0),
	/* i2                   */ ((SINT)0),
}; /* end of __const__LampAlarm__param_init */

/* initialization of PROGRAM status */
void LampAlarm__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__LampAlarm; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&LampAlarm, &__const__LampAlarm__param_init, sizeof __const__LampAlarm__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void LampAlarm__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	LampAlarm.ENO = LampAlarm.EN;
	if ( ! LampAlarm.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		LampAlarm.i = (SINT)((SINT)0);

		if ( (MC2M_TERA_Icon_Status_L14_2) ) {
			ActiveAlarm[vt3_check_array_boundary((LampAlarm.i), 100)] = (SINT)((SINT)1);
			LampAlarm.i = (SINT)ADD_SINT((LampAlarm.i),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L14_3) ) {
			ActiveAlarm[vt3_check_array_boundary((LampAlarm.i), 100)] = (SINT)((SINT)2);
			LampAlarm.i = (SINT)ADD_SINT((LampAlarm.i),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L14_5) ) {
			ActiveAlarm[vt3_check_array_boundary((LampAlarm.i), 100)] = (SINT)((SINT)3);
			LampAlarm.i = (SINT)ADD_SINT((LampAlarm.i),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L09) ) {
			ActiveAlarm[vt3_check_array_boundary((LampAlarm.i), 100)] = (SINT)((SINT)4);
			LampAlarm.i = (SINT)ADD_SINT((LampAlarm.i),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L43) ) {
			ActiveAlarm[vt3_check_array_boundary((LampAlarm.i), 100)] = (SINT)((SINT)5);
			LampAlarm.i = (SINT)ADD_SINT((LampAlarm.i),
				((SINT)1));
		}

		if ( (MC2M_TERA_Engine_Brake_Stat) ) {
			ActiveAlarm[vt3_check_array_boundary((LampAlarm.i), 100)] = (SINT)((SINT)6);
			LampAlarm.i = (SINT)ADD_SINT((LampAlarm.i),
				((SINT)1));
		}

		TotalAlarm = (SINT)(LampAlarm.i);

		if ( GT_SINT_2((TotalAlarm),
			((SINT)0)) ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((SINT)20)),
				((SINT)0)) ) {
				indexAlarm = (SINT)MOD_SINT(ADD_SINT((indexAlarm),
						((SINT)1)),
					(TotalAlarm));
				InfoNo5 = (SINT)(ActiveAlarm[vt3_check_array_boundary((indexAlarm), 100)]);
			}
		} else if  ( TRUE ) {
			InfoNo5 = (SINT)((SINT)0);
			indexAlarm = (SINT)((SINT)0);
		}

		LampAlarm.i2 = (SINT)((SINT)0);

		if ( (MC2M_TERA_Icon_Status_L37) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i2), 100)] = (SINT)((SINT)1);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L17) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i2), 100)] = (SINT)((SINT)2);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		if ( (MC2M_TERA_AuxPressureLow_Stat) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i2), 100)] = (SINT)((SINT)3);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L08) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i), 100)] = (SINT)((SINT)4);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		if ( EQ_BYTE_2((MC2M_TERA_DIAG_EngineCoolantLevel),
			((SINT)0)) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i2), 100)] = (SINT)((SINT)5);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		if ( (MC2M_TERA_WaterInFuel_Stat) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i2), 100)] = (SINT)((SINT)6);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L42) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i2), 100)] = (SINT)((SINT)7);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		if ( (MC2M_TERA_Icon_Status_L41) ) {
			ActiveAlarm2[vt3_check_array_boundary((LampAlarm.i2), 100)] = (SINT)((SINT)8);
			LampAlarm.i2 = (SINT)ADD_SINT((LampAlarm.i2),
				((SINT)1));
		}

		TotalAlarm2 = (SINT)(LampAlarm.i2);

		if ( GT_SINT_2((TotalAlarm2),
			((SINT)0)) ) {
			if ( EQ_DWORD_2(MOD_UDINT(VT3_ATOMIC_READ_UDINT(MainLoop),
					((SINT)20)),
				((SINT)0)) ) {
				indexAlarm2 = (SINT)MOD_SINT(ADD_SINT((indexAlarm2),
						((SINT)1)),
					(TotalAlarm2));
				InfoNo6 = (SINT)(ActiveAlarm2[vt3_check_array_boundary((indexAlarm2), 100)]);
			}
		} else if  ( TRUE ) {
			InfoNo6 = (SINT)((SINT)0);
			indexAlarm2 = (SINT)((SINT)0);
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

#endif /* INCLUDE__VT3_POU__LAMPALARM_C */

/* end of file */
