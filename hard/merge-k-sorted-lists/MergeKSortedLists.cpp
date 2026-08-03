//
// Created by Артемий on 03/08/2026.
//

#include "MergeKSortedLists.h"

ListNode *MergeKSortedLists::mergeKLists(std::vector<ListNode *> &lists) {
    if (lists.size() <= 0) return nullptr;

    ListNode* res = lists[0];

    for (int i = 1; i < lists.size(); i++) {
        ListNode* node = lists[i];
        res = merge(res, node);
    }

    return res;
}

ListNode *MergeKSortedLists::merge(ListNode *list1, ListNode *list2) {
    ListNode* head = new ListNode();
    ListNode* cur = head;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val <= list2->val) {
            cur->next = list1;
            list1 = list1->next;
        } else {
            cur->next = list2;
            list2 = list2->next;
        }

        cur = cur->next;
    }

    if (list2 != nullptr) std::swap(list1, list2);

    while (list1 != nullptr) {
        cur->next = list1;
        list1 = list1->next;

        cur = cur->next;
    }

    return head->next;
}
