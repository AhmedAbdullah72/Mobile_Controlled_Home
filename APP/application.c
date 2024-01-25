/***************************************************************/
/***************  Name   : Ahmed Abdullah **********************/
/***************  Date   : 20/1/2024      **********************/
/***************  SWC    :application.c     **********************/
/*************** Version : 1.0            **********************/
/***************************************************************/
#include "application.h"



// Application states
enu_app_states Current_State;

// Input variables
u8 temp_char;
u8 char_counter = 0;
u8 input_temp_string[array_max_size];
u8 input_username_string[array_max_size];
u8 input_psw_string[array_max_size];

// Servo Configuration
SERVO_PWM_cfg_t SERVO1 = {
	.ServoPWM.PWM_TimerChannel = TIMER1_FastICR,
	.ServoPWM.PWM_TimerPrescale = PRE_64,
	.ServoPWM.PWM_ToggleMode = PWM_OCmode,
	.ServoPWM.PWM_InvertOrNot = PWM_NonInvertingMode,
	.ServoInitialDirection = SERVO_0,
	.ICR_Value = 2500,
	.OCR_0degree_Value = 100,
	.OCR_90degree_Value = 188,
	.OCR_180degree_Value = 250
};

// Timer Configuration
TMR_cfg_t TIMER2 = {
	.TMR_TimerChannel = TIMER2_NORMAL,
	.TMR_ToggleMode = TMR_InterruptMode,
	.TMR_OCMode = OC_Disconnected,
	.TMR_Prescale = PRE_1024
}; // overflow time = 32.768ms

void app_vInit(void){
	// Initialize hardware components
	SERVO_vInit(&SERVO1);
	SERVO_vStart(&SERVO1);
	Bluetooth_vInit();
	EEPROM_vinit();
	databaseLoad();
	TMR_vInit(&TIMER2);
	Bluetooth_vEnable();
	Current_State = locked_user_input;

	// Initialize variables
}

void app_ReceiveInput(void){
	while(temp_char != '\r'){
		temp_char = Bluetooth_u8ReceiveData();
		Bluetooth_vSendData(temp_char);
		if(temp_char != '\r'){
			if(char_counter < array_max_size){
				input_temp_string[char_counter] = temp_char;
				char_counter++;
			}
		}
	}
	temp_char = 0;
	Bluetooth_vSendString((u8*)"\r\n");
	switch(Current_State){
		case locked_user_input:
			// Save entered username and jump to locked_psw_input state
			app_copy_string(input_temp_string, input_username_string, char_counter);
			app_clear_string(input_temp_string, char_counter);
			char_counter = 0;
			break;
		case locked_psw_input:
			// Save entered password and check if username and password are correct
			app_copy_string(input_temp_string, input_psw_string, char_counter);
			app_clear_string(input_temp_string, char_counter);
			char_counter = 0;
			break;
		case unlocked_normal_user:
			// Save current command and execute it
			// Function to handle the command
			break;
		default:
			// Do Nothing
			break;
	}
}
