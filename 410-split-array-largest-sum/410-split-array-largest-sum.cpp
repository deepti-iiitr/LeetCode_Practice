class Solution {
public:
    int res=-1;
    bool isValid(vector<int>& arr,int n,int threshold,int mid){
       int sum=0,count=1;
        
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(sum>mid)
            {
                //res=max(sum-arr[i],res);
                sum=arr[i];
                count++;
            }
            
        }
        // res=max(res,sum);
        // cout<<"res"<<res<<endl;
        if(count>threshold)return true;
        
        return false;
    }
    int splitArray(vector<int>& nums, int m) {
         int start=*max_element(nums.begin(),nums.end());
        int sum=0;
        int n= nums.size();
        sum=accumulate(nums.begin(),nums.end(),0);
        int end=sum;
        while(start<end){
            int mid= start + ( end-start)/2;
           // cout<<"mid"<<mid;
            if(isValid(nums,n,m,mid)){
                
                 start=mid+1;
            }
            else
               end=mid;
        }
        return start;
    }
};