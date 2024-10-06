#include "read_pixel_value.hpp"

std::vector<std::vector<std::vector<int>>> read_pixel_value(cv::Mat img) {
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

int main() {
  cv::Mat img = cv::imread("./../../images/10269115_10207430442382081_6243397035484154848_o.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }
  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_value(img);
  std::cout << "Pixel value at (0, 0): ";
  for (int i = 0; i < img.channels(); i++) {
    std::cout << pixel_values[0][0][i] << " ";
  }
  std::cout << std::endl;
}