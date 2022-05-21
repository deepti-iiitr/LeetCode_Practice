class Solution {
public:
    int dp[31];

    int fib(int n) {
        memset(dp,-1,sizeof(dp));
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<n+1;i++)
            dp[i]=dp[i-1]+dp[i-2];
        return dp[n];
    }
};