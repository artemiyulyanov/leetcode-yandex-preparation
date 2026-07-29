//
// Created by Артемий on 29/07/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_ROTATELIST_H
#define LEETCODE_YANDEX_PREPARATION_ROTATELIST_H

#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class RotateList {
public:
    static ListNode* rotateRight(ListNode* head, int k);
};


#endif //LEETCODE_YANDEX_PREPARATION_ROTATELIST_H
