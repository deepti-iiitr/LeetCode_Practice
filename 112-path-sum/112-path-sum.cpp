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
    vector<int>ans;
    bool check=false;
    void solve(TreeNode* root, int targetSum){
        if(!root)
            return;
        ans.push_back(root->val);
        solve(root->left,targetSum);
         solve(root->right,targetSum);
        if(root->left==NULL && root->right==NULL)
        {
            int s=0;
            for(int i=0;i<ans.size();i++)
                s+=ans[i];
            if(s==targetSum)
                check=true;
        }
        ans.pop_back();
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        solve(root, targetSum);
        return check;
    }
};