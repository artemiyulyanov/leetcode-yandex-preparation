//
// Created by Артемий on 28/07/2026.
//

#include "MinimumWindowSubstring.h"

std::string MinimumWindowSubstring::minWindow(std::string s, std::string t) {
    std::unordered_map<char, int> freq;
    for (auto& symbol : t) freq[symbol]++;

    std::unordered_map<char, int> window;
    int required = freq.size();
    int formed = 0;
    int left = 0;

    int minLength = INT_MAX;
    int minLeft = 0;

    for (int right = 0; right < s.length(); right++) {
        char r = s[right];
        auto it = freq.find(r);

        if (it != freq.end()) {
            window[r]++;
            if (window[r] == it->second) formed++;
        }

        while (formed == required) {
            int len = right - left + 1;
            if (len < minLength) {
                minLength = len;
                minLeft = left;
            }

            char l = s[left];
            auto lit = freq.find(l);
            if (lit != freq.end()) {
                window[l]--;
                if (window[l] < lit->second) formed--;
            }
            left++;
        }
    }

    return minLength == INT_MAX ? "" : s.substr(minLeft, minLength);
}
