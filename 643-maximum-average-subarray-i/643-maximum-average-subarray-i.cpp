class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double s=0,ans=INT_MIN;
        if(nums.size()==1)
        {
            ans=nums[0];
            return ans;
        }
        for(int i=0;i<k;i++){
            s+=nums[i];
        }
        int ind=k;
        double av=s/k;
        ans= max(av,ans);
        for(int i=1;i<= nums.size()-k;i++){
            s=s-nums[i-1]+ nums[ind];
            ind++;
            double av=s/k;
            ans= max(av,ans);
        }
        return ans;
    }
};