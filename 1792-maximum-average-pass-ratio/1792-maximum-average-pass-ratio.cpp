class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extrastudents)
    {
        using pi=pair<double,pair<int,int>>;
        priority_queue<pair<double,pair<int,int>>> q;
        for(int i=0;i<classes.size();i++)
        {
            int pass=classes[i][0];
            int total=classes[i][1];
            double growth=(double)(pass+1)/(total+1)-(double)(pass)/(total);
            q.push({growth,{pass,total}});
        }
        while(extrastudents--)
        {
            pair<double,pair<int,int>> p=q.top();
            q.pop();
            int pass=p.second.first;
            int total=p.second.second;
            pass++;
            total++;
            double growth=(double)(pass+1)/(total+1)-(double)(pass)/(total);
            q.push({growth,{pass,total}});
        }
        double res=0;
        while(!q.empty())
        {
            res+=(double)(q.top().second.first)/(q.top().second.second);
            q.pop();
        }
        return res/classes.size();
        
    }
};