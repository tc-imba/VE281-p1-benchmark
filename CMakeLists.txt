CMAKE_MINIMUM_REQUIRED(VERSION 3.5)

# Only for syntax cjeck in Clion
project(p1_benchmark)
include_directories(/usr/include/node)
add_library(p1_benchmark sort_wrapper.cpp)
