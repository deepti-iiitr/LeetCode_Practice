class Solution {
public:
    int getMinSwaps(string num, int k) {
        string temp=num;
        string res;
        while(k--){
            next_permutation(temp.begin(), temp.end());
            
        }
        int ans=0, i=0;
        while(i<num.length()){
            if(num[i] != temp[i]){
                int j=i+1;
                while(num[i] != temp[i])
                {
                    swap(temp[i], temp[j]);
                  j++;  
                ans++;
                
                }
            }
            i++;
        }
        return ans;
        
    }
};