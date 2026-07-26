//
// Created by Артемий on 26/07/2026.
//

#include "Sqrt.h"

int Sqrt::mySqrt(int x) {
    long long left = 1, right = x;
    long long mid = (left + right) / 2;

    while (left <= right) {
        mid = (left + right) / 2;

        if (mid * mid == x) return mid;

        if (mid * mid < x) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return right;
}
