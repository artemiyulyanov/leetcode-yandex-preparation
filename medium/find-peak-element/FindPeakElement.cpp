//
// Created by Артемий on 30/07/2026.
//

#include "FindPeakElement.h"

int FindPeakElement::findPeakElement(std::vector<int> &nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = (left + right) / 2;

        if (nums[mid] < nums[mid + 1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    return left;
}
