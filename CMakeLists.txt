cmake_minimum_required(VERSION 3.26)
project(PwrExample)

include(FetchContent)
FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

add_library(
    fibonacci
    src/fibonacci.cpp
)

add_executable(
    program
    src/main.cpp
    src/texts.cpp
)

target_link_libraries(
    program
        fibonacci
)

enable_testing()

add_executable(
    tests
    src/tests.cpp
)

target_link_libraries(
    tests
        fibonacci
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(tests)