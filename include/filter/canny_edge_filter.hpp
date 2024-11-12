#ifndef CANNY_EDGE_FILTER_HPP
#define CANNY_EDGE_FILTER_HPP

#include <vector>
#include <queue>
#include <utility>
#include "gaussian_filter.hpp"
#include "sobel_filter.hpp"

std::vector<std::vector<int>> non_maximum_suppression(std::vector<std::vector<int>> filtered_image, std::vector<std::vector<double>> gradient_values);
std::vector<std::vector<int>> edge_tracking_by_hysteresis(std::vector<std::vector<int>> non_max_suppression, int low_threshold, int high_threshold);
std::vector<std::vector<int>> canny_edge_filter(std::vector<std::vector<int>> gray_scale_values, int low_threshold, int high_threshold);

#endif // CANNY_EDGE_FILTER_HPP