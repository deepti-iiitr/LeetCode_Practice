class Solution {
public:
    
    int count(int m, int n, int x) {
        int ans = 0;
        for(int i = 1; i <= m; i++) 
            ans += min(x / i, n);
        return ans;
    }
    
    int findKthNumber(int m, int n, int k) {
        int s=1,e=m*n;
        int ans;
        while(s<=e){
            int mid=s+ (e-s)/2;
            if(count(m,n,mid)<k)
                s=mid+1;
            else
            {
                e=mid-1;
                ans=mid;
            }
        }
        return ans;
    }
};