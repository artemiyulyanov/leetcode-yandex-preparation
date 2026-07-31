//
// Created by Артемий on 01/08/2026.
//

#include "FlattenBinaryTreeToLinkedList.h"

void FlattenBinaryTreeToLinkedList::dfs(TreeNode *root, TreeNode *&prev) {
    if (root == nullptr) return;

    dfs(root->right, prev);
    dfs(root->left, prev);

    root->right = prev;
    root->left = nullptr;
    prev = root;
}

void FlattenBinaryTreeToLinkedList::flatten(TreeNode *root) {
    TreeNode* prev = nullptr;
    dfs(root, prev);
}
