cmake_minimum_required(VERSION 3.0.0) 
set(app "cjson-cases") 
project(${app} VERSION 0.1.0) 
# todo copy dll to build debug
include_directories(${CMAKE_CURRENT_LIST_DIR}/cjson)
link_directories(${CMAKE_CURRENT_LIST_DIR}/cjson)
link_libraries(cjson)
add_executable(${app} main.cpp ./cjson/cJSON.h)