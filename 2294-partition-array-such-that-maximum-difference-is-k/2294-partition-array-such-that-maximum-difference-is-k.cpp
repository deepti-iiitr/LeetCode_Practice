class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        if(nums.size()==1)
            return 1;
        sort(nums.begin() , nums.end());
        int mn=nums[0], ans=0;
        for(int i=1;i<nums.size();i++){
           
            if(nums[i]-mn > k ){
                ans++;
                mn=nums[i];
            }
        }
        return ans+1;
    }
};