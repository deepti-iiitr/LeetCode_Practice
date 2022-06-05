class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin() , citations.end());
        for(int i=0;i<citations.size();i++){
            int hi = citations.size()-i;   
            if (citations[i] >= hi) return hi; 
        }
        return 0;
    }
};