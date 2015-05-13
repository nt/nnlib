cmake_minimum_required (VERSION 2.6)
project (NNLib)

include_directories("/usr/include/eigen3")

add_library(Layer layer.cc layer.h)
