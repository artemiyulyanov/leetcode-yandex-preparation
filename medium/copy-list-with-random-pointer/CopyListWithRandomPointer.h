//
// Created by Артемий on 03/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_COPYLISTWITHRANDOMPOINTER_H
#define LEETCODE_YANDEX_PREPARATION_COPYLISTWITHRANDOMPOINTER_H

#include <iostream>
#include <vector>
#include <unordered_map>

class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = nullptr;
        random = nullptr;
    }
};

class CopyListWithRandomPointer {
public:
    static Node* copyRandomList(Node* head);
};


#endif //LEETCODE_YANDEX_PREPARATION_COPYLISTWITHRANDOMPOINTER_H
