class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(int i=0;i<s.length();i++){
            if(!st.empty() && (int(st.top())-int(s[i])== -32 || int(st.top())-int(s[i])==32))
                st.pop();
            else
                st.push(s[i]);
        }
        string ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};