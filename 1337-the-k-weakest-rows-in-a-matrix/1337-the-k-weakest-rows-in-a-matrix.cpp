class Solution {
public:
     typedef pair<int, int> pi;
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
         priority_queue<pair<int, int>  > q;
        int r= mat.size();
        int c= mat[0].size();
        for(int i=0;i<r;i++){
            int count=0;
            for(int j=0;j<c;j++)
            {
                if(mat[i][j]==1)
                    count++;
            }
            q.push(make_pair(count,i));
            if(q.size()>k)
                q.pop();
        }
        vector<int>res;
        while(!q.empty()){
            res.push_back(q.top().second);
            q.pop();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};