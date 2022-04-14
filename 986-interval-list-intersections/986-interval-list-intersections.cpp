class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
         vector<vector<int>>ans;
        int i =0;
        int j =0;
        while(i < firstList.size() && j < secondList.size()){
            int st = max(firstList[i][0], secondList[j][0]);
            int et = min(firstList[i][1], secondList[j][1]);
            if(st <= et){
              ans.push_back({st, et}); 
              
            }
            if(firstList[i][1] <= secondList[j][1]) i++;
            else j++; 
        }
    return ans;
    }
};