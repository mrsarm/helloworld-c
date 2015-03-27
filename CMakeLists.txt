cmake_minimum_required(VERSION 2.8.4)
project(helloworld)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

set(SOURCE_FILES main.c)
add_executable(helloworld ${SOURCE_FILES} say_hello.h say_hello.c)

add_custom_target(clean-all
  rm -fR ${CMAKE_BINARY_DIR}/helloworld
         ${CMAKE_BINARY_DIR}/CMakeCache.txt
         ${CMAKE_BINARY_DIR}/cmake_install.cmake
         ${CMAKE_BINARY_DIR}/Makefile
         ${CMAKE_BINARY_DIR}/CMakeFiles
)
