class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zeroes=0, ones=0, tows=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)
                zeroes++;
            else if(nums[i]==1)
                ones++;
            else if(nums[i]==2)
                tows++;
        }
        int i=0;
        while(zeroes>0){
            nums[i]=0;
            i++;
            zeroes--;
        }
        while(ones>0){
            nums[i]=1;
            i++;
            ones--;
        }
        while(tows>0){
            nums[i]=2;
            i++;
            tows--;
        }
    }
};