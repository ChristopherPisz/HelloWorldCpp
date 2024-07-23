cmake_minimum_required(VERSION 3.0)

include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

add_library(helloapp
    main.cpp
)

target_link_libraries(helloapp PUBLIC
    hellolib
)
