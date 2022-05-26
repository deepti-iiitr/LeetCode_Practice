class Solution {
public:
    int dp[2001][2001];
    bool isPal(string &s,int i,int j){
        while(i<=j)
            if(s[i++]!=s[j--]) return false;
        return true;
    }
    int solve(string &s,int i,int j){        
        if(i>=j) return 0;        
        if(dp[i][j]!=-1) return dp[i][j];
        if(isPal(s,i,j)) return dp[i][j]=0;
        int mn=INT_MAX;
        for(int k=i;k<j;k++){
            int left, right;
             if(!isPal(s,i,k)) continue;
            if(dp[i][k] != -1)
                left=dp[i][k];
            else
            {
                left=solve(s,i,k);
                dp[i][k]=left;
            }
            
            if(dp[k+1][j] != -1)
                right=dp[k+1][j];
            else
            {
                right=solve(s,k+1,j);
                dp[k+1][j]=right;
            }
            int t=1+left+right;
            if(mn>t)mn=t;
        }
        return dp[i][j]=mn;
    }
    int minCut(string s) {
        memset(dp,-1,sizeof(dp));
        return solve(s,0,s.size()-1);
    }
};