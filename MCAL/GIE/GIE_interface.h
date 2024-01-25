/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :GIE_INT.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/

#ifndef MCAL_ATMEGA32_GIE_GIE_INTERFACE_H_
#define MCAL_ATMEGA32_GIE_GIE_INTERFACE_H_

/********************* FILE INCLUDES *********************/
#include "GIE_config.h"
#include "GIE_private.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"

/********************* FUNCTION PROTOTYPES *********************/

// This function is responsible for enabling GIE for interrupts
void GIE_vEnableInterrupts();

// This function is responsible for disabling GIE for interrupts
void GIE_vDisableInterrupts();

#endif /* MCAL_ATMEGA32_GIE_GIE_INTERFACE_H_ */
