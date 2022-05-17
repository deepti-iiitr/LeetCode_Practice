class Solution {
public:
    double solve(double x, int n){
        if(n==0)
            return 1;
        if(n==1)
            return x;
        return (n % 2 == 0) ? solve(x*x, n/2) :  solve(x*x, n/2)*x;
    }
    double myPow(double x, int n) {
        if(n<0)
        {
             x=1/x;
             n=abs(n);
        }
        long n2= (long)n;
        return solve(x,n2);
    }
};