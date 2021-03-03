/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_ALARMS_H
#define INCLUDE__VT3_ALARMS_H

#include "vt3_base.h"
#include "vt3_elog.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM


/* priority levels */
#define VT3_COUNTOF_ALARM_PRIORITY (1)
#define ALARM_PRIORITY_IDS_ONEMLI                          (1)

/* spn numbers */
#define VT3_COUNTOF_ALARM_SPN (1)
#define ALARM_SPN_SPN_1                                    (1)

/* fmi numbers */
#define VT3_COUNTOF_ALARM_FMI (1)
#define ALARM_FMI_FMI_1                                    (1)

/* group numbers */
#define VT3_COUNTOF_ALARM_GROUP (1)
#define ALARM_GROUP_GROUP_1                                (1)

/* local alarms numbers */
#define VT3_COUNTOF_LOCAL_ALARMS (0)

/* global alarms numbers */
#define VT3_COUNTOF_GLOBAL_ALARMS (1)

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_ALARMS_H */

/* end of file */
