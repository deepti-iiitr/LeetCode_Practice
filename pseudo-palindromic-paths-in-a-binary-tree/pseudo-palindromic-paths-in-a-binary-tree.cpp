
class Solution {
public:
   int counter=0;
    void helper(TreeNode* root,vector<int>& frequency)
    {
        if(!root)return;
        frequency[root->val]++;
        if(root->left==NULL && root->right==NULL)
        {
            int odd=0;
            for(auto i:frequency)
            {
                if(i%2!=0)
                {
                    odd++;
                }
            }
            if(odd<2)
            {
                counter++;
            }
            frequency[root->val]--;
            return;
        }
        helper(root->left,frequency);
        helper(root->right,frequency);
        frequency[root->val]--;
        
        
    }
    int pseudoPalindromicPaths (TreeNode* root) {
        vector<int> frequency(10,0);
        helper(root,frequency);
        return counter;
    }
};