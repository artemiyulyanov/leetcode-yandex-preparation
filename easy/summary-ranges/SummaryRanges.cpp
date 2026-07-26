//
// Created by Артемий on 26/07/2026.
//

#include "SummaryRanges.h"

void SummaryRanges::fillArray(std::vector<std::string>& intervals, int start, int end) {
    intervals.push_back(std::to_string(start) + "->" + std::to_string(end));
}

void SummaryRanges::fillArray(std::vector<std::string>& intervals, int number) {
    intervals.push_back(std::to_string(number));
}

std::vector<std::string> SummaryRanges::summaryRanges(std::vector<int>& nums) {
    std::vector<std::string> res;

    std::ranges::sort(nums.begin(), nums.end());

    if (nums.size() <= 0) return res;

    int start = nums[0], count = 1;

    for (int i = 1; i < nums.size(); ++i) {
        long long dist = static_cast<long long>(nums[i]) - static_cast<long long>(nums[i - 1]);

        if (dist > 1) {
            if (count == 1) {
                fillArray(res, start);
            } else {
                fillArray(res, start, nums[i - 1]);
            }

            start = nums[i];
            count = 1;
        } else {
            count++;
        }
    }

    if (start == nums[nums.size() - 1]) {
        fillArray(res, start);
    } else {
        fillArray(res, start, nums[nums.size() - 1]);
    }

    return res;
}