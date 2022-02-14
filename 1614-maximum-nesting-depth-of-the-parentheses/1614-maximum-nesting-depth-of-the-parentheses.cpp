class Solution {
public:
    int maxDepth(string s) {
        stack<int>st;
        int ans=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='(')
                st.push(s[i]);
            else if(s[i]==')')
            {
                int x=st.size();
                ans=max(ans,x);
                st.pop();
            }
        }
        return ans;
    }
};