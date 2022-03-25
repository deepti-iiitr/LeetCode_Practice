class Solution {
public:
    int reverse(int x) {
        string s,res;
        if(x==0)
            return 0;
        s=to_string(x);
        bool neg=false;
        if(s[0]=='-')
        {
            neg=true;
            s.erase(s.begin()+0);
        }
        int i=0;
        while(s[0]=='0' && s.length()>0)
        {
            s.erase(s.begin()+0);
        }
         std::reverse(s.begin(), s.end());
        if(neg)
            s= '-' +s;
        int num;
        try {
            num = stoi(s);
        } catch (std::out_of_range& e) {
            return 0;
        }
        return num;
    }
};