cmake_minimum_required(VERSION 2.8.12)
project(robocalc_examples)

# Deactivate RPATH for MacOSX
set(CMAKE_MACOSX_RPATH 0)

set(CMAKE_CXX_FLAGS "-std=c++11")

# Set the path where CMake will find additional scripts
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_SOURCE_DIR}/cmake)

# Find the ARGoS package, make sure to save the ARGoS prefix
find_package(PkgConfig)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH})

# Set ARGoS include dir
include_directories(${CMAKE_SOURCE_DIR})
include_directories(${CMAKE_SOURCE_DIR}/RoboCalcAPI)

# Set Curses link dir
link_directories(/usr/lib/x86_64-linux-gnu/)

add_library(ppsim_robocalc MODULE 
Operations.cpp Operations.h LTo_Step.cpp LTo_Step.h LTo_Module.cpp LTo_Module.h 
LTo_Controller.cpp LTo_Controller.h LTo_State_Machine.cpp LTo_State_Machine.h
LTo_Attributes.cpp LTo_Attributes.h
LTiStep.cpp LTiStep.h LTin_Step.cpp LTin_Step.h LTin_Module.cpp LTin_Module.h
LTin_Controller.cpp LTin_Controller.h LTin_State_Machine.cpp LTin_State_Machine.h
LTin_Attributes.cpp LTin_Attributes.h
LTiModule.cpp LTiModule.h LTiController.cpp LTiController.h LTi_State_Machine.cpp LTi_State_Machine.h
LTi_Attributes.cpp LTi_Attributes.h
HardwareComponent.h Functions.cpp Functions.h DataTypes.h System_Parameters.cpp System_Parameters.h
./RoboCalcAPI/Channel.h
./RoboCalcAPI/Event.h
./RoboCalcAPI/State.cpp ./RoboCalcAPI/State.h
./RoboCalcAPI/Controller.h
./RoboCalcAPI/Optional.h
)


