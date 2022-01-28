
class Solution {
public:
    bool inorder(TreeNode* root, int s){
           if(!root)
               return true;
           if(root->val!=s)
               return false;
            return (inorder(root->left,s) && inorder(root->right,s));
           
    }
    bool isUnivalTree(TreeNode* root) {
        int v=root->val;
        return inorder(root,v);
    }
};