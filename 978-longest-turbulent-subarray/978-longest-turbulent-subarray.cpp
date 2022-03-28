class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int n=arr.size(),ans=1;
        if(n==1)
            return 1;
        int i=0,j=1;
        while(j<n){
            if(arr[j]==arr[j-1]){
                i=j;
                j++;
            }
            else{
                bool check=false;
                if(j<n-1 && ((arr[j]>arr[j-1] && arr[j+1]<arr[j])|| (arr[j]<arr[j-1] && arr[j+1]>arr[j]))){
                    check=true;
                    j++;
                }
                ans=max(ans,j-i+1);
                if(!check)
                {
                    i=j;
                    j++;
                } 
            }
        }
        return ans;
    }
};