class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int>v;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C")
                v.pop_back();
            else if( ops[i]=="D")
            {
                int val=2*v.back();
                v.push_back( val);
            }
            else if( ops[i]=="+"){
                int n= v.size();
                v.push_back(v[n-1] + v[n-2]);
            }
            else
                v.push_back(stoi(ops[i]));
        }
        int ans=0;
        for(int i=0;i<v.size();i++)
            ans+=v[i];
        return ans;
    }
};