class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        unordered_map<int, int>m;
        for(auto i = nums.begin(); i != nums.end(); ++i){
            m[*i]++;
            if(m[*i]>2)
            {
                 nums.erase(i);
                i--;
            }
        }
        return nums.size();
    }
};