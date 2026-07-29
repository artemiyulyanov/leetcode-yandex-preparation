//
// Created by Артемий on 29/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_REORDERLIST_H
#define LEETCODE_YANDEX_PREPARATION_REORDERLIST_H

#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class ReorderList {
public:
    static ListNode* reverseList(ListNode* head);
    static void reorderList(ListNode* head);
};


#endif //LEETCODE_YANDEX_PREPARATION_REORDERLIST_H
