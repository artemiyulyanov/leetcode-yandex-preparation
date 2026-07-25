//
// Created by Артемий on 26/07/2026.
//

#include "RotateArray.h"

void RotateArray::rotate(std::vector<int> &nums, int k) {
    k %= nums.size();

    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}
