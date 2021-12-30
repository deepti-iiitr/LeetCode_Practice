class Solution {
public:
    int smallestRepunitDivByK(int k) {
        if(k %2 == 0 || k%5==0)
            return -1;
        int l=1,r=1;
        while(r%k != 0){
            int n=r*10+1;
            r=n%k;
            l++;
        }
        return l;
    }
};