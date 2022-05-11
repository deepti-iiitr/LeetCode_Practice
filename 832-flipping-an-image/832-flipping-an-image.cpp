class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        int m=image[0].size();
        int i=0,j=m-1;
        while(i<n){
            reverse(image[i].begin(), image[i].end());
            i++;
        }
        i=0,j=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(image[i][j]==0)
                   image[i][j]=1;
                else
                   image[i][j]=0; 
            }
        }
        return image;
    }
};