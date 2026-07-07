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
    int maxDepth(TreeNode* root) {
            if (root == nullptr) {
            return 0;
        }
        
        // Recursively find the depth of left and right subtrees
        int leftDepth = maxDepth(root->left);
        int rightDepth = maxDepth(root->right);
        
        // The maximum depth is the larger of the two subtrees plus 1 for the current node
        return max(leftDepth, rightDepth) + 1;
    }
};
