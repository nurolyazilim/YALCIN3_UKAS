/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_DISP__SCREEN3_H
#define INCLUDE__VT3_DISP__SCREEN3_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* structure containing runtime status of screen */
typedef struct vt3_screen_struct_screen_3_t {
	vt3_indicator_ScreenModel                    _background;
	vt3_indicator_SimpleText                     SWVersionText;
	vt3_indicator_MultiText                      multitext_3_2;
	vt3_indicator_SimpleText                     Date_Time_Headline;
} vt3_screen_struct_screen_3_t;


/* the screen initialization function */
void vt3_init_ind_screen_3(void);

/* the screen drawing function */
void vt3_draw_ind_screen_3(BYTE event);

/* timer event handler for screen: /project/GIGA/Screens/screen_3 */
void vt3_event_ind_screen_3(BYTE event)
;
#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_DISP__SCREEN3_H */

/* end of file */
