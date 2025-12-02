class Solution {
public:
int f(vector<int>& coins, int i, int T, vector<vector<int>> &dp){
    // Base case
    if(T < 0) return 0;
    if(i == 0){
        return T % coins[i] == 0;
    }

    if(T == 0){
        return 1;
    }

    if(dp[i][T] != -1){
        return dp[i][T];
    }
    long long not_take = f(coins, i-1, T, dp);
    long long take = 0;
    if(coins[i] <= T)
    take = f(coins, i, T-coins[i], dp);
    dp[i][T] = take + not_take;

    return dp[i][T];
}
    int change(int amount, vector<int>& coins) {
        // MEMOISATION
        if(amount == 0) return 1;

        int n = coins.size();
        if(n == 1){
            return amount % coins[0] == 0;
        }

        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        int ans = f(coins, n-1, amount, dp);
        return ans;
    }
};