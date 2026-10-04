/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int Count(TreeNode* root, int maxV) {
        if (root == nullptr) {
            return 0;
        }
        int count = 0;
        if (root->val >= maxV) {
            count = 1;
        }
        maxV = max(maxV, root->val);
        int left = Count(root->left, maxV);
        int right = Count(root->right, maxV);
        return count + left + right;
    }
    int goodNodes(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return Count(root, root->val);
    }
};