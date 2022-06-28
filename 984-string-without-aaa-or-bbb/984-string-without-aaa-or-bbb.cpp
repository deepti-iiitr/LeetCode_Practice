class Solution {
public:
    string strWithout3a3b(int a, int b) {
        string res;
        while (a && b) {
            if (a > b) {
                res += "aab";
                a--;
            } else if (b > a) {
                res += "bba";
                b--;
            } else {
                res += "ab";
            }
            a--;
            b--;
        }
        while (a--) res += "a";
        while (b--) res += "b";
        return res;
    }
};