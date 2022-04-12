class Solution {
public:
    int solve(vector<vector<int>> &board, int i, int j, int m, int n){
        int ans=0;
        if(i>0){
            if(board[i-1][j]==1)
                ans++;
        }
         if(i<m-1){
            if(board[i+1][j]==1)
                ans++;
        }
         if(j>0){
            if(board[i][j-1]==1)
                ans++;
        }
         if(j<n-1){
            if(board[i][j+1]==1)
                ans++;
        }
         if(i>0 && j>0){
            if(board[i-1][j-1]==1)
                ans++;
        }
         if(i>0 && j<n-1){
            if(board[i-1][j+1]==1)
                ans++;
        }
         if(i<m-1 && j>0){
            if(board[i+1][j-1]==1)
                ans++;
        }
         if(i<m-1 && j<n-1){
            if(board[i+1][j+1]==1)
                ans++;
        }
        return ans;
    }
    void gameOfLife(vector<vector<int>>& board) {
        vector<vector<int>>board2=board;
        int m=board.size();
        int n=board[0].size();
        for(int i = 0; i<m; i++) {
		  for(int j = 0; j<n; j++) {
			int val =solve(board2, i, j, m, n);
			if(board[i][j] == 0) {
				if(val == 3) {
					board[i][j] = 1;
				}
			}
			else if(board[i][j] == 1) {
				if(val < 2 || val > 3) {
					board[i][j] = 0;
				}
			}
		}
        }
    }
};