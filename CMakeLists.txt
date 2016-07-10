cmake_minimum_required(VERSION 2.8)
project(opengl_study)

#find_package(CUDA REQUIRED)
find_package(OpenGL REQUIRED)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES src/main.cpp)
add_executable(opengl_study ${SOURCE_FILES})
target_link_libraries(opengl_study gl glu glut)