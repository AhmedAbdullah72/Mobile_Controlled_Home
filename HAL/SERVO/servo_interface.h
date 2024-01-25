/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :SERVO_INT.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/

#ifndef HAL_SERVO_SERVO_INTERFACE_H_
#define HAL_SERVO_SERVO_INTERFACE_H_

/* Section : Includes */
#include "servo_config.h"
#include "servo_private.h"
#include "../../MCAL/PWM/PWM_interface.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"

/* Section : Macro Declarations */

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */
typedef struct{
	PWM_cfg_t ServoPWM;
	enu_servoDirections ServoInitialDirection;
	u16	ICR_Value;
	u16 OCR_0degree_Value;
	u16 OCR_90degree_Value;
	u16 OCR_180degree_Value;
}SERVO_PWM_cfg_t;

/* Section : Function Declarations */
void SERVO_vInit(const SERVO_PWM_cfg_t *Servo_PWM);

void SERVO_vChangeDirection(const SERVO_PWM_cfg_t *Servo_PWM, enu_servoDirections Copy_enuDirection);

void SERVO_vStart(const SERVO_PWM_cfg_t *Servo_PWM);

void SERVO_vStop(const SERVO_PWM_cfg_t *Servo_PWM);

#endif /* HAL_SERVO_SERVO_INTERFACE_H_ */
