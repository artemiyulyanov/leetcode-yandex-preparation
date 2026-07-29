//
// Created by Артемий on 30/07/2026.
//

#include "MaxAreaOfIsland.h"

int MaxAreaOfIsland::dfs(std::vector<std::vector<int>>& grid, int r, int c, int area) {
    if (r < 0 || c < 0 || r >= grid.size() || c >= grid[0].size() || grid[r][c] == 0) return 0;

    grid[r][c] = 0;

    int total = 1 + dfs(grid, r + 1, c, area) + dfs(grid, r - 1, c, area) + dfs(grid, r, c + 1, area) + dfs(grid, r, c - 1, area);

    return total;
}

int MaxAreaOfIsland::maxAreaOfIsland(std::vector<std::vector<int>>& grid) {
    int maxArea = 0;

    for (int r = 0; r < grid.size(); r++) {
        for (int c = 0; c < grid[0].size(); c++) {
            if (grid[r][c] == 0) continue;

            int area = dfs(grid, r, c, 0);
            maxArea = std::max(maxArea, area);
        }
    }

    return maxArea;
}
