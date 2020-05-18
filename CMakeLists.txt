cmake_minimum_required (VERSION 2.6)

project (task1_12)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -fopenmp")

add_executable(task main.cpp cstring.cpp cstring.hpp cstring0.cpp cstring0.hpp cstring1.cpp cstring1.hpp autotest.cpp autotest.hpp)
