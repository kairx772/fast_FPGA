cmake_minimum_required(VERSION 2.8.9)
project(fast_FPGA)

#find_package (eigen3 3.0 REQUIRED NO_MODULE)


#Bring the headers, such as Student.h into the project
include_directories(include)

#Can manually add the sources using the set command as follows:
#set(SOURCES src/mainapp.cpp src/fast_detector.cpp)

#However, the file(GLOB...) allows for wildcard additions:
file(GLOB SOURCES "src/*.cpp")

add_executable(fast_FPGA ${SOURCES})
target_link_libraries (fast_FPGA)
