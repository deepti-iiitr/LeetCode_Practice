class Solution {
public:
    int height(TreeNode* root){
        if(!root)
            return 0;
        return max(height(root->left), height(root->right))+1;
    }
    
    TreeNode* find(TreeNode* root, int curr, int height){
        if(!root)
            return NULL;
        if(curr==height)
            return root;
        TreeNode* l=find(root->left, curr+1,height);
        TreeNode* r=find(root->right, curr+1,height);
        if(l && r)
            return root;
        if(l && !r)
            return l;
        else
            return r;
    }
        
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        int h=height(root);
        return find(root, 1, h);
    }
};