class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string, int> mp;  
        int i = 0 , j = 0;
        string word;
        
        while(j < s.size()) { 
            word += s[j]; 
            if(j-i+1 < 10) j++;
            else {
                mp[word]++;
                cout<<word<<endl;
                word.erase(word.begin()+0);
                //word = word.substr(1);
                cout<<word<<endl;
                
                i++;
                j++;
            }
        }
        
        vector<string> ans;
        for(auto i : mp) if(i.second > 1) ans.push_back(i.first);
        return ans;
    
    }
};