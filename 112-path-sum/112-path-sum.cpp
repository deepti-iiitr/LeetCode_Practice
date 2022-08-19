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
        ans.push_back(root->val); // push value of every node
        solve(root->left,targetSum); 
         solve(root->right,targetSum);
        if(root->left==NULL && root->right==NULL) // if we have come to aleaf node, we need to find sum now
        {
            int s=0;
            for(int i=0;i<ans.size();i++)
                s+=ans[i];
            if(s==targetSum)
            {
                check=true;
                return;
            }
        }
        ans.pop_back();// now pop out the last element
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        solve(root, targetSum);
        return check;
    }
};