/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :normal.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/

#ifndef APPLICATION_NORMAL_USER_NORMAL_H_
#define APPLICATION_NORMAL_USER_NORMAL_H_

/* Section : Includes */
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"
#include "../application.h"
#include <string.h>
/* Section : Macro Declarations */

#define ARR_MAX_SIZE      20
#define TWO_EQUAL_ARR	  0
#define ZERO_INDEX		  0
/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */

typedef enum
{
	IDLE_COMMAND,
	LED_ON,
	LED_OFF,
	DOOR_OPEN,
	DOOR_CLOSE,
	LOGOUT,
	WRONG_COMMAND
}EN_COMMAND_MODES;

/* Section : Function Declarations */

void getCommand(void);
EN_COMMAND_MODES setCommand(void);
u8 normalUserInterface(void);


#endif /* APPLICATION_NORMAL_USER_NORMAL_H_ */
