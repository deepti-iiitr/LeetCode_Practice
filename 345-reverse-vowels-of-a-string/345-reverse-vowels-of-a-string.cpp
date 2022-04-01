class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        string v;
        for(int i=0;i<s.length();i++){
            if(isvowel(s[i]))
                v.push_back(s[i]);
        }
        int j=v.length()-1;
        for(int i=0;i<s.length();i++){
            if(isvowel(s[i]))
            {
                s[i]=v[j];
                j--;
            }
        }
        return s;
    }
};