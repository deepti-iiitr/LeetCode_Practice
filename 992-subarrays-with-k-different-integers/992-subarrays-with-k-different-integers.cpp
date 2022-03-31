class Solution {
public:
    int atmostK(vector<int>& nums, int k){
       int ans=0;
        int i=0,j=0;
        map<int,int>m;
        while(j< nums.size()){
            m[nums[j]]++;
            while(m.size()>k){
                m[nums[i]]--;
                if(m[nums[i]]==0)
                    m.erase(nums[i]);
                i++;
            }
            j++;
            ans+=j-i+1;
        }
        return ans; 
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return atmostK(nums,k)- atmostK(nums,k-1);
    }
};