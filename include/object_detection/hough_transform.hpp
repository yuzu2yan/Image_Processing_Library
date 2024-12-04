#ifndef HOUGH_TRANSFORM_HPP
#define HOUGH_TRANSFORM_HPP

#include <vector>

std::vector<std::vector<int>> houghTransform(const std::vector<std::vector<int>>& edgeImage, int thetaSteps, int& maxRho);
std::vector<std::pair<int, int>> detectLines(const std::vector<std::vector<int>>& houghSpace, int threshold);
std::vector<std::vector<int>> drawLines(const std::vector<std::pair<int, int>>& lines, int rows, int cols, int maxRho);

#endif // HOUGH_TRANSFORM_HPP