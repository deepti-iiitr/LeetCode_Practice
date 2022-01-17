class Solution {
public:
    vector<int>path;
    void inorder(TreeNode* root){
        if(root){
            inorder(root->left);
            path.push_back(root->val);
            inorder(root->right);
        }
    }
    bool isValidBST(TreeNode* root) {
        inorder(root);
        for(int i=0;i<path.size()-1;i++){
            if(path[i]>= path[i+1])
                return false;
        }
        return true;
    }
};