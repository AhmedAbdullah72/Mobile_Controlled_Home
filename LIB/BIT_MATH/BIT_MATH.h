/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :BIT_MATH.h     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/
#ifndef BIT_MATH_H_
#define BIT_MATH_H_

//function to set a bit to 1
#define SET_BIT(REG_Name, BIT_No) (REG_Name |= (1<<BIT_No))

//function to toggle a bit (0 to 1 or 1 to 0)
#define TOG_BIT(REG_Name, BIT_No) (REG_Name ^= (1<<BIT_No))

//function to clear a bit to 0
#define CLR_BIT(REG_Name, BIT_No) (REG_Name &= (~(1<<BIT_No)))

//function to read a bit
#define GET_BIT(REG_Name, BIT_No) ((REG_Name>>BIT_No) & 1)

#endif /* BIT_MATH_H_ */
