class Solution {
public:
    void maxProductPathHelper(vector<vector<int>>& grid, int i, int j, long long int p, long long int &mp, int rows, int cols) {
        p*=(1LL*grid[i][j]);
        if(p==0 || i==rows-1 && j==cols-1){
            mp=max(mp,p);
            return;
        }
        if(i<rows-1)
            maxProductPathHelper(grid, i+1,j,p,mp, rows,cols);
        if(j<cols-1)
            maxProductPathHelper(grid, i,j+1,p,mp, rows,cols);
        
    }
    int maxProductPath(vector<vector<int>>& grid) {
        long long int mp=-1; long long int p=1;
        maxProductPathHelper(grid, 0,0,p,mp, grid.size(), grid[0].size());
        if(mp<0) return -1;
        const long long int MOD=1000000007;
        return mp%MOD;
    }
};