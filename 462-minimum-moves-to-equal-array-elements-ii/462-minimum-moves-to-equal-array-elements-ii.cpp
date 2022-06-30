class Solution
{
    public:
        int minMoves2(vector<int> &nums)
        {
            sort(nums.begin(), nums.end());
            int n = nums.size();
            int mid_index = n / 2;
            int steps = 0;
            int mid = nums[mid_index];
            for (int i = 0; i < n; i++)
            {
                if (i != mid_index)
                {
                    steps += abs(nums[i] - mid);
                }
            }
            return steps;
        }
};