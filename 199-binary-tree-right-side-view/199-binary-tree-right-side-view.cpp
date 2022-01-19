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
    vector<int> rightSideView(TreeNode* root) {
         vector<int> res;
        if(!root)
            return res;
        queue<TreeNode*>q;
        q.push(root);
        int i=0;
        while(!q.empty()){
            int val=q.size();
            for (int i =0; i < val; i++) {
                TreeNode* n = q.front();
                q.pop();
                if(i== val-1)
                    res.push_back(n->val);
                if (n->left != NULL) 
                    q.push(n->left);
                if (n->right != NULL)
                    q.push(n->right);
            }
            
        }
        return res;
    }
};