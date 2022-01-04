class Solution {
public:
     int search(vector<int>& nums, int target,int i) {
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid= l+ (r-l)/2;
            if(nums[mid]==target && mid!=i)
                return true;
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for(int i=0;i<arr.size();i++){
            if(search(arr, 2*arr[i],i))
                return true;
        }
        return false;
    }
};