#ifndef GAUSSIAN_FILTER_HPP
#define GAUSSIAN_FILTER_HPP

#include <vector>
#include <cmath>

std::vector<std::vector<double>> create_gaussian_kernel(int kernel_size, double sigma);
std::vector<std::vector<int>> gaussian_filter(std::vector<std::vector<int>> gray_scale_values, int kernel_size, double sigma);

#endif // GAUSSIAN_FILTER_HPP