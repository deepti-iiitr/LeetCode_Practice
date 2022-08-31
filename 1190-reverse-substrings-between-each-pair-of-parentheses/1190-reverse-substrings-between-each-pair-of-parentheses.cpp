class Solution {
public:
    string reverseParentheses(string str) {
        stack<int> s;

    for (int i = 0; i < str.size(); i++){
        if (str[i] == '(') s.push(i);
        else if (str[i] == ')'){
            int beg = s.top() + 1;
            int end = i;
            reverse(str.begin() + beg, str.begin() + end);
            s.pop(); 
			}}
			
    string ans; 
    for (int i = 0; i < str.size(); i++){ 
        if (str[i] == '(' || str[i] == ')') continue;
        else ans.push_back(str[i]);
        }
    return ans;
    }
};