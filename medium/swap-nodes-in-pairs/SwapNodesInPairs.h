//
// Created by Артемий on 03/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_SWAPNODESINPAIRS_H
#define LEETCODE_YANDEX_PREPARATION_SWAPNODESINPAIRS_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class SwapNodesInPairs {
public:
    static ListNode* swapPairs(ListNode* head);
};


#endif //LEETCODE_YANDEX_PREPARATION_SWAPNODESINPAIRS_H
