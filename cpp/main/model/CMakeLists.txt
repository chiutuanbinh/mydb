add_library(model data.hpp data.cpp)
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/tkrzw")
list(APPEND EXTRA_INCLUDES "${PROJECT_SOURCE_DIR}/poco")
find_package(Poco CONFIG REQUIRED Net XML Zip Data Util)
target_link_libraries(model ${PROJECT_SOURCE_DIR}/lib/tkrzw/lib/libtkrzw.a)
target_include_directories(model PUBLIC
                            "${PROJECT_BINARY_DIR}"
                            ${EXTRA_INCLUDES}
                            )