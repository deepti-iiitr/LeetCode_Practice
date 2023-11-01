class Solution {
public:
    int maxi = -1;
    int n;
    int solve(int reqk, int ind, vector<int> &nums, vector<vector<int>> &dp){
        // base
        if(reqk == 0){
            return 0;
        }
        if(ind == n){
            return -1e5;
        }
        if(dp[reqk][ind] != -1) return dp[reqk][ind];
        // take
        int take = -1e5;
        if(reqk >= nums[ind]){
            take =  1+solve(reqk-nums[ind],ind+1,nums,dp);
        }
        //nottake
        int nottake = solve(reqk,ind+1,nums,dp);
        return dp[reqk][ind] = max(take,nottake);
    }
    int lengthOfLongestSubsequence(vector<int>& nums, int k) {
        n= nums.size();
        vector<vector<int>> dp(k+1,vector<int>(n+1,-1));
        int ret = solve(k,0,nums,dp);
        return ret > 0 ? ret : -1;
    }
};