class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        vector<int>mxleft;
        vector<int>minright(nums.size(), 0);
        
        mxleft.push_back(nums[0]);
        minright[nums.size()-1]=(nums[nums.size()-1]);
        
        for(int i=1;i<nums.size();i++)
            mxleft.push_back(max(mxleft[i-1], nums[i]));
        
        for(int i=nums.size()-2;i>=0;i--)
            minright[i]=(min(minright[i+1],nums[i]));
        
        for (int i = 1; i < nums.size(); ++i) {
            if (mxleft[i - 1] <= minright[i]) {
                return i;
            } 
        }
        
        return -1;
    }
};