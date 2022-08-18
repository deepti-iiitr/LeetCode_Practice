class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        map<int,int>m;
        for(int i=0;i<edges.size();i++){
            m[edges[i][0]]++;
            m[edges[i][1]]++;
        }
        int ans;
        for(auto i:m){
            if(i.second == n)
            {
                 ans=i.first;
                break;
            }
        }
        return ans;
    }
};