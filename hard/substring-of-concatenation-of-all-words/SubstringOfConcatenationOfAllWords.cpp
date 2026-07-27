//
// Created by Артемий on 27/07/2026.
//

#include "SubstringOfConcatenationOfAllWords.h"

std::vector<int> SubstringOfConcatenationOfAllWords::findSubstring(std::string s, std::vector<std::string> &words) {
    std::vector<int> res;

    int wordLen = words[0].size();
    int numWords = words.size();
    int totalLen = numWords * wordLen;
    int n = s.size();

    if (n < totalLen) return res;

    std::unordered_map<std::string, int> need;
    for (const auto& w : words) need[w]++;

    for (int offset = 0; offset < wordLen; offset++) {
        int left = offset, count = 0;

        std::unordered_map<std::string, int> window;

        for (int right = offset; right + wordLen <= n; right += wordLen) {
            std::string word = s.substr(right, wordLen);

            auto it = need.find(word);

            if (it == need.end()) {
                window.clear();
                left = right + wordLen;
                count = 0;
                continue;
            }

            window[word]++;
            count++;

            while (window[word] > it->second) {
                std::string leftWord = s.substr(left, wordLen);
                window[leftWord]--;
                count--;
                left += wordLen;
            }

            if (count == numWords) {
                res.push_back(left);

                std::string leftWord = s.substr(left, wordLen);
                window[leftWord]--;
                count--;
                left += wordLen;
            }
        }
    }

    return res;
}