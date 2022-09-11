class Solution {
public:
    int count=0;
    void dfs(int source,vector<bool>&visited,vector<pair<int,int>>adj[]){
        visited[source]=true;
        for(auto it:adj[source]){
            if(!visited[it.first]){
                if(it.second==1)count++;
                dfs(it.first,visited,adj);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& c) {
        vector<pair<int,int>>adj[n];
        for(auto j:c){
            adj[j[0]].push_back({j[1],1});
            adj[j[1]].push_back({j[0],-1});
        }
        vector<bool>visited(n,false);
        dfs(0,visited,adj);
        return count;
    }
};