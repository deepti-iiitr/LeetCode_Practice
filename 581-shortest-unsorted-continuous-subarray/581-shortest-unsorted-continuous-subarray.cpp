class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>sorted_arr=nums;
        sort(sorted_arr.begin() , sorted_arr.end());
        int start=0,end=0;
        int i=0;
        for(;i<nums.size();i++){
            if(nums[i] != sorted_arr[i])
            {
                start=i;
                break;
            }
        }
        
        for(i=nums.size()-1;i>=0;i--){
            if(nums[i] != sorted_arr[i])
            {
                end=i;
                break;
            }
        }
        if(start==0 and end==0)
            return 0;
        return (end-start)+1;
    }
};