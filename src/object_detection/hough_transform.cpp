#include "hough_transform.hpp"

std::vector<std::vector<int>> houghTransform(const std::vector<std::vector<int>>& edgeImage, int thetaSteps, int& maxRho) {
  int rows = edgeImage.size();
  int cols = edgeImage[0].size();
  maxRho = std::sqrt(rows * rows + cols * cols);
  std::vector<std::vector<int>> houghSpace(2 * maxRho, std::vector<int>(thetaSteps, 0));

  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      if (edgeImage[i][j] == 255) { // edge pixel
        for (int theta = 0; theta < thetaSteps; theta++) {
          double thetaRad = theta * M_PI / 180.0;
          int rho = static_cast<int>(i * cos(thetaRad) + j * sin(thetaRad)) + maxRho;
          if (rho >= 0 && rho < 2 * maxRho) {
            houghSpace[rho][theta]++;
          }
        }
      }
    }
  }

  return houghSpace;
}

std::vector<std::pair<int, int>> detectLines(const std::vector<std::vector<int>>& houghSpace, int threshold) {
  std::vector<std::pair<int, int>> lines;
  for (int rho = 0; rho < houghSpace.size(); rho++) {
    for (int theta = 0; theta < houghSpace[rho].size(); theta++) {
      if (houghSpace[rho][theta] >= threshold) {
        lines.emplace_back(rho, theta);
      }
    }
  }

  return lines;
}

std::vector<std::vector<int>> drawLines(const std::vector<std::pair<int, int>>& lines, int rows, int cols, int maxRho) {
  std::vector<std::vector<int>> lineImage(rows, std::vector<int>(cols, 0));
  for (const auto& line : lines) {
    int rho = line.first - maxRho;
    double thetaRad = line.second * M_PI / 180.0;

    for (int x = 0; x < cols; x++) {
      int y = static_cast<int>((rho - x * std::cos(thetaRad)) / std::sin(thetaRad));
      if (y >= 0 && y < rows) {
        lineImage[y][x] = 255;
      }
    }
  }

  return lineImage;
}