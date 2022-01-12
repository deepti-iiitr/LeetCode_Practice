class Solution {
public:
    bool isvalid(vector<int>& nums, int threshold, int mid){
        int sum=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]<mid)
                sum++;
            else if(nums[i]%mid==0)
               sum+= nums[i]/mid;
            else
                sum+= (nums[i]/mid)+1;
        }
        if(sum<=threshold)
            return true;
        return false;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int left=1, right= *max_element(nums.begin(),nums.end());
        int res;
        while(left<=right){
            int mid= left+ (right-left)/2;
            if(isvalid(nums,threshold,mid)){
                res=mid;
                right=mid-1;
            }
            else
                left=mid+1;
        }
        return res;
    }
};