class Solution
{
    public:
        bool solve(string a, string b, unordered_map<string, bool> &t)
        {

            if (a == b)
                return true;

            if (a.size() <= 1)
                return false;

            string str = a + b;
            if (t.find(str) != t.end())
                return t[str];

            int n = a.size();
            for (int i = 1; i < n; i++)
            {

                if (solve(a.substr(0, i), b.substr(0, i), t) && solve(a.substr(i), b.substr(i), t))
                    return true;

                if (solve(a.substr(0, i), b.substr(n - i), t) && solve(a.substr(i), b.substr(0, n - i), t))
                    return true;
            }

            return t[str] = false;
        }

    bool isScramble(string s1, string s2)
    {

        if (s1.size() != s2.size())
            return false;

        unordered_map<string, bool> t;
        return solve(s1, s2, t);
    }
};