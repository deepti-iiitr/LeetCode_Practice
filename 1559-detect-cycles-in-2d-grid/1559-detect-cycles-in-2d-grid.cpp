class Solution
{
    public:
        bool iscyclic(vector<vector < char>> &grid, vector< vector< bool>> &vis, int curi, int curj, int lasti, int lastj, int tar)
        {
            if (curi < 0 || curj < 0 || curi > grid.size() - 1 || curj > grid[0].size() - 1 || grid[curi][curj] != tar) return false;
            if (vis[curi][curj]) return true;
            vis[curi][curj] = true;
            if ((curi + 1 != lasti || curj != lastj) && iscyclic(grid, vis, curi + 1, curj, curi, curj, tar)) return true;
            if ((curi - 1 != lasti || curj != lastj) && iscyclic(grid, vis, curi - 1, curj, curi, curj, tar)) return true;
            if ((curi != lasti || curj + 1 != lastj) && iscyclic(grid, vis, curi, curj + 1, curi, curj, tar)) return true;
            if ((curi != lasti || curj - 1 != lastj) && iscyclic(grid, vis, curi, curj - 1, curi, curj, tar)) return true;
            return false;
        }
    bool containsCycle(vector<vector < char>> &grid)
    {
        vector<vector < bool>> vis(grid.size(), vector<bool> (grid[0].size(), false));
        for (int i = 0; i < grid.size(); ++i)
        {
            for (int j = 0; j < grid[0].size(); ++j)
            {
                if (!vis[i][j] && iscyclic(grid, vis, i, j, -1, -1, grid[i][j])) return true;
            }
        }
        return false;
    }
};