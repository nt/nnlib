cmake_minimum_required (VERSION 2.6)
project (NNLib)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

include_directories("/usr/include/eigen3")

add_library(Layer layer.cc layer.h)

add_executable(Demo main.cpp)

target_link_libraries(Demo Layer)
