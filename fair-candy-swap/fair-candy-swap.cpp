class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int s1=0,s2=0;
        for(int i=0;i<A.size();i++)
            s1+=A[i];
        for(int i=0;i<B.size();i++)
            s2+=B[i];
        int d=(s2-s1)/2;
        vector<int>res;
        set<int>s;
        for(int i=0;i<B.size();i++)
            s.insert(B[i]);
        for(int i=0;i<A.size();i++){
            if( s.find(A[i]+d)!=s.end())
            {
                res.push_back(A[i]);
                res.push_back(A[i]+d);
                break;
            }
        }
        return res;
    }
    
};