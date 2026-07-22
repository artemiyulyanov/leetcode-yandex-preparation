//
// Created by Артемий on 22/07/2026.
//

#include "TwoSum.h"

std::vector<int> TwoSum::twoSum(std::vector<int> &nums, int target) {
    std::map<int, int> numMap;

    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int complement = target - num;

        if (numMap.contains(complement)) {
            return {numMap[complement], i};
        }

        numMap[num] = i;
    }

    return {};
}
