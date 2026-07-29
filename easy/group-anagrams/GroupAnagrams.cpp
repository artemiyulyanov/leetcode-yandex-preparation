//
// Created by Артемий on 29/07/2026.
//

#include "GroupAnagrams.h"

std::vector<std::vector<std::string>> GroupAnagrams::groupAnagrams(std::vector<std::string> &strs) {
    std::vector<std::vector<std::string>> ans;
    std::unordered_map<std::string, std::vector<std::string>> anagrams;

    for (auto& string : strs) {
        std::string key = string;
        std::ranges::sort(key);

        anagrams[key].push_back(string);
    }

    ans.reserve(anagrams.size());
    for (auto& [k, v] : anagrams) ans.push_back(v);

    return ans;
}