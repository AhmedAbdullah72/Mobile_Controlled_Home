/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :GIE.c     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/

#include "GIE_interface.h"

// This function is responsible for enabling GIE for interrupts
void GIE_vEnableInterrupts(){
	SET_BIT(SREG_REG, 7);
}

// This function is responsible for disabling GIE for interrupts
void GIE_vDisableInterrupts(){
	CLR_BIT(SREG_REG, 7);
}
