class Solution {
public:
    int minimumSum(int num) {
        int a[4] = {0};
        a[0] = num % 10;
        num /= 10;
        a[1] = num % 10;
        num /= 10;
        a[2] = num % 10;
        num /= 10;
        a[3] = num % 10;
        sort(a, a + 4);
        return ((a[0] + a[1]) * 10 + a[2] + a[3]);
    }
};