class BSTIterator {
    vector<int>arr;
    int i=0;
public:
    void inorder(TreeNode*&root){
        if(!root)return;
        inorder(root->left);
        arr.push_back(root->val);
        inorder(root->right);
    }
    BSTIterator(TreeNode* root) {
        inorder(root);
    }
    
    int next() {
        int ans=arr[i];
        i++;
        return ans;
        
    }
    
    bool hasNext() {
         
        if(i<arr.size())
            return true;
        return false;
    }
};