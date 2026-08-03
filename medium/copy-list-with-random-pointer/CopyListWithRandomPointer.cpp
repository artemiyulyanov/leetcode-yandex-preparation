//
// Created by Артемий on 03/08/2026.
//

#include "CopyListWithRandomPointer.h"

Node *CopyListWithRandomPointer::copyRandomList(Node *head) {
    std::unordered_map<Node*, Node*> copiedNodes;

    Node* cur = head;

    while (cur != nullptr) {
        copiedNodes[cur] = new Node(cur->val);
        cur = cur->next;
    }

    cur = head;

    while (cur != nullptr) {
        copiedNodes[cur]->next = copiedNodes[cur->next];
        copiedNodes[cur]->random = copiedNodes[cur->random];
        cur = cur->next;
    }

    return copiedNodes[head];
}
