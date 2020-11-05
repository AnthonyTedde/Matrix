cmake_minimum_required(VERSION 3.15)
project(Matrix)

# Set the eigen repository
set(EIGEN_DIR "vendors/eigen")
include_directories(${EIGEN_DIR})

set(CMAKE_CXX_STANDARD 14)

add_executable(Matrix main.cpp)
