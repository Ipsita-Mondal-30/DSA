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
vector<int>currentpath;
vector<vector<int>>answer;
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        
        
        if(root==NULL){
            return answer;
        }
        int sum=targetSum-root->val;
        currentpath.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            if
                (sum==0){
          answer.push_back(currentpath);
            }
        }
   
        vector<vector<int>> leftS=pathSum(root->left,sum);
        vector<vector<int>> rightS=pathSum(root->right,sum);
        currentpath.pop_back();
        return answer;
    }
};