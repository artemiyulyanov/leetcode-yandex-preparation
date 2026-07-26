//
// Created by Артемий on 26/07/2026.
//

#include "SearchMatrix.h"

bool SearchMatrix::searchInRow(std::vector<int>& nums, int target) {
    int left = 0, right = nums.size()-1;
    int mid;

    while (left <= right) {
        mid = (left + right) / 2;

        if (nums[mid] == target) return true;

        if (nums[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return false;
}

bool SearchMatrix::searchMatrix(std::vector<std::vector<int> > &matrix, int target) {
    size_t columns = matrix[0].size();

    int left = 0, right = matrix.size() - 1;
    int mid = (left + right) / 2;

    while (left <= right && left >= 0 && right < matrix.size() && !(target >= matrix[mid][0] && target <= matrix[mid][columns-1])) {
        mid = (left + right) / 2;

        if (target == matrix[mid][columns-1] || target == matrix[mid][0]) return true;

        if (target > matrix[mid][columns-1]) {
            left = mid + 1;
        } else if (target < matrix[mid][0]) {
            right = mid - 1;
        }
    }

    return searchInRow(matrix[mid], target);
}
