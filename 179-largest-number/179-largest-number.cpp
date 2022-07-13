class Solution
{
    public:
        static bool comp(int a, int b)
        {
            string a1 = to_string(a) + to_string(b);
            string a2 = to_string(b) + to_string(a);
            return a1 > a2;
        }
    string largestNumber(vector<int> &nums)
    {
        string ans = "";
        sort(nums.begin(), nums.end(), comp);
        for (int i = 0; i < nums.size(); i++)
            ans += to_string(nums[i]);
        if (nums[0] == 0)
            return "0";
        return ans;
    }
};