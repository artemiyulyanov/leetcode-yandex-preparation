//
// Created by Артемий on 23/07/2026.
//

#include "TrappingRainWater.h"

int TrappingRainWater::trap(std::vector<int> &height) {
    size_t n = height.size();
    int total = 0;

    std::vector<int> prefix(n, -1);
    std::vector<int> suffix(n, -1);

    for (int i = 1; i < n; i++) {
        prefix[i] = std::max(prefix[i - 1], height[i - 1]);
    }

    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = std::max(suffix[i + 1], height[i + 1]);
    }

    for (int i = 0; i < n; i++) {
        total += std::max(0, std::min(prefix[i], suffix[i]) - height[i]);
    }

    return total;
}
