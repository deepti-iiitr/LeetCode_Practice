class Solution {
public:
    int solve(int n, int k){
        if(n==1 && k==1)
            return 0;
        int mid= (pow(2,n))/2;
        if(k<mid)
            return solve(n-1,k);
        else if(k==mid)
            return 1;
        else
             return (!(solve(n-1,(2*mid)-k)));
    }
    char findKthBit(int n, int k) {
       int ans=solve(n,k);
       char res=ans+'0';
        return res;
    }
};