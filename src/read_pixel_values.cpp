#include "read_pixel_values.hpp"

std::vector<std::vector<std::vector<int>>> read_pixel_values(cv::Mat img) {
  std::vector<std::vector<std::vector<int>>> pixel_values;
  for (int i = 0; i < img.rows; i++) {
    std::vector<std::vector<int>> row;
    for (int j = 0; j < img.cols; j++) {
      std::vector<int> pixel;
      for (int k = 0; k < img.channels(); k++) {
        pixel.push_back(img.at<cv::Vec3b>(i, j)[k]);
      }
      row.push_back(pixel);
    }
    pixel_values.push_back(row);
  }
  return pixel_values;
}
