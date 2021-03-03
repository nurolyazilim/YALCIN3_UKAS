/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINDIFFLOCK_C
#define INCLUDE__VT3_POU__MAINDIFFLOCK_C

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
static const vt3_screen_initializer FAR __init_table__mainDiffLock[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__mainDiffLock[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const mainDiffLock_t FAR __const__mainDiffLock__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__mainDiffLock__param_init */

/* initialization of PROGRAM status */
void mainDiffLock__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__mainDiffLock; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&mainDiffLock, &__const__mainDiffLock__param_init, sizeof __const__mainDiffLock__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void mainDiffLock__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	mainDiffLock.ENO = mainDiffLock.EN;
	if ( ! mainDiffLock.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		if ( EQ_SINT_2((MC2M_TERA_DIAG_Stat_4x4),
			((SINT)3)) ) {
			L10_Difflock_Dropbox = TRUE;
			L11_Difflock_Front = TRUE;
			L12_Difflock_Rear = TRUE;
		} else if  ( EQ_SINT_2((MC2M_TERA_DIAG_Stat_4x4),
			((SINT)2)) ) {
			L10_Difflock_Dropbox = TRUE;
			L11_Difflock_Front = FALSE;
			L12_Difflock_Rear = TRUE;
		} else if  ( EQ_SINT_2((MC2M_TERA_DIAG_Stat_4x4),
			((SINT)1)) ) {
			L10_Difflock_Dropbox = TRUE;
			L11_Difflock_Front = FALSE;
			L12_Difflock_Rear = FALSE;
		} else if  ( TRUE ) {
			L10_Difflock_Dropbox = FALSE;
			L11_Difflock_Front = FALSE;
			L12_Difflock_Rear = FALSE;
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

#endif /* INCLUDE__VT3_POU__MAINDIFFLOCK_C */

/* end of file */
