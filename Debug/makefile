################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
-include MCAL/UART/subdir.mk
-include MCAL/TWI/subdir.mk
-include MCAL/TMR/subdir.mk
-include MCAL/PWM/subdir.mk
-include MCAL/GIE/subdir.mk
-include MCAL/DIO/subdir.mk
-include HAL/SERVO/subdir.mk
-include HAL/EEPROM/subdir.mk
-include HAL/Bluetooth_Module/subdir.mk
-include APP/User_Management/subdir.mk
-include APP/String_Functions/subdir.mk
-include APP/Password_Check/subdir.mk
-include APP/Normal_User/subdir.mk
-include APP/Master_User/subdir.mk
-include APP/subdir.mk
-include subdir.mk
-include objects.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif
ifneq ($(strip $(S_DEPS)),)
-include $(S_DEPS)
endif
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif
endif

-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables 
LSS += \
Mobile_Controlled_Home.lss \

FLASH_IMAGE += \
Mobile_Controlled_Home.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: Mobile_Controlled_Home.elf secondary-outputs

# Tool invocations
Mobile_Controlled_Home.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Mobile_Controlled_Home.map -mmcu=atmega32 -o "Mobile_Controlled_Home.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Mobile_Controlled_Home.lss: Mobile_Controlled_Home.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Mobile_Controlled_Home.elf  >"Mobile_Controlled_Home.lss"
	@echo 'Finished building: $@'
	@echo ' '

Mobile_Controlled_Home.hex: Mobile_Controlled_Home.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Mobile_Controlled_Home.elf  "Mobile_Controlled_Home.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Mobile_Controlled_Home.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 Mobile_Controlled_Home.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Mobile_Controlled_Home.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
