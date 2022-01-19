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
    vector<double> averageOfLevels(TreeNode* root) {
         vector<double>res;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty()){
            long double val=q.size();
            vector<int>temp;
            long sum=0;
            for (int i = q.size(); i > 0; --i) {
                TreeNode* n = q.front();
                q.pop();
                sum+=n->val;
                if (n->left != NULL) 
                    q.push(n->left);
                if (n->right != NULL)
                    q.push(n->right);
            }
            res.push_back(sum/val);
        }
        return res;
    }
};