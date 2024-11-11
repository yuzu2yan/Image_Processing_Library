#include "gray_scale.hpp"

std::vector<std::vector<int>> gray_scale(std::vector<std::vector<std::vector<int>>> pixel_values) {
  std::vector<std::vector<int>> gray_scale_values;
  for (int i = 0; i < pixel_values.size(); i++) {
    std::vector<int> gray_scale_row;
    for (int j = 0; j < pixel_values[i].size(); j++) {
      int gray_scale_pixel = 0.3 * pixel_values[i][j][2] + 0.59 * pixel_values[i][j][1] + 0.11 * pixel_values[i][j][0];
      gray_scale_row.push_back(gray_scale_pixel);
    }
    gray_scale_values.push_back(gray_scale_row);
  }
  return gray_scale_values;
}
