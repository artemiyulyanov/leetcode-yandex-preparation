//
// Created by Артемий on 29/07/2026.
//

#include "ReorderList.h"

ListNode *ReorderList::reverseList(ListNode *head) {
    ListNode* prev = nullptr;
    ListNode* cur = head;

    while (cur != nullptr) {
        ListNode* nextTemp = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nextTemp;
    }

    return prev;
}

void ReorderList::reorderList(ListNode *head) {
    ListNode* low = head;
    ListNode* fast = head;

    while (fast != nullptr && fast->next != nullptr) {
        low = low->next;
        fast = fast->next->next;
    }

    ListNode* first = head;   // 1->2->3
    ListNode* second = reverseList(low->next);  // 5->4

    low->next = nullptr;

    while (second != nullptr) {
        ListNode* tmp1 = first->next;   // сохраняем, куда идти дальше в первом списке
        ListNode* tmp2 = second->next;  // сохраняем, куда идти дальше во втором списке

        first->next = second;   // 1 -> 5
        second->next = tmp1;    // 5 -> 2 (следующий узел из первого списка)

        first = tmp1;    // переходим к 2
        second = tmp2;    // переходим к 4
    }
}
