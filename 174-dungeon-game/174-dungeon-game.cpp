class Solution {
public:
       
    int solve(vector<vector<int>>& grid, int i, int j, int n, int m,vector<vector<int>> &dp)
    {
        if(i>=n || j>=m)
            return 1e6;
        if( i==n-1 && j==m-1)
            return grid[i][j] <= 0 ? abs(grid[i][j]) + 1 : 1;
        if(dp[i][j] != -1) 
            return dp[i][j];
       int op1 = solve(grid,i+1, j, n, m, dp);
        int op2 = solve(grid,i, j+1, n, m, dp );
        
        int minHealthRequired = min(op1, op2) - grid[i][j];
        return dp[i][j] = (minHealthRequired <= 0) ? 1 : minHealthRequired;  
    }
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
         int sum=0;
        int n= dungeon.size();
        int m= dungeon[0].size();
         vector<vector<int>> dp(n, vector<int> (m, -1));
        int ans= solve(dungeon,0,0,n,m,dp);
        return ans;
    }
};