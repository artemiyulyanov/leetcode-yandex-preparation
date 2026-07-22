//
// Created by Артемий on 22/07/2026.
//

#include "BestTimeToBuyAndSell.h"

int BestTimeToBuyAndSell::maxProfit(std::vector<int> &prices) {
    std::vector<int> buy(prices.size(), 0);

    int best_buy = INT_MAX;
    int best_sell = INT_MIN;

    int diff = 0;

    for (int i = 0; i < prices.size(); i++) {
        best_buy = std::min(best_buy, prices[i]);
        buy[i] = best_buy;
    }

    for (int i = prices.size() - 1; i >= 0; i--) {
        best_sell = std::max(best_sell, prices[i]);
        diff = std::max(diff, best_sell - buy[i]);
    }

    return diff;
}
