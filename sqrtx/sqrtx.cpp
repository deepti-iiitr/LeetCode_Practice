class Solution {
public:
    int mySqrt(int x) {
        long long int l=1,h=x/2,ans;
        if( x==0 || x==1)
            return x;
        while(l<=h){
            long long int mid= (l+h)/2;
            long long int sqr=mid*mid;
            if(mid== x)
                return mid;
            else if(sqr<=x)
            {
                l=mid+1;
                ans=mid;
            }
            else
                h=mid-1;
        }
        return ans;
    }
};