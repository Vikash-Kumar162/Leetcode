class Solution {
public:
int maxAmountUsingMem(vector<int>& nums, int index, vector<int>& dp){
    if(index < 0){
        return 0;
    }
    if(index == 0){
        return nums[0];
    }

    // check if ans already exists
    if(dp[index] != -1)
    return dp[index];
    
    // include
    int include = maxAmountUsingMem(nums, index-2, dp) + nums[index];

    // exclude
    int exclude = maxAmountUsingMem(nums, index-1, dp);
    dp[index] = max(include, exclude);
    return dp[index];
}

    int rob(vector<int>& nums) {
        int n = nums.size();

        if(n == 0){
            return nums[0];
        }
        if(n == 1){
            return nums[0];
        }
        vector<int> case1(nums.begin(), nums.end()-1);
        vector<int> case2(nums.begin()+1, nums.end());

        // vector<int> dp(n, -1);
        vector<int> dp1(case1.size(), -1), dp2(case2.size(), -1);
        return max(maxAmountUsingMem(case1, case1.size()-1, dp1), maxAmountUsingMem(case2, case2.size()-1, dp2));
    }
};