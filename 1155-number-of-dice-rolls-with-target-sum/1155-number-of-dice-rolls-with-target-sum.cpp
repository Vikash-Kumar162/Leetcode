class Solution {
public:
    long long int MOD = 1000000007;
    int numRollsToTargetMem(int n, int k, int target, vector<vector<int>>& dp) {
        // Base Case
        if (target < 0)
            return 0;
        if (n == 0 && target == 0)
            return 1;
        if (n == 0 && target != 0)
            return 0;
        if (n != 0 && target == 0)
            return 0;

        if (dp[n][target] != -1)
            return dp[n][target] % MOD;

        long long int ans = 0;
        for (int i = 1; i <= k; i++) {
            if (target - i >= 0)
                ans += (numRollsToTargetMem(n - 1, k, target - i, dp)) % MOD;
        }
        return dp[n][target] = ans % MOD;
    }

    int numRollsToTargetTab(int n, int& k, int target) {
        // step A
        vector<vector<int>> dp(n + 1, vector<int>(target + 1, 0));
        dp[0][0] = 1;

        for (int index = 1; index <= n; index++) {
            for (int t = 1; t <= target; t++) {
                long long int ans = 0;
                for (int i = 1; i <= k; i++) {
                    if (t - i >= 0)
                    ans += dp[index - 1][t - i];
                }
                dp[index][t] = ans % MOD;
            }
        }
        return dp[n][target];
    }

    int numRollsToTarget(int n, int k, int target) {

        // RECURSIVE SOLN

        // // Base Case
        // if(target < 0) return 0;
        // if(target == 0 && n == 0) return 1;
        // if(n==0 && target != 0) return 0;
        // if(n!=0 && target == 0) return 0;

        // int ans=0;
        // for(int i=1; i<=k; i++){
        //     ans=ans+numRollsToTarget(n-1, k, target-i);
        // }
        // return ans;

        // MEMOISATION

        // vector<vector<int>> dp(n + 1, vector<int>(target + 1, -1));
        // int ans = (numRollsToTargetMem(n, k, target, dp));
        // return ans;

        return numRollsToTargetTab(n, k, target);
    }
};