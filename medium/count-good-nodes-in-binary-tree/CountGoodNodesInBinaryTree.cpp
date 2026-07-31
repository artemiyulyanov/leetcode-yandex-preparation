//
// Created by Артемий on 01/08/2026.
//

#include "CountGoodNodesInBinaryTree.h"

void CountGoodNodesInBinaryTree::dfs(TreeNode *root, int maxSoFar, int &count) {
    if (root == nullptr) return;

    if (root->val >= maxSoFar) {
        maxSoFar = root->val;
        count++;
    }

    dfs(root->left, maxSoFar, count);
    dfs(root->right, maxSoFar, count);
}

int CountGoodNodesInBinaryTree::goodNodes(TreeNode *root) {
    int count = 0;
    dfs(root, root->val, count);

    return count;
}
