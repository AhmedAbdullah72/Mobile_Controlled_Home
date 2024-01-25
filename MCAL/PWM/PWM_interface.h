/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :PWM_INT.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/

#ifndef MCAL_ATMEGA32_PWM_PWM_INTERFACE_H_
#define MCAL_ATMEGA32_PWM_PWM_INTERFACE_H_

/* Section : Includes */
#include "PWM_config.h"
#include "PWM_private.h"
#include "../DIO/DIO_interface.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"

/* Section : Macro Declarations */

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */
typedef struct{
	enu_pwmRunningMode 		PWM_TimerChannel;
	enu_TimerPrescale 		PWM_TimerPrescale;
	enu_pwmToggleMode		PWM_ToggleMode;
	enu_pwmInverting		PWM_InvertOrNot;
}PWM_cfg_t;

/* Section : Function Declarations */
void PWM_vInit(const PWM_cfg_t *PWM);

void PWM_vSetICR(const PWM_cfg_t *PWM, u16 Copy_u16ICRValue);

void PWM_vSetOCR(const PWM_cfg_t *PWM, u16 Copy_u16OCRValue);

void PWM_vStart(const PWM_cfg_t *PWM);

void PWM_vStop(const PWM_cfg_t *PWM);

#endif /* MCAL_ATMEGA32_PWM_PWM_INTERFACE_H_ */
