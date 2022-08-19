class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int>m;
        for(int i=0;i<t.size();i++)
            m[t[i]]++;
        for(int i=0;i<s.size();i++){
            if(m[s[i]]==1)
                m.erase(s[i]);
            else
                m[s[i]]--;
        }
        char a;
        for( auto i:m)
            a=i.first;
        return a;
    }
};