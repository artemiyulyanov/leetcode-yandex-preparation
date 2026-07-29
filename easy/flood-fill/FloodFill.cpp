//
// Created by Артемий on 30/07/2026.
//

#include "FloodFill.h"

void FloodFill::dfs(std::vector<std::vector<int> > &image, int r, int c, int target, int color, std::vector<std::vector<bool>>& visited) {
    if (r < 0 || r >= image.size() || c < 0 || c >= image[0].size() || visited[r][c] || image[r][c] != target) return;

    image[r][c] = color;
    visited[r][c] = true;

    dfs(image, r + 1, c, target, color, visited);
    dfs(image, r - 1, c, target, color, visited);
    dfs(image, r, c + 1, target, color, visited);
    dfs(image, r, c - 1, target, color, visited);
}

std::vector<std::vector<int>> FloodFill::floodFill(std::vector<std::vector<int> > &image, int sr, int sc, int color) {
    std::vector<std::vector<bool>> visited(image.size(), std::vector<bool>(image[0].size(), false));

    dfs(image, sr, sc, image[sr][sc], color, visited);
    return image;
}
