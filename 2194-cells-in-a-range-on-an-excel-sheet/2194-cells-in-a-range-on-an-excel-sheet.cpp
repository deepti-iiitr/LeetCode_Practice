class Solution {
public:
    vector<string> cellsInRange(string s) {
        int f=s[1]-'0';
        int last=s[4]-'0';
       // cout<<n;
        vector<string>ans;
        char start=s[0];
        char end=s[3];
        for(char i=start; i<=end;i++){
            int t=f;
            while(t<=last){
                string temp= i + to_string(t);
                t++;
                ans.push_back(temp);
            }
        }
        return ans;
    }
};