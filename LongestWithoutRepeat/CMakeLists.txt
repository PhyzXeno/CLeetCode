cmake_minimum_required(VERSION 3.8)
project(LongestWithoutRepeat)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c LongestWithoutRepeat.h)
add_executable(LongestWithoutRepeat ${SOURCE_FILES})