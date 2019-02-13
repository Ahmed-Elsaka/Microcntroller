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
blinking_led.lss \

EEPROM_IMAGE += \
blinking_led.eep \

SIZEDUMMY += \
sizedummy \


# All Target
all: blinking_led.elf secondary-outputs

# Tool invocations
blinking_led.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,blinking_led.map -mmcu=atmega16 -o "blinking_led.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

blinking_led.lss: blinking_led.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S blinking_led.elf  >"blinking_led.lss"
	@echo 'Finished building: $@'
	@echo ' '

blinking_led.eep: blinking_led.elf
	@echo 'Create eeprom image (ihex format)'
	-avr-objcopy -j .eeprom --no-change-warnings --change-section-lma .eeprom=0 -O ihex blinking_led.elf  "blinking_led.eep"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: blinking_led.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega16 blinking_led.elf
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(ELFS)$(OBJS)$(ASM_DEPS)$(EEPROM_IMAGE)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) blinking_led.elf
	-@echo ' '

secondary-outputs: $(LSS) $(EEPROM_IMAGE) $(SIZEDUMMY)

.PHONY: all clean dependents
.SECONDARY:

-include ../makefile.targets
