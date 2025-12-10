class Solution {
public:
int mod = 1e9 + 7;
    int countPermutations(vector<int>& complexity) {
        long long ans = 1;

        for(int i=1; i<complexity.size(); i++){
            if(complexity[i] <= complexity[0]){
                return 0;
            }
            ans = (ans * i) % mod;
        }
        return ans;
    }
};