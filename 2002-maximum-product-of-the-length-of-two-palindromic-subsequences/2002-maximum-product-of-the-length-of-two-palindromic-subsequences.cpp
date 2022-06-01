class Solution
{
    public:
        bool ispalin(string s)
        {
            int i = 0, j = s.length() - 1;
            while (i < j)
            {
                if (s[i] != s[j])
                    return false;
                i++;
                j--;
            }
            return true;
        }

    void dfs(string &s, int p, string &s1, string &s2, int &ans)
    {
        if (p >= s.length())
        {
            if (ispalin(s1) && ispalin(s2))
            {
                int tmp = s1.length() *s2.length();
                ans = max(ans, tmp);
            }
            return;
        }
        dfs(s, p + 1, s1, s2, ans);

        s1.push_back(s[p]);
        dfs(s, p + 1, s1, s2, ans);
        s1.pop_back();

        s2.push_back(s[p]);
        dfs(s, p + 1, s1, s2, ans);
        s2.pop_back();
    }

    int maxProduct(string s)
    {
        int ans = 0;
        string s1 = "", s2 = "";
        dfs(s, 0, s1, s2, ans);
        return ans;
    }
};