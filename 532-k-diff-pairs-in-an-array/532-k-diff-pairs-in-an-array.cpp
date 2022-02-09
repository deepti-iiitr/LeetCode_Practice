class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int count=0;
        unordered_map<int, int> map;
        for(auto num:nums)
            map[num]++;
        if(k>0){
            
        for(auto a:map)
            if (map.find(a.first+k) != map.end()) 
                count++;
        }
        else
        {
            for(auto a:map)
                if (a.second > 1)
                    count++;
        }
        return count;
    }
};