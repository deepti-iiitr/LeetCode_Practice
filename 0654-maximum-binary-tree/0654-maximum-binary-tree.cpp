class Solution {
public:
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        TreeNode *t;
        construct(t, nums, 0, nums.size()-1);
        return t;
    }
    
    TreeNode* construct(TreeNode* &t, vector<int> &nums, int lo, int hi){
        if(lo <= hi){
            int id = getMaxIdx(nums, lo, hi);
            t = new TreeNode(nums[id]);
            construct(t->left, nums, lo, id-1);
            construct(t->right, nums, id+1, hi);
        }
        return t;
    }
    
    int getMaxIdx(vector<int> &nums, int lo, int hi){
        pair<int, int> mx = {-1, -1};
        for(int i=lo; i<=hi; i++){
            if(mx.first < nums[i]){
                mx = make_pair(nums[i], i);
            }
        }
        return mx.second;
    }
};