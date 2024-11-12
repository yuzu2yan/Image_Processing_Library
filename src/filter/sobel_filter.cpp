#include "sobel_filter.hpp"

std::vector<std::vector<double>> gradient_magnitude(std::vector<std::vector<int>> gray_scale_values) {
  std::vector<std::vector<double>> gradient_values(gray_scale_values.size(), std::vector<double>(gray_scale_values[0].size(), 0));
  std::vector<std::vector<int>> sobel_kernel_x = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
  std::vector<std::vector<int>> sobel_kernel_y = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      int gx = 0;
      int gy = 0;
      for (int k = 0; k < sobel_kernel_x.size(); k++) {
        for (int l = 0; l < sobel_kernel_x[k].size(); l++) {
          if (i + k < 0 || i + k >= gray_scale_values.size() || j + l < 0 || j + l >= gray_scale_values[i].size()) {
            gx += 0;
            gy += 0;
            continue;
          }
          gx += sobel_kernel_x[k][l] * gray_scale_values[i + k][j + l];
          gy += sobel_kernel_y[k][l] * gray_scale_values[i + k][j + l];
        }
      }
      gradient_values[i][j] = atan2(gy, gx); // Angle in radians
    }
  }

  return gradient_values;
}

std::vector<std::vector<int>> sobel_filter(std::vector<std::vector<int>> gray_scale_values) {
  std::vector<std::vector<int>> sobel_values(gray_scale_values.size(), std::vector<int>(gray_scale_values[0].size(), 0));
  std::vector<std::vector<int>> sobel_kernel_x = {{-1, 0, 1}, {-2, 0, 2}, {-1, 0, 1}};
  std::vector<std::vector<int>> sobel_kernel_y = {{-1, -2, -1}, {0, 0, 0}, {1, 2, 1}};

  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
        int gx = 0;
        int gy = 0;
        for (int k = 0; k < sobel_kernel_x.size(); k++) {
          for (int l = 0; l < sobel_kernel_x[k].size(); l++) {
            if (i + k < 0 || i + k >= gray_scale_values.size() || j + l < 0 || j + l >= gray_scale_values[i].size()) {
              gx += 0;
              gy += 0;
              continue;
            }
            gx += sobel_kernel_x[k][l] * gray_scale_values[i + k][j + l];
            gy += sobel_kernel_y[k][l] * gray_scale_values[i + k][j + l];
          }
        }
        sobel_values[i][j] = sqrt(pow(gx, 2) + pow(gy, 2));
        if (sobel_values[i][j] > 255) {
          sobel_values[i][j] = 255;
        }
    }
  }

  return sobel_values;
}