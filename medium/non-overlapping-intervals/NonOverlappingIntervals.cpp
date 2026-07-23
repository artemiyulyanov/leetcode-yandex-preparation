//
// Created by Артемий on 23/07/2026.
//

#include "NonOverlappingIntervals.h"

#include <iostream>

int NonOverlappingIntervals::eraseOverlapIntervals(std::vector<std::vector<int> > &intervals) {
    if (intervals.size() <= 1) return 0;

    std::sort(intervals.begin(), intervals.end(),
      [](const std::vector<int>& a, const std::vector<int>& b) {
          return a[1] < b[1];  // сортировка по концу
    });

    int removed = 0;
    int prevEnd = intervals[0][1];

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] < prevEnd) {
            removed++;
        } else {
            prevEnd = intervals[i][1];
        }
    }

    return removed;
}
