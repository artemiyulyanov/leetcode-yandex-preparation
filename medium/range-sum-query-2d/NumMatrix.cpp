//
// Created by Артемий on 24/07/2026.
//

#include "NumMatrix.h"

NumMatrix::NumMatrix(std::vector<std::vector<int> > &matrix) : rows(matrix.size()), cols(matrix[0].size()), matrix(matrix), prefixSum(rows, std::vector<int>(cols, 0)) {
    prefixSum = findPrefixSum2D();
}

std::vector<std::vector<int>> NumMatrix::findPrefixSum1D() const {
    std::vector<std::vector<int>> prefixSum1D(rows, std::vector<int>(cols, 0));

    for (int row = 0; row < rows; ++row) {
        for (int col = 0; col < cols; col++) {
            int left = (col == 0) ? 0 : prefixSum1D[row][col - 1];
            prefixSum1D[row][col] = left + matrix[row][col];
        }
    }

    return prefixSum1D;
}

std::vector<std::vector<int>> NumMatrix::findPrefixSum2D() const {
    std::vector<std::vector<int>> prefixSum1D = findPrefixSum1D();
    std::vector<std::vector<int>> prefixSum2D(rows+1, std::vector<int>(cols+1, 0));

    for (int row = 1; row <= rows; ++row) {
        for (int col = 1; col <= cols; col++) {
            prefixSum2D[row][col] = prefixSum2D[row - 1][col] + prefixSum1D[row - 1][col - 1];
        }
    }

    return prefixSum2D;
}

int NumMatrix::sumRegion(int row1, int col1, int row2, int col2) {
    row1++;
    col1++;

    row2++;
    col2++;

    return prefixSum[row2][col2] - prefixSum[row2][col1 - 1] + prefixSum[row1 - 1][col1 - 1] - prefixSum[row1 - 1][col2];
}