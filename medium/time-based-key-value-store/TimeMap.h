//
// Created by Артемий on 30/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_TIMEMAP_H
#define LEETCODE_YANDEX_PREPARATION_TIMEMAP_H

#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>

class TimeMap {
public:
    TimeMap();

    void set(std::string key, std::string value, int timestamp);
    std::string get(std::string key, int timestamp);
private:
    std::unordered_map<std::string, std::map<int, std::string>> timestamps;
};


#endif //LEETCODE_YANDEX_PREPARATION_TIMEMAP_H
