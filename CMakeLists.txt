cmake_minimum_required(VERSION 3.24)
project(helloworld C)

include(FetchContent)
enable_testing()

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_CURRENT_SOURCE_DIR}/out")

include_directories("${CMAKE_SOURCE_DIR}/src")

# Executable "helloworld"
set(SOURCE_FILES src/main.c)
add_executable(helloworld ${SOURCE_FILES} src/say_hello.h src/say_hello.c)

# Fetch cheat.h and cheats.h header files from remote repository before build
FetchContent_Declare(
        cheat_h
        URL      https://github.com/Tuplanolla/cheat/archive/refs/tags/1.0.4.tar.gz
        URL_HASH MD5=30c3edd18d1f6d96e2da0c6682f260b7
        DOWNLOAD_EXTRACT_TIMESTAMP true
)
FetchContent_MakeAvailable(cheat_h)

# Executable with unit tests "test_say_hello"
set(TEST_SOURCE_FILES test/test_say_hello.c)
add_executable(test_say_hello ${TEST_SOURCE_FILES} src/say_hello.h src/say_hello.c)
target_include_directories(test_say_hello PUBLIC "${cheat_h_SOURCE_DIR}")


install(TARGETS helloworld
        DESTINATION ${CMAKE_INSTALL_PREFIX}/bin/)

# To trigger dependencies before `make test`
set_property(DIRECTORY APPEND
        PROPERTY TEST_INCLUDE_FILES
        "${CMAKE_CURRENT_BINARY_DIR}/BuildTestTarget.cmake")
file(WRITE "${CMAKE_CURRENT_BINARY_DIR}/BuildTestTarget.cmake"
        "execute_process(COMMAND \"${CMAKE_COMMAND}\""
        " --build \"${CMAKE_BINARY_DIR}\""
        " --config \"\$ENV{CMAKE_CONFIG_TYPE}\")")


# Unit tests with `make test`
add_test(test_coo ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/test_say_hello)

add_custom_target(clean-all
  make clean && rm -fR ${CMAKE_BINARY_DIR}/CMakeCache.txt
                       ${CMAKE_BINARY_DIR}/*.cmake
                       ${CMAKE_BINARY_DIR}/Makefile
                       ${CMAKE_BINARY_DIR}/CMakeFiles
                       ${CMAKE_BINARY_DIR}/cmake-build-debug
                       ${CMAKE_BINARY_DIR}/cmake-build-release
                       ${CMAKE_BINARY_DIR}/install_manifest.txt
                       ${CMAKE_BINARY_DIR}/Testing
                       ${CMAKE_BINARY_DIR}/_deps
             && rmdir  ${CMAKE_BINARY_DIR}/out
)
