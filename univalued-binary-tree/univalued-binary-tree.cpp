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
    void inorder(TreeNode* root, set<int>& s){
        if(root){
            inorder(root->left,s);
            s.insert(root->val);
            inorder(root->right,s);
        }
    }
    bool isUnivalTree(TreeNode* root) {
        set<int>s;
        inorder(root,s);
        if(s.size()==1)
            return true;
        return false;
    }
};