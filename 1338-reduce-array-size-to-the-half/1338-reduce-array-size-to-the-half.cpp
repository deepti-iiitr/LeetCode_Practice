class Solution {
public:
    int minSetSize(vector<int>& arr) {
       map<int,int>freq;
        for(int i=0;i<arr.size();i++)
            freq[arr[i]]++;
        priority_queue<pair<int,int>>q;
        for( auto i:freq){
            q.push({i.second,i.first});
        }
        
        int n=arr.size();
        int sz=n, ans=0;
        while(sz> n/2){
            int f=q.top().first;
            q.pop();

            sz-=f;
            ans++;
        }
        return ans;
        
    }
};