class Solution
{
    public:
        int dp[51][51][51];
    int solve(int m, int n, int steps, int maxmove, int i, int j)
    {

        if (steps > maxmove)
        {
            return 0;
        }
        if (i < 0 || i >= m || j < 0 || j >= n)
        {
            return 1;
        }
        if (dp[i][j][steps] != -1)
        {
            return dp[i][j][steps];
        }
        int count = 0;
        count = (count + solve(m, n, steps + 1, maxmove, i + 1, j)) % 1000000007;
        count = (count + solve(m, n, steps + 1, maxmove, i - 1, j)) % 1000000007;
        count = (count + solve(m, n, steps + 1, maxmove, i, j + 1)) % 1000000007;
        count = (count + solve(m, n, steps + 1, maxmove, i, j - 1)) % 1000000007;
        return dp[i][j][steps] = count;
    }
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn)
    {
        memset(dp, -1, sizeof(dp));
        return solve(m, n, 0, maxMove, startRow, startColumn);
    }
};