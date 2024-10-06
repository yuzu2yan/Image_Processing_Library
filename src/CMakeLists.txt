cmake_minimum_required(VERSION 3.10)
project(gray_scale)

find_package(OpenCV REQUIRED)

add_executable(${PROJECT_NAME} gray_scale.cpp read_pixel_values.cpp main.cpp)

target_link_libraries(${PROJECT_NAME} ${OpenCV_LIBS})