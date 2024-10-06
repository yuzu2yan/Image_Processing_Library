#include "main.hpp"

int main() {
  cv::Mat img = cv::imread("./../../images/448496350_10236880151926414_449852386664593366_n.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }
  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_values(img);
  std::vector<std::vector<int>> gray_scale_values = gray_scale(pixel_values);
  std::vector<std::vector<int>> binarized_values = binarization(gray_scale_values);

  cv::Mat binarized_img(img.rows, img.cols, CV_8UC1);
  for (int i = 0; i < binarized_values.size(); i++) {
    for (int j = 0; j < binarized_values[i].size(); j++) {
      binarized_img.at<uchar>(i, j) = binarized_values[i][j];
    }
  }

  cv::imwrite("./../../images/binarized_img.jpg", binarized_img);
  return 0;
}