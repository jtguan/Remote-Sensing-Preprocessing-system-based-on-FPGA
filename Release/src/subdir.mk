################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/hw8.cpp \
../src/tsw9.cpp 

OBJS += \
./src/hw8.o \
./src/tsw9.o 

CPP_DEPS += \
./src/hw8.d \
./src/tsw9.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: SDS++ Compiler'
	sds++ -Wall -O3 -I"../src" -c -fmessage-length=0 -MT"$@" -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<" -sds-hw conv2d_1 hw8.cpp  -clkid 1 -sds-end -sds-sys-config a53_linux -sds-proc a53_linux -sds-pf "zcu102"
	@echo 'Finished building: $<'
	@echo ' '


