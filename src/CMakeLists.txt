add_subdirectory(filter)
add_subdirectory(utils)
add_subdirectory(object_detection)

add_executable(main main.cpp)

target_include_directories(main PUBLIC ${OpenCV_INCLUDE_DIRS})

target_link_libraries(main filter utils object_detection ${OpenCV_LIBS})