/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__GLOBAL_DATA_CPP
#define INCLUDE__VT3_POU__GLOBAL_DATA_CPP

#include "vt3_base.h"
#include "vt3_POU_common.h"
#include "vt3_extra.h"



/* initializers of global variables */
static const BOOL FAR __init_value__page1_selected = TRUE;
static const USINT FAR __init_value__page2_currentValue = ((USINT)1U);
static const USINT FAR __init_value__page3_currentValue = ((USINT)1U);
static const USINT FAR __init_value__page4_currentValue = ((USINT)1U);

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__global_data[] = {
	{ &page1_selected, &__init_value__page1_selected, 1 },
	{ &page2_currentValue, &__init_value__page2_currentValue, 1 },
	{ &page3_currentValue, &__init_value__page3_currentValue, 1 },
	{ &page4_currentValue, &__init_value__page4_currentValue, 1 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__global_data[] */

/* initialization of global data block */
void global_data__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__global_data; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
}



#endif /* INCLUDE__VT3_POU__GLOBAL_DATA_CPP */

/* end of file */
