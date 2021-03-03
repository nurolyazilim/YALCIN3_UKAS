/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN1_H
#define INCLUDE__VT3_DISP__SCREEN1_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_screen_1_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_MultiText                      multitext_1;
	vt3_indicator_MultiText                      multitext_1_2;
	vt3_indicator_SimpleText                     simple_text_2;
	vt3_indicator_SimpleText                     simple_text_2_2;
	vt3_indicator_MultiBitmap                    multibitmap_2;
	vt3_indicator_MultiBitmap                    multibitmap_2_2;
	vt3_indicator_MultiBitmap                    multibitmap_2_3;
	vt3_indicator_MultiText                      multitext;
	vt3_indicator_MultiText                      multitext_2;
	vt3_indicator_MultiText                      multitext_3;
	vt3_indicator_MultiText                      multitext_4;
	vt3_indicator_Number                         number_2_3_2;
	vt3_indicator_SimpleText                     simple_text;
	vt3_indicator_SimpleRect                     BG_FBPressGauge;
	vt3_indicator_GaugeBar                       FBPressGauge;
	vt3_indicator_Number                         FBPressValue;
	vt3_indicator_SimpleText                     FBPressValueUnit;
	vt3_indicator_SimpleRect                     BG_FBPressGauge_2;
	vt3_indicator_GaugeBar                       FBPressGauge_2;
	vt3_indicator_Number                         FBPressValue_2;
	vt3_indicator_SimpleText                     FBPressValueUnit_2;
	vt3_indicator_SimpleRect                     BG_FBPressGauge_3;
	vt3_indicator_GaugeBar                       FBPressGauge_3;
	vt3_indicator_Number                         FBPressValue_3;
	vt3_indicator_SimpleText                     FBPressValueUnit_3;
	vt3_indicator_SimpleRect                     BG_FBPressGauge_4;
	vt3_indicator_GaugeBar                       FBPressGauge_4;
	vt3_indicator_Number                         FBPressValue_4;
	vt3_indicator_SimpleText                     FBPressValueUnit_4;
	vt3_indicator_MultiBitmap                    multibitmap_2_3_2;
	vt3_indicator_MultiBitmap                    multibitmap_2_3_2_2;
	vt3_indicator_MultiBitmap                    multibitmap_2_3_2_3;
	vt3_indicator_SimpleRect                     simple_rect;
	vt3_indicator_SimpleRect                     simple_rect_2;
	vt3_indicator_SimpleRect                     simple_rect_4;
	vt3_indicator_SimpleRect                     simple_rect_2_2;
	vt3_indicator_SimpleRect                     simple_rect_3;
	vt3_indicator_SimpleRect                     simple_rect_3_2;
	vt3_indicator_Number                         number_2_3_2_3;
	vt3_indicator_SimpleText                     EngineHour;
	vt3_indicator_SimpleRect                     simple_rect_5;
	vt3_indicator_MultiText                      multitext_5;
	vt3_indicator_SimpleText                     simple_text_3_3_2;
	vt3_indicator_MultiText                      multitext_6;
	vt3_indicator_MultiText                      multitext_6_2;
	vt3_indicator_MultiText                      multitext_6_3;
	vt3_indicator_MultiText                      multitext_7;
	vt3_indicator_Number                         FBPressValue_3_2;
	vt3_indicator_Number                         FBPressValue_3_2_2;
	vt3_indicator_SimpleText                     simple_text_2_3;
	vt3_indicator_SimpleText                     simple_text_2_3_2;
	vt3_indicator_Number                         vvrPump;
	vt3_indicator_SimpleText                     simple_text_2_3_3;
	vt3_indicator_SimpleText                     simple_text_2_3_3_2;
	vt3_indicator_Number                         FBPressValue_3_2_3;
	vt3_indicator_Number                         vvrPump_2;
	vt3_indicator_SimpleText                     simple_text_2_3_3_3;
	vt3_indicator_Number                         vvrPump_3;
	vt3_indicator_SimpleText                     simple_text_2_3_3_4;
	vt3_indicator_Number                         FBPressValue_3_2_2_2;
} vt3_screen_struct_screen_1_t;


/* the screen initialization function */
void vt3_init_ind_screen_1(void);

/* the screen drawing function */
void vt3_draw_ind_screen_1(BYTE event);

/* timer event handler for screen: /project/GIGA/Screens/screen_1 */
void vt3_event_ind_screen_1(BYTE event)
;
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN1_H */

/* end of file */
