class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
public:
    KthLargest(int k, vector<int>& nums) {
        n = k;
        for(auto const &i: nums) {
            if(pq.size() < k) {
                pq.push(i);
            } else {
                if(pq.top() < i) {
                    pq.pop();
                    pq.push(i);
                }
            }
        }
    }
    
    int add(int val) {
        if(pq.size() < n) {
            pq.push(val);
        } else {
            if(pq.top() < val) {
                pq.pop();
                pq.push(val);
            }
        }
        return pq.top();
    }
};