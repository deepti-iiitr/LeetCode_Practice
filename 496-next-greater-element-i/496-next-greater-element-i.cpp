class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        for(int i=0;i<nums1.size();i++){
            int j;
            for(j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j])
                    break;
            }
            bool f=false;
            for(int k=j;k<nums2.size();k++){
                if(nums2[k]>nums1[i])
                {
                    f=true;
                    ans.push_back(nums2[k]);
                    break;
                }
            }
            if(f==false)
                ans.push_back(-1);
        }
        return ans;
    }
};