class Solution {
public:
    int maximumBags(vector<int>& c, vector<int>& r, int a) {
    int ans=0;
        priority_queue <int, vector<int>, greater<int>> q;
        for(int i=0;i<r.size();i++)
        {
            if(r[i]<=c[i])
            {
                int val=c[i]-r[i];
               q.push(val);
            }
        }
        while(!q.empty())
        {   int z=q.top();
            if(z<=a)
            {
                a-=z;
                ans++;
            }
         q.pop();
        }
       
        return ans;
        
    }
};