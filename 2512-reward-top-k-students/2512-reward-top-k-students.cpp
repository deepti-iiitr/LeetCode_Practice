class Solution {
public:
    vector<int> topStudents(vector<string>& positive_feedback, vector<string>& negative_feedback, vector<string>& report, vector<int>& student_id, int k) {
        priority_queue<pair<int,int>>p;
        unordered_set<string>po,n;
        for(int i=0;i<positive_feedback.size();i++)
            po.insert(positive_feedback[i]);
        for(int i=0;i<negative_feedback.size();i++)
            n.insert(negative_feedback[i]);
        for(int i=0;i<report.size();i++)
        {
            string s=report[i];
            int sum=0;
            string k="";
            for(int j=0;j<s.size();j++)
            {
                if(s[j]==' ')
                {
                    if(po.find(k)!=po.end())
                        sum+=3;
                    else if(n.find(k)!=n.end())
                        sum-=1;
                    k="";
                }
                else
                    k+=s[j];
            }
            if(po.find(k)!=po.end())
                        sum+=3;
            else if(n.find(k)!=n.end())
                sum-=1;
            p.push(make_pair(sum,student_id[i]));
        }
        vector<int>ans,v;
        while(k>0)
        {
            int c=p.top().first;
            v.emplace_back(p.top().second);
            p.pop();
            while(c==p.top().first and !p.empty())
            {
                cout<<p.top().second<<" ";
                v.emplace_back(p.top().second);
                p.pop();
            }
            sort(v.begin(),v.end());
            for(int i=0;i<v.size()and k>0;i++,k--)
                ans.emplace_back(v[i]);
            v.clear();
        }
        return ans;
    }
};