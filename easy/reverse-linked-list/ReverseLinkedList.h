//
// Created by Артемий on 26/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_REVERSELINKEDLIST_H
#define LEETCODE_YANDEX_PREPARATION_REVERSELINKEDLIST_H

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class ReverseLinkedList {
public:
    static ListNode* dfs(ListNode* node);
    static ListNode* reverseList(ListNode* head);
};


#endif //LEETCODE_YANDEX_PREPARATION_REVERSELINKEDLIST_H
