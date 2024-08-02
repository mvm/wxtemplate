cmake_minimum_required(VERSION 3.10)

project(wxtest)

find_package(wxWidgets CONFIG REQUIRED)

add_executable(wxtest main.cpp)
target_link_libraries(wxtest PRIVATE wx::core wx::base)
