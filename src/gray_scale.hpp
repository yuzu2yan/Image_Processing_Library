#ifndef GRAY_SCALE_HPP
#define GRAY_SCALE_HPP

#include <vector>
#include <opencv2/opencv.hpp>
#include "read_pixel_values.hpp"

cv::Mat gray_scale(std::vector<std::vector<std::vector<int>>> pixel_values);

#endif // GRAY_SCALE_HPP