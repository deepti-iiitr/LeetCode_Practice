class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        map<int, long long int> mp;
        sort(arr.begin(), arr.end());
        
        for(int ele : arr)
            mp[ele] = 1;
        
        int i,j;
        for(i = 1; i < arr.size(); i++){
            long long int count = 0;
            for(j = 0; j < i; j++){
                if(arr[i] % arr[j] == 0){
                    if(mp.find(arr[i] / arr[j]) != mp.end()){
                        count += mp[arr[j]] * mp[arr[i] / arr[j]];
                    }
                }
            }
            mp[arr[i]] += count;
            count = 0;
        }
        long long int ans = 0;        
        for(auto ele : mp)
            ans += ele.second;
        
        return ans % 1000000007;
    
    }
};