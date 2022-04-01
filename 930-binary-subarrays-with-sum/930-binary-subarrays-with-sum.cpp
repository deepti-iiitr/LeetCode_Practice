class Solution {
public:
    int atmost(vector<int>& nums, int goal){
        int i = 0, j = 0; 
        int sum = 0, ans = 0;
        while(j<nums.size()) {
            sum += nums[j];
            while (i <= j && sum > goal)
                sum -= nums[i++];
            ans += j - i;
            j++;
        }
        return ans;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return atmost(nums,goal) - atmost(nums,goal-1);
    }
};