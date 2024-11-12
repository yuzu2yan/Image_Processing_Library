#ifndef READ_PIXEL_VALUES_HPP
#define READ_PIXEL_VALUES_HPP

#include <opencv2/opencv.hpp>
#include <vector>

std::vector<std::vector<std::vector<int>>> read_pixel_values(cv::Mat img);

#endif // READ_PIXEL_VALUE_HPP