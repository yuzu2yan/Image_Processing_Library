#include "binarization.hpp"

std::vector<std::vector<int> > binarization(std::vector<std::vector<int> > gray_scale_values) {
  std::vector<int> histogram(256, 0);
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      histogram[gray_scale_values[i][j]]++;
    }
  }

  // Otsu's method
  int threshold = 0;
  double max_variance = 0;
  for (int i = 0; i < histogram.size(); i++) {
    int white_pixels = 0, black_pixels = 0;
    int sum_white = 0, sum_black = 0;
    for (int j = 0; j < i; j++) {
      black_pixels += histogram[j];
      sum_black += j * histogram[j];
    }
    for (int j = i; j < histogram.size(); j++) {
      white_pixels += histogram[j];
      sum_white += j * histogram[j];
    }
    // prevent division by zero
    if (black_pixels == 0 || white_pixels == 0) {
      continue;
    }
    double mean_black = 0, mean_white = 0;
    mean_black = sum_black / black_pixels;
    mean_white = sum_white / white_pixels;
    double variance = black_pixels * white_pixels * pow(mean_black - mean_white, 2);
    if (variance > max_variance) {
      max_variance = variance;
      threshold = i;
    }
  }

  std::vector<std::vector<int> > binarized_values;
  for (int i = 0; i < gray_scale_values.size(); i++) {
    std::vector<int> binarized_row;
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      if (gray_scale_values[i][j] > threshold) {
        binarized_row.push_back(255);
      } else {
        binarized_row.push_back(0);
      }
    }
    binarized_values.push_back(binarized_row);
  }

  return binarized_values;
}