add_library(utils SHARED binarization.cpp gray_scale.cpp read_pixel_values.cpp)

target_include_directories(utils PUBLIC ${PROJECT_SOURCE_DIR}/include/utils)