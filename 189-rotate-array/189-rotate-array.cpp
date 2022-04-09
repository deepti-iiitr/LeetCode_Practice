class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       vector<int>t;
        int n=nums.size();
        int v=k%n;
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+v);
        reverse(nums.begin()+v,nums.end());
        return;
      
    }
};