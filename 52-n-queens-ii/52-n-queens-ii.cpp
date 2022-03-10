class Solution {
public:
    int ans=0;
       bool isSafe(vector<string> &board, int row, int col){
        for(int i = 0; i<board.size(); ++i){
            if(board[i][col] == 'Q'){return false;}
        }
        int x = row; int y = col;
        while(x>=0 && y>=0){
            if(board[x][y] == 'Q'){return false;}
            --x;  --y; 
        }
        while(row>=0 && col<board.size()){
            if(board[row][col] == 'Q'){return false;}
            --row; ++col;
        }
        
        return true;
    }
    
    void placeQueen(vector<string> &board, int row){
        if(row == board.size()){
           ans++;
        }
        
        for(int col = 0; col<board.size() ; ++col){
            if(isSafe(board, row, col)){
                board[row][col] = 'Q';
                placeQueen(board, row+1);
                board[row][col] = '.';
            }   
        }
    }
    
    int totalNQueens(int n) {
            vector<string> board(n, string(n, '.'));
            placeQueen(board, 0); 
            return ans;
    }
};