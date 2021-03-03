/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN5_H
#define INCLUDE__VT3_DISP__SCREEN5_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_screen_5_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_MultiText                      multitext_3_2;
	vt3_indicator_SimpleText                     simple_text_3_3;
	vt3_indicator_SimpleText                     simple_text_3_2;
	vt3_indicator_SimpleText                     simple_text_3_4;
	vt3_indicator_SimpleText                     simple_text_3_3_2;
	vt3_indicator_SimpleText                     simple_text_3_3_3;
	vt3_indicator_SimpleText                     simple_text_3_3_4;
	vt3_indicator_SimpleText                     simple_text_3_3_5;
	vt3_indicator_SimpleText                     simple_text_3_3_6;
	vt3_indicator_SimpleText                     EngineHour;
	vt3_indicator_SimpleText                     simple_text_3_7;
	vt3_indicator_Number                         FBPressValue_3;
	vt3_indicator_SimpleText                     simple_text_3_7_2;
	vt3_indicator_SimpleText                     simple_text_3_7_2_2;
	vt3_indicator_Number                         FBPressValue_3_2;
	vt3_indicator_SimpleText                     EngineHour_2;
	vt3_indicator_SimpleText                     simple_text_3_7_3;
	vt3_indicator_SimpleText                     EngineHour_2_2;
	vt3_indicator_SimpleText                     simple_text_3_7_3_2;
	vt3_indicator_MultiText                      multitext;
	vt3_indicator_MultiText                      multitext_2;
	vt3_indicator_MultiText                      multitext_2_2;
	vt3_indicator_MultiText                      multitext_2_3;
	vt3_indicator_MultiText                      multitext_2_4;
	vt3_indicator_MultiText                      multitext_2_4_2;
	vt3_indicator_MultiText                      multitext_2_4_3;
	vt3_indicator_MultiText                      multitext_2_4_4;
	vt3_indicator_MultiText                      multitext_2_4_5;
	vt3_indicator_SimpleText                     EngineHour_2_3;
} vt3_screen_struct_screen_5_t;


/* the screen initialization function */
void vt3_init_ind_screen_5(void);

/* the screen drawing function */
void vt3_draw_ind_screen_5(BYTE event);

/* timer event handler for screen: /project/GIGA/Screens/screen_5 */
void vt3_event_ind_screen_5(BYTE event)
;
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN5_H */

/* end of file */
