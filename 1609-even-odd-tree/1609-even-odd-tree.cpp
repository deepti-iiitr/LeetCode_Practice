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
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        bool flag=false;
        int level = 0;
        while(!q.empty()) {
            vector<int>res;
            for (int i = q.size(); i > 0; --i) {
                TreeNode* n = q.front();
                q.pop();
                res.push_back(n->val);
                if (n->left != NULL) 
                    q.push(n->left);
                if (n->right != NULL)
                    q.push(n->right);
            }
            if(level == 0){
                if(res[0]%2==0)
                    return false;
            }
            else if (level %2 == 0) {
                int c=0;
                for(int i=0;i<res.size();i++)
                {
                    if( res[i] %2 == 0)
                        return false;
                }
                for(int i=0;i<res.size()-1;i++){
                    if(res[i]>=res[i+1])
                        return false;
                }
            }
            else if (level %2 == 1) {
                int c=0;
                for(int i=0;i<res.size();i++)
                {
                    if( res[i] %2 != 0)
                        return false;
                }
                for(int i=0;i<res.size()-1;i++){
                    if(res[i]<=res[i+1])
                        return false;
                }
            }
            ++level;
        }
        return true;
    }
};