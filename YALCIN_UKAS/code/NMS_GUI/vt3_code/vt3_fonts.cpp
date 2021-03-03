/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_FONTS_CPP
#define INCLUDE__VT3_FONTS_CPP


#include "vt3_runtime.h"

/* font Arial Bold 13 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold13 = {
	/* font size  */    13,
	/* file name  */    "arialb.ttf", 
	/* face index */    0, 
	/* font height */   15,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold13 */

/* font Arial Bold 16 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold16 = {
	/* font size  */    16,
	/* file name  */    "arialb.ttf", 
	/* face index */    0, 
	/* font height */   18,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold16 */

/* font Arial Bold 18 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold18 = {
	/* font size  */    18,
	/* file name  */    "arialb.ttf", 
	/* face index */    0, 
	/* font height */   21,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold18 */

/* font Arial Bold 20 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialBold20 = {
	/* font size  */    20,
	/* file name  */    "arialb.ttf", 
	/* face index */    0, 
	/* font height */   23,
	/* font family name */   "Arial",
	/* bold */   1,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialBold20 */

/* font Arial Regular 20 main descriptor */
vt3_font FAR vt3_font_descriptor_ArialRegular20 = {
	/* font size  */    20,
	/* file name  */    "arial.ttf", 
	/* face index */    0, 
	/* font height */   23,
	/* font family name */   "Arial",
	/* bold */   0,
	/* italic */   0,
	/* directfb_font */ 0
}; /* vt3_font_ArialRegular20 */

/* load all fonts: called at the beginning */
void vt3_load_all_fonts(void)
{
	vt3_LoadFont(&vt3_font_descriptor_ArialBold13);
	vt3_LoadFont(&vt3_font_descriptor_ArialBold16);
	vt3_LoadFont(&vt3_font_descriptor_ArialBold18);
	vt3_LoadFont(&vt3_font_descriptor_ArialBold20);
	vt3_LoadFont(&vt3_font_descriptor_ArialRegular20);
} /* vt3_load_all_fonts */

#endif /* INCLUDE__VT3_FONTS_CPP */

/* end of file */
