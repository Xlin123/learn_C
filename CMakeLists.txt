cmake_minimum_required(VERSION 3.28.2)

project(main)

add_executable(${PROJECT_NAME} main.c)

add_subdirectory(adder)

target_link_libraries(${PROJECT_NAME} adder)
