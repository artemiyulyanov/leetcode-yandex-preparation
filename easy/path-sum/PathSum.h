//
// Created by Артемий on 01/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_PATHSUM_H
#define LEETCODE_YANDEX_PREPARATION_PATHSUM_H

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

class PathSum {
    static bool dfs(TreeNode* node, int sum, int& targetSum);
    static bool hasPathSum(TreeNode* root, int targetSum);
};


#endif //LEETCODE_YANDEX_PREPARATION_PATHSUM_H
