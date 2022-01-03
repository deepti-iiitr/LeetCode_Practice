class Solution {
public:
    int countNum(vector<int>& nums, int target){
        int l=0, r=nums.size()-1;
        int ind;
        while(l<=r){
            int mid= l+ (r-l)/2;
            
             if(nums[mid]>=target)
            {
                r=mid-1;
                ind=mid;
                 cout<<ind<<endl;
            }
            else
                l=mid+1;
        }
        return ind;
    }
    int specialArray(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for(int x=0;x<=nums.size();x++)
        {
            int val= countNum(nums,x);
            if(x!=0 && x ==nums.size()-val)
                return x;
        }
        return -1;
    }
};