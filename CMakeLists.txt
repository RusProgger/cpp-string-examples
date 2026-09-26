cmake_minimum_required(VERSION 3.15)
project(cpp-string-examples)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(cpp-string-examples
    src/erase.cpp
)

target_include_directories(cpp-string-examples PRIVATE ${CMAKE_SOURCE_DIR}/include)
