#include "gaussian_filter.hpp"

std::vector<std::vector<double>> create_gaussian_kernel(int kernel_size, double sigma) {
  std::vector<std::vector<double>> kernel(kernel_size, std::vector<double>(kernel_size));
  double sum = 0;
  int radius = kernel_size / 2;
  double sigma_sq = sigma * sigma;

  // Calculate the kernel values
  for (int y = -radius; y <= radius; y++) {
    for (int x = -radius; x <= radius; x++) {
      kernel[y + radius][x + radius] = exp(-(x * x + y * y) / (2 * sigma_sq)) / (2 * M_PI * sigma_sq);
      sum += kernel[y + radius][x + radius];
    }
  }

  for (int i = 0; i < kernel_size; i++) {
    for (int j = 0; j < kernel_size; j++) {
      kernel[i][j] /= sum;
    }
  }

  return kernel;
}

std::vector<std::vector<int>> gaussian_filter(std::vector<std::vector<int>> gray_scale_values, int kernel_size, double sigma) {
  std::vector<std::vector<int>> filtered_values;
  std::vector<std::vector<double>> kernel = create_gaussian_kernel(kernel_size, sigma);
  int radius = kernel_size / 2;

  for (int i = 0; i < gray_scale_values.size(); i++) {
    std::vector<int> filtered_row;
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      double sum = 0;
      for (int k = i - radius; k <= i + radius; k++) {
        for (int l = j - radius; l <= j + radius; l++) {
          if (k >= 0 && k < gray_scale_values.size() && l >= 0 && l < gray_scale_values[i].size()) {
            sum += gray_scale_values[k][l] * kernel[k - i + radius][l - j + radius];
          }
        }
      }
      filtered_row.push_back(sum);
    }
    filtered_values.push_back(filtered_row);
  }

  return filtered_values;
}