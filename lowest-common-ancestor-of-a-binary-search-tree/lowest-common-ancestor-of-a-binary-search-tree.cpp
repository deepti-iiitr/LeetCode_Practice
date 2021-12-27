/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL){
        return NULL;
    }
    int curr=root->val;
    //if both lies on right
    if(curr< p->val && curr< q->val){
        return lowestCommonAncestor(root->right,p,q);
    }
    //if both lies on left
    if(curr> p->val && curr> q->val){ 
        return lowestCommonAncestor(root->left,p,q);
    }
    //one lies on left and other on right
    return root;     
    }
};