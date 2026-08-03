//
// Created by Артемий on 03/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_REMOVENTHNODEFROMLIST_H
#define LEETCODE_YANDEX_PREPARATION_REMOVENTHNODEFROMLIST_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class RemoveNthNodeFromList {
public:
    static ListNode* removeNthFromEnd(ListNode* head, int n);
private:
    static ListNode* dfs(ListNode* node, int& count, int& n);
};


#endif //LEETCODE_YANDEX_PREPARATION_REMOVENTHNODEFROMLIST_H
