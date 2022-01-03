class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
                int i=1;
        while(true){
            if(!binary_search(arr.begin(), arr.end(), i)) k--;
            if(k==0) return i;
            i++;
             }
        return -1;
    }
};