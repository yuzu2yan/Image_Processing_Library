#include "main.hpp"

int main() {
  cv::Mat img = cv::imread("./../../images/356195440_10234923472730657_4874638015857572311_n.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }
  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_values(img);
  std::vector<std::vector<int>> gray_scale_values = gray_scale(pixel_values);
  std::vector<std::vector<int>> edge_values = canny_edge_filter(gray_scale_values, 130, 230);

  cv::Mat edge_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < edge_values.size(); i++) {
    for (int j = 0; j < edge_values[i].size(); j++) {
      edge_img.at<uchar>(i, j) = edge_values[i][j];
    }
  }
  cv::imwrite("./../../images/edge.jpg", edge_img);

  cv::Mat gray_scale_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      gray_scale_img.at<uchar>(i, j) = gray_scale_values[i][j];
    }
  }
  cv::imwrite("./../images/gray_scale.jpg", gray_scale_img);

  return 0;
}