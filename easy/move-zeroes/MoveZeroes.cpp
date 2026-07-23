//
// Created by Артемий on 23/07/2026.
//

#include "MoveZeroes.h"

void MoveZeroes::moveZeroes(std::vector<int> &nums) {
    int left = 0, right = 0;

    while (right < nums.size()) {
        if (nums[right] != 0) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
        }

        right++;
    }
}
