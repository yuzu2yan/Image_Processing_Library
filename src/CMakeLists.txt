cmake_minimum_required(VERSION 3.10)
project(binarization)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} binarization.cpp gray_scale.cpp read_pixel_values.cpp main.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})