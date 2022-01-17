cmake_minimum_required(VERSION 3.20)
project(Verwaltung_Nr2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Verwaltung_Nr2
        angebot.cpp
        angebot.h
        ferienprogramm.cpp
        ferienprogramm.h
        kind.cpp
        kind.h
        main.cpp)
