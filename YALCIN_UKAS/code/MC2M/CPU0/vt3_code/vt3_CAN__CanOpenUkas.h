/* device:       /project/MC2M/CPU0 */
/* device model: MC2M_2CPU\CPU0 */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANOPENUKAS_H
#define INCLUDE__VT3_CAN__CANOPENUKAS_H

#include "vt3_base.h"

#pragma CONST_SEG CSEG VT3_INIT
#pragma DATA_SEG DSEG BANKED_RAM

/* received messages */

#define VT3_RXMSG_CAN_183_3            (0)
#define VT3_RXMSG_CAN_184_3            (1)
#define VT3_RXMSG_CAN_185_3            (2)
#define VT3_RXMSG_CAN_186_3            (3)
#define VT3_RXMSG_CAN_187_3            (4)
#define VT3_RXMSG_CAN_188_3            (5)
/* functions */

/* CAN interface initialization function */
void vt3_can_CanOpenUkas_init(void);

/* CAN interface receive function */
void vt3_can_CanOpenUkas_rx(void);

/* CAN interface transmit function */
void vt3_can_CanOpenUkas_tx(void);

#pragma CONST_SEG DEFAULT
#pragma DATA_SEG DEFAULT

#endif /* INCLUDE__VT3_CAN__CANOPENUKAS_H */

/* end of file */
