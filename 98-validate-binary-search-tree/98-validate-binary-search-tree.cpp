class Solution {
public:
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        TreeNode*prev=NULL;
        bool ans=true;
        ValidateBST(root,prev,ans);
        return ans;
    }
private:
    void ValidateBST(TreeNode*root,TreeNode* &prev,bool &ans)
    {
        if(root==NULL)
            return;
        ValidateBST(root->left,prev,ans);
        if(prev!=NULL)
        {
            if(root->val <=  prev->val)
                ans=false;
        }
        prev=root;
        ValidateBST(root->right,prev,ans);
    }
};