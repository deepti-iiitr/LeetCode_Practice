class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.length();
        int i=0,j=0;
        int maxC=0;
        int ans=-1;
        unordered_map<char,int> mp;
        while(j<n)
        {
            mp[s[j]]++;
            maxC=max(maxC,mp[s[j]]);
            int curr_len=j-i+1;
            if(curr_len-maxC>k)
            {
                mp[s[i]]--;
                i++;
            }
            curr_len=j-i+1;
            ans=max(ans,curr_len);
            j++;
        }
        
        return ans;
    }
};