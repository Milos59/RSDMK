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
Doxygen.lss \

FLASH_IMAGE += \
Doxygen.hex \

SIZEDUMMY += \
sizedummy \

AVRDUDEDUMMY += \
avrdudedummy \


# All Target
all: Doxygen.elf secondary-outputs

# Tool invocations
Doxygen.elf: $(OBJS) $(USER_OBJS)
	@echo 'Building target: $@'
	@echo 'Invoking: AVR C Linker'
	avr-gcc -Wl,-Map,Doxygen.map -mmcu=atmega328p -o "Doxygen.elf" $(OBJS) $(USER_OBJS) $(LIBS)
	@echo 'Finished building target: $@'
	@echo ' '

Doxygen.lss: Doxygen.elf
	@echo 'Invoking: AVR Create Extended Listing'
	-avr-objdump -h -S Doxygen.elf  >"Doxygen.lss"
	@echo 'Finished building: $@'
	@echo ' '

Doxygen.hex: Doxygen.elf
	@echo 'Create Flash image (ihex format)'
	-avr-objcopy -R .eeprom -R .fuse -R .lock -R .signature -O ihex Doxygen.elf  "Doxygen.hex"
	@echo 'Finished building: $@'
	@echo ' '

sizedummy: Doxygen.elf
	@echo 'Invoking: Print Size'
	-avr-size --format=avr --mcu=atmega328p Doxygen.elf
	@echo 'Finished building: $@'
	@echo ' '

avrdudedummy: Doxygen.elf
	@echo 'Invoking: AVRDude'
	C:\Users\Kolovic\Desktop\Eclipse\eclipse\bin\avrdude -pm328p -carduino -PCOM5 -Uflash:w:Doxygen.hex:a
	@echo 'Finished building: $@'
	@echo ' '

# Other Targets
clean:
	-$(RM) $(FLASH_IMAGE)$(ELFS)$(OBJS)$(ASM_DEPS)$(AVRDUDEDUMMY)$(S_DEPS)$(SIZEDUMMY)$(S_UPPER_DEPS)$(LSS)$(C_DEPS) Doxygen.elf
	-@echo ' '

secondary-outputs: $(LSS) $(FLASH_IMAGE) $(SIZEDUMMY) $(AVRDUDEDUMMY)

.PHONY: all clean dependents

-include ../makefile.targets
