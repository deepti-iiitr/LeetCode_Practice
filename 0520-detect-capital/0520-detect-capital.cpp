class Solution {
public:
    bool detectCapitalUse(string word) {
        int sz=0;
        for(int i=0;i<word.size();i++){
            if(isupper(word[i]))
                sz++;
        }
        if(sz==word.size())
            return true;
        if(sz==1 && isupper(word[0]))
            return true;
        else if(sz==0)
            return true;
        return false;
        
    }
};