/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_FONTS_H
#define INCLUDE__VT3_FONTS_H


#include "vt3_base.h"

extern vt3_font FAR vt3_font_descriptor_ArialBold13;
extern vt3_font FAR vt3_font_descriptor_ArialBold16;
extern vt3_font FAR vt3_font_descriptor_ArialBold18;
extern vt3_font FAR vt3_font_descriptor_ArialBold20;
extern vt3_font FAR vt3_font_descriptor_ArialRegular20;
#define vt3_font_ArialBold13 (&vt3_font_descriptor_ArialBold13)
#define vt3_font_ArialBold16 (&vt3_font_descriptor_ArialBold16)
#define vt3_font_ArialBold18 (&vt3_font_descriptor_ArialBold18)
#define vt3_font_ArialBold20 (&vt3_font_descriptor_ArialBold20)
#define vt3_font_ArialRegular20 (&vt3_font_descriptor_ArialRegular20)

/* load all fonts: called at the beginning */
void vt3_load_all_fonts(void);

#endif /* INCLUDE__VT3_FONTS_H */

/* end of file */
