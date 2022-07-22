class Solution {
private:
    vector<int> orgArr;
    int n;
public:
    Solution(vector<int>& nums) {
        orgArr = nums;
        n = orgArr.size();
    }
    
    vector<int> reset() {
        return orgArr;
    }
    
    vector<int> shuffle() {
        vector<int> shuffArr = orgArr;
        int last = n;
        for( int i = n-1; i>=0; i--){
            int ptr = rand()%last;
            swap(shuffArr[i], shuffArr[ptr]);
            last--;
        }
        return shuffArr;
    }
};
/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */