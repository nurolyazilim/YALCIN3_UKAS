/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GIGAMENU1_C
#define INCLUDE__VT3_POU__GIGAMENU1_C

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
static const vt3_screen_initializer FAR __init_table__GIGAMenu1[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__GIGAMenu1[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const GIGAMenu1_t FAR __const__GIGAMenu1__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__GIGAMenu1__param_init */

/* initialization of PROGRAM status */
void GIGAMenu1__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__GIGAMenu1; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&GIGAMenu1, &__const__GIGAMenu1__param_init, sizeof __const__GIGAMenu1__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void GIGAMenu1__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	GIGAMenu1.ENO = GIGAMenu1.EN;
	if ( ! GIGAMenu1.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		switch ( (MenuVar) )
		{
		case 0:
			GIGAMenuVar01 = (USINT)((SINT)1);
			GIGAMenuVar02 = (USINT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)0);
			GIGAMenuVar04 = (USINT)((SINT)0);
			GIGAMenuVar05 = (USINT)((SINT)0);
			GIGAMenuVar06 = (USINT)((SINT)0);
			GIGAMenuVar07 = (USINT)((SINT)0);
			GIGAMenuVar08 = (USINT)((SINT)0);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		case 1:
			GIGAMenuVar01 = (USINT)((SINT)0);
			GIGAMenuVar02 = (USINT)((SINT)1);
			GIGAMenuVar03 = (USINT)((SINT)0);
			GIGAMenuVar04 = (USINT)((SINT)0);
			GIGAMenuVar05 = (USINT)((SINT)0);
			GIGAMenuVar06 = (USINT)((SINT)0);
			GIGAMenuVar07 = (USINT)((SINT)0);
			GIGAMenuVar08 = (USINT)((SINT)0);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		case 2:
			GIGAMenuVar01 = (USINT)((SINT)0);
			GIGAMenuVar02 = (USINT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)1);
			GIGAMenuVar04 = (USINT)((SINT)0);
			GIGAMenuVar05 = (USINT)((SINT)0);
			GIGAMenuVar06 = (USINT)((SINT)0);
			GIGAMenuVar07 = (USINT)((SINT)0);
			GIGAMenuVar08 = (USINT)((SINT)0);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		case 3:
			GIGAMenuVar01 = (USINT)((SINT)0);
			GIGAMenuVar02 = (USINT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)0);
			GIGAMenuVar04 = (USINT)((SINT)1);
			GIGAMenuVar05 = (USINT)((SINT)0);
			GIGAMenuVar06 = (USINT)((SINT)0);
			GIGAMenuVar07 = (USINT)((SINT)0);
			GIGAMenuVar08 = (USINT)((SINT)0);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		case 4:
			GIGAMenuVar01 = (USINT)((SINT)0);
			GIGAMenuVar02 = (USINT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)0);
			GIGAMenuVar04 = (USINT)((SINT)0);
			GIGAMenuVar05 = (USINT)((SINT)0);
			GIGAMenuVar06 = (USINT)((SINT)1);
			GIGAMenuVar07 = (USINT)((SINT)0);
			GIGAMenuVar08 = (USINT)((SINT)0);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		case 5:
			GIGAMenuVar01 = (USINT)((SINT)0);
			GIGAMenuVar02 = (USINT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)0);
			GIGAMenuVar04 = (USINT)((SINT)0);
			GIGAMenuVar05 = (USINT)((SINT)0);
			GIGAMenuVar06 = (USINT)((SINT)0);
			GIGAMenuVar07 = (USINT)((SINT)1);
			GIGAMenuVar08 = (USINT)((SINT)0);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		case 6:
			GIGAMenuVar01 = (USINT)((SINT)0);
			GIGAMenuVar02 = (USINT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)0);
			GIGAMenuVar04 = (USINT)((SINT)0);
			GIGAMenuVar05 = (USINT)((SINT)0);
			GIGAMenuVar06 = (USINT)((SINT)0);
			GIGAMenuVar07 = (USINT)((SINT)0);
			GIGAMenuVar08 = (USINT)((SINT)1);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		case 7:
			GIGAMenuVar01 = (USINT)((SINT)0);
			GIGAMenuVar02 = (USINT)((SINT)0);
			GIGAMenuVar03 = (USINT)((SINT)0);
			GIGAMenuVar04 = (USINT)((SINT)0);
			GIGAMenuVar05 = (USINT)((SINT)1);
			GIGAMenuVar06 = (USINT)((SINT)0);
			GIGAMenuVar07 = (USINT)((SINT)0);
			GIGAMenuVar08 = (USINT)((SINT)0);
			GIGAMenuNo = (USINT)(MenuVar);
			break;
		default:
			;
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

#endif /* INCLUDE__VT3_POU__GIGAMENU1_C */

/* end of file */
