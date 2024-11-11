#include "main.hpp"

int main() {
  cv::Mat img = cv::imread("./../../images/356195440_10234923472730657_4874638015857572311_n.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }
  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_values(img);
  std::vector<std::vector<int>> gray_scale_values = gray_scale(pixel_values);
  std::vector<std::vector<int>> sobel_values = sobel_filter(gray_scale_values);
  std::vector<std::vector<int>> prewitt_values = prewitt_filter(gray_scale_values);

  cv::Mat sobel_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < sobel_values.size(); i++) {
    for (int j = 0; j < sobel_values[i].size(); j++) {
      sobel_img.at<uchar>(i, j) = sobel_values[i][j];
    }
  }
  cv::imwrite("./../../images/sobel.jpg", sobel_img);

  cv::Mat prewitt_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < prewitt_values.size(); i++) {
    for (int j = 0; j < prewitt_values[i].size(); j++) {
      prewitt_img.at<uchar>(i, j) = prewitt_values[i][j];
    }
  }
  cv::imwrite("./../../images/prewitt.jpg", prewitt_img);

  cv::Mat gray_scale_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      gray_scale_img.at<uchar>(i, j) = gray_scale_values[i][j];
    }
  }
  cv::imwrite("./../../images/gray_scale.jpg", gray_scale_img);

  return 0;
}