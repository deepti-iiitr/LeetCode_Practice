class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        long ans=(long(k)*(long(k+1)))/2;
        unordered_set<int>st(nums.begin(),nums.end());
        nums.clear();
        for(auto &i:st)
            nums.push_back(i);
        sort(begin(nums),end(nums));
        int sz=nums.size();
        for(int i=0;i<sz;i++){
          if(nums[i]<=k ){
                ans-=nums[i];
                ans+=k+1;
                k++;
            }
            else
                break;
        }
        return ans;
    }
};