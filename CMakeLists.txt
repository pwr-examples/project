cmake_minimum_required(VERSION 3.26)
project(PwrExample)

add_library(
    fibonacci
    fibonacci.cpp
)

add_executable(
    program
    main.cpp
    texts.cpp
)

target_link_libraries(
    program
    PRIVATE fibonacci
)
