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
    bool path(TreeNode* root,vector<TreeNode*> &v,TreeNode* &t)
    {
        if(root==NULL)
            return false;
        v.push_back(root);
        if(root==t)
        {
            
            return true;
        }
        if(path(root->left,v,t))
            return true;
        if(path(root->right,v,t))
            return true;
        v.pop_back();
        return false;
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        vector<TreeNode*> vp;
        vector<TreeNode*> vq;
        path(root,vp,p);
        path(root,vq,q);
        int psize=vp.size();
        int qsize=vq.size();
        int min;
        if(psize<qsize)
            min=psize;
        else
            min=qsize;
        TreeNode* lca;
        for(int i=0;i<min;i++)
        {
            if(vp[i]==vq[i])
                lca=vp[i];
            else
                break;
        }
        return lca;
    }
};