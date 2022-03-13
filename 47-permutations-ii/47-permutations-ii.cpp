class Solution {
public:
    vector<vector<int>>result;
    void permutation(vector<int> &nums,int i,int n){
        if(i==n){
            result.push_back(nums);
            return ;
        }
        unordered_set<int>s;
        for(int j=i;j<=n;j++){
            if(s.find(nums[j])!=s.end())continue;
            s.insert(nums[j]);
            swap( nums[i],nums[j]);
            permutation(nums,i+1,n);
            swap( nums[i],nums[j]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
       
        permutation(nums,0,nums.size()-1);
        
        return result; 
    }
};