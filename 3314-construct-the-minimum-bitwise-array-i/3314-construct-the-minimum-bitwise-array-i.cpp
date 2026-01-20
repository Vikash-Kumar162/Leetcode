class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        // Brute Force
        int n = nums.size();
        vector<int> ans(n, -1);
        for(int i=0; i<n; i++){
            for(int x=1; x<nums[i]; x++){
                if((x | (x+1)) == nums[i]){
                    ans[i] = x;
                    break;
                }   
            }
        }
        return ans;
    }
};