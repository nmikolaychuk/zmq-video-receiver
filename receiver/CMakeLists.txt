cmake_minimum_required(VERSION 3.5.1)

project(RECEIVER C CXX)

set(CMAKE_CXX_STANDARD 20)

file(GLOB SOURCE_FILES
        "src/*.h"
        "src/*.cpp"
        )

add_executable(RECEIVER ${SOURCE_FILES})