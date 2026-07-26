//
// Created by Артемий on 26/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_SEARCHMATRIX_H
#define LEETCODE_YANDEX_PREPARATION_SEARCHMATRIX_H

#include <vector>
#include <iostream>

class SearchMatrix {
public:
    static bool searchInRow(std::vector<int>& nums, int target);
    static bool searchMatrix(std::vector<std::vector<int>>& matrix, int target);
};


#endif //LEETCODE_YANDEX_PREPARATION_SEARCHMATRIX_H
