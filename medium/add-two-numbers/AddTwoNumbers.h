//
// Created by Артемий on 03/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_ADDTWONUMBERS_H
#define LEETCODE_YANDEX_PREPARATION_ADDTWONUMBERS_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class AddTwoNumbers {
public:
    static ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);
};


#endif //LEETCODE_YANDEX_PREPARATION_ADDTWONUMBERS_H
