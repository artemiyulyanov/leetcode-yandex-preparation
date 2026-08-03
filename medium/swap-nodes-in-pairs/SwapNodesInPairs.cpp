#include "SwapNodesInPairs.h"

ListNode *SwapNodesInPairs::swapPairs(ListNode *head) {
    ListNode dummy(0, head);
    ListNode* prev = &dummy;

    while (prev->next && prev->next->next) {
        ListNode* first = prev->next;
        ListNode* second = first->next;
        ListNode* nextTemp = second->next;

        second->next = first;
        first->next = nextTemp;
        prev->next = second;      

        prev = first;               
    }

    return dummy.next;
}
