//
// Created by Артемий on 29/07/2026.
//

#include "RansomNote.h"

bool RansomNote::canConstruct(std::string ransomNote, std::string magazine) {
    std::unordered_map<char, int> alphabet;
    for (auto symbol : magazine) alphabet[symbol]++;

    for (char symbol : ransomNote) {
        alphabet[symbol]--;
        if (alphabet[symbol] < 0) return false;
    }

    return true;
}