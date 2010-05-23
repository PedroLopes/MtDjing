################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
O_SRCS += \
../src/CoreApp.o 

CPP_SRCS += \
../src/AudioManager.cpp \
../src/BasicManager.cpp \
../src/CoreApp.cpp \
../src/MyThreadTing.cpp \
../src/VisualizationManager.cpp \
../src/xmlParser.cpp 

OBJS += \
./src/AudioManager.o \
./src/BasicManager.o \
./src/CoreApp.o \
./src/MyThreadTing.o \
./src/VisualizationManager.o \
./src/xmlParser.o 

CPP_DEPS += \
./src/AudioManager.d \
./src/BasicManager.d \
./src/CoreApp.d \
./src/MyThreadTing.d \
./src/VisualizationManager.d \
./src/xmlParser.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o"$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


