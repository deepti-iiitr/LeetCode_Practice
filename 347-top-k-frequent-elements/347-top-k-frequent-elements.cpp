class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            if(m.find(nums[i])==m.end())
                m[nums[i]]=1;
            else
                m[nums[i]]++;
        }
        priority_queue<pair<int,int>>q;
        for( auto t:m){
            q.push(make_pair(t.second, t.first));
        }
        int i=0;
        vector<int>res;
        while(i<k){
            res.push_back(q.top().second);
            q.pop();
            i++;
        }
        return res;
    }
};