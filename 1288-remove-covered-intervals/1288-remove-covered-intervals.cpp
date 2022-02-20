class Solution {
public:
    static bool comp(vector<int>v1, vector<int>v2){
        if(v1[0]==v2[0]) return v1[1]>v2[1]; 
           return v1[0]<v2[0];
    }
    
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size(),count=0;
        if(n==1) return 1; 
        sort(intervals.begin(),intervals.end(), comp);
        int mini=intervals[0][0], maxi=intervals[0][1];
        
        for(int i=1; i<intervals.size();i++){
            if(intervals[i][0]>=mini && intervals[i][1]<=maxi) count++;
            maxi=max(maxi,intervals[i][1]);
            mini=min(mini,intervals[i][0]);
        }
        return n-count;
    }
};