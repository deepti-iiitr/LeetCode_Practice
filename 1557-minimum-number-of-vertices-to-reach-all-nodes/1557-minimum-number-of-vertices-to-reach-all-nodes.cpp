class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> indegrees(n, 0);
        
        for(int i=0; i<edges.size(); i++){
            indegrees[edges[i][1]]++;
        }
        
        vector<int> resultNodes;
        
        for(int i=0; i<n; i++){
            if(indegrees[i] == 0){
                resultNodes.push_back(i);
            }
        }
        return resultNodes; 
    }
};