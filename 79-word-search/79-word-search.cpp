class Solution {
public:
    bool backtrack(vector<vector<char>>& board, string& word, int pos, int i, int j, int r, int c){
        if(i >= r || j >= c || i < 0 || j < 0 || word[pos] != board[i][j])
            return false;
    
        if(pos == word.length()-1)
            return true;
        
        board[i][j] = '#'; // to avoid using of this character again in the backtracking
        if(backtrack(board, word, pos+1, i+1, j, r, c) || backtrack(board, word, pos+1, i-1, j, r, c) || backtrack(board, word, pos+1, i, j+1, r, c) || backtrack(board, word, pos+1, i, j-1, r, c))
            return true;
	
        board[i][j]=word[pos];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        for(int i=0;i<board.size();i++)
            for(int j=0;j<board[i].size();j++)
                if(backtrack(board, word, 0, i, j, board.size(), board[0].size()))
                    return true;
        return false;
    }
};