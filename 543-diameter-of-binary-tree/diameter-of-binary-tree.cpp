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
    int result;
    int dfs(TreeNode* root){
          if(root==NULL){
            return 0;
        }
        int leftS=dfs(root->left);
        int rightS=dfs(root->right);

        result=max(result,leftS+rightS);

        return max(leftS,rightS)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        result=INT_MIN;
        dfs(root);

        return result;
    }
};