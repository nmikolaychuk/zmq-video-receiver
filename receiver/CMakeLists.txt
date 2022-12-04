cmake_minimum_required(VERSION 3.5.1)

project(RECEIVER C CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(
        include
)

set(SOURCE_FILES src/main.cpp)

add_executable(RECEIVER ${SOURCE_FILES})