class Solution {
public:
    int hIndex(vector<int>& citations) {
        int sz=citations.size();
        int l=0,r=sz-1;
        int ans=0;
        
        while(l<=r)
        {
            int mid=(l+r)/2;
            
             int rem=sz-mid;
            
            if(citations[mid]>=rem)
            {
                ans=rem;
                r=mid-1;
            }
               
            else
                l=mid+1;
        }
        return ans;
    }
};