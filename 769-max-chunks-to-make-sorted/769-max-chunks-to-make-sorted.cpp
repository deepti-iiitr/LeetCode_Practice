class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
         int n = arr.size();
        int max_so_far = 0;
        int count = 0;
        
        for(int i=0;i<n;i++)
        {
            max_so_far = max(max_so_far,arr[i]);
            if(max_so_far == i)
            {
                count++;
            }
        }
        
        return count; 
    }
};