cmake_minimum_required(VERSION 3.10)

project(wxtest)

find_package(wxWidgets CONFIG REQUIRED)

set(wxtest_SRCS
    src/main.cpp
)

add_executable(wxtest WIN32 ${wxtest_SRCS})
target_link_libraries(wxtest PRIVATE wx::core wx::base)

install(TARGETS wxtest RUNTIME DESTINATION bin)
include(CPack)
