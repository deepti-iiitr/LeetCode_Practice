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
    string s="";
    string ab="abcdefghijklmonpqrstuvwxyz";
    void solve(TreeNode* root, string &res){
        if(!root)
            return;
        res+='a'+root->val;
       if(root->left==NULL && root->right==NULL){
            reverse(res.begin(), res.end());
        if(s=="")
            s=res;
        else
            s=min(s,res);
         reverse(res.begin(), res.end());
       }
        
        solve(root->left,res);
        solve(root->right,res);
        res.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        string res="";
        solve(root,res);
        return s;
    }
};