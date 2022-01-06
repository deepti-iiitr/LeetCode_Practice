class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int>res;
        int m=1000000007;
        for(int i=0;i<nums.size();i++)
        {
            int sum=nums[i];
            res.push_back(sum);
            for(int j=i+1;j<nums.size();j++)
            {
                sum+=nums[j];
                res.push_back(sum);
            }
        }
        sort(res.begin(),res.end());
        // for(int i=0;i<res.size();i++)
        //      cout<<res[i]<<" ";
        int ans=0;
        for(int i=left-1;i<right;i++)
        {
            ans+=res[i];
            ans=ans%m;
        }
        return ans;
    }
};