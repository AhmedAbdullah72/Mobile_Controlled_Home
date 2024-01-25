/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :EEPROM.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/
#ifndef HAL_EEPROM_EEPROM_INTERFACE_H_
#define HAL_EEPROM_EEPROM_INTERFACE_H_

/* Section : Includes */
#include "../../MCAL/TWI/TWI_interface.h"
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"

/* Section : Macro Declarations */
#define ERROR 	0
#define SUCCESS 1
#define EEPROM_Address	 0xA0
#define EEPROM_PAGE_SIZE 8
#define EEPROM_EN_LOW	 0
#define EEPROM_EN_HIGH	 8
#define EEPROM_EN_CFG	 EEPROM_EN_LOW

/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */


typedef enum{
	BLOCK0=0,
	BLOCK1=2,
	BLOCK2=4,
	BLOCK3=6
}enu_EEPROM_Blocks;


/* Section : Function Declarations */
void EEPROM_vinit(void);
u8 EEPROM_u8WriteByte(u8 Copy_u8Address, u8 Copy_u8Data, enu_EEPROM_Blocks Copy_enuBlock);
u8 EEPROM_u8ReadByte(u8 Copy_u8Address, u8 *Copy_u8Data, enu_EEPROM_Blocks Copy_enuBlock);
void EEPROM_vWriteString(u8 Copy_u8Address, u8 *Copy_u8String, enu_EEPROM_Blocks Copy_enuBlock);
void EEPROM_vReadString(u8 Copy_u8Address, u8 *Copy_u8String, enu_EEPROM_Blocks Copy_enuBlock);
#endif /* HAL_EEPROM_EEPROM_INTERFACE_H_ */
