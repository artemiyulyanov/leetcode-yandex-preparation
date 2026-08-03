//
// Created by Артемий on 03/08/2026.
//

#include "AddTwoNumbers.h"

ListNode *AddTwoNumbers::addTwoNumbers(ListNode *l1, ListNode *l2) {
    int left = 0;

    ListNode* head = new ListNode();
    ListNode* cur = head;

    while (l1 != nullptr && l2 != nullptr) {
        int sum = l1->val + l2->val + left;

        cur->next = new ListNode(sum % 10);
        left = sum / 10;

        l1 = l1->next;
        l2 = l2->next;

        cur = cur->next;
    }

    if (l2) std::swap(l1, l2);

    while (l1 != nullptr) {
        int sum = l1->val + left;

        std::cout << sum << std::endl;

        cur->next = new ListNode(sum % 10);
        left = sum / 10;

        l1 = l1->next;
        cur = cur->next;
    }

    if (left) cur->next = new ListNode(left);

    return head->next;
}
