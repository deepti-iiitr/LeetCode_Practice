class Solution {
public:
    void unmark(vector<vector<int>> &grid,int x,int y){
        int rows = grid.size();
        int cols = grid[0].size();
        
        if(x<0 || x>=rows || y<0 || y>=cols || grid[x][y]==0)
            return;
        
        grid[x][y]=0;
        unmark(grid,x,y+1);
        unmark(grid,x,y-1);
        unmark(grid,x+1,y);
        unmark(grid,x-1,y);
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        int rows,cols,count=0;
        rows=grid.size();
        cols=grid[0].size();
        
        for(int i=0;i<rows;i++){
            if(grid[i][0]==1)
                unmark(grid,i,0);
            if(grid[i][cols-1]==1)
                unmark(grid,i,cols-1);
        }
        
        for(int i=0;i<cols;i++){
            if(grid[0][i]==1)
                unmark(grid,0,i);
            if(grid[rows-1][i]==1)
                unmark(grid,rows-1,i);
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1)
                    count++;
            }
        }
        return count;
    }
};