cmake_minimum_required(VERSION 3.13)
project(Project_2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project_2
        expression.h
        literal.h
        module3.cpp
        operand.cpp
        operand.h
        parse.cpp
        parse.h
        plus.h
        subexpression.cpp
        subexpression.h
        symboltable.cpp
        symboltable.h
        variable.cpp
        variable.h minus.h times.h divide.h greaterthan.h lessthan.h equalto.h andop.h orop.h conditional.h negate.h)
