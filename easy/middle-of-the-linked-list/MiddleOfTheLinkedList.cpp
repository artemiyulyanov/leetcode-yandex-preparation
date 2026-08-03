//
// Created by Артемий on 03/08/2026.
//

#include "MiddleOfTheLinkedList.h"

ListNode *MiddleOfTheLinkedList::middleNode(ListNode *head) {
    ListNode* low = head;
    ListNode* fast = head;

    while (fast && fast->next != nullptr) {
        low = low->next;
        fast = fast->next->next;
    }

    return low;
}
