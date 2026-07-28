//
// Created by Артемий on 28/07/2026.
//

#include "LongestSubstringWithoutRepeatingCharacters.h"

#include <numeric>

int LongestSubstringWithoutRepeatingCharacters::lengthOfLongestSubstring(std::string s) {
    std::unordered_map<char, int> alphabet;

    int left = 0;
    int maxLen = 0;

    for (int right = 0; right < s.length(); right++) {
        char r = s[right];

        alphabet[r]++;

        while (alphabet[r] > 1 && left < right) {
            char l = s[left];

            alphabet[l]--;
            left++;
        }

        if (alphabet[r] == 1) {
            std::cout << s.substr(left, right - left + 1) << std::endl;
            maxLen = std::max(maxLen, right - left + 1);
        }
    }

    return maxLen;
}
