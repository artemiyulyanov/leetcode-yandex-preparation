//
// Created by Артемий on 03/08/2026.
//

#include "ReverseNodesInKGroup.h"

ListNode *ReverseNodesInKGroup::reverseKGroup(ListNode *head, int k) {
    ListNode* iterator = head;

    ListNode* newHead = new ListNode();
    ListNode* ans = newHead;

    while (iterator != nullptr) {
        std::pair<ListNode*, ListNode*> reversed = reverseKElements(iterator, k);

        newHead->next = reversed.first;
        newHead = reversed.second;

        iterator = reversed.second ? reversed.second->next : nullptr;
    }

    return ans->next;
}

int ReverseNodesInKGroup::countForward(ListNode *head) {
    int count = 0;

    while (head != nullptr) {
        count++;
        head = head->next;
    }

    return count;
}

std::pair<ListNode*, ListNode*> ReverseNodesInKGroup::reverseKElements(ListNode *head, int k) {
    int idx = 0;
    int forward = countForward(head);

    if (forward < k) return std::make_pair(head, nullptr);

    ListNode* cur = head;

    ListNode* prev = nullptr;
    ListNode* lastNextTemp = nullptr;

    while (cur && idx < k) {
        ListNode* nextTemp = cur->next;
        cur->next = prev;

        prev = cur;
        lastNextTemp = nextTemp;

        cur = nextTemp;
        idx++;
    }

    if (head) head->next = lastNextTemp;

    return std::make_pair(prev, head);
}
