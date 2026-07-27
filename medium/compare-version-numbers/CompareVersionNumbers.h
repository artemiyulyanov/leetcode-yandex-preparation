//
// Created by Артемий on 27/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_COMPAREVERSIONNUMBERS_H
#define LEETCODE_YANDEX_PREPARATION_COMPAREVERSIONNUMBERS_H

#include <iostream>
#include <string_view>
#include <vector>
#include <ranges>

class CompareVersionNumbers {
public:
    static std::vector<std::string> splitString(std::string& s, char delimiter);
    static int compareVersion(std::string version1, std::string version2);
};


#endif //LEETCODE_YANDEX_PREPARATION_COMPAREVERSIONNUMBERS_H
