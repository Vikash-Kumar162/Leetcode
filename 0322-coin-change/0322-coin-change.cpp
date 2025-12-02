class Solution {
public:
int f(vector<int>& coins, int i, int T, vector<vector<int>>& dp){
    // B.C
    if(i == 0){
        if(T % coins[i] == 0)
        return T / coins[i];
        else
        return 1e9;
    }

    if(dp[i][T] != -1){
        return dp[i][T];
    }

    int not_take = 0 + f(coins, i-1, T, dp);
    int take = INT_MAX;
    if(coins[i] <= T)
        take = 1 + f(coins, i, T-coins[i], dp);
    dp[i][T] = min(take, not_take);
    return dp[i][T];
}
    int coinChange(vector<int>& coins, int amount) {

        // Memoisation
        int n = coins.size();
        vector<vector<int>> dp(n+1, vector<int>(amount+1, -1));
        int ans = f(coins, n-1, amount, dp);

        if(ans >= 1e9)
        return -1;

        return ans;
    }
};