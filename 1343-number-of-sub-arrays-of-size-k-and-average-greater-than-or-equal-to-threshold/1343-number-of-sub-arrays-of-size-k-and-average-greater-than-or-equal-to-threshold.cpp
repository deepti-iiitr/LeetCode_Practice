class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
       int sum=0;
       int ans=0,avg;
        for(int i=0;i<k;i++){
            sum=sum+arr[i];  
        }
        avg=sum/k;
        if(avg>=threshold)
            ans++;
        int j=k;
        for(int i=1;i<arr.size() && j<arr.size();i++){
            sum=sum-arr[i-1]+arr[j];
            j++;
            avg=sum/k;
        if(avg>=threshold)
            ans++;
        }
        
        return ans;
    }
};