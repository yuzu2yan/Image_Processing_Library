#include "main.hpp"

int main() {
  cv::Mat img = cv::imread("./../../images/10382092_10207430436141925_4049554338188553602_o.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }
  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_values(img);
  std::vector<std::vector<int>> gray_scale_values = gray_scale(pixel_values);
  std::vector<std::vector<int>> binarized_values = binarization(gray_scale_values);
  std::vector<std::vector<int>> mean_filtered_values = mean_filter(gray_scale_values, 9);
  std::vector<std::vector<int>> gaussian_filtered_values = gaussian_filter(gray_scale_values, 9, 1.41);
  std::vector<std::vector<int>> median_filtered_values = median_filter(gray_scale_values, 9);

  cv::Mat mean_filtered_img = cv::Mat::zeros(img.size(), img.type());
  for (int i = 0; i < mean_filtered_values.size(); i++) {
    for (int j = 0; j < mean_filtered_values[i].size(); j++) {
      mean_filtered_img.at<cv::Vec3b>(i, j) = cv::Vec3b(mean_filtered_values[i][j], mean_filtered_values[i][j], mean_filtered_values[i][j]);
    }
  }

  cv::Mat gaussian_filtered_img = cv::Mat::zeros(img.size(), img.type());
  for (int i = 0; i < gaussian_filtered_values.size(); i++) {
    for (int j = 0; j < gaussian_filtered_values[i].size(); j++) {
      gaussian_filtered_img.at<cv::Vec3b>(i, j) = cv::Vec3b(gaussian_filtered_values[i][j], gaussian_filtered_values[i][j], gaussian_filtered_values[i][j]);
    }
  }

  cv::Mat median_filtered_img = cv::Mat::zeros(img.size(), img.type());
  for (int i = 0; i < median_filtered_values.size(); i++) {
    for (int j = 0; j < median_filtered_values[i].size(); j++) {
      median_filtered_img.at<cv::Vec3b>(i, j) = cv::Vec3b(median_filtered_values[i][j], median_filtered_values[i][j], median_filtered_values[i][j]);
    }
  }

  cv::Mat gray_scale_img = cv::Mat::zeros(img.size(), img.type());
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      gray_scale_img.at<cv::Vec3b>(i, j) = cv::Vec3b(gray_scale_values[i][j], gray_scale_values[i][j], gray_scale_values[i][j]);
    }
  }

  cv::imwrite("./../../images/mean_filtered_img.jpg", mean_filtered_img);
  cv::imwrite("./../../images/gaussian_filtered_img.jpg", gaussian_filtered_img);
  cv::imwrite("./../../images/median_filtered_img.jpg", median_filtered_img);
  cv::imwrite("./../../images/gray_scale_img.jpg", gray_scale_img);
  return 0;
}