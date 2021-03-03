/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN4_H
#define INCLUDE__VT3_DISP__SCREEN4_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_screen_4_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_SimpleText                     simple_text_07;
	vt3_indicator_SimpleText                     simple_text_08;
	vt3_indicator_SimpleText                     simple_text_09;
	vt3_indicator_SimpleText                     simple_text_10;
	vt3_indicator_MultiText                      Return_Text_2;
	vt3_indicator_MultiText                      Date_Time_Caption_Text;
	vt3_indicator_MultiText                      Return_Text;
	vt3_indicator_MultiText                      multitext;
	vt3_indicator_MultiText                      multitext_3;
	vt3_indicator_MultiText                      multitext_3_2;
	vt3_indicator_MultiText                      multitext_2;
	vt3_indicator_MultiText                      multitext_2_2;
	vt3_indicator_MultiText                      multitext_2_2_2;
	vt3_indicator_MultiText                      multitext_2_2_2_2;
	vt3_indicator_MultiText                      multitext_2_2_2_3;
} vt3_screen_struct_screen_4_t;


/* the screen initialization function */
void vt3_init_ind_screen_4(void);

/* the screen drawing function */
void vt3_draw_ind_screen_4(BYTE event);

/* timer event handler for screen: /project/GIGA/Screens/screen_4 */
void vt3_event_ind_screen_4(BYTE event)
;
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN4_H */

/* end of file */
