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
   int maxSum;
    int solve(TreeNode *root){
        if(root==NULL){
            return 0;
        }
       int l=solve(root->left);
        int r=solve(root->right);
        int below=l+r+root->val;
        int left=max(l,r)+root->val;
        int king=root->val;
     maxSum=max({maxSum,below,left,king});

     return max(left,king);
    }
public:
    int maxPathSum(TreeNode* root) {
        maxSum=INT_MIN;
       solve(root);

       return maxSum;

    }
};