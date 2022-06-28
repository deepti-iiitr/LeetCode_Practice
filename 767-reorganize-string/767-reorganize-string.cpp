class Solution
{
    public:

    string reorganizeString(string s)
    {
        map<char, int> m;
        priority_queue<pair<int, char> > pq;
        for (int i = 0; i < s.length(); i++)
        {
            m[s[i]]++;
        }
        if( m.size( ) ==1)
            return "";
        for (auto& it:m)
        {
            cout<<it.first<<it.second<<endl;
            pq.push(make_pair(it.second,it.first));
        }
        string ans;
        while(!pq.empty() ){
            int a=pq.top().first;
            char f=pq.top().second;
            pq.pop();
            
            int b=pq.top().first;
            char t=pq.top().second;
            pq.pop();
            if(a==0 and b==0)
                return ans;
            ans+=f;
            ans+=t;
            a=a-1;
            b=b-1;
            if(a>=1)
                pq.push(make_pair(a,f));
            if(b>=1)
                pq.push(make_pair(b,t));
            cout<<a<<b<<" "<<pq.size()<<endl;
            if(pq.size()==1 && pq.top().first > 1)
                return "";
            if(pq.size() ==1 and pq.top().first==1)
            {
                ans+=pq.top().second;
                return ans;
            }
            
        }
       return ans;
        
    }
};