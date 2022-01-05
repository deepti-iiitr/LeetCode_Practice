class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end());
		int high=n;
		int low=1;
		int mid=(high-low)/2+low;
		while(low<high){
			int count=0;
			int mid=(high-low)/2+low;
			for(int i=0;i<nums.size();i++){
				if(nums[i]<=mid){
					count++;
				}
			}
				if(count>mid){
					high=mid;
				}
				else{
					low=mid+1;
				}
			}
		return high;
    }
};