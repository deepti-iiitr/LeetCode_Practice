class Solution {
public:
    int arrangeCoins(int n) {
        if(n==1)
            return 1;
        double val=2*(long)n+ 0.25;
        return (int)(sqrt(val)-0.5);
    }
};