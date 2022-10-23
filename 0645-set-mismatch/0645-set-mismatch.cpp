class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
      vector<int>ans;
      unordered_map<int,int>mp;
      for(int i=0;i<n;i++) mp[nums[i]]++;
        int missing=0;
        int repeat=0;
      for(int i=1;i<=n;i++){
          if(mp[i]==0)  missing=i;
          if(mp[i]>1) repeat=i;
             
          }
          ans.push_back(repeat);
          ans.push_back(missing);
          return ans;
    }
};