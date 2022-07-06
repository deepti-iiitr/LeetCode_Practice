class Solution
{
    public:
        int dp[1000001];
    int func(int i)
    {
        if (i == 1) return 0;
        if (dp[i] != -1) return dp[i];
        if (i % 2 == 0)
        {
            return dp[i] = 1 + func(i / 2);
        }
        return dp[i] = 1 + func((3 *i) + 1);
    }
    int getKth(int lo, int hi, int k)
    {
        memset(dp, -1, sizeof(dp));
        vector<pair<int, int>> vp;
        for (int i = lo; i <= hi; i++)
        {
            pair<int, int> p;
            p.first = func(i);
            p.second = i;
            vp.push_back(p);
        }
        sort(vp.begin(), vp.end());
        return vp[k - 1].second;
    }
};