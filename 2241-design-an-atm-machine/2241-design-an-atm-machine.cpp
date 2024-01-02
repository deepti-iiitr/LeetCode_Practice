class ATM {
public:
    vector<long long>val={20,50,100,200,500};
    vector<long long>notes;

    ATM() {
        notes.resize(5,0);
    }
    
    void deposit(vector<int> arr) {
        for(int i=0;i<5;i++){
            notes[i]+=arr[i];
        }
        return;
    }
    
    vector<int> withdraw(int amount) {
        vector<int>ans(5,0);
        for(int i=4;i>=0;i--){
            int nreq=min(notes[i],amount/(val[i]));
            amount-=(nreq*val[i]);
            ans[i]=nreq;
        }
        if(amount==0){
            for(int i=0;i<5;i++){
                notes[i]-=ans[i];
            }
            return ans;
        }
        return {-1};
    }
};


/**
 * Your ATM object will be instantiated and called as such:
 * ATM* obj = new ATM();
 * obj->deposit(banknotesCount);
 * vector<int> param_2 = obj->withdraw(amount);
 */