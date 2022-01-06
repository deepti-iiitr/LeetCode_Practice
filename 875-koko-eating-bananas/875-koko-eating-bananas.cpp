class Solution {
public:
    int res=-1;
    bool isValid(vector<int>& arr,int h,int mid){
       int time=0;
        
        for(int i=0;i<arr.size();i++){
            
            time+= ceil((double) arr[i]/(double) mid);
          
        }
        if(time<=h)return true;
        
        return false;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int start=1;
        int n= piles.size();
        int end=*max_element(piles.begin(),piles.end());;
        while(start<=end){
            int mid= start + ( end-start)/2;
            cout<<mid<<" ";
            if(isValid(piles,h, mid)){
                res=mid;
                end=mid-1;
            }
            else
                start=mid+1;
        }
        return res;
    }
};