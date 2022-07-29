class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int,int> even,odd;
        int evencnt = 0, oddcnt = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(i%2)
            {
                odd[nums[i]]++;
                oddcnt++;
            }
            else  
            {
                even[nums[i]]++;
                evencnt++;
            }
        }
        int max_even = 0, second_max_even = 0;
        int max_count = 0, second_max_count = 0;
        for(auto i : even)
        {
            if(i.second>=max_count)
            {
                second_max_count = max_count;
                second_max_even = max_even;
                max_count = i.second;
                max_even = i.first;   
            }
            else if(i.second>second_max_count)
            {
                second_max_count = i.second;
                second_max_even = i.first;
            }
        }
        int max_odd = 0, second_odd = 0;
        int odd_count = 0, second_odd_count = 0;
        for(auto i: odd)
        {
            if(i.second>=odd_count)
            {
                second_odd_count = odd_count;
                second_odd = max_odd;
                odd_count = i.second;
                max_odd = i.first;
            }
            else if(i.second>second_odd_count)
            {
                second_odd_count = i.second;
                second_odd = i.first;
            }
        }
        
        if(max_even != max_odd)
        {
            return (oddcnt-odd_count) + (evencnt-max_count);
        }
        return min(oddcnt-second_odd_count + evencnt - max_count, oddcnt-odd_count + evencnt-second_max_count);
    } 
};