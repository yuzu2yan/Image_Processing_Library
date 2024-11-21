#include "main.hpp"

int main() {
  cv::Mat img = cv::imread("./../../images/356195440_10234923472730657_4874638015857572311_n.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }
  cv::Mat template_img = cv::imread("./../../images/template.jpg");
  if (template_img.empty()) {
    std::cerr << "Could not open or find the template image." << std::endl;
    return -1;
  }

  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_values(img);
  std::vector<std::vector<std::vector<int>>> template_values = read_pixel_values(template_img);
  std::vector<std::vector<int>> gray_scale_values = gray_scale(pixel_values);
  std::vector<std::vector<int>> gray_scale_template_values = gray_scale(template_values);
  std::vector<std::vector<int>> matched_values = template_matching(gray_scale_values, gray_scale_template_values);

  cv::Mat matched_img = cv::Mat::zeros(template_img.size(), CV_8UC1);
  for (int i = 0; i < matched_values.size(); i++) {
    for (int j = 0; j < matched_values[i].size(); j++) {
      matched_img.at<uchar>(i, j) = matched_values[i][j];
    }
  }
  cv::imwrite("./../../images/matched.jpg", matched_img);

  cv::Mat gray_scale_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      gray_scale_img.at<uchar>(i, j) = gray_scale_values[i][j];
    }
  }
  cv::imwrite("./../../images/gray_scale.jpg", gray_scale_img);

  return 0;
}