class Solution {
public:
    string addBinary(string a, string b) {
        int i=a.length()-1;
        int j=b.length()-1;
        int carry=0;
        string res="";
        while(i>=0 || j>=0){
            int t=carry;
            if(i>=0)
                t+=(a[i]-'0');
            if(j>=0)
                t+=(b[j]-'0');
            res+=to_string(t%2);
            i--;
            j--;
            carry=t/2;
        }
        if(carry!=0) 
            res+=to_string(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};