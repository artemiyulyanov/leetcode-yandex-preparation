//
// Created by Артемий on 01/08/2026.
//

#include "PathSum.h"

bool PathSum::dfs(TreeNode *node, int sum, int &targetSum) {
    if (node == nullptr) return false;
    if (node->left == nullptr && node->right == nullptr && sum + node->val == targetSum) return true;

    return dfs(node->left, sum + node->val, targetSum) || dfs(node->right, sum + node->val, targetSum);
}

bool PathSum::hasPathSum(TreeNode *root, int targetSum) {
    return dfs(root, 0, targetSum);
}