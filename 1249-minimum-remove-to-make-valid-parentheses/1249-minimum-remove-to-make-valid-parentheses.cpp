class Solution {
public:
    string minRemoveToMakeValid(string s) {
        
        stack<pair<int, char> > st;
        for(int i=0;i<s.length();i++){
            if(st.empty() && (s[i]== '(' || s[i]== ')') )
                st.push({i, s[i]});
            else if(s[i] == '(')
                st.push({i, s[i]});
            else if(s[i]== ')' && st.top().second == '(')
                st.pop();
            else if(s[i]== ')' && st.top().second == ')')
                st.push({i,s[i]});
        }
        //cout<<st.top().first<<endl;
        if(st.size()==0)
            return s;
        string res;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]== '(' || s[i]==')')
            {
                if(!st.empty()){
                if(st.top().first == i)
                {
                    st.pop();
                    continue;
                }
                else
                    res.push_back(s[i]);
                }
                else
                    res.push_back(s[i]);
            }
            else
                res.push_back(s[i]);
        }
        reverse(res.begin(), res.end());
        return res;
    }
};