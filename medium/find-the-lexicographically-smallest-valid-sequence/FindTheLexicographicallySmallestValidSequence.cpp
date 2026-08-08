//
// Created by Артемий on 08/08/2026.
//

#include "FindTheLexicographicallySmallestValidSequence.h"

std::vector<int> FindTheLexicographicallySmallestValidSequence::validSequence(std::string word1, std::string word2) {
    size_t n = word1.size(), m = word2.size();

    std::vector<int> suf(word1.size()+1, 0);

    int j = m - 1;

    for (int i = n - 1; i >= 0; i--) {
        suf[i] = suf[i+1];

        if (j >= 0 && word1[i] == word2[j]) {
            suf[i]++;
            j--;
        }
    }

    std::vector<int> ans;

    int i = 0;
    bool used = false;

    for (int j = 0; j < m; j++) {
        bool found = false;

        while (i < n) {
            if (word1[i] == word2[j]) {
                ans.push_back(i);
                i++;

                found = true;
                break;
            }

            if (!used && suf[i+1] >= m - j - 1) {
                ans.push_back(i);
                i++;

                used = true;
                found = true;
                break;
            }

            i++;
        }

        if (!found) {
            return {};
        }
    }

    return ans;
}