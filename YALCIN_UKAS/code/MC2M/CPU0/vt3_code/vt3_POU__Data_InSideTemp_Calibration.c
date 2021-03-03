/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DATA_INSIDETEMP_CALIBRATION_C
#define INCLUDE__VT3_POU__DATA_INSIDETEMP_CALIBRATION_C

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

/* initializers of global variables */
static const INT FAR __init_value__TemLevel13_ANALOG_2 = ((INT)1481);
static const INT FAR __init_value__TemLevel13_2 = ((INT)45);
static const INT FAR __init_value__TemLevel14_ANALOG_2 = ((INT)1555);
static const INT FAR __init_value__TemLevel14_2 = ((INT)40);
static const INT FAR __init_value__TemLevel15_ANALOG_2 = ((INT)1625);
static const INT FAR __init_value__TemLevel15_2 = ((INT)35);
static const INT FAR __init_value__TemLevel16_ANALOG_2 = ((INT)1690);
static const INT FAR __init_value__TemLevel16_2 = ((INT)30);
static const INT FAR __init_value__TemLevel17_ANALOG_2 = ((INT)1750);
static const INT FAR __init_value__TemLevel17_2 = ((INT)25);
static const INT FAR __init_value__TemLevel18_ANALOG_2 = ((INT)1805);
static const INT FAR __init_value__TemLevel18_2 = ((INT)20);
static const INT FAR __init_value__TemLevel19_ANALOG_2 = ((INT)1854);
static const INT FAR __init_value__TemLevel19_2 = ((INT)15);
static const INT FAR __init_value__TemLevel20_ANALOG_2 = ((INT)1898);
static const INT FAR __init_value__TemLevel20_2 = ((INT)10);
static const INT FAR __init_value__TemLevel21_ANALOG_2 = ((INT)1936);
static const INT FAR __init_value__TemLevel21_2 = ((INT)5);
static const INT FAR __init_value__TemLevel22_ANALOG_2 = ((INT)1969);
static const INT FAR __init_value__TemLevel23_ANALOG_2 = ((INT)1997);
static const INT FAR __init_value__TemLevel23_2 = ((INT)-5);
static const INT FAR __init_value__TemLevel24_ANALOG_2 = ((INT)2021);
static const INT FAR __init_value__TemLevel24_2 = ((INT)-10);
static const INT FAR __init_value__TemLevel25_ANALOG_2 = ((INT)2041);
static const INT FAR __init_value__TemLevel25_2 = ((INT)-15);
static const INT FAR __init_value__TemLevel26_ANALOG_2 = ((INT)2058);
static const INT FAR __init_value__TemLevel26_2 = ((INT)-20);
static const INT FAR __init_value__TemLevel27_ANALOG_2 = ((INT)2072);
static const INT FAR __init_value__TemLevel27_2 = ((INT)-25);
static const INT FAR __init_value__TemLevel28_ANALOG_2 = ((INT)2083);
static const INT FAR __init_value__TemLevel28_2 = ((INT)-30);
static const INT FAR __init_value__TemLevel29_ANALOG_2 = ((INT)2091);
static const INT FAR __init_value__TemLevel29_2 = ((INT)-35);
static const INT FAR __init_value__TemLevel30_ANALOG_2 = ((INT)2099);
static const INT FAR __init_value__TemLevel30_2 = ((INT)-40);
static const INT FAR __init_value__TemLevel31_ANALOG_2 = ((INT)2104);
static const INT FAR __init_value__TemLevel31_2 = ((INT)-45);
static const INT FAR __init_value__TemLevel32_ANALOG_2 = ((INT)2109);
static const INT FAR __init_value__TemLevel32_2 = ((INT)-50);

/* table of initializators of global data block */
static const vt3_screen_initializer FAR __init_table__Data_InSideTemp_Calibration[] = {
	{ &TemLevel13_ANALOG_2, &__init_value__TemLevel13_ANALOG_2, 2 },
	{ &TemLevel13_2, &__init_value__TemLevel13_2, 2 },
	{ &TemLevel14_ANALOG_2, &__init_value__TemLevel14_ANALOG_2, 2 },
	{ &TemLevel14_2, &__init_value__TemLevel14_2, 2 },
	{ &TemLevel15_ANALOG_2, &__init_value__TemLevel15_ANALOG_2, 2 },
	{ &TemLevel15_2, &__init_value__TemLevel15_2, 2 },
	{ &TemLevel16_ANALOG_2, &__init_value__TemLevel16_ANALOG_2, 2 },
	{ &TemLevel16_2, &__init_value__TemLevel16_2, 2 },
	{ &TemLevel17_ANALOG_2, &__init_value__TemLevel17_ANALOG_2, 2 },
	{ &TemLevel17_2, &__init_value__TemLevel17_2, 2 },
	{ &TemLevel18_ANALOG_2, &__init_value__TemLevel18_ANALOG_2, 2 },
	{ &TemLevel18_2, &__init_value__TemLevel18_2, 2 },
	{ &TemLevel19_ANALOG_2, &__init_value__TemLevel19_ANALOG_2, 2 },
	{ &TemLevel19_2, &__init_value__TemLevel19_2, 2 },
	{ &TemLevel20_ANALOG_2, &__init_value__TemLevel20_ANALOG_2, 2 },
	{ &TemLevel20_2, &__init_value__TemLevel20_2, 2 },
	{ &TemLevel21_ANALOG_2, &__init_value__TemLevel21_ANALOG_2, 2 },
	{ &TemLevel21_2, &__init_value__TemLevel21_2, 2 },
	{ &TemLevel22_ANALOG_2, &__init_value__TemLevel22_ANALOG_2, 2 },
	{ &TemLevel23_ANALOG_2, &__init_value__TemLevel23_ANALOG_2, 2 },
	{ &TemLevel23_2, &__init_value__TemLevel23_2, 2 },
	{ &TemLevel24_ANALOG_2, &__init_value__TemLevel24_ANALOG_2, 2 },
	{ &TemLevel24_2, &__init_value__TemLevel24_2, 2 },
	{ &TemLevel25_ANALOG_2, &__init_value__TemLevel25_ANALOG_2, 2 },
	{ &TemLevel25_2, &__init_value__TemLevel25_2, 2 },
	{ &TemLevel26_ANALOG_2, &__init_value__TemLevel26_ANALOG_2, 2 },
	{ &TemLevel26_2, &__init_value__TemLevel26_2, 2 },
	{ &TemLevel27_ANALOG_2, &__init_value__TemLevel27_ANALOG_2, 2 },
	{ &TemLevel27_2, &__init_value__TemLevel27_2, 2 },
	{ &TemLevel28_ANALOG_2, &__init_value__TemLevel28_ANALOG_2, 2 },
	{ &TemLevel28_2, &__init_value__TemLevel28_2, 2 },
	{ &TemLevel29_ANALOG_2, &__init_value__TemLevel29_ANALOG_2, 2 },
	{ &TemLevel29_2, &__init_value__TemLevel29_2, 2 },
	{ &TemLevel30_ANALOG_2, &__init_value__TemLevel30_ANALOG_2, 2 },
	{ &TemLevel30_2, &__init_value__TemLevel30_2, 2 },
	{ &TemLevel31_ANALOG_2, &__init_value__TemLevel31_ANALOG_2, 2 },
	{ &TemLevel31_2, &__init_value__TemLevel31_2, 2 },
	{ &TemLevel32_ANALOG_2, &__init_value__TemLevel32_ANALOG_2, 2 },
	{ &TemLevel32_2, &__init_value__TemLevel32_2, 2 },
	{ NULL, NULL, 0 } /* sentinel */
}; /* __init_table__Data_InSideTemp_Calibration[] */

/* initialization of global data block */
void Data_InSideTemp_Calibration__init(void)
{
	const vt3_screen_initializer FARPTR p;

	/* initialize global data */
	for ( p = __init_table__Data_InSideTemp_Calibration; p->len; p ++ )
	{
		FarMemCopy(p->dst, p->src, p->len);
	}

	/* initialize function block instances */
}


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_POU__DATA_INSIDETEMP_CALIBRATION_C */

/* end of file */
