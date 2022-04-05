class Solution {
public:
    vector<vector<int>>result;
    vector<int>current;
    int sum;

    void function(vector<int>& candidates,int target,int index)
    {
    if(sum>target)return ;
    if(sum==target){
        result.push_back(current);
    }
    for(int i=index;i<candidates.size();i++){
        sum+=candidates[i];
        current.push_back(candidates[i]);
        function(candidates,target,i);
        sum-=candidates[i];
        current.pop_back();
    }      
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    sum=0; 
    function(candidates,target,0);
    return result;
    }
};