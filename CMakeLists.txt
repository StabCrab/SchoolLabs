cmake_minimum_required(VERSION 3.10)
project(SchoolLabs)

set(CMAKE_CXX_STANDARD 17)

add_executable(SchoolLabs Matrix/Matrix.c)

add_executable(Minimum LocalMinimum/Minimum.cpp)

add_executable(Candies Candies/Candies.cpp)

add_executable(Couple Couple/Couple.cpp)

add_executable(AnotherCouple AnotherCouple/AnotherCouple.cpp)

add_executable(Points Points/Points.cpp)