cmake_minimum_required(VERSION 3.5.1)

project(ZMQ-RECEIVER C CXX)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(receiver)
add_subdirectory(worker_imitator)