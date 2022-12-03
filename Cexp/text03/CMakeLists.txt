cmake_minimum_required(VERSION 3.16)
project(text03 C)

set(CMAKE_C_STANDARD 99)

add_executable(text03 main.c)
target_link_libraries(text03 m)