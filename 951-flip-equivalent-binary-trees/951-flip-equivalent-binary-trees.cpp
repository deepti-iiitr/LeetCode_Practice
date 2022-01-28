class Solution {
public:
    bool flipEquiv(TreeNode* root1, TreeNode* root2) {
       
        // check condition first,second,third
        if(root1 == NULL || root2 == NULL){
            return root1 == root2;
        }
        
        //check condition fourth
        if(root1->val != root2->val){
            return 0;
        }
    
        return ( flipEquiv(root1->left,root2->right) && flipEquiv(root1->right,root2->left) )|| (flipEquiv(root1->left,root2->left) && flipEquiv(root1->right,root2->right));
    }
};