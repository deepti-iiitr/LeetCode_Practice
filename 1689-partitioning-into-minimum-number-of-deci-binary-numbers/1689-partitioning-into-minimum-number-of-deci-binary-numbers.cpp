class Solution {
public:
    int minPartitions(string n) {
        int mx=INT_MIN, ans;
        for(int i=0;i<n.size();i++){
            int temp=n[i]-'0';
            mx=max(mx,temp);
        }
        return mx;
    }
};