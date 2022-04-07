class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q;
        if(stones.size()==1)
            return stones[0];
        if(stones.size()==2)
        {
            if(stones[0]==stones[1])
                return 0;
            else
                return abs(stones[0]-stones[1]);
        }
        for(int i=0;i<stones.size();i++)
            q.push(stones[i]);
        while(q.size()>1)
        {
            int a = q.top();
            q.pop();
            int b = q.top();
            q.pop();
            if(a==b)
                continue;
            else{
                q.push(abs(a-b));
            }
        }
        if(q.size()==0)
            return 0;
        return q.top();
    }
    
};