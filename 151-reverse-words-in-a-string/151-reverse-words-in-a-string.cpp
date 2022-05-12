class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0)
            return s;
        string result;
        stack<string>st;
        for(int i=0;i<s.size();i++){
            string temp;
            if(s[i]==' ')
                continue;
            while(i<s.size() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
            st.push(temp);
        }
        while(!empty(st)){
            result+=st.top();
            st.pop();
            if(!empty(st))
                result+=" ";
        }
        return result;
    }
};