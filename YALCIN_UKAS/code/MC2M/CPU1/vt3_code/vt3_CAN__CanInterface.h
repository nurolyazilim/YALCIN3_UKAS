/* device:       /project/MC2M/CPU1 */
/* device model: MC2M_2CPU\CPU1 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_H
#define INCLUDE__VT3_CAN__CANINTERFACE_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* received messages */

#define VT3_RXMSG_CAN_152              (0)
#define VT3_RXMSG_CAN_162              (1)
#define VT3_RXMSG_CAN_713              (2)
#define VT3_RXMSG_CAN_HORN             (3)
/* functions */

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void);

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void);

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANINTERFACE_H */

/* end of file */
