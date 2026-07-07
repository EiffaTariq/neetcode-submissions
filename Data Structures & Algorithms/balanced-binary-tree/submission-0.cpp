/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isBalanced(TreeNode* root) {
        return checkHeight(root) != -1;
    }

private:
    int checkHeight(TreeNode* node) {
        // Base case: an empty tree is balanced and has a height of 0
        if (node == nullptr) {
            return 0;
        }

        // Recursively get the height of left and right subtrees
        int leftHeight = checkHeight(node->left);
        int rightHeight = checkHeight(node->right);

        // If either subtree is unbalanced, propagate the error upward (-1)
        if (leftHeight == -1 || rightHeight == -1) {
            return -1;
        }

        // Check if the current node is unbalanced
        if (abs(leftHeight - rightHeight) > 1) {
            return -1;
        }

        // Return the height of the current node
        return 1 + max(leftHeight, rightHeight);
    }
};
