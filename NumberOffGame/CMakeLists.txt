cmake_minimum_required(VERSION 3.8)
project(NumberOffGame)

set(CMAKE_C_STANDARD 99)

set(SOURCE_FILES main.c NumberOffGame.h)
add_executable(NumberOffGame ${SOURCE_FILES})