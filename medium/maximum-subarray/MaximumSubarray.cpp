//
// Created by Артемий on 23/07/2026.
//

#include "MaximumSubarray.h"

int MaximumSubarray::maxSubArray(std::vector<int> &nums) {
    int cur_sum = nums[0];
    int largest_sum = cur_sum;

    if (nums.size() <= 1) return cur_sum;

    for (int i = 1; i < nums.size(); i++) {
        cur_sum = std::max(cur_sum + nums[i], nums[i]);
        largest_sum = std::max(largest_sum, cur_sum);
    }

    return largest_sum;
}
