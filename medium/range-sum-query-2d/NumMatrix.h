//
// Created by Артемий on 24/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_NUMMATRIX_H
#define LEETCODE_YANDEX_PREPARATION_NUMMATRIX_H

#include <iostream>
#include <vector>

class NumMatrix {
public:
    std::vector<std::vector<int>> prefixSum;

    NumMatrix(std::vector<std::vector<int>>& matrix);

    int sumRegion(int row1, int col1, int row2, int col2);
private:
    std::vector<std::vector<int>>& matrix;
    int rows, cols;

    std::vector<std::vector<int>> findPrefixSum1D() const;
    std::vector<std::vector<int>> findPrefixSum2D() const;
};


#endif //LEETCODE_YANDEX_PREPARATION_NUMMATRIX_H
