# ${CMAKE_SOURCE_DIR}/theapp/CMakeLists.txt
cmake_minimum_required(VERSION 3.12...3.16)

# This app (theapp) uses a static library, hence including the directories
message(STATUS "path to include files - ${CMAKE_SOURCE_DIR}")

include_directories(${CMAKE_SOURCE_DIR}/mylib_static)

link_directories(${CMAKE_LIBRARY_OUTPUT_DIRECTORY})

# creating of the application - theapp.exe
add_executable(theapp main.cpp)

target_link_libraries(theapp PUBLIC mylib_static)
