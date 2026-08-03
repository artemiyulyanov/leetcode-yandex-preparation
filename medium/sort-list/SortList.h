//
// Created by Артемий on 03/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_SORTLIST_H
#define LEETCODE_YANDEX_PREPARATION_SORTLIST_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class SortList {
public:
    static ListNode* sortList(ListNode* head);
private:
    static ListNode* mid(ListNode* head);
    static ListNode* merge(ListNode* node1, ListNode* node2);

    static ListNode* dfs(ListNode* node);
};


#endif //LEETCODE_YANDEX_PREPARATION_SORTLIST_H
