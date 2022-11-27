cmake_minimum_required(VERSION 3.5.1)

project(IMITATOR_WORKERA C CXX)

set(CMAKE_CXX_STANDARD 20)

include_directories(
        include
)

set(SOURCE_FILES src/main.cpp)

add_executable(IMITATOR_WORKERA ${SOURCE_FILES})