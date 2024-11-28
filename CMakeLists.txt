cmake_minimum_required(VERSION 3.29)

project(wxtest)

find_package(wxWidgets CONFIG REQUIRED)

set(wxtest_SRCS
    src/main.cpp
)

add_executable(wxtest WIN32 ${wxtest_SRCS})
target_link_libraries(wxtest PRIVATE wx::core wx::base)

# Hack to fix Windows ZIP packaging. Include all DLLs that
# VCPKG compiles in the main directory of the ZIP distribution.
# RUNTIME_DEPENDENCIES can't resolve Windows system DLLs.
if(WIN32)
    install(TARGETS wxtest RUNTIME DESTINATION .)
else()
    install(TARGETS wxtest DESTINATION bin)
endif()
include(CPack)
