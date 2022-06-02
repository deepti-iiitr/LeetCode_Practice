class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        for(int i=0;i<tokens.size();i++)
        {
            
                string t=tokens[i];
                if(t=="+" || t=="-" || t=="*" || t=="/")
                {
                    int val2=s.top();
                    s.pop();
                    int val1=s.top();
                    s.pop();
                    string op=t;
                    if(op=="+")
                        s.push(val1+val2);
                    else if(op=="-")
                        s.push(val1-val2);
                    else if(op=="*")
                        s.push(val1*val2);
                    else
                        s.push(val1/val2);
                }
                else{
                    int num=stoi(t);
                    s.push(num);
                }
            
        }
        return s.top();
    }
};