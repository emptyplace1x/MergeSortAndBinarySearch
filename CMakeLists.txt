cmake_minimum_required(VERSION 3.23)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
project(ms_and_bs C)

set(SOURCES
    src/main.c 
)

add_executable(ms_and_bs ${SOURCES})

target_include_directories(ms_and_bs
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/include
)
