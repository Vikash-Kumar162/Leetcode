class Solution {
public:
int solve(vector<int>& nums, int i, int currSum, int target){
    // b.c
    if(i < 0){
        if(currSum == target){
            return 1;
        }
        else{
            return 0;
        }
    }

    int plus = solve(nums, i-1, currSum+nums[i], target);
    int minus = solve(nums, i-1, currSum-nums[i], target);
    return plus+minus;
}
    int findTargetSumWays(vector<int>& nums, int target) {
        // Recursive solution
        int currSum = 0, n = nums.size();
        return solve(nums, n-1, currSum, target);
    }
};