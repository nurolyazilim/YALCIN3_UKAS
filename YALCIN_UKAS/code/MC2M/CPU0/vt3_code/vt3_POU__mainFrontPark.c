/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINFRONTPARK_C
#define INCLUDE__VT3_POU__MAINFRONTPARK_C

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
static const vt3_screen_initializer FAR __init_table__mainFrontPark[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainFrontPark[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainFrontPark_t FAR __const__mainFrontPark__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainFrontPark__param_init */

/* initialization of PROGRAM status */
void mainFrontPark__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainFrontPark; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainFrontPark, &__const__mainFrontPark__param_init, sizeof __const__mainFrontPark__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainFrontPark__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainFrontPark.ENO = mainFrontPark.EN;
	if ( ! mainFrontPark.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( AND_BOOL(AND_BOOL(AND_BOOL(LT_BYTE_2((MC2M_TERA_VehicleSpeed),
						((SINT)10)),
					GT_SINT_2((CurrentGear),
						((SINT)-1))),
				GT_WORD_2((MC2M_TERA_EngineSpeed),
					((SINT)0))),
			(IOMODE_DIGIN15_Park_Sensor_En)) ) {
			MC2M_IOMODE_DOUT02_ParkSensorControl = TRUE;
		} else if  ( TRUE ) {
			MC2M_IOMODE_DOUT02_ParkSensorControl = FALSE;
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

#endif /* INCLUDE__VT3_POU__MAINFRONTPARK_C */

/* end of file */
