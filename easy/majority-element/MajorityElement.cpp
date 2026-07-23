//
// Created by Артемий on 23/07/2026.
//

#include "MajorityElement.h"

int MajorityElement::majorityElement(std::vector<int> &nums) {
    int cur = INT_MIN;
    int counted = 0;
    int max_counted = 0;

    int ans = 0;

    std::ranges::sort(nums);

    for (auto& el : nums) {
        if (el != cur || cur == INT_MIN) {
            if (counted > max_counted) {
                ans = cur;
                max_counted = counted;
            }

            cur = el;
            counted = 1;
        } else {
            counted++;
        }
    }

    if (counted > max_counted) {
        ans = cur;
        max_counted = counted;
    }

    return ans;
}
