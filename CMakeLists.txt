cmake_minimum_required(VERSION 3.6)
project(TommyL123_hw6)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp src/Circle.h src/Rectangle.h src/Square.h src/Circle.cpp src/Circle.h src/Rectangle.cpp src/Rectangle.h src/Square.cpp src/Square.h src/test.cpp src/test.h src/Circle.h src/Square.h src/Rectangle.h)
add_executable(TommyL123_hw6 ${SOURCE_FILES})