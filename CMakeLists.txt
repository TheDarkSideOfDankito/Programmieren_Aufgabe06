cmake_minimum_required(VERSION 3.4)
project(06)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -lm -Werror=format=")

set(SOURCE_FILES main.c TextFileReader.c TextFileReader.h Task02.c Task02.h)
add_executable(06 ${SOURCE_FILES} TextFileReader.c TextFileReader.h Task02.c Task02.h)