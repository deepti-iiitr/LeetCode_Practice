class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector< pair <int,int> > v;
        int m=matrix.size(), n= matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0)
                    v.push_back(make_pair(i,j));
            }
        }
        for(int a=0;a<v.size();a++){
            int r= v[a].first;
            int c=v[a].second;
            for(int i=0;i<c;i++)
                matrix[r][i]=0;
            for(int i=c+1;i<n;i++)
                matrix[r][i]=0;
            for(int i=0;i<r;i++)
                matrix[i][c]=0;
            for(int i=r+1;i<m;i++)
                matrix[i][c]=0;
        }
  
    }
};