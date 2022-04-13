class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
       vector<vector<int>> vec( n , vector<int> (n, 0));
        int currval=1;
        int r1=0, c1=0, r2=n - 1, c2=n - 1;
        while (r1 <= r2 && c1 <= c2) {
            for (int j = c1; j <= c2; j++)  
            {
                vec[r1][j]=currval;
                currval++;
            }
            
            for (int i = ++r1; i <= r2; i++) 
            {
                vec[i][c2]=currval;
                currval++;
            }
            
            for (int j = --c2; r1 <= r2 && j >= c1; j--) 
            {
                vec[r2][j]=currval;
                currval++;
            }
            
            for (int i = --r2; c1 <= c2 && i >= r1; i--) 
            {
                vec[i][c1]=currval;
                currval++;
            }
            
            c1++;
        }
        return vec; 
    }
};