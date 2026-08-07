class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // Both are empty
        if (p == nullptr && q == nullptr)
            return true;

        // One is empty, other isn't
        if (p == nullptr || q == nullptr)
            return false;

        // Values don't match
        if (p->val != q->val)
            return false;

        // Both subtrees must match
        return isSameTree(p->left, q->left) &&
               isSameTree(p->right, q->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        // If root is empty, no subtree can be found
        if (root == nullptr)
            return false;

        // Check if trees starting at these nodes are identical
        if (isSameTree(root, subRoot))
            return true;

        // Otherwise search in left and right subtrees
        return isSubtree(root->left, subRoot) ||
               isSubtree(root->right, subRoot);
    }
};