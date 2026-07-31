//
// Created by Артемий on 01/08/2026.
//

#include "MaximumAverageSubarray.h"

double MaximumAverageSubarray::findMaxAverage(std::vector<int> &nums, int k) {
    size_t length = nums.size();

    if (k > length) return 0;

    int l = 0, r = k - 1;

    int sum = 0;
    for (int i = 0; i < k; i++) sum += nums[i];

    int ans = sum;

    while (r < length - 1) {
        sum -= nums[l];

        l++;
        r++;

        sum += nums[r];
        ans = std::max(ans, sum);
    }

    double avg = static_cast<double>(ans) / static_cast<double>(k);

    return avg;
}
