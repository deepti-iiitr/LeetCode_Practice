class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0)
            return s;
        string result;
        stack<string>st;
        for(int i=s.size()-1;i>=0;i--){
            string temp;
            if(s[i]==' ')
                continue;
            while(i>=0 && s[i]!=' ')
            {
                temp+=s[i];
                i--;
            }
            reverse(temp.begin(), temp.end());
            result+=temp;
            if(i >= 1)
                result+=" ";
        }
        int n=result.size();
        if(result[n-1] == ' ')
            result.erase(result.begin() + n-1);
        return result;
    }
};