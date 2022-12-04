cmake_minimum_required(VERSION 3.5.1)

project(WORKER_IMITATOR C CXX)

set(CMAKE_CXX_STANDARD 20)

find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

include(FindProtobuf)
find_package(Protobuf REQUIRED)
include_directories(${PROTOBUF_INCLUDE_DIR})

# to find *.bp.h files
include_directories(${CMAKE_CURRENT_BINARY_DIR})

protobuf_generate_cpp(PROTO_SRC PROTO_HEADER stories/proto/Message.proto)
add_library(proto ${PROTO_HEADER} ${PROTO_SRC})


include_directories(
        include
)

set(SOURCE_FILES src/main.cpp src/Reader.cpp include/Reader.h src/ConvertImage.cpp include/ConvertImage.h include/GenerateProto.h src/GenerateProto.cpp)

add_executable(WORKER_IMITATOR ${SOURCE_FILES})

target_link_libraries(WORKER_IMITATOR ${OpenCV_LIBS})
target_link_libraries(WORKER_IMITATOR proto ${PROTOBUF_LIBRARY})
