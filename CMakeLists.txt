cmake_minimum_required(VERSION 3.25)
project(WZSTL)

set(CMAKE_CXX_STANDARD 17)

add_executable(WZSTL Test/main.cpp WZSTL/vector.h WZSTL/list.h)
