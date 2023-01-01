class Solution {
public:
    bool wordPattern(string pattern, string s) {
    vector<string> v;
    string g="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==' ')
        {
            v.push_back(g);
            g.clear();
        }
        else
            g+=s[i];
    }
    v.push_back(g);
    map<char,string> mp1;
    map<string,int> mp2;
    
    if(pattern.size()!=v.size())
        return false;
    
    for(int i=0;i<pattern.size();i++)
    {
        if(mp1.find(pattern[i])==mp1.end())
        {
            if(mp2[v[i]]==0){
                mp1[pattern[i]]=v[i];
                mp2[v[i]]++;
            }
            else
                return false;
        }
        else
        {
            if(mp1[pattern[i]]!=v[i])
                return false;
            else{
                mp2[v[i]]++;
            }
        }
    }
    return true;        
}
};