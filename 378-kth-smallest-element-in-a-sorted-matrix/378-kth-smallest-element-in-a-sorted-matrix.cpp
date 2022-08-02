class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int>q;
        int r=matrix.size();
        int c= matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                q.push(-1*(matrix[i][j]));
            }
        }
        int t=0;
        while(t<k-1){
            q.pop();
            t++;
        }
        return -1*(q.top());
    }
};