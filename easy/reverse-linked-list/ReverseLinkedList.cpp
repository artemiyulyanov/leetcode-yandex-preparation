#include "ReverseLinkedList.h"

ListNode* ReverseLinkedList::dfs(ListNode *node) {
    if (node == nullptr || node->next == nullptr) return node;

    ListNode* newHead = dfs(node->next);  
    node->next->next = node;              
    node->next = nullptr;                 

    return newHead;
}

ListNode* ReverseLinkedList::reverseList(ListNode* head) {
    return dfs(head);
}