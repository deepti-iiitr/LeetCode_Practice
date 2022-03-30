class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
      int i=0,j=0,n=nums.size(), c=0;
        int sum=0, ans=0;
        unordered_set<int>s;
        while(j<n){
            if(s.find(nums[j]) == s.end()){
                sum=sum+nums[j];
                s.insert(nums[j]);
                ans=max(ans,sum);
                j++;
            }
            else{
                s.erase(nums[i]);
                sum=sum-nums[i];
                i++;
            }
        }
        return ans;
    }
};