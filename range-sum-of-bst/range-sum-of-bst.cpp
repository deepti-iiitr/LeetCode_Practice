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
    void sorted(TreeNode* root,vector<int>&ans)
    {
        if(root==NULL)
        {
            return;
        }
        sorted(root->left,ans);
        ans.push_back(root->val);
        sorted(root->right,ans);
    }
    int rangeSumBST(TreeNode* root, int low, int high) {
        vector<int>ans;
        int sum=0;
        sorted(root,ans);
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]>=low && ans[i]<=high)
            {
                sum+=ans[i];
            }
        }
        return sum; 
    }
};