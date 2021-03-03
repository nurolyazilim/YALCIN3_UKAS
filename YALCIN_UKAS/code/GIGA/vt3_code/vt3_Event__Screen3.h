/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREEN3_H
#define INCLUDE__VT3_EVENT__SCREEN3_H

#include "vt3_base.h"

/* timer event handler for screen: /project/GIGA/Screens/screen_3 */
void vt3_event_ind_screen_3(BYTE event)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_3/SWVersionText 
 * runs every 200ms
 */
void vt3_event_ind_screen_3_SWVersionText(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_3/multitext_3_2 
 * runs every 0ms
 */
void vt3_event_ind_screen_3_multitext_3_2(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_3/Date_Time_Headline 
 * runs every 200ms
 */
void vt3_event_ind_screen_3_Date_Time_Headline(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__SCREEN3_H */

/* end of file */
