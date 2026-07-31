//
// Created by Артемий on 01/08/2026.
//

#include "SameTree.h"

void SameTree::preorderTraversal(TreeNode *node, std::string &preorder) {
    if (node == nullptr) return;

    preorderTraversal(node->left, preorder);
    preorderTraversal(node->right, preorder);

    preorder += (node->left != nullptr ? std::to_string(node->left->val) : "null");
    preorder += (node->right != nullptr ? std::to_string(node->right->val) : "null");
    preorder += std::to_string(node->val);
}

bool SameTree::isSameTree(TreeNode *p, TreeNode *q) {
    std::string order_p, order_q;

    preorderTraversal(p, order_p);
    preorderTraversal(q, order_q);

    return order_p == order_q;
}
