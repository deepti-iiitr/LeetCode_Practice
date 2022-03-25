class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i=0,j=0;
        int ans=0,zero=0;
        while(j<nums.size()){
            if(nums[j]==0)
                zero++;
            if(zero<=1){
                ans=max(ans,j-i+1);
            }
            else if(zero>1){
                while(zero>1){
                    if(nums[i]==0)
                        zero--;
                    i++;
                }
            }
            j++;
        }
        return ans-1;
    }
};