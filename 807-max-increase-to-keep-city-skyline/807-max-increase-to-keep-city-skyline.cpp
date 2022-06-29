class Solution {
public:
    
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int ans=0;
        int n=grid.size();
        vector<int>maxrow(n,0);
        vector<int>maxcolumn(n,0);
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                maxrow[i]=max(maxrow[i], grid[i][j]);
                maxcolumn[j]=max(maxcolumn[j], grid[i][j]);
            }
        }
        
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                ans+=min(maxrow[i],maxcolumn[j])-grid[i][j];
            }
        }
        return ans;
    }
};