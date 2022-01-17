class Solution {
public:
    vector<int> a;
    void inorder(TreeNode* root)
    {
        if(root!=NULL)
        {
            inorder(root->left);
            a.push_back(root->val);
            inorder(root->right);
        }
    }

    void createTree(unordered_map<int,int> map,TreeNode* root)
    {
        if(root!=NULL){
            root->val = map[root->val]; 
            createTree(map,root->left);
           createTree(map,root->right);
           
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        inorder(root);
        unordered_map<int,int> map;
        int sum=0;
        for(int i=a.size()-1;i>=0;i--)
        {
            sum +=a[i];
            map[a[i]] = sum;
        }
        createTree(map,root);
        return root;
    }
};