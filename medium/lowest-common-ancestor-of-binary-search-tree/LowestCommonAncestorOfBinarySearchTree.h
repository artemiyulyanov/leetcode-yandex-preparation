//
// Created by Артемий on 01/08/2026.
//

#ifndef LEETCODE_YANDEX_PREPARATION_LOWESTCOMMONANCESTOROFBINARYSEARCHTREE_H
#define LEETCODE_YANDEX_PREPARATION_LOWESTCOMMONANCESTOROFBINARYSEARCHTREE_H

#include <iostream>
#include <unordered_map>
#include <vector>

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class LowestCommonAncestorOfBinarySearchTree {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);
private:
    std::unordered_map<TreeNode*, std::vector<TreeNode*>> up;
    std::unordered_map<TreeNode*, int> depth;
    int LOG;

    void dfs(TreeNode* node, TreeNode* parent, int dist);

    int countNodes(TreeNode* node);

    TreeNode* lift(TreeNode* node, int k);
};


#endif //LEETCODE_YANDEX_PREPARATION_LOWESTCOMMONANCESTOROFBINARYSEARCHTREE_H
