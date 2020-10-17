cmake_minimum_required(VERSION 3.15)
project(rpncalculator)

set(CMAKE_CXX_STANDARD 14)

add_executable(rpncalculator
        main.cpp

        operation.hpp
        abstract_operation.hpp

        addition_operation.hpp
        division_operation.hpp
        multiplication_operation.hpp
        subtraction_operation.hpp

        rpncalculator.cpp
        rpncalculator.hpp
        )