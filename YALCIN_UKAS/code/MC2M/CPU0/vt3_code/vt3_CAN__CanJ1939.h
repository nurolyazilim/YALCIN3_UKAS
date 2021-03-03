/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANJ1939_H
#define INCLUDE__VT3_CAN__CANJ1939_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* received messages */

#define VT3_RXMSG_TRF2_TRANSMISSION_FLUIDS_2 (0)
#define VT3_RXMSG_ETC1_ELECTRONIC_TRANSMISSION_CONTROLLER_1 (1)
#define VT3_RXMSG_EEC2_ELECTRONIC_ENGINE_CONTROLLER_2 (2)
#define VT3_RXMSG_EEC1_ELECTRONIC_ENGINE_CONTROLLER_1 (3)
#define VT3_RXMSG_DM01_BAM_ECM         (4)
#define VT3_RXMSG_DM01_BAM_TCM         (5)
#define VT3_RXMSG_DM01_BAM_EBS         (6)
#define VT3_RXMSG_EBC1_ELECTRONIC_BRAKE_CONTROLLER_1_VECM (7)
#define VT3_RXMSG_ETC2_ELECTRONIC_TRANSMISSION_CONTROLLER_2 (8)
#define VT3_RXMSG_ETC7_ELECTRONIC_TRANSMISSION_CONTROLLER_7 (9)
#define VT3_RXMSG_EBC2_WHEEL_SPEED_INFORMATION (10)
#define VT3_RXMSG_DM01_ECM             (11)
#define VT3_RXMSG_DM01_TCM             (12)
#define VT3_RXMSG_DM01_EBS             (13)
#define VT3_RXMSG_SHUTDN_SHUTDOWN      (14)
#define VT3_RXMSG_EHR_ENGINE_HOURS_REVOLUTIONS (15)
#define VT3_RXMSG_ET1_ENGINE_TEMPERATURE_1 (16)
#define VT3_RXMSG_EFL_P1_ENGINE_FLUID_LEVELPRESSURE_1 (17)
#define VT3_RXMSG_CCVS_CRUISE_CONTROLVEHICLE_SPEED (18)
#define VT3_RXMSG_IC1_INLETEXHAUST_CONDITIONS_1 (19)
#define VT3_RXMSG_VEP1_VEHICLE_ELECTRICAL_POWER_1 (20)
#define VT3_RXMSG_TRF1_TRANSMISSION_FLUIDS_1 (21)
#define VT3_RXMSG_WFI_WATER_IN_FUEL_INDICATOR (22)
/* functions */

/* CAN interface initialization function */
void vt3_can_CanJ1939_init(void);

/* CAN interface receive function */
void vt3_can_CanJ1939_rx(void);

/* CAN interface transmit function */
void vt3_can_CanJ1939_tx(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANJ1939_H */

/* end of file */
