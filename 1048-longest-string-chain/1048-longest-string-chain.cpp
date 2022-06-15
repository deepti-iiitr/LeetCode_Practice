static bool my_cmp(string &a, string &b)
{
    return a.length() < b.length();
};
class Solution
{
    public:
        int longestStrChain(vector<string> &words)
        {
            int n = words.size();
            vector<int> dp(n, 0);
            dp[0] = 1;

            sort(words.begin(), words.end(), my_cmp);
            int overallMax = 1;
            for (int i = 1; i < n; i++)
            {
                int maxPrev = 0;
                for (int j = 0; j < i; j++)
                {
                    if (is_predecessor(words[j], words[i]))
                        maxPrev = max(maxPrev, dp[j]);
                }
                dp[i] = 1 + maxPrev;
                overallMax = max(overallMax, dp[i]);
            }

            return overallMax;
        }

    bool is_predecessor(string &prev, string &curr)
    {
        if (prev.length() + 1 != curr.length())
            return false;

        int i = 0;
        for (int j = 0; j < curr.length(); j++)
        {
            if (i < prev.length() && prev[i] == curr[j])
                i++;
        }

        return i == prev.length();
    }
};