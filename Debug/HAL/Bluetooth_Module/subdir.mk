################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../HAL/Bluetooth_Module/bluetooth.c 

OBJS += \
./HAL/Bluetooth_Module/bluetooth.o 

C_DEPS += \
./HAL/Bluetooth_Module/bluetooth.d 


# Each subdirectory must supply rules for building sources it contributes
HAL/Bluetooth_Module/%.o: ../HAL/Bluetooth_Module/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


