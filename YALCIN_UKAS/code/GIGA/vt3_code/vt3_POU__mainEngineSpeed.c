/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINENGINESPEED_C
#define INCLUDE__VT3_POU__MAINENGINESPEED_C

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
static const vt3_screen_initializer FAR __init_table__mainEngineSpeed[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainEngineSpeed[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainEngineSpeed_t FAR __const__mainEngineSpeed__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainEngineSpeed__param_init */

/* initialization of PROGRAM status */
void mainEngineSpeed__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainEngineSpeed; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainEngineSpeed, &__const__mainEngineSpeed__param_init, sizeof __const__mainEngineSpeed__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainEngineSpeed__call(void)
{
	/* local variables */
	SINT i = ((SINT)0); /*  */
	/* end of local variables */

	/* preamble: conditional execution */
	mainEngineSpeed.ENO = mainEngineSpeed.EN;
	if ( ! mainEngineSpeed.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		TotalEngineSpeedInput = (UDINT)((SINT)0);

		{
			/* for loop */
			const SINT _forstop_288 = SUB_SINT((SINT)(((SINT)2)),
			((SINT)2));
			for ( i = ((SINT)0); i <= _forstop_288; i += 1 )
			{
				EngineSpeedInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)2)),
						((SINT)1)),
					(i)), 100)] = (UINT)(EngineSpeedInputArray[vt3_check_array_boundary(SUB_SINT(SUB_SINT((SINT)(((SINT)2)),
						((SINT)2)),
					(i)), 100)]);
			}
			
		}

		EngineSpeedInputArray[vt3_check_array_boundary(((SINT)0), 100)] = (UINT)(MC2M_TERA_EngineSpeed);

		{
			/* for loop */
			const SINT _forstop_606 = SUB_SINT((SINT)(((SINT)2)),
			((SINT)1));
			for ( i = ((SINT)0); i <= _forstop_606; i += 1 )
			{
				TotalEngineSpeedInput = (UDINT)ADD_UDINT(VT3_ATOMIC_READ_UDINT(TotalEngineSpeedInput),
					(EngineSpeedInputArray[vt3_check_array_boundary((i), 100)]));
			}
			
		}

		EngineSpeed = (UINT)REAL_TO_UINT(DIV_REAL(UDINT_TO_REAL(VT3_ATOMIC_READ_UDINT(TotalEngineSpeedInput)),
				SINT_TO_REAL((SINT)(((SINT)2)))));

		if ( EQ_WORD_2((EngineSpeed),
			((SINT)0)) ) {
			GIGAEngineSpeed = (UINT)INT_TO_UINT((INT)(((INT)45)));
		} else if  ( LE_WORD_2((EngineSpeed),
			((INT)700)) ) {
			GIGAEngineSpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineSpeed)),
					((SINT)0),
					((INT)700),
					(INT)(((INT)45)),
					(INT)(((INT)575))));
		} else if  ( LE_WORD_2((EngineSpeed),
			((INT)1200)) ) {
			GIGAEngineSpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineSpeed)),
					((INT)700),
					((INT)1200),
					(INT)(((INT)575)),
					(INT)(((INT)930))));
		} else if  ( LE_WORD_2((EngineSpeed),
			((INT)2000)) ) {
			GIGAEngineSpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineSpeed)),
					((INT)1200),
					((INT)2000),
					(INT)(((INT)930)),
					(INT)(((INT)1510))));
		} else if  ( LE_WORD_2((EngineSpeed),
			((INT)2600)) ) {
			GIGAEngineSpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineSpeed)),
					((INT)2000),
					((INT)2600),
					(INT)(((INT)1510)),
					(INT)(((INT)1810))));
		} else if  ( TRUE ) {
			GIGAEngineSpeed = (UINT)INT_TO_UINT(Interpolate(UINT_TO_INT((EngineSpeed)),
					((INT)2600),
					((INT)2800),
					(INT)(((INT)1810)),
					ADD_INT((INT)(((INT)1810)),
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

#endif /* INCLUDE__VT3_POU__MAINENGINESPEED_C */

/* end of file */
