class Solution {
public:
    int startingIndex(vector<int>& nums, int target){
        int s = 0, e = nums.size()-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                e = mid-1;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    int endingIndex(vector<int>& nums, int target){
        int s = 0, e = nums.size()-1;
        int mid = s + (e-s)/2;
        int ans = -1;
        while(s<=e){
            if(nums[mid] == target){
                ans = mid;
                s = mid+1;
            }
            else if(nums[mid] > target){
                e = mid-1;
            }
            else{
                s = mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> res;
        sort(nums.begin(),nums.end());
        int start = startingIndex(nums,target);
        if(start == -1){
            return res;
        }
        int end = endingIndex(nums,target);
        cout<<start<<" "<<end;
        for(int i=start; i<=end; i++){
            res.push_back(i);
        }
        return res;
    }
};