/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_H
#define INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"
#include "vt3_POU__cycle.h"
#include "vt3_POU__Data_EngineTempGauge.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* type of structure containing status and parameters of POU */
typedef struct
{
	BOOL             EN;
	BOOL             ENO;

} mainEngineTempGauge_t;

/* prototype for the function that initializes the POU */
void mainEngineTempGauge__init(void);

/* prototype for the function that contains the POU body */
void mainEngineTempGauge__call(void);


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_POU__MAINENGINETEMPGAUGE_H */

/* end of file */
