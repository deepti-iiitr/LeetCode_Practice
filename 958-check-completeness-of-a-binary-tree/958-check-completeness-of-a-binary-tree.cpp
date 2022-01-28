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
    bool isCompleteTree(TreeNode* root) {
        bool value = false;
        if(root==NULL)
            return true;
        queue<TreeNode *> q;
        q.push(root);
        while(q.size()>0)
        {
            TreeNode *p = q.front();
            q.pop();
            if(p==NULL)
            {
                value=true;
            }
            else
            {
                if(value)
                    return false;
                q.push(p->left);
                q.push(p->right);
            }
        }
        return true;
    }
};