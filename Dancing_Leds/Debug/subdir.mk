################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../LED_main.c \
../LED_prog.c \
../delay_prog.c \
../sevenSegment_prog.c 

OBJS += \
./LED_main.o \
./LED_prog.o \
./delay_prog.o \
./sevenSegment_prog.o 

C_DEPS += \
./LED_main.d \
./LED_prog.d \
./delay_prog.d \
./sevenSegment_prog.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.c
	@echo 'Building file: $<'
	@echo 'Invoking: AVR Compiler'
	avr-gcc -Wall -g2 -gstabs -O0 -fpack-struct -fshort-enums -ffunction-sections -fdata-sections -std=gnu99 -funsigned-char -funsigned-bitfields -mmcu=atmega32 -DF_CPU=8000000UL -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -c -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


