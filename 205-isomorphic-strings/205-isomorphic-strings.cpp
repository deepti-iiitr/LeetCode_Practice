class Solution {
public:
    bool isIsomorphic(string s, string t) {
         map<char,int> mapp1;
        map<char,int> mapp2;
        
        for(int i=0; i<s.size(); i++){
            mapp1[s[i]] =i+1;
            mapp2[t[i]]=i+1;
        }
        
        for(int i=0; i<s.size(); i++){
            if(mapp1[s[i]]!= mapp2[t[i]]) return false;
        }
        
        return true;
    }
};