#include "main.hpp"

int main() {
  cv::Mat img = cv::imread("./../../images/10269115_10207430442382081_6243397035484154848_o.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }
  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_values(img);
  cv::Mat gray_scale_img = gray_scale(pixel_values);
  cv::imwrite("./../../images/gray_scale.jpg", gray_scale_img);
  return 0;
}