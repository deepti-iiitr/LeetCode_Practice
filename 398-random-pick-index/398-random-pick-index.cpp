class Solution {
public:
    map<int, vector<int>>mp;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
            mp[nums[i]].push_back(i);
    }
    
    int pick(int target) {
         auto picked = mp[target];
        int n = picked.size();
        return picked[rand()%n];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */