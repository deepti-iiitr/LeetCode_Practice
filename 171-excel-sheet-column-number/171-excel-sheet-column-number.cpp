class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        int end = columnTitle.size()-1;
        for (int i=0; i<columnTitle.size();i++)
            res+=(pow(26, i))*(columnTitle[end-i]-'A'+1);
        
        return res;
    }
};