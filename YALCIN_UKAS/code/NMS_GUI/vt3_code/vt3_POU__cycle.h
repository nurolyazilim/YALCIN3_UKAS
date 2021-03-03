/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__CYCLE_H
#define INCLUDE__VT3_POU__CYCLE_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"
#include "vt3_POU__global_data.h"



/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

} cycle_t;

/* prototype for the function that initializes the POU */
void cycle__init(void);

/* prototype for the function that contains the POU body */
void cycle__call(void);




#endif /* INCLUDE__VT3_POU__CYCLE_H */

/* end of file */
