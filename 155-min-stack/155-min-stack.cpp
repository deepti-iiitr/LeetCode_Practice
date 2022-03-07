class MinStack {
public:
    stack<int>s;
    stack<int>ss;
    MinStack() {
        
    }
    
    void push(int val) {
        s.push(val);
        if(ss.size()==0 || ss.top()>=val)
            ss.push(val);
    }
    
    void pop() {
        if(s.size()==0)
            return ;
        int ans=s.top();
        s.pop();
        if(ss.top()==ans)
            ss.pop();
        //return ans;
    }
    
    int top() {
        if(s.size()==0)
            return -1;
        return s.top();
    }
    
    int getMin() {
        if(ss.size()==0)
            return -1;
        return ss.top();
        
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */