class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> triplets;
        set<vector<int>> s;
        for(int i=0; i<nums.size(); i++){
            int target = 0 - nums[i];

            int j = i + 1, k = nums.size() -  1;
            while(j < k){
                if(nums[j] + nums[k] == target){
                    s.insert({nums[i], nums[j], nums[k]});
                    j ++;
                    k --;
                }
                else if(nums[j] + nums[k] < target){
                    j++;
                }
                else 
                k--;
            }
        }
        // Remove duplicates
        // ans.erase(unique(ans.begin(), ans.end()), ans.end());

        for(auto ans : s){
            triplets.push_back(ans);
        }
        return triplets;
    }
};