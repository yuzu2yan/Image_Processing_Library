#include "main.hpp"

int main() {
  cv::Mat img = cv::imread("./../../images/69956739_10223708091713141_1536520968141275136_n.jpg");
  if (img.empty()) {
    std::cerr << "Could not open or find the image." << std::endl;
    return -1;
  }

  std::vector<std::vector<std::vector<int>>> pixel_values = read_pixel_values(img);
  std::vector<std::vector<int>> gray_scale_values = gray_scale(pixel_values);
  std::vector<std::vector<int>> edgeImage = canny_edge_filter(gray_scale_values, 20, 230);
  std::vector<std::vector<int>> binarized_values = binarization(edgeImage);
  int maxRho = 0;
  std::vector<std::vector<int>> houghSpace = houghTransform(binarized_values, 360, maxRho);
  std::vector<std::pair<int, int>> lines = detectLines(houghSpace, 55);
  std::vector<std::vector<int>> lineImage = drawLines(lines, img.rows, img.cols, maxRho);

  cv::Mat gray_scale_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      gray_scale_img.at<uchar>(i, j) = gray_scale_values[i][j];
    }
  }
  cv::imwrite("./../../images/gray_scale.jpg", gray_scale_img);

  cv::Mat binarized_img = cv::Mat::zeros(img.size(), CV_8UC1);  
  for (int i = 0; i < binarized_values.size(); i++) {
    for (int j = 0; j < binarized_values[i].size(); j++) {
      binarized_img.at<uchar>(i, j) = binarized_values[i][j];
    }
  }
  cv::imwrite("./../../images/binarized.jpg", binarized_img);

  cv::Mat hough_img = cv::Mat::zeros(img.size(), CV_8UC1);
  for (int i = 0; i < lineImage.size(); i++) {
    for (int j = 0; j < lineImage[i].size(); j++) {
      hough_img.at<uchar>(i, j) = lineImage[i][j];
    }
  }
  cv::imwrite("./../../images/hough.jpg", hough_img);

  return 0;
}