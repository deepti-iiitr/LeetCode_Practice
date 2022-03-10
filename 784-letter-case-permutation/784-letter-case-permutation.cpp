class Solution {
public:
   vector <string> res;
    string op;
    void solve(string ip, string op){
        if(ip.length()==0)
        {
            res.push_back(op);
            return;
        }
        if( (ip[0]>=97 && ip[0]<=122) || (ip[0]>=65 && ip[0]<=90)){
            string op1=op;
            string op2=op;
            op1.push_back(tolower(ip[0]));
            op2.push_back(toupper(ip[0]));
            ip.erase(ip.begin()+0);
            solve(ip,op1);
            solve(ip,op2);
        }
        else{
            string op1=op;
            op1.push_back(ip[0]);
            ip.erase(ip.begin()+0);
            solve(ip,op1);
        }
        
    }
    vector<string> letterCasePermutation(string s) {
        string op="";
        solve(s,op);
        return res;
    }
};