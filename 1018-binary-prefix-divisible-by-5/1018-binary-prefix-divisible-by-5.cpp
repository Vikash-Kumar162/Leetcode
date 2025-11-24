class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans(nums.size());
        
       int xi = 0;
       for(int i=0; i<nums.size(); i++){
        xi = (2 * xi + nums[i]) % 5;
        ans[i] = (xi%5 == 0);
       } 
       return ans;
    }
};