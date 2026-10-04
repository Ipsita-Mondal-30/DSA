/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
bool DFS( TreeNode* cloned, TreeNode* target,TreeNode* &ans){
 if(!cloned) return false;

        if(cloned->val == target->val) {
            ans = cloned;
            return true;
        }
        bool l = DFS(cloned->left, target, ans);
        bool r =DFS(cloned->right, target, ans);
        return l ||r;
}
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        TreeNode* ans;
        DFS(cloned, target, ans);
        return ans;

    }
};