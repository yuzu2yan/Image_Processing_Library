#include "mean_filter.hpp"

std::vector<std::vector<int>> mean_filter(std::vector<std::vector<int>> gray_scale_values, int kernel_size) {
  std::vector<std::vector<int>> filtered_values;
  for (int i = 0; i < gray_scale_values.size(); i++) {
    std::vector<int> filtered_row;
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      int sum = 0;
      int count = 0;
      for (int k = i - kernel_size / 2; k <= i + kernel_size / 2; k++) {
        for (int l = j - kernel_size / 2; l <= j + kernel_size / 2; l++) {
          if (k >= 0 && k < gray_scale_values.size() && l >= 0 && l < gray_scale_values[i].size()) {
            sum += gray_scale_values[k][l];
            count++;
          }
        }
      }
      filtered_row.push_back(sum / count);
    }
    filtered_values.push_back(filtered_row);
  }

  return filtered_values;
}