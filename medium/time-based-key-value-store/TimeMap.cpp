#include "TimeMap.h"

#include <ranges>

TimeMap::TimeMap() {

}

void TimeMap::set(std::string key, std::string value, int timestamp) {
    if (!timestamps.contains(key)) timestamps.emplace(key, std::map<int, std::string>{});

    timestamps[key].emplace(timestamp, value);
}

std::string TimeMap::get(std::string key, int timestamp) {
    auto it = timestamps.find(key);
    if (it == timestamps.end()) return "";

    auto& m = it->second; 

    auto up = m.upper_bound(timestamp); 

    if (up == m.begin()) return ""; 

    --up; 
    return up->second;
}
