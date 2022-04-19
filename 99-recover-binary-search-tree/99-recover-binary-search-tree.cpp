
class Solution {
public:
    vector<int>temp;
    
    void inorderTraversal(TreeNode* root){
        if(!root)
            return;
        inorderTraversal(root->left);
        temp.push_back(root->val);
        inorderTraversal(root->right);
    }
    
    void traversal(TreeNode* &root,int start,int end)
    {
        if(root==NULL)
            return;
        if(root->val==start)
            root->val=end;
        else if(root->val==end)
            root->val=start;
        traversal(root->left,start,end);
        traversal(root->right,start,end);
    }
    
    void recoverTree(TreeNode* root) {
        inorderTraversal(root);
       vector<int>inorder=temp;
        sort(inorder.begin(), inorder.end());
        int s, e;
        for(int i=0;i<temp.size();i++){
            if(temp[i] != inorder[i]){
                s=temp[i];
                e=inorder[i];
                break;
            }
        }
        traversal(root, s,e);
        
    }
};