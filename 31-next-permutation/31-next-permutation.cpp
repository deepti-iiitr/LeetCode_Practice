class Solution {
   
public:
    void swap(int *a, int *b)
    {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
    void nextPermutation(vector<int>& nums) {
        if(nums.size() <= 1){
            return;
        }

        int n = nums.size();
        int i = n - 1;
        for(;i > 0; i--){
            if(nums[i] > nums[i-1])
                break;
        }

        if(i <= 0){
            i = 0;
        }

        int x = (i == 0 ? nums[i] : nums[i - 1]);
        int smallest = i;

        for(int j = i + 1; j < n; j++){
            if(nums[j] > x && nums[j] < nums[smallest])
                smallest = j;
        }

        swap(&nums[smallest], (i == 0 ? &nums[i] : &nums[i - 1]));
        sort(nums.begin() + i, nums.end());
    }
};