cmake_minimum_required(VERSION 3.8)
project(TwoSum)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c twoSum.h myTwoSum.h)
add_executable(TwoSum ${SOURCE_FILES})