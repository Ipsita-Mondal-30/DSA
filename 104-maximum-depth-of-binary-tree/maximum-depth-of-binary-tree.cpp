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
int maxS;
int solve(TreeNode *root){
    if(root==NULL){
            return 0;
        }
        int leftS=maxDepth(root->left);
        int rightS=maxDepth(root->right);
        maxS=max({maxS,leftS,rightS});
        return max(leftS,rightS)+1;
}
    int maxDepth(TreeNode* root) {
         maxS=INT_MIN;
        return solve(root);
        
    }
};