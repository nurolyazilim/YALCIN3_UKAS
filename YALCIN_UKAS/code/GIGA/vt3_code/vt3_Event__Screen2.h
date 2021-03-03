/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_EVENT__SCREEN2_H
#define INCLUDE__VT3_EVENT__SCREEN2_H

#include "vt3_base.h"

/* timer event handler for screen: /project/GIGA/Screens/screen_2 */
void vt3_event_ind_screen_2(BYTE event)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Date_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Date_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Time_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Time_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Date_Time_Headline 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Date_Time_Headline(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Date_Time_Caption_Text 
 * runs every 0ms
 */
void vt3_event_ind_screen_2_Date_Time_Caption_Text(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Return_Text 
 * runs every 0ms
 */
void vt3_event_ind_screen_2_Return_Text(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Min_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Min_Text(
	BYTE event, 
	vt3_indicator_SimpleTextEditable FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Hour_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Hour_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Time_SemiColon 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Time_SemiColon(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Month_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Month_Text(
	BYTE event, 
	vt3_indicator_SimpleTextEditable FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Day_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Day_Text(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Date_Slash1 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Date_Slash1(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Year_Text 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Year_Text(
	BYTE event, 
	vt3_indicator_SimpleTextEditable FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Update_Date_Slash2 
 * runs every 200ms
 */
void vt3_event_ind_screen_2_Update_Date_Slash2(
	BYTE event, 
	vt3_indicator_SimpleText FARPTR ind)
;

/* timer event handler for indicator: /project/GIGA/Screens/screen_2/Return_Text_2 
 * runs every 0ms
 */
void vt3_event_ind_screen_2_Return_Text_2(
	BYTE event, 
	vt3_indicator_MultiText FARPTR ind)
;

#endif /* INCLUDE__VT3_EVENT__SCREEN2_H */

/* end of file */
