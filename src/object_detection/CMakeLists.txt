add_library(object_detection SHARED template_matching.cpp)

target_include_directories(object_detection PUBLIC ${PROJECT_SOURCE_DIR}/include/object_detection)