cmake_minimum_required(VERSION 3.18.4)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(googletest-1.13.0)


include(GoogleTest)
enable_testing()
add_executable(test_target main-test.cpp)
target_link_libraries(test_target PRIVATE gtest gmock gtest_main)
gtest_discover_tests(test_target)

add_executable(untitled main.cpp)
