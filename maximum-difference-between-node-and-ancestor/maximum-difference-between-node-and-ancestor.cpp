class Solution {
public:
int maxSoFar=INT_MIN;
int minSoFar=INT_MAX;
int ans=INT_MIN;
void trav(TreeNode *root,int maxSoFar,int minSoFar){
    if(!root) return;
    maxSoFar=max(root->val,maxSoFar);
    minSoFar=min(root->val,minSoFar);
    ans=max(ans,abs(maxSoFar-minSoFar));
    trav(root->left,maxSoFar,minSoFar);
    trav(root->right,maxSoFar,minSoFar);
}
int maxAncestorDiff(TreeNode* root) {
    ans=INT_MIN;
    maxSoFar=INT_MIN;
    minSoFar=INT_MAX;
    trav(root,maxSoFar,minSoFar);
    return ans;
}
};