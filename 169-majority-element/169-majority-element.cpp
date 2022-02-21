class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n=nums.size();
        unordered_map<int,int> map;
        int i=0;
        while(i<n)
        {
            map[nums[i]]+=1;
            i+=1;
        }
        
        i=0;
        int ans;
        while(i<n)
        {
            if(map[nums[i]] > n/2)
            {
                ans= nums[i];
            }
            i+=1;
        }
        
        return ans;
    }
};