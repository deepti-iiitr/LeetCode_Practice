class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int k) {
        vector<int>res;
        int n= nums.size();
        int i=0;
    
        while(i<k && k<n){
            res.push_back(nums[i]);
            res.push_back(nums[k]);
            i++;
            k++;
        }
        return res;
    }
};