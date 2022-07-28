class Solution {
public:
    vector<int> advantageCount(vector<int>& A, vector<int>& B) {
         int n = A.size();
        vector<pair<int,int>> arrB;
        vector<int> unused, res(n, -1);
        for(int i = 0; i < n; i++) arrB.push_back(make_pair(B[i], i));
        sort(A.begin(), A.end());
        sort(arrB.begin(), arrB.end());
        int i = 0, j = 0;
        while(i < n && j < n) {
            if(A[i] > arrB[j].first) {res[arrB[j].second] = A[i];j++;}
            else unused.push_back(A[i]);
            i++;
        }
        j = 0;
        for(int i = 0; i < n; i++) if(res[i] == -1) res[i] = unused[j++];
        return res;
    }
};