class Solution {
public:
    string removeDuplicateLetters(string s) {
        unordered_map<char,int> freq;
        unordered_map<char,bool> visit;
        string result;
        for(auto &it:s)
            freq[it]++;
        for(auto &it:s)
        {
            freq[it]--;
            
            if(visit[it]) continue;
            
            while(result.empty()==false  and result.back()>it and freq[result.back()]>0)
            {
                visit[result.back()]=false;
                result.pop_back();
            }
            
            visit[it]=true;
            result+=it;
        }
        
        
        return result;
    }
};