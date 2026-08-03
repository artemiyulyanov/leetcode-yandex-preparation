//
// Created by Артемий on 03/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_MERGEKSORTEDLISTS_H
#define LEETCODE_YANDEX_PREPARATION_MERGEKSORTEDLISTS_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class MergeKSortedLists {
public:
    static ListNode* mergeKLists(std::vector<ListNode*>& lists);
private:
    static ListNode* merge(ListNode* list1, ListNode* list2);
};


#endif //LEETCODE_YANDEX_PREPARATION_MERGEKSORTEDLISTS_H
