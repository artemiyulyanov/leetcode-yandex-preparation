//
// Created by Артемий on 01/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_SAMETREE_H
#define LEETCODE_YANDEX_PREPARATION_SAMETREE_H

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

class SameTree {
public:
    static void preorderTraversal(TreeNode* node, std::string& preorder);
    static bool isSameTree(TreeNode* p, TreeNode* q);
};


#endif //LEETCODE_YANDEX_PREPARATION_SAMETREE_H
