/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREEN3_C
#define INCLUDE__VT3_EVENT__SCREEN3_C

#include "vt3_base.h"
#include "vt3_lang.h"
#include "vt3_images.h"
#include "vt3_fonts.h"
#include "vt3_POU_common.h"
#include "vt3_Disp__Screen3.h"
#include "vt3_Event__Screen3.h"
#include "vt3_extra.h"

/* define the names of the indicators */

/* define the names of the indicators */

/* suppress HC12 specific warnings */
#pragma MESSAGE DISABLE C5909 // Assignment in condition
#pragma MESSAGE DISABLE C5918 // Removed dead goto
#pragma MESSAGE DISABLE C5917 // Removed dead assignment
#pragma MESSAGE DISABLE C5660 // Removed dead code
#pragma MESSAGE DISABLE C1420 // Result of function-call is ignored
#pragma MESSAGE DISABLE C4002 // Result not used

/* timer event handler for screen: /project/GIGA/Screens/screen_3 */
void vt3_event_ind_screen_3(BYTE event)
{

} /* end of event code for indicator: screen_3 */


/* timer event handler for indicator: /project/GIGA/Screens/screen_3/SWVersionText 
 * runs every 200ms
 */
void vt3_event_ind_screen_3_SWVersionText(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = SEL_STRING((SWVersion_Stat),
		(PSTRING)&(nullString),
		(PSTRING)&(SWVersionOnScreen));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_3/SWVersionText
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: SWVersionText */


/* timer event handler for indicator: /project/GIGA/Screens/screen_3/multitext_3_2 
 * runs every 0ms
 */
void vt3_event_ind_screen_3_multitext_3_2(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
{
	ind->currentValue = ((GIGAMenuVar01));

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_3/multitext_3_2
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: multitext_3_2 */


/* timer event handler for indicator: /project/GIGA/Screens/screen_3/Date_Time_Headline 
 * runs every 200ms
 */
void vt3_event_ind_screen_3_Date_Time_Headline(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
{
	ind->currentValue = TRANSLATE(IDS_TEXT10, vt3_language);

	/* Warning: the code below is generated by vt3.
	 * If you wish to make changes, please use vt3.
	 * 
	 *  node is:    /project/GIGA/Screens/screen_3/Date_Time_Headline
	 * 
	 * Omitted: the list of replaced identifiers is very long
	 */
	{
	
	}

} /* end of event code for indicator: Date_Time_Headline */


#endif /* INCLUDE__VT3_EVENT__SCREEN3_C */

/* end of file */