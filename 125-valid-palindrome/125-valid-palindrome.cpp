class Solution {
public:
    bool isPalindrome(string s) {
        for(int i=0;i<s.length();i++){
            if(s[i] >= 'A' && s[i]<='Z')
                s[i]=tolower(s[i]);
            if (!isalnum(s[i]))
            {
                s.erase(i,1);
                i--;
            }
        }
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]!=s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};