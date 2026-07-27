//
// Created by Артемий on 27/07/2026.
//

#include "CompareVersionNumbers.h"

std::vector<std::string> CompareVersionNumbers::splitString(std::string &s, char delimiter) {
    auto stringView = s | std::views::split('.');

    std::vector<std::string> result;

    for (auto part : stringView) {
        std::string substr(part.begin(), part.end());
        result.push_back(substr);
    }

    return result;
}

int CompareVersionNumbers::compareVersion(std::string version1, std::string version2) {
    std::vector<std::string> splittedVersion1 = splitString(version1, '.');
    std::vector<std::string> splittedVersion2 = splitString(version2, '.');

    size_t maxLength = std::max(splittedVersion1.size(), splittedVersion2.size());

    for (int i = 0; i < maxLength; i++) {
        int part1 = i < splittedVersion1.size() ? std::stoi(splittedVersion1[i]) : 0;
        int part2 = i < splittedVersion2.size() ? std::stoi(splittedVersion2[i]) : 0;

        if (part1 < part2) return -1;
        if (part1 > part2) return 1;
    }

    return 0;
}
