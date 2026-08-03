//
// Created by Артемий on 03/08/2026.
//

#include "LinkedListCycle.h"

bool LinkedListCycle::hasCycle(ListNode *head) {
    ListNode* low = head;
    ListNode* fast = head;

    while (low != nullptr && fast != nullptr) {
        low = low->next;

        fast = fast->next;
        if (fast != nullptr) fast = fast->next;

        if (low != nullptr && fast != nullptr && low == fast) return true;
    }

    return false;
}
