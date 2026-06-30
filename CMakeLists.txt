cmake_minimum_required(VERSION 3.16)


get_filename_component(PROJECT_NAME_FROM_DIR "${CMAKE_CURRENT_SOURCE_DIR}" NAME)
project(${PROJECT_NAME_FROM_DIR} VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

find_package(raylib REQUIRED)


add_executable(${PROJECT_NAME} src/main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE raylib)
