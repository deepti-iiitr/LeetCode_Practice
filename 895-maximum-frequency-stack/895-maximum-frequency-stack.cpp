class FreqStack {
    priority_queue<vector<int>> pq;
    unordered_map<int, int> mp;
    int id = 0;
    
public:
    FreqStack() {
        
    }
    
    void push(int x) {
        ++mp[x];
        pq.push({mp[x], id++, x});
    }
    
    int pop() {
        auto p = pq.top();
        pq.pop();
        
        --mp[p[2]];
        
        return p[2];
    }
};