class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res=nums1;
        for(int i=0;i<nums2.size();i++){
            res.push_back(nums2[i]);
        }
         double ans;
        sort(res.begin(),res.end());
        if(res.size()%2 ==1){
            int mid=res.size()/2;
           ans= res[mid];
        }
        else{
            int mid=(res.size()-1)/2;
             ans= ((double)res[mid]+(double)res[mid+1])/2;
        }
        return ans;
    }
};