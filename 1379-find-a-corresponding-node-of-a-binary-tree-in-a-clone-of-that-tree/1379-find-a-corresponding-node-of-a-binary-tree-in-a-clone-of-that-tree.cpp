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
    TreeNode* ans=NULL;
    void search(TreeNode* cloned, TreeNode* target){
        if(!cloned)
            return;
        if(cloned->val == target->val)
            ans=cloned;
        search(cloned->left, target);
        search(cloned->right, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        search(cloned, target);
        return ans;
    }
};