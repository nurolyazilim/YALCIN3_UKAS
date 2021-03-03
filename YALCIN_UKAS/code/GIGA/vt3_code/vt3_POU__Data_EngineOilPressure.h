/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_POU__DATA_ENGINEOILPRESSURE_H
#define INCLUDE__VT3_POU__DATA_ENGINEOILPRESSURE_H

#include "vt3_base.h"
#include "vt3_POU_string_typedef.h"
#include "vt3_POU__cycle.h"
#include "vt3_POU__Data_EngineTempGauge.h"
#include "vt3_POU__mainEngineTempGauge.h"
#include "vt3_POU__Data_SpeedometerGauge.h"
#include "vt3_POU__mainSpeedometer.h"
#include "vt3_POU__Data_EngineSpeed.h"
#include "vt3_POU__mainEngineSpeed.h"
#include "vt3_POU__Data_FuelLevel.h"
#include "vt3_POU__mainFuelLevel.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* initialization of global data */
extern void Data_EngineOilPressure__init(void);


#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT


#endif /* INCLUDE__VT3_POU__DATA_ENGINEOILPRESSURE_H */

/* end of file */
