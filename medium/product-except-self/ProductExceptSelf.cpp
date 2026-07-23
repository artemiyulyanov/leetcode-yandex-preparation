//
// Created by Артемий on 23/07/2026.
//

#include "ProductExceptSelf.h"

std::vector<int> ProductExceptSelf::productExceptSelf(std::vector<int>& nums) {
    size_t n = nums.size();

    std::vector<int> answer(n, 1);
    std::vector<int> prefix(n, 1);
    std::vector<int> suffix(n, 1);

    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    return answer;
}