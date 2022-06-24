class Solution {
public:
    bool isPossible(vector<int>& target) {
       priority_queue<int> q;
        long long sum = 0;
        for(auto x : target){
            sum+=x;
            q.push(x);
        }
        
        while(q.top()!=1){
            sum = sum - q.top();
            if(sum == 0 || sum >= q.top()){
                return false;
            }
            
            int prev = q.top()%sum;
            if(prev == 0  && sum != 1){
                return false;
            }
            
            q.pop();
            q.push(prev);
            sum+=prev;
        }
        return true;
        
    }
};