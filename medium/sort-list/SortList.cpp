//
// Created by Артемий on 03/08/2026.
//

#include "SortList.h"

// std::vector<int> SortList::dfs(std::vector<int> &vec, int i, int j) {
//     if (i > j) return {};
//
//     if (i == j) return {vec[i]};
//
//     if (i + 1 == j) return {std::min(vec[i], vec[j]), std::max(vec[i], vec[j])};
//
//     int mid = (i + j) / 2;
//
//     std::vector<int> left = dfs(vec, i, mid - 1);
//     std::vector<int> right = dfs(vec, mid, j);
//
//     return merge(left, right);
// }
//
// std::vector<int> SortList::merge(std::vector<int> &vec1, std::vector<int> &vec2) {
//     int l = 0, r = 0;
//
//     std::vector<int> res;
//
//     while (l < vec1.size() && r < vec2.size()) {
//         if (vec1[l] == vec2[r]) {
//             res.push_back(vec1[l]);
//             res.push_back(vec2[r]);
//
//             l++;
//             r++;
//
//             continue;
//         }
//
//         if (vec1[l] < vec2[r]) {
//             res.push_back(vec1[l]);
//             l++;
//         } else {
//             res.push_back(vec2[r]);
//             r++;
//         }
//     }
//
//     std::vector<int>& largerCopy = vec1;
//
//     if (r < vec2.size()) {
//         std::swap(l, r);
//         largerCopy = vec2;
//     }
//
//     for (int i = l; i < largerCopy.size(); i++) {
//         res.push_back(largerCopy[i]);
//     }
//
//     return res;
// }

ListNode *SortList::dfs(ListNode *node) {
    if (node == nullptr || node->next == nullptr) return node;

    ListNode* middle = mid(node);
    ListNode* second = middle->next;
    middle->next = nullptr;

    ListNode* left = dfs(node);
    ListNode* right = dfs(second);

    return merge(left, right);
}

ListNode *SortList::mid(ListNode *head) {
    ListNode* low = head;
    ListNode* fast = head->next;

    while (fast && fast->next != nullptr) {
        low = low->next;
        fast = fast->next->next;
    }

    return low;
}

ListNode *SortList::merge(ListNode *node1, ListNode *node2) {
    ListNode* head = new ListNode();
    ListNode* cur = head;

    while (node1 != nullptr && node2 != nullptr) {
        if (node1->val <= node2->val) {
            cur->next = node1;
            node1 = node1->next;
        } else {
            cur->next = node2;
            node2 = node2->next;
        }

        cur = cur->next;
    }

    if (node2 != nullptr) std::swap(node1, node2);

    while (node1 != nullptr) {
        cur->next = node1;
        node1 = node1->next;

        cur = cur->next;
    }

    return head->next;
}

ListNode *SortList::sortList(ListNode *head) {
    return dfs(head);
}
