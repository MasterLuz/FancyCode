cmake_minimum_required(VERSION 3.15)

project(cpp20)

file(GLOB_RECURSE SOURCES
    *.cpp
    *.h
)

add_library(cpp20 STATIC ${SOURCES})

target_include_directories(cpp20 PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/public/cpp20)