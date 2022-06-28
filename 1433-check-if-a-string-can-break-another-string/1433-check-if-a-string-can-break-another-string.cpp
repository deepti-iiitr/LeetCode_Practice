class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(),s1.end());
         sort(s2.begin(),s2.end());
        bool check1=true, check2=true;
        for(int i=0;i<s1.length();i++){
            if(s1[i] < s2[i])
                check1= false;
        }
        for(int i=0;i<s1.length();i++){
            if(s2[i] < s1[i])
                check2= false;
        }
        if(check1 || check2)
            return true;
        return false;
    }
};