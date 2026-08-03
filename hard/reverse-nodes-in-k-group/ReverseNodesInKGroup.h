//
// Created by Артемий on 03/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_REVERSENODESINKGROUP_H
#define LEETCODE_YANDEX_PREPARATION_REVERSENODESINKGROUP_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class ReverseNodesInKGroup {
public:
    static ListNode* reverseKGroup(ListNode* head, int k);
private:
    static int countForward(ListNode* head);
    static std::pair<ListNode*, ListNode*> reverseKElements(ListNode* head, int k);
};


#endif //LEETCODE_YANDEX_PREPARATION_REVERSENODESINKGROUP_H
