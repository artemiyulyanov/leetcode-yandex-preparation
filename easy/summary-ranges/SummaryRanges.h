//
// Created by Артемий on 26/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_STRINGSTOINTERVALS_H
#define LEETCODE_YANDEX_PREPARATION_STRINGSTOINTERVALS_H

#include <vector>
#include <iostream>

class SummaryRanges {
public:
    static void fillArray(std::vector<std::string>& intervals, int start, int end);
    static void fillArray(std::vector<std::string>& intervals, int number);
    static std::vector<std::string> summaryRanges(std::vector<int>& nums);
};


#endif //LEETCODE_YANDEX_PREPARATION_STRINGSTOINTERVALS_H
