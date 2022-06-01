class Solution {
public:
    bool checkValidString(string s) {
        stack<int>bracket;
        stack<int>star;
        for(int i=0;i<s.length();i++){
            if(s[i] == '(') bracket.push(i);
            if(s[i] == '*') star.push(i);
            if(s[i] == ')'){
                if(!bracket.empty())
                    bracket.pop();
                else if(!star.empty())
                    star.pop();
                else
                    return false;
            }
        }
        while(!bracket.empty() && !star.empty()){
            if(bracket.top() > star.top())
                return false;
            bracket.pop();
            star.pop();
        }
        return bracket.empty();
    }
};