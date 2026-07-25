//
// Created by Артемий on 26/07/2026.
//

#include "SubarraySumEqualsK.h"

int SubarraySumEqualsK::subarraySum(std::vector<int> &nums, int k) {
    int count = 0;
    int prefixSum = 0;
    std::unordered_map<int, int> seen;

    seen[0] = 1;

    for (auto& num : nums) {
        prefixSum += num;

        int start = 0;

        if (seen.contains(prefixSum - k)) {
            start = seen[prefixSum - k];
        }

        count += start;

        seen[prefixSum] = seen.contains(prefixSum) ? seen[prefixSum] + 1: 1;
    }

    return count;
}
