class Solution {
public:
    int nextGreaterElement(int n) {
        int temp=n;
        vector<int> nums;
        while (temp){                               
            nums.push_back(temp%10);
            temp=temp/10;
        }
        reverse(nums.begin(),nums.end());
        temp=nums.size();
        int k,m;
        for (k=temp-2;k>=0;k--){
            if (nums[k]<nums[k+1]) break;
        }
        if (k<0) return -1;
        else{
            for (m=temp-1;m>k;m--){
                if (nums[m]>nums[k]) break;
            }
            swap(nums[m],nums[k]);
            reverse(nums.begin()+k+1,nums.end());
        }
        long long int res=0;
        for (int i=0;i<temp;i++){
            res=res*10+nums[i];
        }
        if (res>INT_MAX) return -1;
        return res;
    }
};