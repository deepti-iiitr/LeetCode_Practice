class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       
        int n = mat.size(), m = mat[0].size();
        vector<vector<int>> ans(n, vector<int> (m, INT_MAX));
        queue<pair<int, int>> q;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 0){
                    ans[i][j] = 0;
                    q.push({i, j});
                }
            }
        }
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, 1, -1};
        
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            
            for(int i = 0; i < 4; i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx >= 0 and ny >= 0 and nx < n and ny < m){
                    if(ans[nx][ny] > ans[x][y] + 1LL){
                        ans[nx][ny] = ans[x][y] + 1;
                        q.push({nx, ny});
                    }
                }
            }
        }
        
        return ans;
    }
};