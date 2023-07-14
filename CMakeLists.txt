cmake_minimum_required(VERSION 3.23)
project(STL)

set(CMAKE_CXX_STANDARD 14)

add_executable(STL "std array.cpp" )

add_executable(STL2 "std vector.cpp")

add_executable(STL3 "std vector container.cpp")

add_executable(STL4 "queue.cpp")

add_executable(STL5 "stl forward list.cpp")

add_executable(STL6 "stl maps.cpp")

add_executable(STL7 "stl multimap.cpp")