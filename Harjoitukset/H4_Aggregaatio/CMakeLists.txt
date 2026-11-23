cmake_minimum_required(VERSION 3.16)

project(H4_Aggregaatio LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(H4_Aggregaatio main.cpp
    company.h company.cpp
    employe.h employe.cpp)

include(GNUInstallDirs)
install(TARGETS H4_Aggregaatio
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
