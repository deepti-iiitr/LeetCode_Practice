class Solution {
public:
    int dp[1001][1001];
    int solve(int ans, int value, int copied, int&n){
        if(value>n)
            return INT_MAX;
        if(value==n)
            return ans;
        if(dp[ans][value]!=-1)
            return dp[ans][value];
        return min(solve(ans+1,value+copied,copied,n), solve(ans+2,2*value,value,n));
    }
    int minSteps(int n) {
        if(n==1)
            return 0;
        memset(dp,-1,sizeof(dp));
        return solve(1,1,1,n);
    }
};