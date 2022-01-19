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
    vector<int> largestValues(TreeNode* root) {
        vector<int> res;
        if(!root)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            int m=INT_MIN;
            for (int i = q.size(); i > 0; --i) {
                TreeNode* n = q.front();
                q.pop();
                m=max(m,n->val);
                if (n->left != NULL) 
                    q.push(n->left);
                if (n->right != NULL)
                    q.push(n->right);
            }
            res.push_back(m); 
        }
        return res;
    }
};