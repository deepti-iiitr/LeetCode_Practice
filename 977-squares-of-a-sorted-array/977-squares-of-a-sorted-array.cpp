class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>res(nums.size());
        int l=0,r=nums.size()-1;
        int k=r+1;
        for(int i=0;i<k;i++){
            if( abs(nums[l]) > abs(nums[r]))
            {
                res[i]=nums[l]*nums[l];
                l++;
            }
            else{
                res[i]=nums[r]*nums[r];
                r--;
            }
        }
        reverse(res.begin() , res.end());
        return res;
    }
};