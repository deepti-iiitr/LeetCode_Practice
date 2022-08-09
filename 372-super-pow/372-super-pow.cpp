class Solution {
public:
    int binaryExp(int a, int b, int m){
        int res=1;
        a=a%m;
        while(b){
            if(b&1)
                res= (res*a)%m;
            a=(a*a)%m;
            b/=2;
        }
        return res;
    }
    int superPow(int a, vector<int>& b) {
         int bmod = 0;
        for(auto it : b)
        {
            bmod = (bmod * 10 + it)%1140;
        }
        return binaryExp(a,bmod,1337);
    }
};