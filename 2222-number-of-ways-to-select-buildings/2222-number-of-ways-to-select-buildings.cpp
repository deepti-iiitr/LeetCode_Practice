class Solution {
public:
    long long count(string a, string b)
{
    long long m = a.length();
    long long n = b.length();
    long long dp[m + 1][n + 1] ;
        memset(dp,0,sizeof(dp));
    for (long long i = 0; i <= n; ++i)
        dp[0][i] = 0;
    for (long long i = 0; i <= m; ++i)
        dp[i][0] = 1;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1] +dp[i - 1][j];
                 
            else
                dp[i][j] = dp[i - 1][j];
        }
    }
 
    return dp[m][n];
}
    long long numberOfWays(string s) {
        string s1="101";
        string s2="010";
        return count(s,s1)+count(s,s2);
    }
};