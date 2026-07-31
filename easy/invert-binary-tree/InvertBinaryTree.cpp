//
// Created by Артемий on 01/08/2026.
//

#include "InvertBinaryTree.h"

TreeNode *InvertBinaryTree::invertNode(TreeNode *root) {
    if (root == nullptr) return root;

    invertNode(root->left);
    invertNode(root->right);

    TreeNode* leftTemp = root->left;
    root->left = root->right;
    root->right = leftTemp;

    return root;
}
