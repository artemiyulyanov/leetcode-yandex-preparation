//
// Created by Артемий on 23/07/2026.
//

#include "MergeIntervals.h"

std::vector<std::vector<int> > MergeIntervals::merge(std::vector<std::vector<int> > &intervals) {
    if (intervals.size() <= 1) return intervals;

    std::sort(intervals.begin(), intervals.end(),
          [](const std::vector<int>& a, const std::vector<int>& b) {
              return a[0] < b[0];
          });

    std::vector<std::vector<int>> merged;

    int cur_l = intervals[0][0], cur_r = intervals[0][1];

    for (int i = 1; i < intervals.size(); i++) {
        if (cur_r >= intervals[i][0]) {
            cur_r = std::max(cur_r, intervals[i][1]);
        } else {
            merged.push_back({cur_l, cur_r});
            cur_l = intervals[i][0];
            cur_r = intervals[i][1];
        }
    }

    merged.push_back({cur_l, cur_r});

    return merged;
}
