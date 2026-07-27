//
// Created by Артемий on 26/07/2026.
//

#include "MyAtoi.h"

int MyAtoi::myAtoi(const std::string &s) {
    unsigned int res = 0;

    bool isNegative = s[0] == '-';
    int digitPlace = 0;

    for (int i = s.length() - 1; i >= 0 && ((s[i]-'0' >= 0 && s[i]-'0' <= 9) || s[i] == '-' || s[i] == ' '); i--) {
        if (s[i] == ' ') continue;

        if (s[i] == '-') {
            isNegative = true;
            break;
        }

        res += (s[i]-'0') * (std::pow(10, digitPlace));
        digitPlace++;
    }

    if (isNegative) {
        return -res;
    }

    return res;
}
