//
// Created by Артемий on 28/07/2026.
//

#include "DecodeWays.h"

bool DecodeWays::validateSubstring(std::string substring) {
    return substring[0] != '0' && std::stoi(substring) >= 1 && std::stoi(substring) <= 26;
}

int DecodeWays::dfs(std::string &s, int idx, std::vector<int> &memo) {
    if (idx == s.size()) return 1;
    if (memo[idx] != -1) return memo[idx];

    int result = 0;

    std::string one = s.substr(idx, 1);
    if (validateSubstring(one)) {
        result += dfs(s, idx + 1, memo);
    }

    if (idx + 2 <= s.size()) {
        std::string two = s.substr(idx, 2);
        if (validateSubstring(two)) {
            result += dfs(s, idx + 2, memo);
        }
    }

    return memo[idx] = result;
}

int DecodeWays::numDecodings(std::string s) {
    std::vector<int> memo(s.size(), -1);
    return dfs(s, 0, memo);
}
