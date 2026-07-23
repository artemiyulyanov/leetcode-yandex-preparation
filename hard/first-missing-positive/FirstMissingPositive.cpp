//
// Created by Артемий on 23/07/2026.
//

#include "FirstMissingPositive.h"

int FirstMissingPositive::firstMissingPositive(std::vector<int> &nums) {
    size_t n = nums.size();

    for (int i = 0; i < n; i++) {
        while (nums[i] >= 1 && nums[i] <= n && nums[nums[i] - 1] != nums[i]) {
            int correct_idx = nums[i] - 1;
            std::swap(nums[correct_idx], nums[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;
}
