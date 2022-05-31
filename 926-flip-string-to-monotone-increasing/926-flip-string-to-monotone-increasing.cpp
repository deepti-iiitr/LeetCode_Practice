class Solution {
public:
    int minFlipsMonoIncr(string s) {
         if (s.length() <= 1) return 0;
        int dp = 0;
        int countOne = 0;        
        int n = s.length();
        for (int i = 0; i < n; ++i) {
            if (s[i] == '0') {
                int x = dp + 1;   
                dp =min(x, countOne);  
            } else {
                ++countOne;
            }
        }
        
        return dp;
    }
};