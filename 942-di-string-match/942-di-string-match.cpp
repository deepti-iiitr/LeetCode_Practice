class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n=s.size();
        int l=0,j=n,i=0;
        vector<int>ans;
        while(i<n){
            if(s[i] == 'I')
                ans.push_back(l++);
            else
               ans.push_back(j--);
            i++;
        }
        ans.push_back(l++);
        return ans;
    }
};