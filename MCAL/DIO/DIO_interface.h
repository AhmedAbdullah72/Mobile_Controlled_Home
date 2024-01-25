/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :DIO_INT.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/
#ifndef MCAL_ATMEGA32_DIO_DIO_INTERFACE_H_
#define MCAL_ATMEGA32_DIO_DIO_INTERFACE_H_

/********** File includes **********/
#include "DIO_config.h"
#include "DIO_private.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"

/********** Function prototypes **********/
// Initializes pin
void DIO_vPinInit(u8 Copy_u8PortName, u8 Copy_u8PinNum, u8 Copy_u8PinDir, u8 Copy_u8PinVal);

//sets data direction of 1 pin in a port
void DIO_vSetPinDir(u8 Copy_u8PortName, u8 Copy_u8PinNum, u8 Copy_u8PinDir);

//sets value of 1 pin in a port
void DIO_vSetPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNum, u8 Copy_u8PinVal);

//reads value on 1 pin in a port
u8 DIO_u8ReadPinValue(u8 Copy_u8PortName, u8 Copy_u8PinNum);

//toggles value on 1 pin in a port
void DIO_vTogglePinValue(u8 Copy_u8PortName, u8 Copy_u8PinNum);

//sets data direction of all 8 pins in a port
void DIO_vSetGroupDir(u8 Copy_u8PortName, u8 Copy_u8PortDir);

//sets value of all 8 pins in a port
void DIO_vSetGroupValue(u8 Copy_u8PortName, u8 Copy_u8PortValue);

//reads value on all 8 pins of a port
u8 DIO_u8ReadGroupValue(u8 Copy_u8PortName);

//sets data direction of 4 LSB pins of a port
void DIO_vSet4LSBDir(u8 Copy_u8PortName, u8 Copy_u8PinDir);

//sets data direction of 4 MSB pins of a port
void DIO_vSet4MSBDir(u8 Copy_u8PortName, u8 Copy_u8PinDir);

//sets value of 4LSB pins of a port
void DIO_vSet4LSBValue(u8 Copy_u8PortName, u8 Copy_u8PinVal);

//sets value of 4MSB pins of a port
void DIO_vSet4MSBValue(u8 Copy_u8PortName, u8 Copy_u8PinVal);


#endif /* MCAL_ATMEGA32_DIO_DIO_INTERFACE_H_z */
