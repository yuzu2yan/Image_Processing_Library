cmake_minimum_required(VERSION 3.10)
project(read_pixel_value)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} read_pixel_value.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})