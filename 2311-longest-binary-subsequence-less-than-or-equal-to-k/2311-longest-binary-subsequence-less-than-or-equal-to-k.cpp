class Solution {
public:
    int longestSubsequence(string s, int k) {
        int i,j,idx=-1,ans=0,n=s.size(),len;
        long long temp=0,d=1;
        len=log2(k)+1;
        for(i=n-1;i>=0 && (n-i-1)<=len;i--)
        {
            j=n-1-i;
            temp=temp+d*1ll*(s[i]-'0');
            d*=2;
            if(temp>k)
            {
                break;
            }
            ans++;
            idx=i;
        }
        for(i=0;i<idx;i++)
        {
            if(s[i]=='0')
            {
                ans++;
            }
        }
        return ans;
    }
};