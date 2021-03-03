/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN2_H
#define INCLUDE__VT3_DISP__SCREEN2_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_screen_2_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_SimpleText                     Date_Text;
	vt3_indicator_SimpleText                     Time_Text;
	vt3_indicator_SimpleText                     Date_Time_Headline;
	vt3_indicator_MultiText                      Date_Time_Caption_Text;
	vt3_indicator_MultiText                      Return_Text;
	vt3_indicator_SimpleTextEditable             Update_Min_Text;
	vt3_indicator_SimpleText                     Update_Hour_Text;
	vt3_indicator_SimpleText                     Update_Time_SemiColon;
	vt3_indicator_SimpleTextEditable             Update_Month_Text;
	vt3_indicator_SimpleText                     Update_Day_Text;
	vt3_indicator_SimpleText                     Update_Date_Slash1;
	vt3_indicator_SimpleTextEditable             Update_Year_Text;
	vt3_indicator_SimpleText                     Update_Date_Slash2;
	vt3_indicator_MultiText                      Return_Text_2;
} vt3_screen_struct_screen_2_t;


/* the screen initialization function */
void vt3_init_ind_screen_2(void);

/* the screen drawing function */
void vt3_draw_ind_screen_2(BYTE event);

/* timer event handler for screen: /project/GIGA/Screens/screen_2 */
void vt3_event_ind_screen_2(BYTE event)
;
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN2_H */

/* end of file */
