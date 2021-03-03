/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__CYCLE_CPP
#define INCLUDE__VT3_POU__CYCLE_CPP

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"



/* initializers of addressed variables */

/* table of initializators of addressed variables */
static const vt3_screen_initializer FAR __init_table__cycle[] = {
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__cycle[] */

/* initializers of in_out parameters */

/* POU constants */
/* end of POU constants */

/* initialize values for POU status */
static const cycle_t FAR __const__cycle__param_init = 
{
	/* EN                   */ TRUE,
	/* ENO                  */ TRUE,
}; /* end of __const__cycle__param_init */

/* initialization of PROGRAM status */
void cycle__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize addressed variables */
	for ( p = __init_table__cycle; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize local data */
	FarMemCopy(&cycle, &__const__cycle__param_init, sizeof __const__cycle__param_init);

	/* initialize function block instances */
}

/* PROGRAM execution */
void cycle__call(void)
{
	/* local variables */
	/* end of local variables */

	/* preamble: conditional execution */
	cycle.ENO = cycle.EN;
	if ( ! cycle.EN )
		return;


	{
		/* literal constants used in ST */
		/* end of literals */

		/* statements */
		main_timer = (UDINT)ADD_UDINT((main_timer),
			((SINT)1));

		if ( EQ_DWORD_2(MOD_UDINT((main_timer),
				((SINT)5)),
			((SINT)0)) ) {
			blink05 = NOT_BOOL((blink05));
		}

		/* end of statements */

		/* POU exit point */
		goto __return__;
	__return__:
		return;

	}


	/* end of PROGRAM body */
}



#endif /* INCLUDE__VT3_POU__CYCLE_CPP */

/* end of file */
