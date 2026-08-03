//
// Created by Артемий on 03/08/2026.
//

#include "PalindromeLinkedList.h"

bool PalindromeLinkedList::isPalindrome(ListNode *head) {
    std::string nodes;

    while (head != nullptr) {
        nodes += std::to_string(head->val);
        head = head->next;
    }

    std::string reversed = nodes;
    std::reverse(reversed.begin(), reversed.end());

    return nodes == reversed;
}
