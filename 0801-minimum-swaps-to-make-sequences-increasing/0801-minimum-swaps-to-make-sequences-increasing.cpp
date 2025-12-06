class Solution {
public:
int solveMem(vector<int>& nums1, vector<int>& nums2, int index, bool swapped, vector<vector<int>>& dp){
    // Base Case
    if(index == nums1.size()){
        return 0; //no swap need at last index as last elem already sorted
    }

    if(dp[index][swapped] != -1){
        return dp[index][swapped];
    }

    int prev1 = nums1[index-1];
    int prev2 = nums2[index-1];
    int ans = INT_MAX;
    if(swapped){
        swap(prev1, prev2);
    }

    // No swap
    if(nums1[index] > prev1 && nums2[index] > prev2){
        ans = solveMem(nums1, nums2, index+1, 0, dp);
    }
    // Swap
    if(nums1[index] > prev2 && nums2[index] > prev1){
        ans = min(ans, 1+solveMem(nums1, nums2, index+1, 1, dp));
    }
    return dp[index][swapped] = ans;
}
    int minSwap(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert(nums1.begin(), -1);
        nums2.insert(nums2.begin(), -1);

        bool swapped = 0;
        // return solve(nums1, nums2, 1, swapped);

        // Memoisation
        vector<vector<int>> dp(nums1.size()+1, vector<int>(2, -1));
        return solveMem(nums1, nums2, 1, swapped, dp);
    }
};