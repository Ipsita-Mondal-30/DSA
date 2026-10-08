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
vector<vector<int>>ans;
        vector<int>current;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL){
            return ans;
        }
        int sum=targetSum-root->val;
        current.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if(sum==0){
            ans.push_back(current);
            }
        }
        vector<vector<int>> lefts=pathSum(root->left,sum);
        vector<vector<int>> rights=pathSum(root->right,sum);
        current.pop_back();

        return ans;
    }
};