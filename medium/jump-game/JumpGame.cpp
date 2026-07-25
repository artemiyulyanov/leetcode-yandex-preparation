//
// Created by Артемий on 26/07/2026.
//

#include "JumpGame.h"

bool JumpGame::canJump(std::vector<int> &nums) {
    size_t n = nums.size();
    int farthest = 0;

    for (int i = 0; i < n; i++) {
        if (i > farthest) return false;

        farthest = std::max(farthest, i + nums[i]);

        if (farthest >= n) return true;
    }

    return true;
}
