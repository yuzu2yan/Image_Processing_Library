#include "gray_scale.hpp"

cv::Mat gray_scale(std::vector<std::vector<std::vector<int>>> pixel_values) {
  std::vector<std::vector<int>> gray_scale_values;
  for (int i = 0; i < pixel_values.size(); i++) {
    std::vector<int> gray_scale_row;
    for (int j = 0; j < pixel_values[i].size(); j++) {
      int gray_scale_pixel = 0.3 * pixel_values[i][j][2] + 0.59 * pixel_values[i][j][1] + 0.11 * pixel_values[i][j][0];
      gray_scale_row.push_back(gray_scale_pixel);
    }
    gray_scale_values.push_back(gray_scale_row);
  }
  
  cv::Mat gray_scale_img(pixel_values.size(), pixel_values[0].size(), CV_8UC1); // 8-bit unsigned char, 1 channel
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      gray_scale_img.at<uchar>(i, j) = gray_scale_values[i][j];
    }
  }
  return gray_scale_img;
}
