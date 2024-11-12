#include "canny_edge_filter.hpp"

std::vector<std::vector<int>> non_maximum_suppression(std::vector<std::vector<int>> filtered_image, std::vector<std::vector<double>> gradient_values) {
  std::vector<std::vector<int>> non_max_suppression(filtered_image.size(), std::vector<int>(filtered_image[0].size(), 0));

  for (int i = 1; i < filtered_image.size() - 1; i++) {
    for (int j = 1; j < filtered_image[i].size() - 1; j++) {
      double angle = gradient_values[i][j]; // Angle in degrees
      
      if (-M_PI/8 <= angle && angle < M_PI/8 || 7*M_PI/8 <= angle || angle < -7*M_PI/8) {
        if (filtered_image[i][j] > filtered_image[i][j + 1] && filtered_image[i][j] > filtered_image[i][j - 1]) {
          non_max_suppression[i][j] = filtered_image[i][j];
        }
        else {
          non_max_suppression[i][j] = 0;
        }
      } else if (M_PI/8 <= angle && angle < 3*M_PI/8 || -7*M_PI/8 <= angle && angle < -5*M_PI/8) {
        if (filtered_image[i][j] > filtered_image[i - 1][j + 1] && filtered_image[i][j] > filtered_image[i + 1][j - 1]) {
          non_max_suppression[i][j] = filtered_image[i][j];
        }
        else {
          non_max_suppression[i][j] = 0;
        }
      } else if (3*M_PI/8 <= angle && angle < 5*M_PI/8 || -5*M_PI/8 <= angle && angle < -3*M_PI/8) {
        if (filtered_image[i][j] > filtered_image[i - 1][j] && filtered_image[i][j] > filtered_image[i + 1][j]) {
          non_max_suppression[i][j] = filtered_image[i][j];
        }
        else {
          non_max_suppression[i][j] = 0;
        }
      } else if (5*M_PI/8 <= angle && angle < 7*M_PI/8 || -3*M_PI/8 <= angle && angle < -M_PI/8) {
        if (filtered_image[i][j] > filtered_image[i - 1][j - 1] && filtered_image[i][j] > filtered_image[i + 1][j + 1]) {
          non_max_suppression[i][j] = filtered_image[i][j];
        }
        else {
          non_max_suppression[i][j] = 0;
        }
      }
    }
  }

  return non_max_suppression;
}


std::vector<std::vector<int>> edge_tracking_by_hysteresis(std::vector<std::vector<int>> non_max_suppression, int low_threshold, int high_threshold) {
  std::vector<std::vector<bool>> edge_visited(non_max_suppression.size(), std::vector<bool>(non_max_suppression[0].size(), false));
  std::queue<std::pair<int, int>> edge_queue;

  for (int i = 0; i < non_max_suppression.size(); i++) {
    for (int j = 0; j < non_max_suppression[i].size(); j++) {
      if (non_max_suppression[i][j] >= high_threshold) edge_visited[i][j] = true;
      edge_queue.push(std::make_pair(i, j));
    }
  }

  const int dx[] = {-1, 0, 1, -1, 1, -1, 0, 1};
  const int dy[] = {-1, -1, -1, 0, 0, 1, 1, 1};
  while (!edge_queue.empty()) {
    std::pair<int, int> current = edge_queue.front();
    edge_queue.pop();

    for (int i = 0; i < 8; i++) {
      int x = current.first + dx[i];
      int y = current.second + dy[i];

      if (x >= 0 && x < non_max_suppression.size() && y >= 0 && y < non_max_suppression[x].size() && !edge_visited[x][y] && non_max_suppression[x][y] >= low_threshold) {
        edge_visited[x][y] = true;
        edge_queue.push(std::make_pair(x, y));
      }
    }
  }

  for (int i = 0; i < non_max_suppression.size(); i++) {
    for (int j = 0; j < non_max_suppression[i].size(); j++) {
      if (!edge_visited[i][j]) non_max_suppression[i][j] = 0;
    }
  }

  return non_max_suppression;
}

std::vector<std::vector<int>> canny_edge_filter(std::vector<std::vector<int>> gray_scale_values, int low_threshold, int high_threshold) {
  // Apply Gaussian filter to the image
  std::vector<std::vector<int>> blurred_image = gaussian_filter(gray_scale_values, 3, 1.0);

  // Apply Sobel filter to the image
  std::vector<std::vector<int>> filtered_image = sobel_filter(blurred_image);
  std::vector<std::vector<double>> gradient_values = gradient_magnitude(blurred_image);

  // Apply non-maximum suppression to the image
  std::vector<std::vector<int>> non_max_suppression = non_maximum_suppression(filtered_image, gradient_values);

  // Apply edge tracking by hysteresis to the image
  std::vector<std::vector<int>> edge_tracking = edge_tracking_by_hysteresis(non_max_suppression, low_threshold, high_threshold);

  return edge_tracking;
}