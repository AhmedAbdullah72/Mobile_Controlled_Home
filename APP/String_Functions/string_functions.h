/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :string_functions.h     **********************/
/*************** Version : 1.0            **********************/
/* File          : string_functions.h                                  	     */
/* Date          : Apr 25, 2023	                                         */
/* Version       : V1                                                    */
/* GitHub        : https://github.com/Piistachyoo             		     */
/*************************************************************************/

#ifndef APPLICATION_STRING_FUNCTIONS_STRING_FUNCTIONS_H_
#define APPLICATION_STRING_FUNCTIONS_STRING_FUNCTIONS_H_

/* Section : Includes */
#include "../../LIB/STD_TYPES/STD_TYPES.h"
#include "../../LIB/BIT_MATH/BIT_MATH.h"

/* Section : Macro Declarations */
#define array_max_size		20
/* Section : Macro Functions Declarations */

/* Section : Data Type Declarations */

/* Section : Function Declarations */
void app_copy_string(u8* Copy_u8InputString, u8* Copy_u8OutputString, u8 Copy_u8Length);
void app_clear_string(u8* Copy_u8InputString, u8 Copy_u8Length);

#endif /* APPLICATION_STRING_FUNCTIONS_STRING_FUNCTIONS_H_ */
