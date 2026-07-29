//
// Created by Артемий on 30/07/2026.
//

#include "NumberOfIslands.h"

void NumberOfIslands::dfs(std::vector<std::vector<char>> &grid, int r, int c) {
    if (r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == '0') return;

    grid[r][c] = '0';

    dfs(grid, r + 1, c);
    dfs(grid, r - 1, c);
    dfs(grid, r, c - 1);
    dfs(grid, r, c + 1);
}

int NumberOfIslands::numIslands(std::vector<std::vector<char>> &grid) {
    int count = 0;

    for (int r = 0; r < grid.size(); r++) {
        for (int c = 0; c < grid[0].size(); c++) {
            if (grid[r][c] == '0') continue;

            count++;
            dfs(grid, r, c);
        }
    }

    return count;
}
