add_library(filter 
            canny_edge_filter.cpp
            prewitt_filter.cpp 
            sobel_filter.cpp 
            mean_filter.cpp 
            median_filter.cpp 
            gaussian_filter.cpp)
target_include_directories(filter PUBLIC ${PROJECT_SOURCE_DIR}/include/filter)