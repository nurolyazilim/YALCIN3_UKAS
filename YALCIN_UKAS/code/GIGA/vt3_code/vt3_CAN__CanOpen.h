/* device:       /project/GIGA */
/* device model: GIGA_05600005_01 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANOPEN_H
#define INCLUDE__VT3_CAN__CANOPEN_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* received messages */

#define VT3_RXMSG_CAN_151              (0)
#define VT3_RXMSG_CAN_152              (1)
#define VT3_RXMSG_CAN_153              (2)
#define VT3_RXMSG_CAN_154              (3)
#define VT3_RXMSG_CAN_155              (4)
#define VT3_RXMSG_CAN_156              (5)
#define VT3_RXMSG_CAN_157              (6)
#define VT3_RXMSG_CAN_162              (7)
#define VT3_RXMSG_CAN_163              (8)
#define VT3_RXMSG_CAN_164              (9)
#define VT3_RXMSG_CAN_165              (10)
#define VT3_RXMSG_CAN_166              (11)
#define VT3_RXMSG_CAN_168              (12)
#define VT3_RXMSG_CAN_169              (13)
#define VT3_RXMSG_CAN_181              (14)
#define VT3_RXMSG_CAN_186              (15)
#define VT3_RXMSG_CAN_187              (16)
#define VT3_RXMSG_CAN_18D              (17)
#define VT3_RXMSG_CAN_792              (18)
#define VT3_RXMSG_CAN_793              (19)
#define VT3_RXMSG_CAN_LIGHT_4E         (20)
#define VT3_RXMSG_CAN_WIPER_4F         (21)
/* functions */

/* CAN interface initialization function */
void vt3_can_CanOpen_init(void);

/* CAN interface receive function */
void vt3_can_CanOpen_rx(void);

/* CAN interface transmit function */
void vt3_can_CanOpen_tx(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANOPEN_H */

/* end of file */
