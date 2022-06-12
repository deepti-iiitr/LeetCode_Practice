class Solution
{
    public:
        bool helper(vector<int> &nums, int sum, int n, vector<vector< int>> &dp)
        {
            if (n <= 0) return false;
            if (sum == 0) return true;

            if (dp[n - 1][sum] != -1)
            {
                return dp[n - 1][sum];
            }

            if (sum >= nums[n - 1])
            {
                return dp[n - 1][sum] = (helper(nums, sum - nums[n - 1], n - 1, dp)) || (helper(nums, sum, n - 1, dp));
            }
            else
            {
                return dp[n - 1][sum] = helper(nums, sum, n - 1, dp);
            }
        }
    bool canPartition(vector<int> &nums)
    {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
        }
        if (sum % 2 == 0)
        {
            vector<vector < int>> dp(nums.size() + 1, vector<int> (sum + 1, -1));
            return helper(nums, sum / 2, nums.size(), dp);
        }
        else
        {
            return false;
        }
    }
};