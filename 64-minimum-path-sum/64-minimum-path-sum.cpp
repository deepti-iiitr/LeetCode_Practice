class Solution {
public:
    
    int solve(vector<vector<int>>& grid, int i, int j, int n, int m,vector<vector<int>> &dp)
    {
        if(i>=n || j>=m)
            return 1e6;
        if( i==n-1 && j==m-1)
            return grid[i][j];
        if(dp[i][j] != -1) 
            return dp[i][j];
        return dp[i][j] = min( solve(grid,i,j+1,n,m,dp)+grid[i][j] ,solve(grid,i+1,j,n,m,dp)+ grid[i][j] );
    }
    int minPathSum(vector<vector<int>>& grid) {
        int sum=0;
        int n= grid.size();
        int m= grid[0].size();
         vector<vector<int>> dp(n, vector<int> (m, -1));
        int ans= solve(grid,0,0,n,m,dp);
        return ans;
    }
};