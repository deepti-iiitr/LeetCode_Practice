/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
   bool path(vector<TreeNode*> &ans, TreeNode* root, TreeNode* target) {
        if (root == target) {
            ans.push_back(root);
            return true;
        }
        
        if (root->left) {
            ans.push_back(root->left);
            if(path(ans, root->left, target))
                return true;
            ans.pop_back();
        }
        
        if (root->right) {
            ans.push_back(root->right);
            if(path(ans, root->right, target))
                return true;
            ans.pop_back();
        }
        
        return false;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> p1;
        p1.push_back(root);
        path(p1, root, p);
        
        vector<TreeNode*> p2;
        p2.push_back(root);
        path(p2, root, q);
        
        int size1 = p1.size();
        int size2 = p2.size();
        
        int idx1 = 0, idx2 = 0;
        
        while (idx1 < size1 && idx2 < size2) {
            if (p1[idx1] == p2[idx2]) {
                idx1++;
                idx2++;
                continue;
            }
            
            idx1--;
            break;
        }
        
        TreeNode* lca = p1[idx1];
        
        return lca;
    }
};