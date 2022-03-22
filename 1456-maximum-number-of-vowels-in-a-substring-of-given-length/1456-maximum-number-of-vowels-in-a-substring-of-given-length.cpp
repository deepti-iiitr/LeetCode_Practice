class Solution {
public:
    bool isVowel(char si){
        if(si=='a' || si=='e' || si=='i' || si=='o' || si=='u')
            return true;
        return false;
    }
    int maxVowels(string s, int k) {
        string t;
        int ans=INT_MIN,c=0;
        for(int i=0;i<k;i++){
            if(isVowel(s[i]))
                c++;
        }
        ans= max(c,ans);
        int j=k;
        for(int i=1;i<s.length() && j<s.length();i++){
            if(isVowel(s[i-1]))
                c--;
            if(isVowel(s[j]))
                c++;
            // else
            // {
            //     if(c>0)
            //         c--;
            // }
            ans=max(c,ans);
            j++;
        }
        return ans;
    }
};