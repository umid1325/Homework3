cmake_minimum_required(VERSION 3.29)
project(Homework3)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Homework3
    main.cpp
    main.h
        problem1.cpp)
add_executable(problem1 problem1.cpp)
