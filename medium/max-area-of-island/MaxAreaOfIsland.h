//
// Created by Артемий on 30/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_MAXAREAOFISLAND_H
#define LEETCODE_YANDEX_PREPARATION_MAXAREAOFISLAND_H

#include <iostream>
#include <vector>

class MaxAreaOfIsland {
public:
    static int dfs(std::vector<std::vector<int>>& grid, int r, int c, int area);
    static int maxAreaOfIsland(std::vector<std::vector<int>>& grid);
};


#endif //LEETCODE_YANDEX_PREPARATION_MAXAREAOFISLAND_H
