class Solution {
public:
    int countPrimes(int n) {
        vector<bool>primes(n+1, true);
        for(int i=2;i<=n/2;i++){
            if(primes[i]==true){
                for(int j=i*2;j<n;j+=i)
                    primes[j]=false;
            }
        }
        int ans=0;
        for(int i=2;i<n;i++){
            if(primes[i])
                ans++;
        }
        return ans;
    }
};