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
    int count=0;
    void solve(TreeNode* root, int targetSum,vector<int>& path){
        if(!root)
        {
            return;
        }
       path.push_back(root->val);
        solve(root->left,targetSum,path);
         solve(root->right,targetSum,path);
        int f = 0;
        for (int j = path.size() - 1; j >= 0; j--) {
            f += path[j];
        if(f==targetSum)
            count++;
        }
        path.pop_back();
    }
    int pathSum(TreeNode* root, int targetSum) {
        vector<int> path;
        int s=0;
        solve(root,targetSum,path);
        return count;
    }
};