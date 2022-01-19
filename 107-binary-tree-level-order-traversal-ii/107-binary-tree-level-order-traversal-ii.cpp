/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
         vector<vector<int>> res;
        if(!root)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            vector<int>level;
            for (int i = q.size(); i > 0; --i) {
                TreeNode* n = q.front();
                q.pop();
                level.push_back(n->val);
                if (n->left != NULL) 
                    q.push(n->left);
                if (n->right != NULL)
                    q.push(n->right);
            }
            res.push_back(level);
            i++;
        }
        vector<vector<int>> ans;
        int n=res.size();
        for(int i=n-1;i>=0;i--){
            vector<int>temp(res[i].begin(), res[i].end());
            ans.push_back(temp);
        }
        return ans;
    }
};