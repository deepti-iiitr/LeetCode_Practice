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
    int solve(TreeNode* root){
        if(!root)
            return 0;
        int l=solve(root->left);
        int h= solve(root->right);
        if(min(l,h)==0)
            return max(l,h)+1;
        else
            return min(l,h)+1;

    }
    int minDepth(TreeNode* root) {
        return solve(root);
    }
};