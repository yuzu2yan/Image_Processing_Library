#include "template_matching.hpp"


std::vector<std::vector<int>> compute_integral_image(std::vector<std::vector<int>> &gray_scale_values) {
  std::vector<std::vector<int>> integral_image(gray_scale_values.size(), std::vector<int>(gray_scale_values[0].size(), 0));
  for (int i = 0; i < gray_scale_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size(); j++) {
      integral_image[i][j] = gray_scale_values[i][j] + 
                              (i > 0 ? integral_image[i - 1][j] : 0) +
                              (j > 0 ? integral_image[i][j - 1] : 0) -
                              (i > 0 && j > 0 ? integral_image[i - 1][j - 1] : 0);
    }
  }
  return integral_image;
}

std::vector<std::vector<int>> square_image(std::vector<std::vector<int>> &image) {
    std::vector<std::vector<int>> squared_image(image.size(), std::vector<int>(image[0].size(), 0));
    for (int i = 0; i < image.size(); i++) {
        for (int j = 0; j < image[i].size(); j++) {
            squared_image[i][j] = image[i][j] * image[i][j];
        }
    }
    return squared_image;
}

int sum_region(std::vector<std::vector<int>> &integral_image, int x1, int y1, int x2, int y2) {
  return integral_image[x2][y2] - 
         (x1 > 0 ? integral_image[x1 - 1][y2] : 0) - 
         (y1 > 0 ? integral_image[x2][y1 - 1] : 0) + 
         (x1 > 0 && y1 > 0 ? integral_image[x1 - 1][y1 - 1] : 0);
}

std::vector<std::vector<int>> template_matching(std::vector<std::vector<int>> &gray_scale_values, std::vector<std::vector<int>> &template_values) {
  if (template_values.size() > gray_scale_values.size() || 
      template_values[0].size() > gray_scale_values[0].size()) {
    throw std::invalid_argument("Template size is larger than the image.");
  }

  std::vector<std::vector<int>> matched_values;
  int min_rss = INT_MAX;
  int min_x = 0;
  int min_y = 0;

  auto integral_image = compute_integral_image(gray_scale_values);
  auto integral_template = compute_integral_image(template_values);
  auto squared_image = square_image(gray_scale_values);
  auto squared_template = square_image(template_values);
  auto integral_squared_image = compute_integral_image(squared_image);
  auto integral_squared_template = compute_integral_image(squared_template);

  for (int i = 0; i < gray_scale_values.size() - template_values.size(); i++) {
    for (int j = 0; j < gray_scale_values[i].size() - template_values[0].size(); j++) {
      int region_sum = sum_region(integral_image, i, j, i + template_values.size() - 1, j + template_values[0].size() - 1);
      int region_squared_sum = sum_region(integral_squared_image, i, j, i + template_values.size() - 1, j + template_values[0].size() - 1);
      int template_sum = sum_region(integral_template, 0, 0, template_values.size() - 1, template_values[0].size() - 1);
      int template_squared_sum = sum_region(integral_squared_template, 0, 0, template_values.size() - 1, template_values[0].size() - 1);

      double rss = region_squared_sum - 2.0 * (region_sum * region_sum) / static_cast<double>(template_values.size() * template_values[0].size()) + template_squared_sum;
      if (rss < min_rss) {
        min_rss = rss;
        min_x = i;
        min_y = j;
      }
    }
  }
  
  for (int i = 0; i < template_values.size(); i++) {
    std::vector<int> row;
    for (int j = 0; j < template_values[i].size(); j++) {
      row.push_back(gray_scale_values[min_x + i][min_y + j]);
    }
    matched_values.push_back(row);
  }
  std::cout << "RSS: " << min_rss << std::endl;
  
  return matched_values;
}