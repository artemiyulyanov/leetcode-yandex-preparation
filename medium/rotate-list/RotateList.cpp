//
// Created by Артемий on 29/07/2026.
//

#include "RotateList.h"

ListNode *RotateList::rotateRight(ListNode *head, int k) {
    if (head == nullptr || head->next == nullptr) return head;

    ListNode* tail = head;
    int n = 1;

    while (tail->next != nullptr) {
        tail = tail->next;
        n++;
    }

    k %= n;
    if (k == 0) return head;

    tail->next = head;

    ListNode* newTail = tail;
    for (int i = 0; i < n-k; i++) {
        newTail = newTail->next;
    }

    ListNode* newHead = newTail->next;

    newTail->next = nullptr;
    tail->next = head;

    return newHead;
}
