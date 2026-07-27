//
// Created by Артемий on 27/07/2026.
//

#include "ZigzagConversion.h"

std::string ZigzagConversion::convert(std::string s, int numRows) {
    if (numRows <= 1) return s;

    std::vector<std::string> rows(numRows);

    bool reversed = false;
    int rowIdx = 0;

    for (auto& symbol : s) {
        rows[rowIdx] += symbol;

        if (reversed) rowIdx--;
        else rowIdx++;

        if (rowIdx == numRows - 1) reversed = true;
        if (rowIdx == 0 && reversed) reversed = false;
    }

    std::string ans;
    for (auto& el : rows) ans += el;

    return ans;
}
