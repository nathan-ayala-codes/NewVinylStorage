cmake_minimum_required(VERSION 3.16)

project(VinylTracker LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(VinylTracker main.cpp
    vinyl.h vinyl.cpp
    collection.h collection.cpp
    interface.h interface.cpp)

include(GNUInstallDirs)
install(TARGETS VinylTracker
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
