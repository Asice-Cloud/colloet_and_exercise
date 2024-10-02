cmake_minimum_required(VERSION 3.28)
project(mine)
set(CMAKE_CXX_STANDARD 23)
find_package(jsoncpp REQUIRED)
add_executable(static_reflect
        static_reflect.h
        static_reflect.cpp)
target_link_libraries(static_reflect jsoncpp_lib)
