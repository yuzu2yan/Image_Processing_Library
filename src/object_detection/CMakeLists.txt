add_library(object_detection SHARED hough_transform.cpp template_matching.cpp)

target_include_directories(object_detection PUBLIC ${PROJECT_SOURCE_DIR}/include/object_detection)