/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :STD_TYPES.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/
#ifndef SERVICES_STD_TYPES_STD_TYPES_H_
#define SERVICES_STD_TYPES_STD_TYPES_H_

/*********************************************************/
/* 				  Data types declaration 				 */
/*********************************************************/

typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long int u32;
typedef float f32;

typedef signed char s8;
typedef signed short int s16;
typedef signed long int s32;
typedef double f64;

/*********************************************************/
/* 				  MACRO FUNCTIONS DECLARATION			 */
/*********************************************************/

#define HWREG8(_REG)		(*((volatile u8*) _REG))
#define HWREG16(_REG)		(*((volatile u16*) _REG))
#define HWREG32(_REG)		(*((volatile u32*) _REG))
#define NULL		0
typedef enum{
	E_NOT_OK,
	E_OK
}Std_ReturnType;

#endif /* SERVICES_STD_TYPES_STD_TYPES_H_ */
