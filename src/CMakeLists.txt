project(HelloWorld)
cmake_minimum_required(VERSION 3.0)


add_executable(HelloWorld
    BaseAnimal.cpp
    Cow.cpp
    main.cpp
)

target_include_directories(HelloWorld PUBLIC
    ${CMAKE_SOURCE_DIR}/../include
)
