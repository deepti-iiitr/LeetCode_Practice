
class Solution {
public:
    void solve(TreeNode* root, int& s){
        if(!root)
            return;
        if(root->val % 2 == 0){
           if(root->left){
                if(root->left->left!=NULL )
                    s+=root->left->left->val;
                if(root->left->right!=NULL)
                     s+=root->left->right->val;
            }
            if(root->right){
                if(root->right->left!=NULL)
                     s+=root->right->left->val;
                if(root->right->right!=NULL)
                     s+=root->right->right->val;
              }
        }
        solve(root->left,s);
        solve(root->right,s);
        
    }
    int sumEvenGrandparent(TreeNode* root) {
        int s=0;
        solve(root,s);
        return s;
    }
};