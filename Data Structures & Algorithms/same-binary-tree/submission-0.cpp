/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both nodes are null
        if (p == nullptr && q == nullptr)
            return true;

        // One is null and the other isn't
        if (p == nullptr || q == nullptr)
            return false;

        // Values are different
        if (p->val != q->val)
            return false;

        // Check left and right subtrees
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }
};