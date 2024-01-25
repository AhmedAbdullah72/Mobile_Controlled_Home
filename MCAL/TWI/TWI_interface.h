/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :TWI_INT.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/
#ifndef MCAL_ATMEGA32_TWI_TWI_INTERFACE_H_
#define MCAL_ATMEGA32_TWI_TWI_INTERFACE_H_

/* Section : Includes */
#include "TWI_config.h"
#include "TWI_private.h"
#include "../DIO/DIO_interface.h"

/* Section : Macro Declarations */

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */

/* Section : Function Declarations */
void TWI_vInit();

void TWI_vStart();

void TWI_vStop();

void TWI_vWriteData(u8 Copy_u8Data);

u8 TWI_u8ReadWithAck();

u8 TWI_u8ReadWithNoAck();

u8 TWI_u8GetStatus();

#endif /* MCAL_ATMEGA32_TWI_TWI_INTERFACE_H_ */
