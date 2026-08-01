//
// Created by Артемий on 01/08/2026.
//

#include "LowestCommonAncestorOfBinarySearchTree.h"

void LowestCommonAncestorOfBinarySearchTree::dfs(TreeNode *node, TreeNode *parent, int dist) {
    if (node == nullptr) return;

    depth[node] = dist;
    up[node] = std::vector<TreeNode*>(LOG, nullptr);
    up[node][0] = parent;

    dfs(node->left, node, dist + 1);
    dfs(node->right, node, dist + 1);
}

int LowestCommonAncestorOfBinarySearchTree::countNodes(TreeNode *node) {
    if (node == nullptr) return 0;
    return 1 + countNodes(node->left) + countNodes(node->right);
}

TreeNode *LowestCommonAncestorOfBinarySearchTree::lift(TreeNode *node, int k) {
    for (int j = 0; j < LOG && node != nullptr; j++) {
        if (k & (1 << j)) {
            node = up[node][j];
        }
    }

    return node;
}

TreeNode *LowestCommonAncestorOfBinarySearchTree::lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q) {
    int n = countNodes(root);

    LOG = 1;
    while ((1 << LOG) < n) LOG++;
    LOG++;

    dfs(root, nullptr, 0);

    for (int j = 1; j < LOG; j++) {
        for (auto& [v, vec] : up) {
            TreeNode* mid = vec[j - 1];
            if (mid != nullptr) {
                vec[j] = up[mid][j - 1];
            } else {
                vec[j] = nullptr;
            }
        }
    }

    if (depth[p] < depth[q]) std::swap(p, q);
    p = lift(p, depth[p] - depth[q]);

    if (p == q) return p;

    for (int j = LOG - 1; j >= 0; j--) {
        if (up[p][j] != up[q][j]) {
            p = up[p][j];
            q = up[q][j];
        }
    }

    return up[p][0];
}
