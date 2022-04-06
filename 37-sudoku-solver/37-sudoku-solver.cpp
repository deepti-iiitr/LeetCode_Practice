class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int i, int j, int n, char c){
        for(int k = 0; k < 9; k++) 
           if(board[k][j] == c) 
            return false;
        for(int k = 0; k < 9; k++) 
            if(board[i][k] == c) 
                return false;
            int x0 = (i/3) * 3, y0 = (j/3) * 3;
        for(int i = 0; i < 3; i++) {
            for(int j = 0; j < 3; j++) {
                if(board[x0 + i][y0 + j] == c) return false;
            }
        }
            return true;
    }
    bool solve(vector<vector<char>>& board, int i, int j, int n){
        if(i==n)
            return true;
        if(j==n)
            return solve(board, i+1,0,n);
        if(board[i][j]!='.')
            return solve(board,i,j+1,n);
        for(char c='1'; c<='9';c++){
            if(isSafe(board,i,j,n, c))
            {
                board[i][j]=c;
                bool s=solve(board, i, j+1, n);
                if(s)
                    return true;
                 board[i][j]='.';
            }
        }
       
        return false;
    }
    void solveSudoku(vector<vector<char>>& board) {
        int n=9;
        solve(board, 0,0,n);
    }
};