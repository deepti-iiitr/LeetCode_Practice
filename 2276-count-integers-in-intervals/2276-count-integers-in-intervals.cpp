class CountIntervals {
public:
    int sum=0;
    set<pair<int,int>>s;
    CountIntervals() 
    {
        s.clear();
    }
    
    void add(int left, int right) 
    {
        auto it=s.lower_bound({left,INT_MIN});
        if(it!=s.begin()&&(--it)->second<left)
        {
            it++;
        }
        while(it!=s.end()&&(it->first)<=right)
        {
            left=min(left,it->first);
            right=max(right,it->second);
            sum-=(it->second-it->first+1);
            s.erase(it++);
        }
        s.insert({left,right});
        sum+=(right-left+1);
    }
    int count() 
    {
        return sum;
    }
};

/**
 * Your CountIntervals object will be instantiated and called as such:
 * CountIntervals* obj = new CountIntervals();
 * obj->add(left,right);
 * int param_2 = obj->count();
 */