//
// Created by Артемий on 26/07/2026.
//

#include "ValidPalindrome.h"

bool ValidPalindrome::isPalindrome(std::string s) {
    std::string res;

    for (auto& symbol : s) {
        bool isLower = (symbol >= 'a' && symbol <= 'z');
        bool isUpper = (symbol >= 'A' && symbol <= 'Z');
        bool isDigit = (symbol >= '0' && symbol <= '9');

        if (isLower || isUpper || isDigit) {
            res += std::tolower(symbol);
        }
    }

    std::string reversed = res;
    std::ranges::reverse(reversed);

    return res == reversed;
}
