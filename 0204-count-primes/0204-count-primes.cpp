class Solution {
public:
    int countPrimes(int n) {
        if(n < 2){
            return 0;
        }
        vector<int> prime(n+1, 1);

        for(int i=2; i * i < n; i++){
            if(prime[i] == 1){
                for(long long int j=i*i; j<n; j+=i){
                    prime[j] = 0;
                }
            }
        }
        int ans = 0;
        for(int i=2; i<n; i++){
            if(prime[i] == 1) ans++;
        }
        return ans;
    }
};