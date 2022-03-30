class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i=0,j=0;
        int n=nums.size();
        int total=0,sum=0, ans=0;
        bool check=false;
        total=accumulate(nums.begin(), nums.end(), total);
        if(total == x)
            return n;
        while(j<n){
            sum+=nums[j];
            while(i<j  && sum > total-x  )
            {
                sum=sum-nums[i];
                i++;
            }
            if(sum == total-x)
                ans= max(ans, j-i+1);
            j++;
        }
        if(ans==0)return -1;
        return n-ans;
    }
};