/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINVVR_C
#define INCLUDE__VT3_POU__MAINVVR_C

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
static const vt3_screen_initializer FAR __init_table__mainVVR[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainVVR[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainVVR_t FAR __const__mainVVR__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
	/* coolant              */ ((SINT)0),
	/* manifold             */ ((SINT)0),
	/* vvr_temp             */ ((INT)0),
	/* vvr_pres             */ ((INT)0),
	/* vvr_oillevel         */ ((SINT)0),
	/* vvr_oilfilter        */ ((SINT)0),
	/* vvr_pump             */ ((UINT)0U),
	/* vvr_raw_temp         */ ((UINT)0U),
	/* vvr_raw_pres         */ ((UINT)0U),
	/* coolant_calculated   */ ((INT)0),
	/* manifold_calculated  */ ((INT)0),
	/* testvar              */ ((UINT)0U),
	/* vvr_temp_calculated  */ ((INT)0),
	/* vvr_pump_interpolated */ ((INT)0),
	/* pump_trigger         */ ((SINT)0),
	/* vvrtestvar           */ ((UINT)0U),
}; /* end of __const__mainVVR__param_init */

/* initialization of PROGRAM status */
void mainVVR__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainVVR; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainVVR, &__const__mainVVR__param_init, sizeof __const__mainVVR__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainVVR__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainVVR.ENO = mainVVR.EN;
	if ( ! mainVVR.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		mainVVR.coolant = (SINT)(ET1_EngineCoolantTemperature);

		mainVVR.manifold = (SINT)(IC1_EngineIntakeManifold1Temperature);

		mainVVR.vvr_oilfilter = (SINT)(DIGIN_VVR_OilFilter);

		mainVVR.vvr_oillevel = (SINT)(DIGIN_VVR_OilLevel);

		mainVVR.vvr_raw_temp = (UINT)(AIN_VVR_Temperature);

		mainVVR.vvr_temp = (INT)(HTempLevel_Normalized);

		mainVVR.vvr_raw_pres = (UINT)(AIN_VVR_Pressure);

		mainVVR.vvr_pres = (INT)(PresLevel_Normalized);

		if ( OR_BOOL(OR_BOOL(GT_SINT_2((mainVVR.coolant),
					((SINT)99)),
				GT_SINT_2((mainVVR.manifold),
					((SINT)72))),
			GT_INT_2((mainVVR.vvr_temp),
				((SINT)79))) ) {
			mainVVR.vvr_pump = (UINT)((SINT)0);
		} else if  ( TRUE ) {
			if ( AND_BOOL(GT_SINT_2((mainVVR.coolant),
					((SINT)87)),
				LE_SINT_2((mainVVR.coolant),
					((SINT)99))) ) {
				mainVVR.coolant_calculated = (INT)Interpolate(SINT_TO_INT((mainVVR.coolant)),
					((SINT)87),
					((SINT)99),
					((INT)4250),
					((SINT)0));
			} else if  ( TRUE ) {
				mainVVR.coolant_calculated = (INT)((INT)4250);
			}
			if ( AND_BOOL(GT_SINT_2((mainVVR.manifold),
					((SINT)60)),
				LE_SINT_2((mainVVR.manifold),
					((SINT)72))) ) {
				mainVVR.manifold_calculated = (INT)Interpolate(SINT_TO_INT((mainVVR.manifold)),
					((SINT)60),
					((SINT)72),
					((INT)4250),
					((SINT)0));
			} else if  ( TRUE ) {
				mainVVR.manifold_calculated = (INT)((INT)4250);
			}
			if ( AND_BOOL(GT_INT_2((mainVVR.vvr_temp),
					((SINT)67)),
				LE_INT_2((mainVVR.vvr_temp),
					((SINT)79))) ) {
				mainVVR.vvr_temp_calculated = (INT)Interpolate((mainVVR.vvr_temp),
					((SINT)67),
					((SINT)79),
					((INT)4250),
					((SINT)0));
			} else if  ( TRUE ) {
				mainVVR.vvr_temp_calculated = (INT)((INT)4250);
			}
			if ( AND_BOOL(AND_BOOL(EQ_INT_2((mainVVR.coolant_calculated),
						((INT)4250)),
					EQ_INT_2((mainVVR.manifold_calculated),
						((INT)4250))),
				EQ_INT_2((mainVVR.vvr_temp_calculated),
					((INT)4250))) ) {
				mainVVR.vvr_pump = (UINT)((INT)4250);
				mainVVR.pump_trigger = (SINT)((SINT)0);
			}
			if ( OR_BOOL(OR_BOOL(NE_INT((mainVVR.coolant_calculated),
						((INT)4250)),
					NE_INT((mainVVR.manifold_calculated),
						((INT)4250))),
				NE_INT((mainVVR.vvr_temp_calculated),
					((INT)4250))) ) {
				if ( LE_INT_2((mainVVR.coolant_calculated),
					(mainVVR.manifold_calculated)) ) {
					if ( LE_INT_2((mainVVR.vvr_temp_calculated),
						(mainVVR.coolant_calculated)) ) {
						mainVVR.vvr_pump = (UINT)INT_TO_UINT((mainVVR.vvr_temp_calculated));
						mainVVR.pump_trigger = (SINT)((SINT)1);
					} else if  ( TRUE ) {
						mainVVR.vvr_pump = (UINT)INT_TO_UINT((mainVVR.coolant_calculated));
						mainVVR.pump_trigger = (SINT)((SINT)2);
					}
				} else if  ( LE_INT_2((mainVVR.manifold_calculated),
					(mainVVR.coolant_calculated)) ) {
					if ( LE_INT_2((mainVVR.vvr_temp_calculated),
						(mainVVR.manifold_calculated)) ) {
						mainVVR.vvr_pump = (UINT)INT_TO_UINT((mainVVR.vvr_temp_calculated));
						mainVVR.pump_trigger = (SINT)((SINT)1);
					} else if  ( TRUE ) {
						mainVVR.vvr_pump = (UINT)INT_TO_UINT((mainVVR.manifold_calculated));
						mainVVR.pump_trigger = (SINT)((SINT)3);
					}
				} else if  ( LE_INT_2((mainVVR.coolant_calculated),
					(mainVVR.vvr_temp_calculated)) ) {
					if ( LE_INT_2((mainVVR.manifold_calculated),
						(mainVVR.coolant_calculated)) ) {
						mainVVR.vvr_pump = (UINT)INT_TO_UINT((mainVVR.manifold_calculated));
						mainVVR.pump_trigger = (SINT)((SINT)3);
					} else if  ( TRUE ) {
						mainVVR.vvr_pump = (UINT)INT_TO_UINT((mainVVR.coolant_calculated));
						mainVVR.pump_trigger = (SINT)((SINT)2);
					}
				}
			}
		}

		if ( GT_WORD_2((mainVVR.vvr_pump),
			((INT)4250)) ) {
			PWMOUT_VVR_Pump = (UINT)((INT)4250);
		} else if  ( TRUE ) {
			PWMOUT_VVR_Pump = (UINT)(mainVVR.vvr_pump);
		}

		mainVVR.vvr_pump_interpolated = (INT)Interpolate(UINT_TO_INT((PWMOUT_VVR_Pump)),
			((INT)4250),
			((SINT)0),
			((SINT)25),
			((SINT)100));

		

		MC2M_TERA_DIAG_VvrPump = (INT)(mainVVR.vvr_pump_interpolated);

		MC2M_TERA_DIAG_VVRPumpTrigger = (SINT)(mainVVR.pump_trigger);

		MC2M_TERA_DIAG_CACTemp = (INT)(mainVVR.manifold);

		MC2M_TERA_RadiatorTemp = (INT)(mainVVR.coolant);

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

#endif /* INCLUDE__VT3_POU__MAINVVR_C */

/* end of file */
