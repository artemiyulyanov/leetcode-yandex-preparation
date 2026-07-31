//
// Created by Артемий on 01/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_FLATTENBINARYTREETOLINKEDLIST_H
#define LEETCODE_YANDEX_PREPARATION_FLATTENBINARYTREETOLINKEDLIST_H

#include <iostream>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class FlattenBinaryTreeToLinkedList {
public:
    static void dfs(TreeNode* root, TreeNode*& prev);
    static void flatten(TreeNode* root);
};


#endif //LEETCODE_YANDEX_PREPARATION_FLATTENBINARYTREETOLINKEDLIST_H
