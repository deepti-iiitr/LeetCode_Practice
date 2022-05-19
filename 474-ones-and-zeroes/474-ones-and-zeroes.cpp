class Solution {
public:
    int dp[101][101][601];
    int solve(vector<string>& strs, int m, int n, int len)
    {
        if( len==0)
            return 0;
        if(dp[m][n][len]!=-1){
            return dp[m][n][len];
        }
       int size=strs[len-1].size();
        int zeroes=0,ones=0;
        for(int i=0;i<size;i++){
            if(strs[len-1][i]=='0'){
                zeroes++;
            }else{
                ones++;
            }
        }
        if(zeroes<=m && ones<=n)
            return dp[m][n][len]= max( solve(strs,m-zeroes, n-ones, len-1) +1, solve(strs,m, n, len-1));
        return dp[m][n][len]= solve(strs,m, n, len-1);
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        int len=strs.size();
        memset(dp,-1,sizeof(dp));
        return solve(strs,m,n, len);
    }
};