class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,int>> pq;
        vector<vector<int>> res( k , vector<int> (2, 0));
        int n=points.size();
        for(int i=0;i<n;i++){
            int val= (-1)*(points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            pq.push(make_pair(val,i));
            
        }
        for(int i=0;i<k;i++){
            int ind=pq.top().second;
            
            res[i][0]=points[ind][0];
            res[i][1]=points[ind][1];
            pq.pop();
        }
        return res;
    }
};