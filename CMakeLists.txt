cmake_minimum_required(VERSION 3.13)
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(clion_template C CXX ASM)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

add_executable(clion_template
        src/main.c
        )

target_link_libraries(clion_template pico_stdlib)
#pico_enable_stdio_usb(clion_template 1)
pico_enable_stdio_uart(clion_template 1)

pico_add_extra_outputs(clion_template)
