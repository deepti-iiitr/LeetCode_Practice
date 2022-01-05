class Solution {
public:
    int res=-1;
    bool isValid(vector<int>& weights, int n, int days, int m){
        int d=1;
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+weights[i];
            if(sum>m){
                d++;
                sum=weights[i];
            }
            
        }
        if(d<=days)
            return true;
        return false;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int start=*max_element(weights.begin(),weights.end());
        int n= weights.size();
        int sum=0;
        for(int i=0;i<n;i++)
            sum+=weights[i];
        int end=sum;
        while(start<=end){
            int mid= start + ( end-start)/2;
            if(isValid(weights, n, days, mid)){
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};