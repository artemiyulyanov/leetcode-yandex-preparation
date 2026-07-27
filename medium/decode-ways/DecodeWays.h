//
// Created by Артемий on 28/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_DECODEWAYS_H
#define LEETCODE_YANDEX_PREPARATION_DECODEWAYS_H

#include <iostream>
#include <vector>

class DecodeWays {
public:
    static bool validateSubstring(std::string substring);
    static int dfs(std::string& s, int idx, std::vector<int>& memo);
    static int numDecodings(std::string s);
};


#endif //LEETCODE_YANDEX_PREPARATION_DECODEWAYS_H
