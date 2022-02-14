class Solution {
public:
    int maxDepth(string s) {
        //stack<int>st;
        int ans=0, currvalue=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                currvalue++;
            else if(s[i]==')')
            {
                int x=currvalue;
                ans=max(ans,x);
                currvalue--;
            }
        }
        return ans;
    }
};