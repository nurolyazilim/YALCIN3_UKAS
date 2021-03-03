/* device:       /project/NMS_GUI */
/* device model: PC_Windows */
/* this file has been generated automatically by vt3 - do not modify! */


#ifndef INCLUDE__VT3_CAN__CANINTERFACE_H
#define INCLUDE__VT3_CAN__CANINTERFACE_H

#include "vt3_base.h"


/* received messages */

#define VT3_RXMSG_CAN_780              (0)
#define VT3_RXMSG_CAN_781              (1)
#define VT3_RXMSG_CAN_782              (2)
#define VT3_RXMSG_CAN_783              (3)
#define VT3_RXMSG_CAN_784              (4)
#define VT3_RXMSG_CAN_785              (5)
#define VT3_RXMSG_CAN_786              (6)
/* functions */

/* CAN interface initialization function */
void vt3_can_CanInterface_init(void);

/* CAN interface receive function */
void vt3_can_CanInterface_rx(void);

/* CAN interface transmit function */
void vt3_can_CanInterface_tx(void);


#endif /* INCLUDE__VT3_CAN__CANINTERFACE_H */

/* end of file */
