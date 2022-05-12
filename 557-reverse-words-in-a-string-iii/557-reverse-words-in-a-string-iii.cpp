class Solution {
public:
    string reverseWords(string s) {
        if(s.size()==0)
            return s;
        string result;
        for(int i=0;i<s.size();i++){
            string temp;
            if(s[i]==' ')
                result+=" ";
            else{
                while(i<s.size() && s[i]!=' ')
            {
                temp+=s[i];
                i++;
            }
                i--;
            reverse(temp.begin(), temp.end());
            result+=temp;
            }
        }
            
        return result;
    }
};