class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        if(nums.size()==1)
            return nums[0];
        for(int i=0;i<nums.size();i++){
            if(i!=0 &&  i!=nums.size()-1 && nums[i]!=nums[i+1] && nums[i]!=nums[i-1])
                return nums[i];
            if(i==0 && nums[i]!=nums[i+1])
                return nums[0];
            if(i==nums.size()-1 && nums[i]!=nums[i-1])
                return nums[i];
        }
        return 0;
    }
};