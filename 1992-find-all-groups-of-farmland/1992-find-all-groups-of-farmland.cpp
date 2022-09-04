class Solution
{
    public:
        vector<vector < int>> ans;
    pair<int, int> a;

    void dfs(vector<vector < int>> &land, int i, int j)
    {
        if (i < 0 || i >= land.size() || j < 0 || j >= land[0].size() || land[i][j] == 0)
            return;
        pair<int, int> b = { i, j};
        if (b > a)
            a = b;
        land[i][j] = 0;
        dfs(land, i + 1, j);
        dfs(land, i, j + 1);
        dfs(land, i - 1, j);
        dfs(land, i, j - 1);
    }
    vector<vector < int>> findFarmland(vector<vector < int>> &land)
    {
        for (int i = 0; i < land.size(); i++)
        {
            for (int j = 0; j < land[0].size(); j++)
            {
                if (land[i][j] == 1)
                {
                    a.first = i;
                    a.second = j;
                    dfs(land,i,j);
                    ans.push_back({ i,j,a.first,a.second });
                }
            }
        }
        return ans;
    }
};