#ifndef READ_PIXEL_VALUE_HPP
#define READ_PIXEL_VALUE_HPP

#include <opencv2/opencv.hpp>
#include <iostream>
#include <vector>

std::vector<std::vector<std::vector<int>>> read_pixel_value(cv::Mat img);

#endif // READ_PIXEL_VALUE_HPP