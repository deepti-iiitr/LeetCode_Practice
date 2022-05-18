class Solution {
public:
    vector<vector<int>> ans;
    
    void dfs(vector<int> adj[],int node,int parent,vector<int>& vis,vector<int>& tin,vector<int>& low,int &timer){
        vis[node] = 1;
        tin[node] = low[node] = ++timer;
        for(auto it: adj[node]){
            if(it==parent) continue;
            if(!vis[it]){
                dfs(adj,it,node,vis,tin,low,timer);
                low[node] = min(low[it],low[node]);
                if(low[it]>tin[node]){
                    
                    ans.push_back({node,it});
                }
            }
            else{
                low[node] = min(low[node],low[it]);
            }
        }
    }
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        ans.clear();
        vector<int> adj[n];
        for(auto it : connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int> tin(n,-1),low(n,-1),vis(n,0);
        int timer = 0;
        for(int i = 0;i<n;i++){
            if(!vis[i]){
                dfs(adj,i,-1,vis,tin,low,timer);
            }
        }
        return ans;
    }
};