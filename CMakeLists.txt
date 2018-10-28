cmake_minimum_required(VERSION 3.10)
project(2_AVL)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)

add_executable(2_AVL
        AVL.cpp
        AVL.h
        input.txt
        main.cpp)
