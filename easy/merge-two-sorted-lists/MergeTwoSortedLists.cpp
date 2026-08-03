//
// Created by Артемий on 03/08/2026.
//

#include "MergeTwoSortedLists.h"

ListNode *MergeTwoSortedLists::mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode* head = new ListNode();
    ListNode* tail = head;

    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val == list2->val) {
            ListNode *listNextTemp = list1->next;
            tail->next = list1;

            tail = list1;
            list1 = listNextTemp;

            tail->next = list2;
            tail = list2;

            list2 = list2->next;

            continue;
        }

        if (list1->val < list2->val) {
            ListNode *listNextTemp = list1->next;
            tail->next = list1;

            tail = list1;
            list1 = listNextTemp;
        } else {
            ListNode *listNextTemp = list2->next;
            tail->next = list2;

            tail = list2;
            list2 = listNextTemp;
        }
    }

    if (list2 != nullptr) std::swap(list1, list2);

    while (list1 != nullptr) {
        ListNode *listNextTemp = list1->next;
        tail->next = list1;

        tail = list1;
        list1 = listNextTemp;
    }

    return head->next;
}
