//
// Created by Артемий on 03/08/2026.
//

#include "RemoveNthNodeFromList.h"

ListNode *RemoveNthNodeFromList::dfs(ListNode *node, int &count, int& n) {
    if (node == nullptr) return node;

    ListNode* child = dfs(node->next, count, n);
    count++;

    if (count == n) return child;
    if (count - 1 == n) node->next = node->next->next;

    return node;
}

ListNode *RemoveNthNodeFromList::removeNthFromEnd(ListNode *head, int n) {
    int count = 0;

    return dfs(head, count, n);
}
