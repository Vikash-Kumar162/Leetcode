class Solution {
public:
    int maxSum(vector<int>& nums, int k, int m) {
        int n = nums.size();
        if (n < m * k) return -1; 
        
        vector<long long> preSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            preSum[i + 1] = preSum[i] + nums[i];
        }
        
        vector<vector<long long>> dp(k + 1, vector<long long>(n, -1e18));
        for (int i = 0; i < n; ++i) {
            dp[0][i] = 0;
        }
        
        for (int j = 1; j <= k; ++j) {
            vector<long long> aux(n, -1e18);
            for (int i = 0; i < n; ++i) {
                if (i == 0) {
                    aux[i] = (j-1 == 0 ? 0 : dp[j-1][i]) - preSum[i+1];
                } else {
                    aux[i] = dp[j-1][i] - preSum[i+1];
                }
            }
            
            vector<long long> max_prefix(n, -1e18);
            max_prefix[0] = aux[0];
            for (int i = 1; i < n; ++i) {
                max_prefix[i] = max(max_prefix[i-1], aux[i]);
            }
            
            for (int i = 0; i < n; ++i) {
                if (i > 0) {
                    dp[j][i] = dp[j][i-1];
                }
                if (i >= m - 1) {
                    int window_end = i - m;
                    long long current_max = -1e18;
                    if (j-1 == 0) {
                        current_max = 0 - preSum[0];
                        if (window_end >= 0) {
                            current_max = max(current_max, max_prefix[window_end]);
                        }
                    } else {
                        if (window_end >= 0) {
                            current_max = max_prefix[window_end];
                        } else {
                            current_max = -1e18;
                        }
                    }
                    
                    if (current_max != -1e18) {
                        long long option2 = preSum[i+1] + current_max;
                        if (option2 > dp[j][i]) {
                            dp[j][i] = option2;
                        }
                    }
                }
            }
        }
        
        return dp[k][n-1];
    }
};