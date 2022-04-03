class Solution {
public:
    int triangularSum(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp=nums;
        if(n==1)
            return nums[0];
        int sze=n, ans;
        while(sze>1){
            vector<int>curr;
            for(int i=0;i<temp.size()-1;i++)
                curr.push_back((temp[i] + temp[i+1])%10);
            sze=curr.size();
            temp=curr;
            ans=curr[0];
        }
        return ans;
    }
};