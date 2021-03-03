/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANOPEN_H
#define INCLUDE__VT3_CAN__CANOPEN_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* received messages */

#define VT3_RXMSG_CAN_81               (0)
#define VT3_RXMSG_CAN_86               (1)
#define VT3_RXMSG_CAN_87               (2)
#define VT3_RXMSG_CAN_181              (3)
#define VT3_RXMSG_CAN_182              (4)
#define VT3_RXMSG_CAN_186              (5)
#define VT3_RXMSG_CAN_187              (6)
#define VT3_RXMSG_CAN_18D              (7)
#define VT3_RXMSG_CAN_18E              (8)
#define VT3_RXMSG_CAN_18F              (9)
#define VT3_RXMSG_CAN_190              (10)
#define VT3_RXMSG_CAN_200              (11)
#define VT3_RXMSG_CAN_281              (12)
#define VT3_RXMSG_CAN_282              (13)
#define VT3_RXMSG_CAN_381              (14)
#define VT3_RXMSG_CAN_382              (15)
#define VT3_RXMSG_CAN_713              (16)
#define VT3_RXMSG_CAN_790              (17)
#define VT3_RXMSG_CAN_791              (18)
#define VT3_RXMSG_CAN_792              (19)
#define VT3_RXMSG_CAN_793              (20)
#define VT3_RXMSG_CAN_794              (21)
#define VT3_RXMSG_CAN_795              (22)
#define VT3_RXMSG_CAN_799              (23)
#define VT3_RXMSG_CAN_LIGHT_4E         (24)
#define VT3_RXMSG_CAN_WIPER_4F         (25)
#define VT3_RXMSG_CAN_HORN             (26)
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
