class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            m[nums[i]]++;
        vector<int>v;
        for(auto i:m){
            cout<<i.first<<" "<<i.second<<endl;
            v.push_back(i.first);
        }
        //sort(v.begin(), v.end());
        int ans=INT_MIN;
        int n=m.size();
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i] == 1)
                ans=max(m[v[i]] + m[v[i+1]], ans);
        }
        return ans==INT_MIN?0:ans;
    }
};