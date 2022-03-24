class Solution {
public:
    int countGoodSubstrings(string s) {
        unordered_map<char,int>hash;
        int ans=0;
        for(int i=0;i<3;i++){
            hash[s[i]]++;
        }
        if(hash.size()==3)
            ans++;
        int i=1;
        for(int j=3;j<s.length();j++){
            hash[s[j]]++;
            // hash.erase(s[i-1]);
            hash[s[i-1]]--;
            if(hash[s[i-1]]<=0)
                hash.erase(s[i-1]);
            if(hash.size()==3)
               ans++;
            i++;
        }
        return ans;
    }
};