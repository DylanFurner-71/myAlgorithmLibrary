cmake_minimum_required(VERSION 3.19)
project(FurnerAlgo)

set(CMAKE_CXX_STANDARD 14)

add_library(FurnerAlgo Driver.cpp searchInterface.cpp sortInterface.cpp)