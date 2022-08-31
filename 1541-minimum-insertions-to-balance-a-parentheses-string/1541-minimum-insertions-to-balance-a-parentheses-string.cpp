class Solution {
public:
    int minInsertions(string s) {
        stack<char>st;
        int ans=0;
        int i=0;
        while(i<s.length()){
            if(s[i] == '(')
            {
                st.push(s[i]);
                i++;
            }
            else{
                if(s[i] == ')' && st.empty()){
                    if(s[i+1] == ')')
                    {
                        ans+=1;
                        i+=2;
                    }
                    else
                    {
                        ans+=2;
                        i++;
                    }
                }
                else if(s[i] == ')' && !st.empty()){
                    st.pop();
                    if(s[i+1] == ')')
                        i+=2;
                    else
                    {
                        ans+=1;
                        i++;
                    }
                }
            }
        }
        while(!st.empty()){
            ans+=2;
            st.pop();
        }
        return ans;
            
    }
};