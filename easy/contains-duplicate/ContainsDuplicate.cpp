//
// Created by Артемий on 22/07/2026.
//

#include "ContainsDuplicate.h"

bool ContainsDuplicate::containsDuplicate(std::vector<int> &nums) {
    std::ranges::sort(nums);

    for (int i = 0; i < nums.size() - 1; i++) {
        if (nums[i] == nums[i + 1]) return true;
    }

    return false;
}
