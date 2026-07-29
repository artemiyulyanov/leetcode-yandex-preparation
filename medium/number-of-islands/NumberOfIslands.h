//
// Created by Артемий on 30/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_NUMBEROFISLANDS_H
#define LEETCODE_YANDEX_PREPARATION_NUMBEROFISLANDS_H

#include <iostream>
#include <vector>

class NumberOfIslands {
public:
    static void dfs(std::vector<std::vector<char>>& grid, int r, int c);
    static int numIslands(std::vector<std::vector<char>>& grid);
};


#endif //LEETCODE_YANDEX_PREPARATION_NUMBEROFISLANDS_H
