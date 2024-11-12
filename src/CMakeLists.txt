add_subdirectory(filter)
add_subdirectory(utils)

add_executable(main main.cpp)

target_include_directories(main PUBLIC ${OpenCV_INCLUDE_DIRS})

target_link_libraries(main filter utils ${OpenCV_LIBS})