cmake_minimum_required(VERSION 2.8)
project(helloworld)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/bin")

set(SOURCE_FILES main.c)
add_executable(helloworld ${SOURCE_FILES} say_hello.h say_hello.c)

set(TEST_SOURCE_FILES test/test_say_hello.c)
add_executable(test_say_hello ${TEST_SOURCE_FILES} say_hello.h say_hello.c)

add_custom_target(clean-all
  make clean && rm -fR ${CMAKE_BINARY_DIR}/CMakeCache.txt
                       ${CMAKE_BINARY_DIR}/cmake_install.cmake
                       ${CMAKE_BINARY_DIR}/Makefile
                       ${CMAKE_BINARY_DIR}/CMakeFiles
             && rmdir  ${CMAKE_BINARY_DIR}/bin
)
