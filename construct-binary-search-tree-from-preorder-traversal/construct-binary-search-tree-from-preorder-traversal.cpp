
class Solution {
public:
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int>inorder=preorder;
        sort(inorder.begin(), inorder.end());
         TreeNode *t;
        construct(t,preorder, inorder, 0, inorder.size()-1);
        return t;
        
    }
     
    TreeNode* construct(TreeNode* &t, vector<int> &preorder, vector<int> &inorder,int lo, int hi){
        if(lo <= hi){
            int num=preorder[0]; 
            vector<int>::iterator it;
             it = preorder.begin();
            preorder.erase(it);
            int id = findindex(inorder, num);
            t = new TreeNode(inorder[id]);
            construct(t->left, preorder,inorder, lo, id-1);
            construct(t->right, preorder,inorder, id+1, hi);
        }
        return t;
    }
    int findindex( vector<int> &inorder, int k){
        for(int i=0;i<inorder.size();i++)
            if(inorder[i]==k)
                return i;
        return 0;
    }
};