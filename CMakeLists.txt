cmake_minimum_required(VERSION 3.8)
project(Cpp17)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES src/main.cpp Milk/Milk.cpp Milk/Milk.h)
add_executable(Cpp17 ${SOURCE_FILES})