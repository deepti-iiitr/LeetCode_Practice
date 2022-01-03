class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid= l+ (r-l)/2;
            if(nums[mid]==target)
            {
                nums.erase(nums.begin()+mid);
                for(int i=0;i<nums.size();i++)
                    cout<<nums[i]<<" ";
                return true;
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>res;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        for(int i=0;i<nums1.size();i++){
            if(search(nums2, nums1[i]))
                res.push_back(nums1[i]);
        }
        return res;
    }
};