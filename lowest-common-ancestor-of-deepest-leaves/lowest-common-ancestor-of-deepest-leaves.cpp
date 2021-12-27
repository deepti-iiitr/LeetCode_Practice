class Solution {
  vector<TreeNode*>v;
public:
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        
      int hmax= height(root);
      nodH(root,hmax,1);
      
      if(v.size()==1)
        return v[0];
      
      TreeNode* lca=v[0];
      for(int i=1;i<v.size();i++){
        lca=findLCA(root,lca->val,v[i]->val);
      }
      
      return lca;
    }
  
     int height(TreeNode* root){
       if(!root)
         return 0;
       int l=height(root->left);
       int r=height(root->right);
       return max(l,r)+1;
     }
  
     void nodH(TreeNode* root,int &hmax,int h){
       if(!root)
         return ;
       
       if(root->left==nullptr && root->right==nullptr && h==hmax){
         v.push_back(root);
       }
       
       nodH(root->left,hmax,h+1);
       nodH(root->right,hmax,h+1);
     }
  
    TreeNode* findLCA(TreeNode* root, int n1, int n2){
      if(!root)
        return root;
      
      if(root->val==n1 || root->val==n2)
        return root;
      
      TreeNode* l=findLCA(root->left,n1,n2);
      TreeNode* r=findLCA(root->right,n1,n2);
      
      if(l && r)
        return root;
      if(l && !r)
        return l;
      else
        return r;
    }
};
