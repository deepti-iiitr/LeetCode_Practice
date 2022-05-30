class Solution {
public:
    public:
    int numDecodings(string s) {
        vector dp(s.size(),-1);
        return helper(s,0,dp);
    }
    bool check(string s){ 
        int x= stoi(s);
        return (x >= 1 && x <= 26);
    }
    int helper(string& s, int index,vector<int>& dp){
        if(index == s.size()){ 
            return 1;
        }
        if(s[index] == '0') 
            return 0;
        if(dp[index] != -1) 
            return dp[index];
        int ans = 0;
        ans += helper(s,index+1,dp); 
        if(index < s.size() - 1 && check(s.substr(index,2))){
            ans += helper(s,index + 2, dp);
        }
        return dp[index] = ans;
    }

};