/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_C
#define INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_C

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
static const vt3_screen_initializer FAR __init_table__mainEngineTempGauge[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainEngineTempGauge[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainEngineTempGauge_t FAR __const__mainEngineTempGauge__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainEngineTempGauge__param_init */

/* initialization of PROGRAM status */
void mainEngineTempGauge__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainEngineTempGauge; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainEngineTempGauge, &__const__mainEngineTempGauge__param_init, sizeof __const__mainEngineTempGauge__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainEngineTempGauge__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	mainEngineTempGauge.ENO = mainEngineTempGauge.EN;
	if ( ! mainEngineTempGauge.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalEngineTempGaugeInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_150 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_150; i += 1 )
			{
				EngineTempGaugeInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)1)),
					(i)), 100)] = (UINT)(EngineTempGaugeInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)20)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		EngineTempGaugeInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_EngineTempValue);

		{
			/* for loop */
			const SINT _forstop_496 = SUB_SINT((SINT)(((SINT)20)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_496; i += 1 )
			{
				TotalEngineTempGaugeInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalEngineTempGaugeInput),
					(EngineTempGaugeInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		EngineTempGauge = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalEngineTempGaugeInput)),
				SINT_TO_REAL((SINT)(((SINT)20)))));

		if ( LT_WORD_2((EngineTempGauge),
			((SINT)50)) ) {
			GIGAEngineTempValue = (UINT)INT_TO_UINT((INT)(((INT)20)));
		} else if  ( LE_WORD_2((EngineTempGauge),
			((SINT)90)) ) {
			GIGAEngineTempValue = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineTempGauge)),
					((SINT)50),
					((SINT)90),
					(INT)(((INT)20)),
					(INT)(((INT)625))));
		} else if  ( LE_WORD_2((EngineTempGauge),
			((INT)140)) ) {
			GIGAEngineTempValue = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineTempGauge)),
					((SINT)90),
					((INT)130),
					(INT)(((INT)625)),
					(INT)(((INT)1220))));
		} else if  ( TRUE ) {
			GIGAEngineTempValue = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineTempGauge)),
					((INT)130),
					((INT)150),
					(INT)(((INT)1220)),
					ADD_INT((INT)(((INT)1220)),
						((INT)200))));
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

#endif /* INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_C */

/* end of file */
