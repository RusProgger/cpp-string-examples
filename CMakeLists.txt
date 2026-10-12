cmake_minimum_required(VERSION 3.15)
project(cpp-string-examples)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(erase
    src/erase.cpp
)

add_executable(insert
    src/insert.cpp
)

add_executable(insert_practic
    src/insert_practic.cpp
)

target_include_directories(erase PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(insert PRIVATE ${CMAKE_SOURCE_DIR}/include)
target_include_directories(insert_practic PRIVATE ${CMAKE_SOURCE_DIR}/include)