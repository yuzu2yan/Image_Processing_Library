#ifndef TEMPLATE_MATCHING_HPP
#define TEMPLATE_MATCHING_HPP

#include <vector>
#include <climits>
#include <iostream>

std::vector<std::vector<int>> compute_integral_image(std::vector<std::vector<int>> &gray_scale_values);
std::vector<std::vector<int>> square_image(std::vector<std::vector<int>> &image);
int sum_region(std::vector<std::vector<int>> &integral_image, int x1, int y1, int x2, int y2);
std::vector<std::vector<int>> template_matching(std::vector<std::vector<int>> &gray_scale_values, std::vector<std::vector<int>> &template_values);

#endif // TEMPLATE_MATCHING_HPP