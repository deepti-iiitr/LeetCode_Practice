class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> ans;
        string t;
        unordered_map<string,int> hash;
        if(s.length()<=10)
            return ans;
        // if (s.length()==10)
        // {
        //     ans.push_back(s);
        //     return ans;
        // }
        for(int i=0;i<10;i++)
        {
            t.push_back(s[i]);
        }
        hash[t]++;
        int i=1;
        for(int j=10;j<s.length();j++){
            t.erase(t.begin()+0);
            t.push_back(s[j]);
            i++;
            hash[t]++;
            if(hash[t]>1)
                ans.push_back(t);
        }
        sort(ans.begin(), ans.end());
        ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
        return ans;
    }
};