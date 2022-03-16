class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>st;
        bool ans;
        int j=0;
        for(int i=0;i<pushed.size();i++){
            st.push(pushed[i]);
            if(st.top()==popped[j] )
            {
                while(!st.empty() && st.top()==popped[j]  )
                {
                    st.pop();
                    j++;
                }
            }
        }
        if(st.empty())
            return true;
        return false;
       }
    
};