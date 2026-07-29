//
// Created by Артемий on 28/07/2026.
//

#include "LongestPalindromeSubstring.h"

std::string LongestPalindromeSubstring::longestPalindrome(std::string s) {
    if (s.length() <= 1) return s;

    int maxLen = 1;
    std::string substr = s.substr(0, 1);

    for (int right = s.length() - 1; right >= 1; right--) {
        for (int left = 0; left < right; left++) {
            if (s[left] != s[right]) continue;

            bool interrupted = false;

            int l = left, r = right;

            while (l < r && !interrupted) {
                l++;
                r--;

                if (s[l] != s[r]) interrupted = true;
            }

            int len = right - left + 1;

            if (!interrupted && maxLen < len) {
                maxLen = len;
                substr = s.substr(left, len);
            }
        }
    }

    return substr;
}
