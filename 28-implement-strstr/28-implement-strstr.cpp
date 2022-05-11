class Solution {
public:
    bool check(string haystack, string needle, int i,int j){
        int s=0;
        while(i<=j){
            if(haystack[i] != needle[s])
                return false;
            s++;
            i++;
        }
        return true;
    }
    int strStr(string haystack, string needle) {
        int i=0, j=0, n=needle.length();
        while(j< n-1)
            j++;
        int ans=-1;
        while(j<haystack.length()){
            if(check(haystack, needle,i,j))
            {
                ans=i;
                break;
            }
            i++;
            j++;
        }
        return ans;
    }
};