class Solution {
public:
    int maxFreq(string s, int maxLetters, int minSize, int maxSize) {
        int i=0,j=0, n=s.length(), ans=0;
        string temp;
        unordered_map<char,int>m;
        unordered_map<string, int> hash;
        while(j<n){
            m[s[j]]++;
            temp=temp+s[j];
            while(m.size()>maxLetters || temp.length()>minSize)
                {
                    m[s[i]]--;
                    if(m[s[i]]==0)
                        m.erase(s[i]);
                    temp.erase(temp.begin()+0);
                    i++;
                }
            if(m.size()<=maxLetters && temp.length()==minSize ){
                hash[temp]++;
            }
            j++;
        }
        for( auto i:hash){
            cout<<i.first<<endl;
            ans= max(ans, i.second);
        }
        return ans;
    }
};