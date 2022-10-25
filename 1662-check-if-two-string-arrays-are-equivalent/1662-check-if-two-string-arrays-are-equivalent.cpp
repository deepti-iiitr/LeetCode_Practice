class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string first="";
        string second="";
        for(int i=0;i<word1.size();i++){
            string tmp=word1[i];
            first+=tmp;
        }
        for(int i=0;i<word2.size();i++){
            string tmp=word2[i];
            second+=tmp;
        }
        return (first==second);
    }
};