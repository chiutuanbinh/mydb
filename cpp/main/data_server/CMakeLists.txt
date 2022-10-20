add_library(data_server server.hpp server.cpp)
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/lib/grpc/lib/cmake/grpc")
list(APPEND CMAKE_PREFIX_PATH "${CMAKE_SOURCE_DIR}/lib/grpc/lib/cmake/protobuf")
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/tkrzw")
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/proto")
list(APPEND EXTRA_INCLUDES "${CMAKE_SOURCE_DIR}/poco")
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/model")
find_package(Protobuf CONFIG REQUIRED)
find_package(gRPC CONFIG REQUIRED)
find_package(Poco CONFIG REQUIRED Net XML Zip Data Util)
target_link_libraries(data_server gRPC::grpc++)
target_link_libraries(data_server Poco::Util)
target_link_libraries(data_server proto)
target_link_libraries(data_server ${PROJECT_SOURCE_DIR}/lib/tkrzw/lib/libtkrzw.a)
target_link_libraries(data_server model)
target_include_directories(data_server PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            ${EXTRA_INCLUDES}
                            )