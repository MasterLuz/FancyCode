cmake_minimum_required(VERSION 3.15)

project(FancyCode)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory(Source/cpp20)

add_executable(FancyCode ${CMAKE_SOURCE_DIR}/Source/main.cpp)

target_include_directories(FancyCode PRIVATE ${CMAKE_SOURCE_DIR}/Source/cpp20/public)

target_link_libraries(FancyCode PRIVATE cpp20)
