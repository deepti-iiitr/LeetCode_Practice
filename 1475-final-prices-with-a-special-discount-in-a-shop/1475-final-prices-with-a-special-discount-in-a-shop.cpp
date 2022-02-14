class Solution {
public:
    vector<int> finalPrices(vector<int>& p) {
        vector<int>ans;
        bool check=false;
        for(int i=0;i<p.size();i++ ){
            for(int j=i+1;j<p.size();j++){
                if(p[j]<=p[i]){
                    check=true;
                    ans.push_back(p[i]-p[j]);
                    break;
                }
            }
            if(!check)
                    ans.push_back(p[i]);
                check=false;
        }
        return ans;
    }
};