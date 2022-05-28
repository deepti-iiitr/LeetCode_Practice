class Solution {
public:
    int integerBreak(int n) {
     if(n == 2 || n == 3) return n-1;
        int length[n], price[n];
        
        for(int i=0; i<n; i++) length[i] = price[i] = i+1;
        
        int dp[n+1][n+1];
        
        for(int i=0; i<=n; i++) dp[i][0] = 0;
        for(int i=0; i<=n; i++) dp[0][i] = 1;
        
        for(int i = 1; i<=n; i++){
            for(int j = 0; j<=n ; j++){
                if(length[i-1] <= j){
                    dp[i][j] = max(price[i-1] * dp[i][j-length[i-1]], dp[i-1][j]);
                }else{
                    dp[i][j] = dp[i-1][j]; 
                }
            }
        }
        
        return dp[n][n];   
    }
};