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
    void solve(TreeNode* &root, int val, TreeNode* t){
        while(root){
            if(root->val > val)
            {
                 t=root;
                root=root->left;
            }
            else if(root->val < val){
                t=root;
               root= root->right;
            }
        }
        TreeNode* x=new TreeNode(val);
        x->left=NULL;
        x->right=NULL;
        if(t->val > val)
        {
            t->left=x;
        }
        else
            t->right=x;
    }
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            TreeNode* temp=new TreeNode(val);
            root=temp;
            root->left=NULL;
            root->right=NULL;
            return root;
        }
        TreeNode* t=new TreeNode;
        TreeNode* r=root;
        solve(r,val,t);
        return root;
    }
};