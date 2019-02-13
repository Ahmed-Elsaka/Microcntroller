################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include ../makefile.init

RM := rm -rf

# All of the sources participating in the build are defined here
-include sources.mk
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
SWI_DRIVER_INITAL.lss \

FLASH_IMAGE += \
SWI_DRIVER_INITAL.hex \

SIZEDUMMY += \
sizedummy \


# All Target
all: SWI_DRIVER_INITAL.elf secondary-outputs

# Tool invocations
SWI_DRIVER_INITAL.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,SWI_DRIVER_INITAL.map -mmcu=atmega32 -o "SWI_DRIVER_INITAL.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

SWI_DRIVER_INITAL.lss: SWI_DRIVER_INITAL.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S SWI_DRIVER_INITAL.elf  >"SWI_DRIVER_INITAL.lss"
	@echo 'Finished building: $@'
	@echo ' '

SWI_DRIVER_INITAL.hex: SWI_DRIVER_INITAL.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex SWI_DRIVER_INITAL.elf  "SWI_DRIVER_INITAL.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: SWI_DRIVER_INITAL.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega32 SWI_DRIVER_INITAL.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) SWI_DRIVER_INITAL.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
