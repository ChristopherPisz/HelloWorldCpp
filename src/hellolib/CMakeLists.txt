cmake_minimum_required(VERSION 3.0)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

add_library(hellolib
    BaseAnimal.cpp
    Cow.cpp
)

