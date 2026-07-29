//
// Created by Артемий on 30/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_FLOODFILL_H
#define LEETCODE_YANDEX_PREPARATION_FLOODFILL_H

#include <iostream>
#include <vector>

class FloodFill {
public:
    static void dfs(std::vector<std::vector<int> > &image, int r, int c, int target, int color, std::vector<std::vector<bool>>& visited);
    static std::vector<std::vector<int>> floodFill(std::vector<std::vector<int>>& image, int sr, int sc, int color);
};


#endif //LEETCODE_YANDEX_PREPARATION_FLOODFILL_H
