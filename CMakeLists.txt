cmake_minimum_required(VERSION 3.8)
project(Cpp17)

set(CMAKE_CXX_STANDARD 17)

set(SOURCE_FILES main.cpp Milk.cpp Milk.h)
add_executable(Cpp17 ${SOURCE_FILES})