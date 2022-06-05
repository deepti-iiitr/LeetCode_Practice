class Solution {
public:
    int helper(int inx, vector<int>& nums, vector<int>& dp){
        if(inx >= nums.size()-1){
            return 0;
        }
        
        if(dp[inx] != -1) return dp[inx];
        int minJumps = 10e5;
        for(int i=1; i<=nums[inx]; i++){
            minJumps = min(minJumps, 1 + helper(i + inx, nums, dp));
        }
        
        return dp[inx] = minJumps;
    }
    int jump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return helper(0, nums, dp);
    }
};