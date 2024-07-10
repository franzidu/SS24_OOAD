cmake_minimum_required(VERSION 3.16)
project(Strategy)

set(CMAKE_CXX_STANDARD 14)

add_executable(Inheritance main.cpp Navigation.cpp Navigation.h EconomicStrategy.cpp EconomicStrategy.h FastStrategy.cpp FastStrategy.h ScenicStrategy.cpp ScenicStrategy.h
        Display2dStrategy.h
        Display2dStrategy.cpp
        Display3dStrategy.h
        Display3dStrategy.cpp)
