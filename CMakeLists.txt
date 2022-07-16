cmake_minimum_required(VERSION 3.2)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

set_property(GLOBAL PROPERTY USE_FOLDERS "On")

project(spider)

source_group( " "  REGULAR_EXPRESSION .*)

add_executable(spider
    main.cpp
    Board.cpp
    Board.h
    Card.cpp
    Card.h
    Stockpile.cpp
    Stockpile.h)

set_property(TARGET spider PROPERTY CXX_STANDARD 23)