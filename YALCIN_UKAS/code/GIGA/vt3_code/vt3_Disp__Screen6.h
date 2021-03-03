/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN6_H
#define INCLUDE__VT3_DISP__SCREEN6_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_screen_6_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_MultiBitmap                    multibitmap;
	vt3_indicator_MultiText                      multitext;
	vt3_indicator_MultiText                      multitext_3;
	vt3_indicator_MultiText                      multitext_3_2;
	vt3_indicator_MultiText                      multitext_3_3;
	vt3_indicator_MultiText                      multitext_3_3_2;
	vt3_indicator_MultiText                      multitext_4;
	vt3_indicator_MultiText                      multitext_4_2;
	vt3_indicator_MultiText                      multitext_4_3;
} vt3_screen_struct_screen_6_t;


/* the screen initialization function */
void vt3_init_ind_screen_6(void);

/* the screen drawing function */
void vt3_draw_ind_screen_6(BYTE event);

/* timer event handler for screen: /project/GIGA/Screens/screen_6 */
void vt3_event_ind_screen_6(BYTE event)
;
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN6_H */

/* end of file */
