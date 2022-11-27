cmake_minimum_required(VERSION 3.5.1)

project(IMITATOR_WORKERA C CXX)

find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

set(CMAKE_CXX_STANDARD 20)

include_directories(
        include
)

set(SOURCE_FILES src/main.cpp src/Reader.cpp include/Reader.h src/ConvertImage.cpp include/ConvertImage.h)

add_executable(IMITATOR_WORKERA ${SOURCE_FILES})

target_link_libraries(IMITATOR_WORKERA ${OpenCV_LIBS})