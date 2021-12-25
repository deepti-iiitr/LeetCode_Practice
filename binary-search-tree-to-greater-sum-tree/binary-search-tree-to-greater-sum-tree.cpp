
class Solution {
public:
    vector<int> a;
    void postorder(TreeNode* root)
    {
        if(root!=NULL)
        {
            postorder(root->left);
            postorder(root->right);
            a.push_back(root->val);
        }
    }

    void createTree(unordered_map<int,int> map,TreeNode* root)
    {
        if(root!=NULL){
            createTree(map,root->left);
           createTree(map,root->right);
           root->val = map[root->val]; 
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        postorder(root);
        unordered_map<int,int> map;
        sort(a.begin(),a.end());
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