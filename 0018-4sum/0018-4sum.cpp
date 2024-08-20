class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> quadruplets;
        set<vector<int>> s;
        for(int i=0; i<nums.size(); i++){
            for(int j=i+1; j<nums.size(); j++){
                long long int newTarget = target - (long long) (nums[i] + nums[j]);

                int start = j+1, end = nums.size()-1;
                while(start < end){
                    if((long long) nums[start] + (long long) nums[end] == newTarget){
                        s.insert({nums[i], nums[j], nums[start], nums[end]});
                        start ++;
                        end --;
                    }
                    else if((long long) nums[start] + (long long) nums[end] < newTarget)
                    start ++;
                    else
                    end --;
                }
            }
        }

        for(auto ans : s){
            quadruplets.push_back(ans);
        }
        return quadruplets;
    }
};