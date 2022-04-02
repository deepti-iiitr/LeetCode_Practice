class Solution {
public:
    bool ispalindrome(string st, int i , int j){
        
        while(i<j){
            if(st[i]!=st[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i] != s[j])
                return ispalindrome(s, i+1, j) || ispalindrome(s, i, j-1);
            i++; 
            j--;
        }
        return true;
    }
};