class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int,int>m;
        int ans=0;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                ans+=(m[target - arr[i] - arr[j]]);
            }
            m[arr[i]]++;
             ans%=(1000000007);
        }
        return (ans%1000000007);
        
    }
};