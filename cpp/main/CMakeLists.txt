cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(MYDB VERSION 1.0)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/lib/grpc/lib/cmake/grpc")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_CURRENT_SOURCE_DIR}/lib/grpc/lib/cmake/protobuf")

# control where the static and shared libraries are built so that on windows
# we don't need to tinker with the path to run the executable
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${PROJECT_BINARY_DIR}")

list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/proto")
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/tkrzw")
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/grpc")
# list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/poco")

add_subdirectory(proto)
# should we use our own math functions
add_executable(server server.cpp)
add_executable(client client.cpp)
find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)
target_link_libraries(server gRPC::grpc++)
target_link_libraries(server proto)
target_link_libraries(server ${PROJECT_SOURCE_DIR}/lib/tkrzw/lib/libtkrzw.a)
# target_link_libraries(server ${PROJECT_SOURCE_DIR}/lib/poco/lib/libPocoUtil.so)
target_include_directories(server PUBLIC
                           "${PROJECT_BINARY_DIR}"
                           ${EXTRA_INCLUDES}
                           )
target_link_libraries(client gRPC::grpc++)
target_link_libraries(client proto)
target_include_directories(client PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            ${EXTRA_INCLUDES}
                            )
