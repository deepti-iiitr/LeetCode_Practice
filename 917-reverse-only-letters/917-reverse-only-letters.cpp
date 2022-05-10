class Solution {
public:
    string reverseOnlyLetters(string s) {
       int i=0, j=s.length()-1;
        while(i<j){
            if(isalpha(s[i]) && isalpha(s[j]))
            {
                swap(s[i], s[j]);
                i++,j--;
            }
            else
            {
                if(!isalpha(s[i]))
                    i++;
                if(!isalpha(s[j]))
                    j--;
            }
        }
        return s;
    }
};